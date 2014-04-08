/*
 * Workspace.cpp
 *
 *  Created on: Apr 8, 2014
 *      Author: Pal Szasz <pal.szasz@gmail.com>
 */

#include <Fl/fl_draw.H>
#include <Fl/Fl.H>

#include "Workspace.h"
#include "BgPattern.h"

Workspace::Workspace(int x, int y, int w, int h, const char * l)
	: Fl_Widget(x, y, w, h, l), _img(NULL), _sel_layer(0),
	  _zoom(8), _sx(0), _sy(0),
	  _ix(0), _iy(0), _iw(0), _ih(0), _last_ix(-1), _last_iy(-1)
{
}

Workspace::~Workspace()
{
}

void Workspace::draw()
{
	fl_push_clip(x(), y(), w(), h());

	// Draw view background
	fl_rectf(x(), y(), w(), h(), 0x808080ff);
	fl_color(FL_BLACK);
	fl_rect(_ix-1, _iy-1, _iw+2, _ih+2);

	// Draw image background
	draw_background(_ix, _iy, _iw, _ih);

	// Render image
	Palette & pal = _img->pal();
	for (int i = 0; i < _img->w(); i++) {
		for (int j = 0; j < _img->h(); j++) {
			uint8_t col = _img->cache().at(i, j);
			if (col != _img->alpha_col()) {
				uint32_t rgba = pal[col];
				int xx = x() + _ix + i * _zoom;
				int yy = y() + _iy + j * _zoom;
				fl_rectf(xx, yy, _zoom, _zoom, rgba);
			}
		}
	}

	fl_pop_clip();
}

void Workspace::draw_background(int xx, int yy, int ww, int hh)
{
	fl_push_clip(x() + xx, y() + yy, ww, hh);

	// FIXME: need to optimize this
	int vcnt = (w() + bgpatt_w-1) / bgpatt_w;
	int hcnt = (h() + bgpatt_h-1) / bgpatt_h;
	for (int i = 0; i < hcnt; i++) {
		for (int j = 0; j < vcnt; j++) {
			bgpatt_draw(x() + j * bgpatt_w, y() + i * bgpatt_h);
		}
	}

	fl_pop_clip();
}

void Workspace::calc_image_rect()
{
	// Calculate image position in view
	_ix = -_sx * _zoom;
	_iy = -_sy * _zoom;
	_iw = _img->w() * _zoom;
	_ih = _img->h() * _zoom;
	if (_iw < w()) {
		_ix = (w() - _iw) / 2;
	} else if (_ix > 0) {
		_ix = 0;
	} else if (_ix + _iw < w()) {
		_ix = w() - _iw;
	}
	if (_ih < h()) {
		_iy = (h() - _ih) / 2;
	} else if (_iy > 0) {
		_iy = 0;
	} else if (_iy + _ih < h()) {
		_iy = h() - _ih;
	}
}

int Workspace::inside_image(int img_x, int img_y)
{
	if (img_x < 0 || img_x >= _img->w() || img_y < 0 || img_y >= _img->h()) return 0;
	return 1;
}

void Workspace::try_to_draw_at(int ix, int iy)
{
	if (!inside_image(ix, iy)) {
		reset_last_ixy();
		return;
	}
	if (ix == _last_ix && iy == _last_iy) {
		return;
	}
	draw_at(ix, iy);
}

void Workspace::draw_at(int ix, int iy)
{
	Layer & l = _img->layer(_sel_layer);
	l.at(ix, iy) = 1; // FIXME: use real color
	_img->invalidate(ix, iy, 1, 1);
	redraw();
}

void Workspace::reset_last_ixy()
{
	_last_ix = _last_iy = -1;
}

int Workspace::handle(int event)
{
	int img_x = (Fl::event_x() - x() - _ix) / _zoom;
	int img_y = (Fl::event_y() - y() - _iy) / _zoom;
	switch (event) {
	case FL_PUSH:
		try_to_draw_at(img_x, img_y);
		return 1;
	case FL_DRAG:
		try_to_draw_at(img_x, img_y);
		return 1;
	case FL_RELEASE:
		reset_last_ixy();
		return 1;
	}
	return Fl_Widget::handle(event);
}

void Workspace::resize(int x, int y, int w, int h)
{
	Fl_Widget::resize(x, y, w, h);
	calc_image_rect();
}

void Workspace::image(Image * img)
{
	delete _img;
	_img = img;
	calc_image_rect();
	redraw();
}

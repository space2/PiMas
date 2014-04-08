/*
 * Workspace.h
 *
 *  Created on: Apr 8, 2014
 *      Author: Pal Szasz <pal.szasz@gmail.com>
 */

#pragma once

#include <FL/Fl_Widget.H>

#include "data/Image.h"

class Workspace : public Fl_Widget {
public:
	Workspace(int x, int y, int w, int h, const char * l = 0);
	virtual ~Workspace();

	void image(Image * img);
protected:
	virtual void draw();
	virtual int handle(int event);
	virtual void resize(int x, int y, int w, int h);

private:
	void draw_background(int xx, int yy, int ww, int hh);
	void calc_image_rect();
	int inside_image(int img_x, int img_y);
	void try_to_draw_at(int ix, int iy);
	void draw_at(int ix, int iy);
	void reset_last_ixy();

	Image * _img;
	int _sel_layer;
	int _zoom, _sx, _sy;
	int _ix, _iy, _iw, _ih;
	int _last_ix, _last_iy;
};


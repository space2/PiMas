/*
 * Workspace.cpp
 *
 *  Created on: Apr 8, 2014
 *      Author: Pal Szasz <pal.szasz@gmail.com>
 */

#include <Fl/fl_draw.H>

#include "Workspace.h"
#include "BgPattern.h"

Workspace::Workspace(int x, int y, int w, int h, const char * l)
	: Fl_Widget(x, y, w, h, l)
{
}

Workspace::~Workspace()
{
}

void Workspace::draw()
{
	fl_push_clip(x(), y(), w(), h());
	draw_background();
	fl_pop_clip();
}

void Workspace::draw_background()
{
	int xx = x(), yy = y();
	int vcnt = (w() + bgpatt_w-1) / bgpatt_w;
	int hcnt = (h() + bgpatt_h-1) / bgpatt_h;
	for (int i = 0; i < hcnt; i++) {
		for (int j = 0; j < vcnt; j++) {
			bgpatt_draw(xx + j * bgpatt_w, yy + i * bgpatt_h);
		}
	}
}

int Workspace::handle(int event)
{
	return Fl_Widget::handle(event);
}


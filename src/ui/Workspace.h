/*
 * Workspace.h
 *
 *  Created on: Apr 8, 2014
 *      Author: Pal Szasz <pal.szasz@gmail.com>
 */

#pragma once

#include <FL/Fl_Widget.H>

class Workspace : public Fl_Widget {
public:
	Workspace(int x, int y, int w, int h, const char * l = 0);
	virtual ~Workspace();

protected:
	void draw();
	int handle(int event);

private:
	void draw_background();
};


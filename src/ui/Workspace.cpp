/*
 * Workspace.cpp
 *
 *  Created on: Apr 8, 2014
 *      Author: Pal Szasz <pal.szasz@gmail.com>
 */

#include "Workspace.h"

Workspace::Workspace(int x, int y, int w, int h, const char * l)
	: Fl_Widget(x, y, w, h, l)
{
}

Workspace::~Workspace()
{
}

void Workspace::draw()
{

}

int Workspace::handle(int event)
{
	return Fl_Widget::handle(event);
}


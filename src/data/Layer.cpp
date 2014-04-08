/*
 * Layer.cpp
 *
 *  Created on: Apr 8, 2014
 *      Author: Pal Szasz <pal.szasz@gmail.com>
 */

#include "Layer.h"

Layer::Layer(int w, int h, const char * name)
	: _w(w), _h(h), _name(name)
{
}

Layer::~Layer()
{
}


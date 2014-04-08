/*
 * Layer.cpp
 *
 *  Created on: Apr 8, 2014
 *      Author: Pal Szasz <pal.szasz@gmail.com>
 */

#include <stdlib.h>

#include "Layer.h"

Layer::Layer(int w, int h, const char * name)
	: _w(w), _h(h), _name(name)
{
	_data = (uint8_t *) malloc(w * h);
	memset(_data, 0, w * h);
}

Layer::~Layer()
{
}


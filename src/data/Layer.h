/*
 * Layer.h
 *
 *  Created on: Apr 8, 2014
 *      Author: Pal Szasz <pal.szasz@gmail.com>
 */

#pragma once

#include <stdint.h>

#include "util/StrPtr.h"

class Layer {
public:
	Layer(int w, int h, const char * name);
	virtual ~Layer();

	uint8_t & at(int x, int y) { return _data[x + y*_w]; }
	int w() const { return _w; }
	int h() const { return _h; }

private:
	int _w, _h;
	StrPtr _name;
	uint8_t * _data;
};


/*
 * Image.h
 *
 *  Created on: Apr 8, 2014
 *      Author: Pal Szasz <pal.szasz@gmail.com>
 */

#pragma once

#include "Layer.h"
#include "Palette.h"
#include "util/Array.h"

class Image {
public:
	Image(int w, int h);
	virtual ~Image();

	Palette & pal() { return _pal; }
private:
	int _w, _h;
	ArrayO<Layer*> _layers;
	Palette _pal;
};


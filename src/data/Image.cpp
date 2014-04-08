/*
 * Image.cpp
 *
 *  Created on: Apr 8, 2014
 *      Author: Pal Szasz <pal.szasz@gmail.com>
 */

#include "Image.h"

Image::Image(int w, int h)
	: _w(w), _h(h), _alpha_col(0), _cache(w, h, NULL)
{
}

Image::~Image()
{
}

void Image::add_layer(Layer * layer)
{
	_layers.add(layer);
}

void Image::invalidate(int x, int y, int w, int h)
{
	int lcnt = _layers.count();
	for (int i = 0; i < w; i++) {
		for (int j = 0; j < h; j++) {
			uint8_t ret = 0;
			for (int l = lcnt-1; l >= 0; l--) {
				ret = _layers[l]->at(x + i, y + j);
				if (ret != _alpha_col) break;
			}
			_cache.at(x + i, y + j) = ret;
		}
	}
}

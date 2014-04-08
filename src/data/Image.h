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
	int w() const { return _w; }
	int h() const { return _h; }

	int layer_count() const { return _layers.count(); }
	Layer & layer(int idx) { return *_layers[idx]; }
	Layer & cache() { return _cache; }
	void add_layer(Layer * layer);

	int alpha_col() const { return _alpha_col; }
	void alpha_col(int idx) { _alpha_col = idx; }

	void invalidate(int x, int y, int w, int h);
	void invalidate() { invalidate(0, 0, _w, _h); }

private:
	int _w, _h;
	ArrayO<Layer*> _layers;
	Palette _pal;
	int _alpha_col;
	Layer _cache;
};


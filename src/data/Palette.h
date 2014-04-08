/*
 * Palette.h
 *
 *  Created on: Apr 8, 2014
 *      Author: Pal Szasz <pal.szasz@gmail.com>
 */

#pragma once

#include <stdint.h>

class Palette {
public:
	Palette();
	virtual ~Palette();

	uint8_t & r(int idx) { return _data[idx][0]; }
	uint8_t & g(int idx) { return _data[idx][1]; }
	uint8_t & b(int idx) { return _data[idx][2]; }
private:
	uint8_t _data[256][3];

};


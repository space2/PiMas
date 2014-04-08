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

	uint8_t & r(int idx) { return _data[idx][3]; }
	uint8_t & g(int idx) { return _data[idx][2]; }
	uint8_t & b(int idx) { return _data[idx][1]; }

	uint32_t & rgba(int idx) { return _data32[idx]; }
	uint32_t & operator[](int idx) { return rgba(idx); }

private:
	union {
		uint8_t _data[256][4];
		uint32_t _data32[256];
	};

};


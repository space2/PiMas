/*
 * BgPattern.cpp
 *
 *  Created on: Apr 8, 2014
 *      Author: Pal Szasz <pal.szasz@gmail.com>
 */

#include <FL/fl_draw.H>

#include "ui/BgPattern.h"

const int bgpatt_w = 16;
const int bgpatt_h = 16;

#define X 0xffaaaaaa,
#define _ 0xff666666,
const uint32_t bgpatt_data[] = {
		X X X X X X X X _ _ _ _ _ _ _ _
		X X X X X X X _ _ _ _ _ _ _ _ X
		X X X X X X _ _ _ _ _ _ _ _ X X
		X X X X X _ _ _ _ _ _ _ _ X X X
		X X X X _ _ _ _ _ _ _ _ X X X X
		X X X _ _ _ _ _ _ _ _ X X X X X
		X X _ _ _ _ _ _ _ _ X X X X X X
		X _ _ _ _ _ _ _ _ X X X X X X X
		_ _ _ _ _ _ _ _ X X X X X X X X
		_ _ _ _ _ _ _ X X X X X X X X _
		_ _ _ _ _ _ X X X X X X X X _ _
		_ _ _ _ _ X X X X X X X X _ _ _
		_ _ _ _ X X X X X X X X _ _ _ _
		_ _ _ X X X X X X X X _ _ _ _ _
		_ _ X X X X X X X X _ _ _ _ _ _
		_ X X X X X X X X _ _ _ _ _ _ _
};
#undef X
#undef _

void bgpatt_draw(int x, int y)
{
	fl_draw_image((uint8_t*)bgpatt_data, x, y, bgpatt_w, bgpatt_h, 4, 0);
}


/*
 * BgPattern.h
 *
 *  Created on: Apr 8, 2014
 *      Author: Pal Szasz <pal.szasz@gmail.com>
 */

#pragma once

#include <stdint.h>

extern const int bgpatt_w;
extern const int bgpatt_h;
extern const uint32_t bgpatt_data[];
extern void bgpatt_draw(int x, int y);

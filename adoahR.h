/* Copyright 2020 Adoah
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
		k09, k08,      k06, k05, k04, k03, k02, k01,\
		k19, k18, k17, k16, k15, k14, k13, k12, k11,\
		k29, k28,      k26, k25, k24, k23, k22, k21,\
		k39, k38, k37,      k35, k34, k33, k32, k31,\
		k49, k48, k47,      k45, k44, k43, k42, k41 \
) { \
	      { k09,  k08,  KC_NO,k06,  k05,  k04,  k03,  k02,  k01 },\
	      { k19,  k18,  k17,  k16,  k15,  k14,  k13,  k12,  k11 },\
	      { k29,  k28,  KC_NO,k26,  k25,  k24,  k23,  k22,  k21 },\
	      { k39,  k38,  k37,  KC_NO,k35,  k34,  k33,  k32,  k31 },\
	      { k49,  k48,  k47,  KC_NO,k45,  k44,  k43,  k42,  k41 } \
}

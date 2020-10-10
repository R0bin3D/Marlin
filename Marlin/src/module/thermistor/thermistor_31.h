/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

// R25 = 100 kOhm, beta25 = 3950 K, 4.7 kOhm pull-up
// Resistance         100k Ohms at 25deg. C
// Resistance Tolerance     + / -1%
// B Value             3950K at 25/50 deg. C
// B Value Tolerance         + / - 1%
//  Voron 250mm Heatbed with Keenovo Silicone Heater 230V 500W with 8mm Precision cast plate  
// Temperature setting time 10 min to determine the 12Bit ADC value on the surface. (R0bin3D)
const temp_entry_t temptable_31[] PROGMEM = {
  { OV(   1), 938 }, 
  { OV( 329), 125 }, // 1315 - 125° 
  { OV( 355), 121 }, // 1420 - 122°
  { OV( 381), 117 }, // 1524 - 118°
  { OV( 409), 113 }, // 1634 - 114°
  { OV( 439), 110 }, // 1756 - 110°
  { OV( 471), 106 }, // 1780 - 106°
  { OV( 520), 102 }, // 2017 - 102°
  { OV( 536),  98 }, // 2150 - 98°
  { OV( 571),  94 }, // 2284 - 94°
  { OV( 611),  89 }, // 2444 - 89°
  { OV( 641),  85 }, // 2563 - 85°
  { OV( 681),  81 }, // 2724 - 81°
  { OV( 711),  77 }, // 2844 - 77°
  { OV( 744),  73 }, // 2977 - 73°
  { OV( 774),  68 }, // 3096 - 68°
  { OV( 804),  64 }, // 3217 - 64°
  { OV( 831),  60 }, // 3324 - 60°
  { OV( 856),  55 }, // 3424 - 55°
  { OV( 881),  51 }, // 3524 - 51°
  { OV( 904),  46 }, // 3617 - 46°
  { OV( 921),  42 }, // 3684 - 42°
  { OV( 938),  38 }, // 3750 - 38°
  { OV( 952),  34 }, // 3807 - 34°
  { OV( 966),  29 }, // 3862 - 29°
  { OV( 975),  25 }, // 3900 - 25°
  { OV( 985),  23 }, // 3938 - 20°
  { OV( 991),  17 }, // 3964 - 17°
  { OV(1001),   9 }, // Calculated
  { OV(1004),   5 }, // Calculated
  { OV(1021), -27 }  // Calculated
};

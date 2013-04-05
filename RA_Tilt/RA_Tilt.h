/*
 * Copyright 2010 Reef Angel / Roberto Imai
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

 /*
  * Updated by:  Curt Binder
  * Updates Released under Apache License, Version 2.0
  */

#ifndef __RA_TILT_H__
#define __RA_TILT_H__

#include <Globals.h>
#include <avr/eeprom.h>
#include <Wire.h>

class RA_Tilt
{
public:
	RA_Tilt();
	void Init();
	void Refresh();
	inline signed char  GetX() { return x; }
	inline signed char  GetY() { return y; }
	byte GetOrientation();
	byte readRegister(byte addressToRead);
	void writeRegister(byte addressToWrite, byte dataToWrite);

private:
	signed char x,y;
	byte orientation;
};
#endif // __RA_TILT_H__

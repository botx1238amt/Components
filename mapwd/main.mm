//----------------------------------------------------------------------------
// File : main.cpp
// Project : MacMap
// Purpose : C++ source file : Plugin entry point
// Author : Benoit Ogier, benoit.ogier@macmap.com
//
// Copyright (C) 1997-2015 Carte Blanche Conseil.
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// See the LICENSE.txt file for more information.
//
//----------------------------------------------------------------------------
// 
//----------------------------------------------------------------------------
// 18/04/2014 creation.
//----------------------------------------------------------------------------

#include "main.h"
#include "bMapIntf.h"
#include <MacMapSuite/bTrace.h>

// ---------------------------------------------------------------------------
// 
// ------------
void* lib_alloc(int sign, void* gapp, void* prm){
_bTrace_("mapwd::lib_alloc",true);
	return new bMapIntf(gapp);
}

// ---------------------------------------------------------------------------
// 
// ------------
void lib_free(void* inst){
_bTrace_("mapwd::lib_free",true);
	delete(bMapIntf*)inst;
}


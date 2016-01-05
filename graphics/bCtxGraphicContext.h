//----------------------------------------------------------------------------
// File : bCtxGraphicContext.h
// Project : MacMap
// Purpose : Header file : CGContext graphic context class
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
// 02/12/2010 creation.
//----------------------------------------------------------------------------

#ifndef __bCtxGraphicContext__
#define __bCtxGraphicContext__

//----------------------------------------------------------------------------

#include "bCGGraphicContext.h"

//----------------------------------------------------------------------------

class bCtxGraphicContext : public bCGGraphicContext{
public:
	bCtxGraphicContext 				(	bGenericMacMapApp* app);
	virtual ~bCtxGraphicContext 	(	);
	
	virtual void beginDraw			(	);
	virtual void endDraw			(	);
	
	virtual int signature			(	);
	virtual void set_context		(	CGContextRef ctx);
};

//----------------------------------------------------------------------------

#endif

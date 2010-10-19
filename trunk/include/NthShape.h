/*
 * NthShape.h
 * CopyRight @South China Institute of Software Engineering,.GZU
 * Author: 
 * 2010/10/20
 */


#ifndef NTHSHAPE_H
#define NTHSHAPE_H

#include "nthgraphics.h"

#ifdef DLL_FILE
class _declspec(dllexport) NthShape : public NthGraphics
#else
class _declspec(dllimport) NthShape : public NthGraphics
#endif
{

	public:

		NthShape(void);
		~NthShape(void);

};
#endif

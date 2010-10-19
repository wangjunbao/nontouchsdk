/*
 * NthText.h
 * CopyRight @South China Institute of Software Engineering,.GZU
 * Author: 
 * 2010/10/20
 */

#ifndef NTHTEXT_H
#define NTHTEXT_H

#include "nthgraphics.h"

#ifdef DLL_FILE
class _declspec(dllexport) NthText : public NthGraphics
#else
class _declspec(dllimport) NthText : public NthGraphics
#endif
{

	public:

		NthText(void);
		~NthText(void);

};
#endif

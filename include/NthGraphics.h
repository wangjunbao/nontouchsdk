/*
 * NthGraphics.h
 * CopyRight @South China Institute of Software Engineering,.GZU
 * Author: 
 * 2010/10/20
 */

#ifndef NTHGRAPHICS_H
#define NTHGRAPHICS_H

#ifdef DLL_FILE
class _declspec(dllexport) NthGraphics
#else
class _declspec(dllimport) NthGraphics
#endif
{
public:
	NthGraphics(void);
	~NthGraphics(void);
};
#endif

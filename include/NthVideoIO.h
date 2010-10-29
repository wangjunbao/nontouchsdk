/*
 * NthVideoIO.h
 * CopyRight @South China Institute of Software Engineering,.GZU
 * Author: 
 * 2010/10/20
 */

#ifndef NTHVIDEOIO_H
#define NTHVIDEOIO_H

#include "NthTypes.h"

#ifdef DLL_FILE
class _declspec(dllexport) NthVideoIO
#else
class _declspec(dllimport) NthVideoIO
#endif
{
private :
	int _iCam ;

	public:

		NthVideoIO(void);
		~NthVideoIO(void);
};
#endif

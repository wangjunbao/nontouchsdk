/*
 * NthImageIO.h
 * CopyRight @South China Institute of Software Engineering,.GZU
 * Author: 
 * 2010/10/20
 */

#ifndef NTHIMAGEIO_H
#define NTHIMAGEIO_H

#include "NthImage.h"

#ifdef DLL_FILE
class _declspec(dllexport) NthImageIO
#else
class _declspec(dllimport) NthImageIO
#endif
{
	public:

		NthImageIO(void);
		~NthImageIO(void);


};
#endif

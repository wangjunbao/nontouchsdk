/*
 * NthImageIO.h
 * CopyRight @South China Institute of Software Engineering,.GZU
 * Author: 
 * 2010/10/20
 */

#ifndef NTHIMAGEIO_H
#define NTHIMAGEIO_H

#include "cxtypes.h"

#ifdef DLL_FILE
class _declspec(dllexport) NthImageIO
#else

class _declspec(dllimport) NthImageIO
#endif
{
private : 
	IplImage * m_scrImage ; 
	char m_strPath [MAX_PATH] ; 

public:
	NthImageIO ();
	NthImageIO (char * strPath) ; 
	~NthImageIO ();

	int LoadImage (char * strPath) ; 
	int LoadImage () ; 
	int SaveImage () ;
	int SaveImageAs (char * strPath) ;
};

#endif

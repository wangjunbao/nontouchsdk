/*
 * NthImageIO.h
 * CopyRight @South China Institute of Software Engineering,.GZU
 * Author: 
 * 2010/10/20
 */

#ifndef NTHIMAGE_H
#define NTHIMAGE_H

#include "NthTypes.h"
#include "NthProcessObject.h"

#ifdef DLL_FILE
class _declspec(dllexport) NthImage : public NthProcessObject
#else
class _declspec(dllimport) NthImage : public NthProcessObject
#endif
{
private : 
	char _strPath [_MAX_PATH] ; 

public:
	NthImage ();
	NthImage (char * strPath) ; 
	NthImage (IplImage * image) ; 
	~NthImage ();

	int Create (int height, int width) ; 

	int Load (char * strPath) ; 
	int Load() ; 
	int Save () ;
	int SaveAs (char * strPath) ;
	int SavaAs (void * pImage, char * strPath) ; 
};

#endif

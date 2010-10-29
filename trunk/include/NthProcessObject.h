/*
 * NthProcessObject.h
 * CopyRight @South China Institute of Software Engineering,.GZU
 * Author: 
 * 2010/10/20
 */

#ifndef NTHPROCESSOBJECT_H
#define NTHPROCESSOBJECT_H

#include "NthTypes.h"

#ifdef DLL_FILE
class _declspec(dllexport) NthProcessObject
#else
class _declspec(dllimport) NthProcessObject
#endif
{
protected :
	IplImage * _srcImage;
//	char*     _imageData;
	int       _width;
	int       _height;

public :

	NthProcessObject() ;
	~NthProcessObject() ;

	IplImage * image () ;
	int width () ; 
	int height () ; 
} ;

#endif

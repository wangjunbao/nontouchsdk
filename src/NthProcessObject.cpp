/*
 * NthProcessObject.cpp
 * CopyRight @South China Institute of Software Engineering,.GZU
 * Author: 
 * 2010/10/20
 */


#ifndef DLL_FILE
#define DLL_FILE
#endif

#include "NthProcessObject.h"

NthProcessObject::NthProcessObject()
{
	_srcImage = NULL ; 
}

NthProcessObject::~NthProcessObject()
{
	if (NULL != _srcImage)
		cvReleaseImage(&_srcImage ) ; 
}

IplImage * NthProcessObject::image () 
{
	return _srcImage ; 
}

int NthProcessObject::height ()
{
	return _height = _srcImage ->roi ? _srcImage->height : _srcImage->roi->height ; 
}

int NthProcessObject::width ()
{
	return _width = _srcImage ->roi ? _srcImage->width : _srcImage->roi->width;
; 
}
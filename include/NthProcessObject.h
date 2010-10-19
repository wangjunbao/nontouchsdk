/*
 * NthProcessObject.h
 * CopyRight @South China Institute of Software Engineering,.GZU
 * Author: 
 * 2010/10/20
 */

#ifndef NTHPROCESSOBJECT_H
#define NTHPROCESSOBJECT_H

#include <highgui.h>

#ifdef DLL_FILE
class _declspec(dllexport) NthProcessObject
#else
class _declspec(dllimport) NthProcessObject
#endif
{
	private:

	public:

		IplImage* _srcImage;
		char*     _imageData;
		int       _width;
		int       _height;

		NthProcessObject(void);
		~NthProcessObject(void);
};
#endif

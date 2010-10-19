/*
 * NthImage.h
 * CopyRight @South China Institute of Software Engineering,.GZU
 * Author: 
 * 2010/10/20
 */

#ifndef NTHIMAGE_H
#define NTHIMAGE_H

#include <iostream>
#include <highgui.h>
#include "NthProcessObject.h"
#include "NthStructure.h"

using namespace std;

#ifdef DLL_FILE
class _declspec(dllexport) NthImage : private NthProcessObject
#else
class _declspec(dllimport) NthImage : private NthProcessObject
#endif
{
	private:

	public:

		NthImage(void);
		~NthImage(void);

		NthColor getPix( int x, int y );
		void     setPix( int x, int y, NthColor color );
		void     createImage( int width, int height );
		void     loadImage( char *path );
		void     saveImage( char *path );
		IplImage *image();

};
#endif 

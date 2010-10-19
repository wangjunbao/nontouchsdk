/*
 * NthSimpleWindow.h
 * CopyRight @South China Institute of Software Engineering,.GZU
 * Author: 
 * 2010/10/20
 */

#ifndef NTHSIMPLEWINDOW_H
#define NTHSIMPLEWINDOW_H

#include "NthImage.h"
#include <highgui.h>

#ifdef DLL_FILE
class _declspec(dllexport) NthSimpleWindow
#else
class _declspec(dllimport) NthSimpleWindow
#endif
{
	private:

		IplImage* _srcImage;
		char*     _title;
		int       _displayMode;
		int       _x;
		int       _y;
		int       _width;
		int       _height;

	public :

		NthSimpleWindow( char* title, NthImage *nthImage );
		NthSimpleWindow( void );
		~NthSimpleWindow( void );

		void create();
		void destroy();
		void reSize( int width, int height );
		void location( int x, int y );
};
#endif 

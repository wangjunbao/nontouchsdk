/*
 * NthSimpleWindow.cpp
 * CopyRight @South China Institute of Software Engineering,.GZU
 * Author: 
 * 2010/10/20
 */

#ifndef DLL_FILE
#define DLL_FILE
#endif

#include "highgui.h"
#include "NthSimpleWindow.h"

NthSimpleWindow::NthSimpleWindow( char* title, NthImage *nthImage )
{
	_title    = title;
	_width    = nthImage->image()->width;
	_height   = nthImage->image()->height;
	_srcImage = nthImage->image();
	
}

NthSimpleWindow::NthSimpleWindow(void)
{
}

NthSimpleWindow::~NthSimpleWindow(void)
{
	cvDestroyWindow( _title );
}

void NthSimpleWindow::create()
{
	//创建窗口
	cvNamedWindow( _title, CV_WINDOW_AUTOSIZE );
	//显示图像
	cvShowImage  ( _title, _srcImage );
	//等待输入
	//cvWaitKey( 0 );
}

void NthSimpleWindow::destroy()
{
	//销毁窗口
	cvDestroyWindow( _title );
}
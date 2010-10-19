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
	//��������
	cvNamedWindow( _title, CV_WINDOW_AUTOSIZE );
	//��ʾͼ��
	cvShowImage  ( _title, _srcImage );
	//�ȴ�����
	//cvWaitKey( 0 );
}

void NthSimpleWindow::destroy()
{
	//���ٴ���
	cvDestroyWindow( _title );
}
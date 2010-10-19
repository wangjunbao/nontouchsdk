/*
 * NthImage.cpp
 * CopyRight @South China Institute of Software Engineering,.GZU
 * Author: 
 * 2010/10/20
 */

#ifndef DLL_FILE
#define DLL_FILE
#endif

#include "NthImage.h"
#include "NthIO.h"

NthImage::NthImage(void)
{
	_srcImage = NULL;
	_width    = 0;
	_height   = 0;
}

NthImage::~NthImage(void)
{
	//�ͷ�ͼ����Դ
	cvReleaseImage( &_srcImage );
}

void NthImage::createImage( int width, int height )
{
	CvSize size;
	
	size.width  = width;
	size.height = height;

	//����ͼ������
	_srcImage = cvCreateImage( size, IPL_DEPTH_8U, 1 );
}

void NthImage::loadImage( char *path )
{
	//��ȡͼ��
	_srcImage = cvLoadImage( path );

}

void NthImage::saveImage( char *path )
{
	//����ͼ��
	cvSaveImage( path, _srcImage );

}

IplImage *NthImage::image()
{
	return _srcImage;
}


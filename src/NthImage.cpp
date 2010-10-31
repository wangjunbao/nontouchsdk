/*
 * NthImageIO.cpp
 * CopyRight @South China Institute of Software Engineering,.GZU
 * Author: 
 * 2010/10/20
 */

#ifndef DLL_FILE
#define DLL_FILE
#endif

#include "NthImage.h"
#include <memory.h>


NthImage::NthImage()
{
	_srcImage = NULL ; 
	memset (_strPath, 0, sizeof (_strPath)) ; 
//	CImage img ; 
}

NthImage::NthImage (char * strPath) 
{
	memcpy (_strPath, strPath, strlen (strPath)) ; 
}

NthImage::NthImage (IplImage * image)
{
	_srcImage = cvCloneImage (image) ; 
}

NthImage::~NthImage()
{
}

int NthImage::Create(int height, int width) 
{
	CvSize size;
	
	size.width  = width;
	size.height = height;

	//创建图像数据
	_srcImage = cvCreateImage( size, IPL_DEPTH_8U, 1 ) ;

	return 0 ; 
}

int NthImage::Load () 
{
	_srcImage = cvLoadImage (_strPath, 1) ; 
	return 0 ; 
}

int NthImage::Load (char * strPath)
{
	_srcImage = cvLoadImage (_strPath, 1) ; 
	return 0 ; 
}


int NthImage::Save ()
{
	cvSaveImage (_strPath, _srcImage) ; 
	return 0 ; 
}

int NthImage::SaveAs (char * strPath) 
{
	cvSaveImage (strPath, _srcImage) ;
	return 0 ; 
}

int NthImage::SavaAs (void * pImage, char * strPath) 
{
	cvSaveImage (strPath, pImage) ; 
	return 0 ; 
}



/*
 * NthImage.cpp
 * CopyRight @South China Institute of Software Engineering,.GZU
 * Author: 
 * 2010/10/20
 */
/*
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
	//释放图像资源
	cvReleaseImage( &_srcImage );
}

void NthImage::createImage( int width, int height )
{
	CvSize size;
	
	size.width  = width;
	size.height = height;

	//创建图像数据
	_srcImage = cvCreateImage( size, IPL_DEPTH_8U, 1 );
}

void NthImage::loadImage( char *path )
{
	//读取图像
	_srcImage = cvLoadImage( path );

}

void NthImage::saveImage( char *path )
{
	//保存图像
	cvSaveImage( path, _srcImage );

}

IplImage *NthImage::image()
{
	return _srcImage;
}

*/
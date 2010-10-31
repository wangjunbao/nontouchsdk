/*
 * NthImageIO.cpp
 * CopyRight @South China Institute of Software Engineering,.GZU
 * Author: 
 * 2010/10/20
 */

#ifndef DLL_FILE
#define DLL_FILE
#endif

#include "NthImageIO.h"
#include <memory.h>


NthImageIO::NthImageIO()
{
	CImage img ; 
}

NthImageIO::NthImageIO (char * strPath) 
{
	memcpy (_strPath, strPath, strlen (strPath)) ; 
}

NthImageIO::~NthImageIO()
{
}

int NthImageIO::LoadImage () 
{
	_srcImage = cvLoadImage (_strPath, 1) ; 
	return 0 ; 
}

int NthImageIO::LoadImage (char * strPath)
{
	_srcImage = cvLoadImage (_strPath, 1) ; 
	return 0 ; 
}


int NthImageIO::SaveImage ()
{
	cvSaveImage (_strPath, _srcImage) ; 
	return 0 ; 
}

int NthImageIO::SaveImageAs (char * strPath) 
{
	cvSaveImage (strPath, _srcImage) ;
	return 0 ; 
}

int NthImageIO::SavaImageAs (void * pImage, char * strPath) 
{
	cvSaveImage (strPath, pImage) ; 
	return 0 ; 
}
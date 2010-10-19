/*
 * NthEdgeDetection.cpp
 * CopyRight @South China Institute of Software Engineering,.GZU
 * Author: 
 * 2010/10/20
 */

#ifndef DLL_FILE
#define DLL_FILE
#endif

#include <iostream>
#include "NthEdgeDetection.h"


using namespace std;

NthEdgeDetection::NthEdgeDetection(void)
{
}

NthEdgeDetection::~NthEdgeDetection(void)
{
}

void NthEdgeDetection::canny( NthImage *srcNthImage, NthImage *dstNthImage, double threshold1, double threshold2, int aperture_size = 3 )
{
	IplImage *img1 = cvCreateImage(cvGetSize( srcNthImage->image() ),IPL_DEPTH_8U,1);

	//×ª»»Îª»Ò¶ÈÍ¼Ïñ
	cvCvtColor( srcNthImage->image(), img1, CV_BGR2GRAY );
	//Canny±ßÔµ¼ì²â
	cvCanny( img1, dstNthImage->image(), threshold1, threshold2, aperture_size );
}

/*
 * NthEdgeDetection.h
 * CopyRight @South China Institute of Software Engineering,.GZU
 * Author: 
 * 2010/10/20
 */

#ifndef NTHEDGEDETECTION_H
#define NTHEDGEDETECTION_H

#include "cv.h"
#include "cxcore.h"
#include "NthImage.h"

#ifdef DLL_FILE
class _declspec(dllexport) NthEdgeDetection
#else
class _declspec(dllimport) NthEdgeDetection
#endif
{
public:

	void canny( NthImage *srcNthImage, NthImage *dstNthImage, double threshold1, double threshold2, int aperture_size );
	NthEdgeDetection(void);
	~NthEdgeDetection(void);
};
#endif

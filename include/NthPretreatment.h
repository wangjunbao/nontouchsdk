/*
 * NthPretreatment.h
 * CopyRight @South China Institute of Software Engineering,.GZU
 * Author: 
 * 2010/10/20
 */

#ifndef NTHPRETREATMENT_H
#define NTHPRETREATMENT_H

#include "NthEdgeDetection.h"
#include "NthCornerProcess.h"
#include "NthMorphology.h"
#include "NthColorProcess.h"
#include "NthGeomTransform.h"
#include "NthImageTransform.h"
#include "NthBackgroundProcess.h"
#include "NthHistogram.h"
#include "NthMatch.h"
#include "NthFilter.h"

#ifdef DLL_FILE
class _declspec(dllexport) NthPretreatment
#else
class _declspec(dllimport) NthPretreatment
#endif
{
	public:

		NthEdgeDetection		edgeDetection;		//边缘检测
		NthCornerProcess		cornerProcess;		//角点处理
		NthMorphology			morphology;			//形态学处理
		NthColorProcess			colorProcess;		//颜色处理
		NthGeomTransform		geomTransform;		//几何变换
		NthImageTransform		imageTransform;		//图像变换
		NthBackgroundProcess	backgroundProcess;	//背景处理
		NthHistogram			histogram;			//直方图
		NthMatch				match;				//匹配
		NthFilter				filter;				//滤波器

		NthPretreatment(void);
		~NthPretreatment(void);
};
#endif

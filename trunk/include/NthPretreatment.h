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

		NthEdgeDetection		edgeDetection;		//��Ե���
		NthCornerProcess		cornerProcess;		//�ǵ㴦��
		NthMorphology			morphology;			//��̬ѧ����
		NthColorProcess			colorProcess;		//��ɫ����
		NthGeomTransform		geomTransform;		//���α任
		NthImageTransform		imageTransform;		//ͼ��任
		NthBackgroundProcess	backgroundProcess;	//��������
		NthHistogram			histogram;			//ֱ��ͼ
		NthMatch				match;				//ƥ��
		NthFilter				filter;				//�˲���

		NthPretreatment(void);
		~NthPretreatment(void);
};
#endif

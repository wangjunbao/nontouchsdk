/*
 * NthRecognition.h
 * CopyRight @South China Institute of Software Engineering,.GZU
 * Author: 
 * 2010/10/20
 */

#ifndef NTHRECOGNITION_H
#define NTHRECOGNITION_H

#ifdef DLL_FILE
class _declspec(dllexport) NthRecognition
#else
class _declspec(dllimport) NthRecognition
#endif
{

	public:

		NthRecognition(void);
		~NthRecognition(void);

};
#endif

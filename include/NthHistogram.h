/*
 * NthHistogram.h
 * CopyRight @South China Institute of Software Engineering,.GZU
 * Author: 
 * 2010/10/20
 */

#ifndef NTHHISTOGRAM_H
#define NTHHISTOGRAM_H

#ifdef DLL_FILE
class _declspec(dllexport) NthHistogram
#else
class _declspec(dllimport) NthHistogram
#endif
{
	public:

		NthHistogram(void);
		~NthHistogram(void);
};
#endif

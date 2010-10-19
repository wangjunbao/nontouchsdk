/*
 * NthAnalysis.h
 * CopyRight @South China Institute of Software Engineering,.GZU
 * Author: 
 * 2010/10/20
 */

#ifndef NTHANALYSIS_H
#define NTHANALYSIS_H

/*
 * 结构分析类
 * 
 */
#ifdef DLL_FILE
class _declspec(dllexport) NthAnalysis
#else
class _declspec(dllimport) NthAnalysis
#endif
{
	public:

		NthAnalysis(void);
		~NthAnalysis(void);
};
#endif
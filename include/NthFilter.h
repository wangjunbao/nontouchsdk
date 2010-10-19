/*
 * NthFilter.h
 * CopyRight @South China Institute of Software Engineering,.GZU
 * Author: 
 * 2010/10/20
 */

#ifndef NTHFILTER_H
#define NTHFILTER_H

#ifdef DLL_FILE
class _declspec(dllexport) NthFilter
#else
class _declspec(dllimport) NthFilter
#endif
{

	public:

		NthFilter(void);
		~NthFilter(void);

};
#endif

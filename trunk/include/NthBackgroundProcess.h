/*
 * NthBackgroundProcess.h
 * CopyRight @South China Institute of Software Engineering,.GZU
 * Author: 
 * 2010/10/20
 */

#ifndef NTHBACKGROUNDPROCESS_H
#define NTHBACKGROUNDPROCESS_H

#ifdef DLL_FILE
class _declspec(dllexport) NthBackgroundProcess
#else
class _declspec(dllimport) NthBackgroundProcess
#endif
{
public:
	NthBackgroundProcess(void);
	~NthBackgroundProcess(void);
};
#endif

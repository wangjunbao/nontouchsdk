/*
 * NthCornerProcess.h
 * CopyRight @South China Institute of Software Engineering,.GZU
 * Author: 
 * 2010/10/20
 */

#ifndef NTHCORNERPROCESS_H
#define NTHCORNERPROCESS_H

#ifdef DLL_FILE
class _declspec(dllexport) NthCornerProcess
#else
class _declspec(dllimport) NthCornerProcess
#endif
{
	public:

		NthCornerProcess(void);
		~NthCornerProcess(void);
};
#endif
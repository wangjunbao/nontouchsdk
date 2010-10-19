/*
 * NthMouseController.h
 * CopyRight @South China Institute of Software Engineering,.GZU
 * Author: 
 * 2010/10/20
 */

#ifndef NTHMOUSECONTROLLER_H
#define NTHMOUSECONTROLLER_H

#ifdef DLL_FILE
class _declspec(dllexport) NthMouseController
#else
class _declspec(dllimport) NthMouseController
#endif
{

	public:

		NthMouseController(void);
		~NthMouseController(void);

};
#endif

/*
 * NthController.h
 * CopyRight @South China Institute of Software Engineering,.GZU
 * Author: 
 * 2010/10/20
 */

#ifndef NTHCONTROLLER_H
#define NTHCONTROLLER_H

#ifdef DLL_FILE
class _declspec(dllexport) NthController
#else
class _declspec(dllimport) NthController
#endif
{

	public:

		NthController(void);
		~NthController(void);

};
#endif

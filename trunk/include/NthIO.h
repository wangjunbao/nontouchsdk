/*
 * NthIO.h
 * CopyRight @South China Institute of Software Engineering,.GZU
 * Author: 
 * 2010/10/20
 */


#ifndef NTHIO_H
#define NTHIO_H

#include <highgui.h>
#include "NthImageIO.h"
#include "NthVideoIO.h"

#ifdef DLL_FILE
class _declspec(dllexport) NthIO
#else
class _declspec(dllimport) NthIO
#endif
{
	private:


	public :

		NthIO(void);
		~NthIO(void);

		NthImageIO imageIO;
		NthVideoIO videoIO;

};
#endif 

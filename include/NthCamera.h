/*
 * NthCamera.h
 * CopyRight @South China Institute of Software Engineering,.GZU
 * Author: 
 * 2010/10/20
 */

#ifndef NTHCAMERA_H
#define NTHCAMERA_H

#ifdef DLL_FILE
class _declspec(dllexport) NthCamera
#else
class _declspec(dllimport) NthCamera
#endif
{
	public:

		NthCamera(void);
		~NthCamera(void);
};
#endif

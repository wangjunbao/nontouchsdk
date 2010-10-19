#ifndef NTHSIZE_H
#define NTHSIZE_H


#ifdef DLL_FILE
class _declspec(dllexport) NthSize
#else
class _declspec(dllimport) NthSize
#endif
{

	public:

		NthSize(void);
		~NthSize(void);

};
#endif

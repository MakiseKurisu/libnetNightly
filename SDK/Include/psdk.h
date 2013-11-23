#ifndef _SDK_PSDK_H_
#define _SDK_PSDK_H_

#ifndef  UNICODE
#define  UNICODE
#endif
#ifndef _UNICODE
#define _UNICODE
#endif

#include <windows.h>

#ifndef  _In_
#define  _In_
#endif
#ifndef  _In_opt_
#define  _In_opt_
#endif
#ifndef  _Out_
#define  _Out_
#endif
#ifndef  _Out_opt_
#define  _Out_opt_
#endif
#ifndef  _Inout_
#define  _Inout_
#endif
#ifndef  _Inout_opt_
#define  _Inout_opt_
#endif
#ifndef  _Reserved_
#define  _Reserved_
#endif

#define LIBRARY_EXPORT      __declspec(dllexport)
#define LIBRARY_IMPORT      __declspec(dllimport)
#define INLINE              inline
#if     defined(__GNUC__)
#define NOINLINE            __attribute__((noinline))
#endif
#if     defined(_MSC_VER)
#define NOINLINE            __declspec(noinline)
#endif

#endif /* _SDK_PSDK_H_ */
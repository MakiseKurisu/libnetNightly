#ifndef _SDK_LIBNET_H_
#define _SDK_LIBNET_H_

#include "psdk.h"

#ifdef  LIBNET_BUILD
#define LIBNET_FUNCTION LIBRARY_EXPORT
#else

#if     defined(_MSC_VER)
#define LIBNET_FUNCTION LIBRARY_IMPORT
#else
#define LIBNET_FUNCTION
#endif

#endif

#ifdef __cplusplus
extern "C" {
#endif

    LIBNET_FUNCTION HANDLE WINAPI NetCreateProcess(
        _In_    LPCTSTR lpszProcess
        );

#ifdef __cplusplus
};
#endif

#endif /* _SDK_LIBNET_H_ */
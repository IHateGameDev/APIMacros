#ifndef __API_SHARED_H__
#define __API_SHARED_H__

#if defined(_WIN32) || defined(_WIN64)
# include <windows.h>

# ifndef API_LIBRARY
#   define API_LIBRARY HMODULE
# endif

# ifndef API_LOAD_LIBRARY
#   define API_LOAD_LIBRARY LoadLibraryA
# endif

# ifndef API_GET_LIB_FUNC
#   define API_GET_LIB_FUNC GetProcAddress
# endif

# ifndef API_UNLOAD_LIBRARY
#   define API_UNLOAD_LIBRARY FreeLibrary
# endif

# ifndef API_GET_LIB_ERROR
#   define API_GET_LIB_ERROR GetLastError
# endif

#else
# include <dlfcn.h>

# ifndef API_LIBRARY
#   define API_LIBRARY void*
# endif

# ifndef API_LOAD_LIBRARY
#   define API_LOAD_LIBRARY(path) dlopen(path, RTLD_LAZY)
# endif

# ifndef API_GET_LIB_FUNC
#   define API_GET_LIB_FUNC dlsym
# endif

# ifndef API_UNLOAD_LIBRARY
#   define API_UNLOAD_LIBRARY dlclose
# endif

# ifndef API_GET_LIB_ERROR
#   define API_GET_LIB_ERROR dlerror
# endif

#endif

#endif // !__API_SHARED_H__

/*
 * Use MIT License
 * Copyright (c) 2025 IHateGameDev
 */

#if defined(_WIN32) || defined(_WIN64)
#include <windows.h>

#ifndef LIBEXT
#define LIBEXT "dll"
#endif LIBEXT

#ifndef LIB
#define LIB HMODULE
#endif

#ifndef LOAD_LIBRARY
#define LOAD_LIBRARY(path) LoadLibraryA(path)
#endif

#ifndef GET_LIB_SYM
#define GET_LIB_SYM GetProcAddress
#endif

#ifndef UNLOAD_LIBRARY
#define UNLOAD_LIBRARY FreeLibrary
#endif

#ifndef GET_LIB_ERROR
#define GET_LIB_ERROR GetLastError
#endif

#else
#include <dlfcn.h>

#ifndef LIBEXT
#if defined(__APPLE__) && defined(__MACH__)
#define LIBEXT "dylib"
#else
#define LIBEXT "so"
#endif
#endif

#ifndef LIB
#define LIB void*
#endif

#ifndef LOAD_LIBRARY
#define LOAD_LIBRARY(path) dlopen((path), RTLD_LAZY)
#endif

#ifndef GET_LIB_SYM
#define GET_LIB_SYM dlsym
#endif

#ifndef UNLOAD_LIBRARY
#define UNLOAD_LIBRARY dlclose
#endif

#ifndef GET_LIB_ERROR
#define GET_LIB_ERROR dlerror
#endif

#endif /* _WIN32 || _WIN64 */

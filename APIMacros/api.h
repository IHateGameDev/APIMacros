/*
 * Use MIT License
 * Copyright (c) 2025 IHateGameDev
 */

#ifndef API
#ifndef API_SHARED_BUILD
#define API_SHARED_BUILD 0
#endif // !API_SHARED_BUILD

#ifndef API_SHARED_USE
#define API_SHARED_USE 0
#endif // !API_SHARED_USE

#if defined(_WIN32) || defined(_WIN64)
#define API_SYM_EXP __declspec(dllexport)
#define API_SYM_IMP __declspec(dllimport)
#else
#define API_SYM_EXP __attribute__((visibility("default")))
#define API_SYM_IMP
#endif // _WIN*

#if API_SHARED_BUILD
#define API_SHARED_LIB API_SYM_EXP
#elif API_SHARED_USE
#define API_SHARED_LIB API_SYM_IMP
#else
#define API_SHARED_LIB
#endif // API_SHARED_*

#ifdef __cplusplus
#define API extern "C" API_SHARED_LIB
#else
#define API API_SHARED_LIB
#endif
#endif // !API

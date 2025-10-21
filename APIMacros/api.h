/*
 * Use MIT License
 * Copyright (c) 2025 IHateGameDev
 */

#ifndef API

#if defined(_WIN32) || defined(_WIN64)
#define API_SYM_EXP __declspec(dllexport)
#define API_SYM_IMP __declspec(dllimport)

#else
#if defined(__has_attribute) && __has_attribute(visibility)
#define API_SYM_EXP __attribute__((visibility("default")))

#elif defined(__GNUC__) && __GNUC__ >= 4
#define API_SYM_EXP __attribute__((visibility("default")))

#else
#define API_SYM_EXP
#endif // __has_attribute

#define API_SYM_IMP
#endif // _WIN*

#if SHARED_BUILD
#define API_SYM API_SYM_EXP
#elif SHARED_USE
#define API_SYM API_SYM_IMP
#else
#warning "Define API_SHARED_BUILD or API_SHARED_USE as appropriate"
#define API_SYM
#endif // SHARED_*

#ifdef __cplusplus
#define API extern "C" API_SYM
#else
#define API API_SYM
#endif

#endif // !API

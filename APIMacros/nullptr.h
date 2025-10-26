/*
 * Use MIT License
 * Copyright (c) 2025 IHateGameDev
 */

#ifndef NULLPTR
  #if __cplusplus >= 201'103L || __STDC_VERSION__ >= 202'311L
    #define NULLPTR nullptr
  #else
    #define NULLPTR 0
  #endif  // __cplusplus || __STDC_VERSION__
#endif    // !NULLPTR

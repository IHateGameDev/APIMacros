/*
 * Use MIT License
 * Copyright (c) 2025 IHateGameDev
 */
#ifndef ON_DEBUG
  #ifdef DEBUG
    #define ON_DEBUG(action)                                                   \
      do { action } while (0)
  #else
    #define ON_DEBUG(action)
  #endif  // DEBUG
#endif    // !ON_DEBUG

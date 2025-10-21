/*
 * Use MIT License
 * Copyright (c) 2025 IHateGameDev
 */

#ifndef API_VERSION_H
#define API_VERSION_H

#define API_VERSION_PREFIX "r"
#define API_VERSION_MAJOR 1
#define API_VERSION_MINOR 0
#define API_VERSION_PATCH 0

#define API_VERSION                                                            \
  #API_VERSION_PREFIX #API_VERSION_MAJOR "." #API_VERSION_MINOR                \
                                         "." #API_VERSION_PATCH

#endif // !API_VERSION_H

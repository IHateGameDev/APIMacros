/*
 * Use MIT License
 * Copyright (c) 2025 IHateGameDev
 */

#ifndef API_STATE_H
  #define API_STATE_H

#ifndef API
#define API
#define NO_DEF_API
#endif // !API

#define __DECLARE_STATE_FNS(type, suffix)                                      \
  API void sstate##suffix(type* self, type state, unsigned char condition);    \
  API void sstatevo##suffix(type* self, unsigned char offset,                  \
                            unsigned char condition);                          \
  API unsigned char gstate##suffix(type self, type state);                     \
  API unsigned char gstatevo##suffix(type self, unsigned char offset)

#define __DEFINE_STATE_FNS(type, suffix)                                       \
  API void sstate##suffix(type* self, type state, unsigned char condition) {   \
    if (condition)                                                             \
      *self |= state;                                                          \
    else                                                                       \
      *self &= ~state;                                                         \
  }                                                                            \
  API void sstatevo##suffix(type* self, unsigned char offset,                  \
                            unsigned char condition) {                         \
    sstate##suffix(self, (type) 1 << offset, condition);                       \
  }                                                                            \
  API unsigned char gstate##suffix(type self, type state) {                    \
    return !!(self & state);                                                   \
  }                                                                            \
  API unsigned char gstatevo##suffix(type self, unsigned char offset) {        \
    return gstate##suffix(self, (type) 1 << offset);                           \
  }

#ifdef NO_DEF_API
#undef API
#undef NO_DEF_API
#endif

#endif // !API_STATE_H

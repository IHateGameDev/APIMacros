# APIMacros
    APIMacros no have depends, and need for create Libraries on **C**. It is have a mechanism for a unpin clib(std c lib) of your project. This lib updated if i need it in other my projects.

### Configure whit macros:

    **API_(FUNCTION)**              - redef std function    [API_COS    - cos]
    **API_(TYPE)**                  - redef std type        [API_U8     - uint8_t]
    **API_(INCLUDE_FILE)_H**        - change sdt header     [API_MATH_H - <math.h>]
    **API_NI_(INCLUDE_FILE)_H**     - disable header        [API_NI_STRING_H]

    Current realized:
 - {MACRO}              {default value}
 - API_STDINT_H         (<stdint.h)
 - - API_I8             (int8_t)
 - - API_I16            (int16_t)
 - - API_I32            (int32_t)
 - - API_I64            (int64_t)
 - - API_U8             (uint8_t)
 - - API_U16            (uint16_t)
 - - API_U32            (uint32_t)
 - - API_U64            (uint64_t)

 - API_STRING_H         (<string.h>)
 - - API_MEMSET         (memset)

 - API_MATH_H           (<math.h>)
 - - API_SIN            (sin)
 - - API_COS            (cos)

 - API_STDLIB_H         (<stdlib.h>)
 - - API_MEMORYLIB_H    (<stdlib.h>)
 - - - API_MALLOC       (malloc)
 - - - API_FREE         (free)
 - - - API_CALLOC       (calloc)

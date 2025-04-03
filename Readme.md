# APIMacros
APIMacros has no dependencies. It is needed to create C libraries. It has a mechanism to detach clib(std c lib) from your project. This library is updated as needed in my other projects.

### Configure whit macros:
- **API_(FUNCTION)**              - redef function        \[API_COS    - cos\]
- **API_(TYPE)**                  - redef type            \[API_U8     - uint8_t\]
- **API_(INCLUDE_FILE)_H**        - change header         \[API_MATH_H - <math.h>\]
- **API_NI_(INCLUDE_FILE)_H**     - disable header        \[API_NI_STRING_H\]

### Current realized:
| Macro | Default |
| :------------------------- | -------------------------: |
| **API_STDINT_H**           | **<stdint.h>**             |
| API_I8                     | int8_t                     |
| API_I16                    | int16_t                    |
| API_I32                    | int32_t                    |
| API_I64                    | int64_t                    |
| API_U8                     | uint8_t                    |
| API_U16                    | uint16_t                   |
| API_U32                    | uint32_t                   |
| API_U64                    | uint64_t                   |
| **API_STRING_H**           | **<string.h>**             |
| API_MEMSET                 | memset                     |
| **API_MATH_H**             | **<math.h>**               |
| API_SIN                    | sin                        |
| API_COS                    | cos                        |
| **API_STDLIB_H**           | **<stdlib.h>**             |
| ***API_MEMORYLIB_H***      | ***<stdlib.h>***           |
| API_MALLOC                 | malloc                     |
| API_FREE                   | free                       |
| API_CALLOC                 | calloc                     |
| **__API_LIB_H__**          | **(API HEADER)**           |
| API_LIBRARY                | HMODULE / void*            |
| API_LOAD_LIBRARY(path)     | LoadLibraryA / dlopen      |
| API_GET_LIB_FUNC           | GetProcAddress / dlsym     |
| API_UNLOAD_LIBRARY         | FreeLibrary / dlclose      |

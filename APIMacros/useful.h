#ifndef __API_USEFUL_H__
#define __API_USEFUL_H__

/*
**  Example:
**    typedef struct {
**      int sP1 private;                       // Compiler show warning if use this member
**      float sP2;                             // Compiler don't show warning
**    } SomeStc;
*/
#ifndef private
# define private __attribute__((deprecated("This is private struct member")))
#endif

/*
**  Example:
**    friendly void someFun(SomeStc* stc) {
**      stc->sP2 = stc->sP1;                   // No have warning
**    }
*/
#ifndef friendly
# define friendly __attribute__((deprecated("Use private members whit no have warnings")))
#endif

/*
**  Example:
**    typedef struct {
**      local int sP1;                         // Can't use out def file
**    } SomeStc2;
*/
#ifndef local
# define local __attribute__((visibility("internal")))
#endif

/*
**  Example:
**    typedef struct {
**      mlocal int sP1;                        // Can't use out module
**    } SomeStc3;
*/
#ifndef mlocal
# define mlocal __attribute__((visibility("hidden")))
#endif

/*
**  Example: 
**    ...
**    ON_DEBUG(
**      if(!errID)
**        printf("Error ID: %u", errID);
**    );
**    ...
*/
#ifdef DEBUG
# define ON_DEBUG(action) do { action } while (0)
#else
# define ON_DEBUG(action)
#endif

#endif // !__API_USEFUL_H__

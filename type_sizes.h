#pragma once
#ifndef __TYPE_SIZES_H
#define __TYPE_SIZES_H

#include <windows.h>


/*
 *   unsigned types
 *
 */

#define uDOUBLEWORD unsigned __int64   /* 64 bit */
#define uSEPTIBYTE  unsigned __int64   /* 56 bit */
#define uSEXTIBYTE  unsigned __int64   /* 48 bit */
#define uQUINTIBYTE unsigned __int64   /* 40 bit */
#define uWORD       unsigned __int32   /* 32 bit */
#define uTRIPLEBYTE unsigned __int32   /* 24 bit */
#define uHALFWORD   unsigned __int16   /* 16 bit */
#define uBYTE		unsigned __int8    /*  8 bit */
#define uBIT        unsigned __int8    /*  1 bit */

 /* these are (very) often used */
#define uDWORD      unsigned __int64   /* 64 bit */
#define uHWORD      unsigned __int16   /* 16 bit */



/*
 *   signed types
 *
 */

#define sDOUBLEWORD __int64    /* 64 bit */
#define sSEPTIBYTE  __int64    /* 56 bit */
#define sSEXTIBYTE  __int64    /* 48 bit */
#define sQUINTIBYTE __int64    /* 40 bit */
#define sWORD       __int32    /* 32 bit */
#define sTRIPLEBYTE __int32    /* 24 bit */
#define sHALFWORD   __int16    /* 16 bit */
#define sBYTE       __int8	   /*  8 bit */

 /* these are (very) often used */
#define QWORD       __int64    /* 64 bit */
#define sDWORD      __int64    /* 64 bit */
#define sHWORD      __int16    /* 16 bit */



#endif

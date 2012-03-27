#include "stdafx.h"

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Fri Sep 02 15:50:23 2011
 */
/* Compiler settings for RGBFilters.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_RGBFiltersLib,0x56ECA530,0x1D00,0x43d0,0x94,0x65,0x4D,0x7E,0x3B,0xBD,0x36,0x1A);


MIDL_DEFINE_GUID(CLSID, CLSID_RateSource,0x98BEDFA2,0xC4A1,0x40ea,0xBB,0xD2,0xC7,0x70,0x70,0x91,0x8F,0x24);


MIDL_DEFINE_GUID(CLSID, CLSID_AlphaRenderer,0x66D155F8,0x1A72,0x4f6c,0x8D,0x03,0xBE,0x4F,0x7C,0xCF,0x73,0x9A);


MIDL_DEFINE_GUID(CLSID, CLSID_AlphaSource,0xBE393783,0xE457,0x498b,0xAF,0x1E,0xE0,0x56,0x4F,0x0F,0x0D,0x1F);


MIDL_DEFINE_GUID(CLSID, CLSID_Source8Bit,0xF39C8EA7,0x1ACB,0x46f3,0xA5,0x6D,0xF5,0x6F,0x39,0x1F,0x9D,0x7D);


MIDL_DEFINE_GUID(CLSID, CLSID_Source555Bit,0x345446A2,0xB638,0x40b4,0xBB,0xE5,0x40,0x98,0x02,0x8A,0xA1,0x4B);


MIDL_DEFINE_GUID(CLSID, CLSID_Source565Bit,0x345446A3,0xB638,0x40b4,0xBB,0xE5,0x40,0x98,0x02,0x8A,0xA1,0x4B);


MIDL_DEFINE_GUID(CLSID, CLSID_Source24Bit,0x345446A4,0xB638,0x40b4,0xBB,0xE5,0x40,0x98,0x02,0x8A,0xA1,0x4B);


MIDL_DEFINE_GUID(CLSID, CLSID_Source32Bit,0x345446A5,0xB638,0x40b4,0xBB,0xE5,0x40,0x98,0x02,0x8A,0xA1,0x4B);


MIDL_DEFINE_GUID(CLSID, CLSID_TransNull8,0x345446A6,0xB638,0x40b4,0xBB,0xE5,0x40,0x98,0x02,0x8A,0xA1,0x4B);


MIDL_DEFINE_GUID(CLSID, CLSID_TransNull555,0x345446A7,0xB638,0x40b4,0xBB,0xE5,0x40,0x98,0x02,0x8A,0xA1,0x4B);


MIDL_DEFINE_GUID(CLSID, CLSID_TransNull565,0x345446A8,0xB638,0x40b4,0xBB,0xE5,0x40,0x98,0x02,0x8A,0xA1,0x4B);


MIDL_DEFINE_GUID(CLSID, CLSID_TransNull24,0x345446A9,0xB638,0x40b4,0xBB,0xE5,0x40,0x98,0x02,0x8A,0xA1,0x4B);


MIDL_DEFINE_GUID(CLSID, CLSID_TransNull32,0x345446AA,0xB638,0x40b4,0xBB,0xE5,0x40,0x98,0x02,0x8A,0xA1,0x4B);


MIDL_DEFINE_GUID(CLSID, CLSID_TransNull32a,0x345446AB,0xB638,0x40b4,0xBB,0xE5,0x40,0x98,0x02,0x8A,0xA1,0x4B);


MIDL_DEFINE_GUID(CLSID, CLSID_TransSmpte,0x345446AC,0xB638,0x40b4,0xBB,0xE5,0x40,0x98,0x02,0x8A,0xA1,0x4B);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif




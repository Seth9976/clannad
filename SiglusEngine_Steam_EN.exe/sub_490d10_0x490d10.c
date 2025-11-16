// 函数: sub_490d10
// 地址: 0x490d10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg6

if (eax s<= 0)
    eax = 0xff
else if (eax s> 0xff)
    eax = 0xff

int32_t edx = arg4

if (edx s< 0)
    edx = 0

int32_t edx_1 = arg5

if (edx_1 s< 0)
    edx_1 = 0

int32_t edx_2 = arg7

if (edx_2 s< 0)
    edx_2 = 0

int32_t eax_1
int32_t edx_3
edx_3:eax_1 = sx.q(eax)
int32_t edx_4 = 0
int32_t eax_3 = data_70300c
int32_t ebx_1 = (eax_1 - edx_3) s>> 1

if (ebx_1 s<= eax_3)
    int32_t eax_4 = neg.d(eax_3)
    
    if (ebx_1 s< eax_4)
        ebx_1 = eax_4
else
    ebx_1 = eax_3

int32_t edi = data_7030dc

if (edi s>= 0)
    int32_t eax_6 = neg.d(edi)
    
    if (eax_6 s> 0)
        edx_4 = eax_6
    
    arg6 = edx_4
else
    arg6 = edi

int32_t eax_11 = edx_2
int32_t esi = 0
*arg3 = 1

if (eax_11 s> 0)
    esi = eax_11

if (esi s< 0x14)
    esi = 0x14

if (esi s>= 0x64 || arg3[5] s> 0 || arg3[6] s> 0)
    arg3[1] = 0
else
    arg3[1] = 1
    int32_t eax_8
    int32_t edx_5
    edx_5:eax_8 = sx.q(esi)
    arg3[0xe] = 0xffffffff
    arg3[0xf] = (eax_8 - edx_5) s>> 1
    eax_11 = edx_2

arg3[5] = edx
arg3[4] = 0
arg3[6] = edx_1
int32_t edx_8 = arg8
arg3[2] = 0
arg3[3] = 0
arg3[9] = eax_11
arg3[8].w = ebx_1.w
arg3[0xa].b = 1
arg3[0xb].w = arg6.w
arg3[0xc] = 0
arg3[0xd].b = 0
int32_t result = arg3[4] * esi
arg3[7] = esi
*arg3 = 4

if (edx_8 s>= 0)
    int32_t eax_13 = data_70300c
    
    if (edx_8 s>= eax_13)
        edx_8 = eax_13 - 1
else
    edx_8 = 0

int32_t eax_15 = arg9

if (eax_15 s< 0)
    arg3[0x10] = edx_8
    arg3[0x11] = 0
    return result

if (eax_15 s>= edi)
    eax_15 = edi - 1

arg3[0x11] = eax_15
arg3[0x10] = edx_8
return result

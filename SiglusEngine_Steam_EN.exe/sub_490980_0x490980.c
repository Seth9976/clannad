// 函数: sub_490980
// 地址: 0x490980
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg4
int32_t ebx
ebx.b = 0
int32_t var_c = 0
ebx:1.b = 0
int32_t var_8 = 0

if (eax s< 0)
    eax = 0

int32_t edi = arg10
int32_t eax_1 = arg5

if (eax_1 s< 0)
    eax_1 = 0

int32_t eax_2 = arg8

if (eax_2 s< 0)
    eax_2 = 0

arg8 = eax_2

if (edi s< 0)
    edi = 0

int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(arg7)
int32_t eax_8
int32_t edx_1
edx_1:eax_8 = sx.q(arg9)
int32_t edx_3 = (eax_8 - edx_1) s>> 1
int32_t ecx_1

if (arg6 u> 0x14)
    ecx_1 = (eax_4 - edx) s>> 1
else
    switch (arg6)
        case 0
            ecx_1 = 0
            arg8 = 0
        case 1
            goto label_490a42
        case 2, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13
            ecx_1 = (eax_4 - edx) s>> 1
        case 3
            var_8 = 1
            var_c = 1
            ecx_1 = (eax_4 - edx) s>> 1
        case 4
            ecx_1 = 0
            ebx:1.b = 2
            arg8 = 0
        case 5
            ecx_1 = 0
            ebx:1.b = 1
            arg8 = 0
        case 6
            ebx.b = 2
        label_490a42:
            edx_3 = 0
            edi = 0
            ecx_1 = (eax_4 - edx) s>> 1
        case 7, 0x14
            ebx.b = 1
            goto label_490a42
        case 8
            ebx.b = 2
            ebx:1.b = 2
            ecx_1 = (eax_4 - edx) s>> 1
        case 9
            ebx.b = 1
            ebx:1.b = 2
            ecx_1 = (eax_4 - edx) s>> 1
        case 0xa
            ebx.b = 2
            ebx:1.b = 1
            ecx_1 = (eax_4 - edx) s>> 1
        case 0xb
            ebx.b = 1
            ebx:1.b = 1
            ecx_1 = (eax_4 - edx) s>> 1

int32_t eax_11 = data_70300c
arg10 = eax_11

if (ecx_1 s<= eax_11)
    int32_t eax_12 = neg.d(eax_11)
    arg10 = ecx_1
    
    if (ecx_1 s< eax_12)
        ecx_1 = eax_12
    
    arg10 = ecx_1

int32_t eax_13 = data_7030dc
arg7 = eax_13

if (edx_3 s<= eax_13)
    int32_t eax_14 = neg.d(eax_13)
    int32_t ecx_2 = edx_3
    
    if (edx_3 s< eax_14)
        ecx_2 = eax_14
    
    arg7 = ecx_2

int32_t ecx_3 = edi

if (arg8 s> edi)
    ecx_3 = arg8

if ((arg6 == 2 || arg6 == 3) && ecx_3 s< 0x64)
    ecx_3 = 0x64
else if (ecx_3 s< 0x14)
    ecx_3 = 0x14

int32_t eax_16
eax_16.b = var_8 != 0
*arg3 = eax_16 + 1

if (ecx_3 s>= 0x64 || arg3[5] s> 0 || arg3[6] s> 0)
    arg3[1] = 0
else
    arg3[1] = 1
    int32_t eax_19
    int32_t edx_4
    edx_4:eax_19 = sx.q(ecx_3)
    arg3[0xe] = 0xffffffff
    arg3[0xf] = (eax_19 - edx_4) s>> 1

arg3[4] = var_c
arg3[5] = eax
arg3[6] = eax_1
arg3[2] = 0
arg3[3] = 0
arg3[8].w = arg10.w
arg3[9] = arg8
arg3[0xa].b = ebx.b
arg3[0xc] = edi
arg3[0xb].w = arg7.w
arg3[0xd].b = ebx:1.b
int32_t eax_28 = arg3[4]
arg3[7] = ecx_3
return eax_28 * ecx_3

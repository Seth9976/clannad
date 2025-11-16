// 函数: sub_4b8940
// 地址: 0x4b8940
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

sub_4b7a70(&arg2[0x23])

if (arg2[0x1a] == 2)
    sub_4b7a70(&arg2[0x48])

arg2[0x29] = arg4[5]

if (arg4[4] == 2 && arg4[0x2c] s> 1)
    arg2[0x29] = modu.dp.d(0:(sub_4d18c0(2)), arg4[0x2c]) + arg4[5]

arg2[4] = arg4[7]

if (arg4[0x3f] s> 1)
    if ((sub_4d18c0(2) & 1) != 0)
        int32_t eax_7 = sub_4d18c0(2)
        arg2[4] -= modu.dp.d(0:eax_7, arg4[0x3f])
    else
        int32_t eax_5 = sub_4d18c0(2)
        arg2[4] += modu.dp.d(0:eax_5, arg4[0x3f])

arg2[0xe] = arg4[(sub_4d18c0(2) & 7) + 0x41]

if (arg4[0x40] s> 1)
    int32_t eax_12 = sub_4d18c0(2)
    arg2[0xe] += modu.dp.d(0:eax_12, arg4[0x40])

arg2[5] = arg4[0x16]

if (arg4[0x49] s> 1)
    if ((sub_4d18c0(2) & 1) != 0)
        int32_t eax_18 = sub_4d18c0(2)
        arg2[5] -= modu.dp.d(0:eax_18, arg4[0x49])
    else
        int32_t eax_16 = sub_4d18c0(2)
        arg2[5] += modu.dp.d(0:eax_16, arg4[0x49])

int32_t eax_20 = *arg4

if (eax_20 == 0)
    arg2[0xf] = arg4[(sub_4d18c0(eax_20 + 2) & 7) + 0x4b]
    
    if (arg4[0x4a] s> 1)
        int32_t eax_24 = sub_4d18c0(2)
        arg2[0xf] += modu.dp.d(0:eax_24, arg4[0x4a])
else if (eax_20 == 1)
    if (arg6 == 0 || arg2[5] s< 0)
        arg2[0xf] = 0
    else
        arg2[0xf] = divs.dp.d(sx.q(modu.dp.d(0:(sub_4d18c0(eax_20 + 1)), arg2[5])), (arg3 & 3) + 1)

arg2[6] = arg4[0x18]

if (arg4[0x53] s> 1)
    if ((sub_4d18c0(2) & 1) != 0)
        int32_t eax_34 = sub_4d18c0(2)
        arg2[6] -= modu.dp.d(0:eax_34, arg4[0x53])
    else
        int32_t eax_32 = sub_4d18c0(2)
        arg2[6] += modu.dp.d(0:eax_32, arg4[0x53])

arg2[0x10] = arg4[(sub_4d18c0(2) & 7) + 0x55]

if (arg4[0x54] s> 1)
    int32_t eax_39 = sub_4d18c0(2)
    arg2[0x10] += modu.dp.d(0:eax_39, arg4[0x54])

arg2[0x17] = arg4[0x19]

if (arg4[0x5d] s> 1)
    if ((sub_4d18c0(2) & 1) != 0)
        int32_t eax_45 = sub_4d18c0(2)
        arg2[0x17] -= modu.dp.d(0:eax_45, arg4[0x5d])
    else
        int32_t eax_43 = sub_4d18c0(2)
        arg2[0x17] += modu.dp.d(0:eax_43, arg4[0x5d])

if (*arg4 == 1)
    arg2[7] = arg4[0x18]
    
    if (arg4[0x53] s> 1)
        if ((sub_4d18c0(2) & 1) != 0)
            int32_t eax_51 = sub_4d18c0(2)
            arg2[7] -= modu.dp.d(0:eax_51, arg4[0x53])
        else
            int32_t eax_49 = sub_4d18c0(2)
            arg2[7] += modu.dp.d(0:eax_49, arg4[0x53])
    
    arg2[0x11] = arg4[(sub_4d18c0(2) & 7) + 0x55]
    
    if (arg4[0x54] s> 1)
        int32_t eax_56 = sub_4d18c0(2)
        arg2[0x11] += modu.dp.d(0:eax_56, arg4[0x54])
    
    arg2[0x18] = arg4[0x19]
    
    if (arg4[0x5d] s> 1)
        if ((sub_4d18c0(2) & 1) != 0)
            int32_t eax_62 = sub_4d18c0(2)
            arg2[0x18] -= modu.dp.d(0:eax_62, arg4[0x5d])
        else
            int32_t eax_60 = sub_4d18c0(2)
            arg2[0x18] += modu.dp.d(0:eax_60, arg4[0x5d])

int32_t eax_64 = sub_4b88a0(arg4)
arg2[0xd] = eax_64
int32_t eax_65 = eax_64 + arg4[0x1c]
arg2[0xc] = eax_65

if (eax_65 s<= 1)
    arg2[0x16] = 0
else
    arg2[0x16] = modu.dp.d(0:(sub_4d18c0(2)), arg2[0xc])

int32_t eax_68 = 0x12c

if (*arg4 == 0)
    eax_68 = 0x3e8

arg2[8] = eax_68

if (arg5 == 0)
    arg2[0x12] = 0
else if (arg5 == 1)
    arg2[0x12] = 0x3e8
else if (arg5 == 2)
    arg2[0x12] = 0

if (arg5 == 0)
    int32_t eax_73 = *arg4
    
    if (eax_73 == 0 || eax_73 == 1)
        arg2[0x1b] = 1
        arg2[0x15] = 0
        arg2[0xb] = arg3 s/ 0xa * 0x12c
else if (arg5 == 1 || arg5 == 2)
    arg2[0xb] = 0x3e8
    arg2[0x15] = 0x3e8
    arg2[0x1b] = 0

arg2[9] = 0
arg2[0x13] = 0
int32_t eax_79 = *arg4

if (eax_79 == 0)
    int32_t eax_80 = arg2[5]
    
    if (eax_80 s< 0x3e8)
        eax_80 = 0x3e8
    
    int32_t ebx_1 = eax_80 << 2
    arg2[0xa] = eax_80 * 3
    
    if (ebx_1 s> 1)
        int32_t eax_82 = sub_4d18c0(2)
        arg2[0xa] += modu.dp.d(0:eax_82, ebx_1)
    
    arg2[0x14] = 0
else if (eax_79 == 1)
    arg2[0xa] = arg2[5]
    arg2[0x14] = arg2[0xf]

if (arg3 s>= arg4[2])
    arg2[0x1b] = 0xffffffff
    arg2[0x12] = 0

arg2[0x1a] = 0
int32_t eax_86 = *arg4

if (eax_86 == 0)
    *arg2 = arg4[(data_641b1c & 7) + 0x2f] + arg4[0xe]
    
    if (arg4[0x2d] s> 1)
        int32_t eax_91 = sub_4d18c0(2)
        *arg2 += modu.dp.d(0:eax_91, arg4[0x2d])
    
    arg2[2] = *arg2
    arg2[1] = arg4[0xf]
    arg2[3] = arg4[0x11]
else if (eax_86 == 1)
    arg2[0x22] = 0
    sub_4b7b00(&arg2[1], arg4[0x26], arg4[0x25], arg4[0x27], arg4[0x28], arg4[0xa], arg4[0xb], 
        arg4[0xc], arg4[0xd], arg4[0x17], arg4[0x29], arg2, &arg2[1], &arg2[2], &arg2[3], 
        &arg2[0x1c], &arg2[0x1d], &arg2[0x1e], &arg2[0x20], &arg2[0x1f], &arg2[0x21])

int32_t eax_105 = *arg2
int32_t ecx_13 = arg2[2]
int32_t result_1

if (eax_105 s> ecx_13)
    result_1 = eax_105 - ecx_13 + 1
else
    result_1 = ecx_13 - eax_105 + 1

int32_t edx_48 = arg2[1]
int32_t eax_107 = arg2[3]
int32_t result

if (edx_48 s> eax_107)
    result = edx_48 - eax_107 + 1
else
    result = eax_107 - edx_48 + 1

if (result_1 s> result)
    result = result_1

data_641b1c += 1
arg2[0x19] = result
return result

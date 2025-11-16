// 函数: sub_491190
// 地址: 0x491190
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg3
arg2[0xe] += arg4
int32_t eax_1 = *(arg3 + 0x38)
int32_t eax_2
int32_t edx

if (eax_1 != 0xffffffff)
    int32_t ecx = eax_1 * 0x184
    edx = *(ecx + &data_12c41b4)
    eax_2 = *(ecx + arg2[0xf] * 0xc + 0x12c41c0)
else
    edx = eax_1 + 3
    eax_2 = *(arg3 + 0x3c)

if (arg2[0xe] s>= eax_2)
    arg2[0xf] += 1
    arg2[0xe] = 0
    
    if (arg2[0xf] s>= edx)
        arg2[0x10] += 1
        arg2[0xf] = 0

int32_t ecx_1 = data_131310c

if (*(arg3 + 8) == 0)
    eax_2 = *(arg3 + 0x14)
    
    if ((eax_2 s> 0 || *(arg3 + 0x18) s> 0) && arg2[0x10] s>= eax_2)
        if (*(arg3 + 0x18) s<= 0)
            sub_490910(arg3, arg2)
            return 0
        
        *(arg3 + 8) = 1
        arg2[3] = ecx_1
        eax_2 = *(arg3 + 0x1c) * *(arg3 + 0x18)
        arg2[4] = eax_2

int32_t ebx = arg2[2]
int32_t ebx_1

if (ebx s> 0)
    int32_t ecx_3 = ecx_1 - arg2[1]
    
    if (ecx_3 u< ebx)
        eax_2 = divu.dp.d(0:(ecx_3 * 0x64), ebx)
        ebx_1 = eax_2
    else
        ebx_1 = 0x64
else
    ebx_1 = 0x64

arg2[7] = ebx_1

if (*(arg3 + 8) != 0 && ebx_1 s> 0)
    eax_2 = sub_490e70(eax_2, arg2[4], arg2[3], ebx_1)
    ebx_1 = eax_2

if (*(arg3 + 0xc) != 0 && ebx_1 s> 0)
    ebx_1 = sub_490e70(eax_2, arg2[6], arg2[5], ebx_1)

int32_t eax_8 = arg2[0xf]
int32_t result

if (eax_1 != 0xffffffff)
    result = eax_1 * 0x184 + eax_8 * 0xc
    int32_t ecx_10 = *(result + 0x12c41b8)
    
    if (ebx_1 == 0)
        arg2[8] = ebx_1
    else if (ebx_1 != 0x64)
        arg2[8] = ecx_10 * ebx_1 s/ 0x64
    else
        arg2[8] = ecx_10
    
    int32_t ecx_12 = *(result + 0x12c41bc)
    
    if (ebx_1 == 0)
        arg2[0xb] = ebx_1
    else if (ebx_1 != 0x64)
        result = ecx_12 * ebx_1 s/ 0x64
        arg2[0xb] = result
    else
        arg2[0xb] = ecx_12
else
    result = sub_491130(sub_491130(eax_8.b, &arg2[8], arg3 + 0x20, eax_8, ebx_1), &arg2[0xb], 
        arg3 + 0x2c, eax_8, ebx_1)

if ((*(arg3 + 8) != 0 || *(arg3 + 0xc) != 0) && ebx_1 s<= 0)
    return sub_490910(arg3, arg2)

return result

// 函数: sub_490ff0
// 地址: 0x490ff0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = data_131310c

if (*(arg3 + 8) == 0 && (*(arg3 + 0x14) s> 0 || *(arg3 + 0x18) s> 0))
    *arg2 += arg4
    int32_t edx = *(arg3 + 0x1c)
    
    if (*arg2 s> *(arg3 + 0x14) * edx)
        if (*(arg3 + 0x18) * edx s<= 0)
            return sub_490910(arg3, arg2) __tailcall
        
        *(arg3 + 8) = 1
        arg2[3] = ecx
        arg2[4] = *(arg3 + 0x1c) * *(arg3 + 0x18)

int32_t ebx = arg2[2]
uint32_t eax_8

if (ebx s> 0)
    int32_t ecx_2 = ecx - arg2[1]
    
    if (ecx_2 u< ebx)
        eax_8 = divu.dp.d(0:(ecx_2 * 0x64), ebx)
    else
        eax_8 = 0x64
else
    eax_8 = 0x64

arg2[7] = eax_8
int32_t eax_18 = sub_4d1650(0x5a - eax_8 * 0x5a s/ 0x64) * 0x64 s/ 0x7f80
int32_t ebx_1 = 0x64 - eax_18

if (*(arg3 + 8) != 0 && ebx_1 s> 0)
    eax_18 = sub_490e70(eax_18, arg2[4], arg2[3], ebx_1)
    ebx_1 = eax_18

if (*(arg3 + 0xc) != 0 && ebx_1 s> 0)
    eax_18 = sub_490e70(eax_18, arg2[6], arg2[5], ebx_1)
    ebx_1 = eax_18

int32_t result = sub_490ec0(sub_490ec0(eax_18, &arg2[8], arg3 + 0x20, arg4, ebx_1, 0), &arg2[0xb], 
    arg3 + 0x2c, arg4, ebx_1, arg5)

if ((*(arg3 + 8) != 0 || *(arg3 + 0xc) != 0) && ebx_1 s<= 0)
    return sub_490910(arg3, arg2) __tailcall

return result

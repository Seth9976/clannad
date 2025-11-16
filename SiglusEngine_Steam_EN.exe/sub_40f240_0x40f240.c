// 函数: sub_40f240
// 地址: 0x40f240
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp = arg3
int32_t ecx = arg4 - ebp
int32_t esi_1 = arg2 - arg1
int32_t eax_1
int32_t edx_1
edx_1:eax_1 = sx.q(ecx)
int32_t temp0 = divs.dp.d(sx.q(ecx), esi_1)

if (ecx s>= 0)
    arg4 = temp0 + 1
else
    arg4 = temp0 - 1

int32_t eax_6
int32_t edx_5
edx_5:eax_6 = sx.q(temp0 * esi_1)
*(arg5 + (arg1 << 2)) = ebp
int32_t result = arg1 + 1

if (result s< arg2)
    int32_t* ecx_3 = arg5 + (result << 2)
    int32_t i_1 = arg2 - result
    result = 0
    int32_t i
    
    do
        result += (eax_1 ^ edx_1) - edx_1 - ((eax_6 ^ edx_5) - edx_5)
        
        if (result s< esi_1)
            ebp += temp0
        else
            result -= esi_1
            ebp += arg4
        
        *ecx_3 = ebp
        ecx_3 = &ecx_3[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result

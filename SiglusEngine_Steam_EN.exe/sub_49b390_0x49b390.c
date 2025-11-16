// 函数: sub_49b390
// 地址: 0x49b390
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg10 s> 0x21 || (&data_976b54)[arg10 * 8] == 0)
    return 0

int32_t eax_3 = *arg3

if (eax_3 != 0xffffffff || *arg2 != 0xffffffff || *arg4 != 0xffffffff || *arg5 != 0xffffffff)
    int32_t esi_1 = *arg4
    
    if (eax_3 s> esi_1)
        *arg3 = esi_1
        *arg4 = eax_3
    
    int32_t esi_2 = *arg2
    int32_t eax_10 = *arg5
    
    if (esi_2 s> eax_10)
        *arg2 = eax_10
        *arg5 = esi_2
    
    if (*arg3 s>= *arg6 || *arg4 s< 0 || *arg2 s>= *arg7 || *arg5 s< 0)
        return 0
else
    *arg3 = 0
    *arg2 = 0
    *arg4 = *arg6 - 1
    *arg5 = *arg7 - 1

int32_t ecx_2 = *arg4
int32_t edx = *arg8
*arg11 = edx
int32_t esi_3 = *arg9
*arg12 = esi_3
*arg13 = ecx_2 - *arg3 + edx
*arg14 = *arg5 - *arg2 + esi_3
return 1

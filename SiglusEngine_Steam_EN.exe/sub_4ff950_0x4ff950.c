// 函数: sub_4ff950
// 地址: 0x4ff950
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3

if (arg3 s< 0 || arg3 s>= data_7031bc)
    return 

int32_t ebx_1 = arg3 * 9
int32_t ecx = *((ebx_1 << 2) + &data_12b9280)

if (ecx != 0 || arg4 != ecx)
    int32_t edx = arg5
    arg1 = (arg2 + (arg3 << 1)) * 0x650 + &data_72d6b0
    
    if (edx != 0)
        edx = 1
    
    if (*(arg1 + 0x178) != edx)
        *(arg1 + 0x178) = edx
        *(arg1 + 0x2c4) = 0
        *(arg1 + 0x2c8) = 0

if (ecx != 0 || arg6 != ecx)
    sub_468860(arg1, arg2, arg3, arg7, arg8, 0, 0, 0)

if (*((ebx_1 << 2) + &data_12b9280) != 0 || arg9 != 0)
    *((arg2 + (arg3 << 1)) * 0x650 + 0x72d84c) = arg10
    *((arg2 + (arg3 << 1)) * 0x650 + 0x72d850) = arg11

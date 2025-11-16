// 函数: sub_4b27c0
// 地址: 0x4b27c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*arg8 = 0
*arg9 = 0
*arg4 = (&data_1bfe310)[arg3 * 0x15]
int32_t edi = (&data_1bfe334)[arg3 * 0x15]
int32_t ebx = (&data_1bfe334)[arg2 * 0x15]
*arg5 = (&data_1bfe314)[arg3 * 0x15]
*arg6 = (&data_1bfe318)[arg2 * 0x15]
*arg7 = (&data_1bfe31c)[arg2 * 0x15]
*arg10 = (&data_1bfe320)[arg3 * 0x15]
*arg11 = (&data_1bfe324)[arg3 * 0x15]
*arg12 = (&data_1bfe328)[arg2 * 0x15]
*arg13 = (&data_1bfe32c)[arg2 * 0x15]
int32_t* eax_13

if (arg14 != 0)
    *arg5 = (&data_1bfe314)[arg3 * 0x15] + edi
    eax_13 = (&data_1bfe31c)[arg2 * 0x15] + ebx
    *arg7 = eax_13
    
    if (arg15 != 0)
        eax_13 = arg9
        *eax_13 = edi
else
    *arg4 = (&data_1bfe310)[arg3 * 0x15] + edi
    eax_13 = (&data_1bfe318)[arg2 * 0x15] + ebx
    *arg6 = eax_13
    
    if (arg15 != 0)
        *arg8 = edi
        return arg8

return eax_13

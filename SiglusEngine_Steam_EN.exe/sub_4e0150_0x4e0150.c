// 函数: sub_4e0150
// 地址: 0x4e0150
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 == 0)
    sub_4d9320(0x80070057)
    noreturn

if (arg2 s< 0)
    sub_4d9320(0x80070057)
    noreturn

if (arg4 == 0)
    sub_4d9320(0x80070057)
    noreturn

int32_t result = *arg3

if (result == arg4)
    if (arg2 s<= 0x80)
        *arg3 = arg4
    else
        result = sub_5f1ac0(result, arg2, arg3, arg2, 1)
        *arg3 = result
else if (arg2 s<= 0x80)
    result = _free(result)
    *arg3 = arg4
else
    result = __aligned_offset_recalloc(result, arg2, 1)
    
    if (result == 0)
        sub_4d9320(0x8007000e)
        noreturn
    
    *arg3 = result

if (*arg3 != 0)
    return result

sub_4d9320(0x8007000e)
noreturn

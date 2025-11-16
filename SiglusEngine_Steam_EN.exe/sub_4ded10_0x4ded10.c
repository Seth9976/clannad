// 函数: sub_4ded10
// 地址: 0x4ded10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (0xffffffff - arg2 u< 8)
    sub_4d9320(0x80070216)
    noreturn

int32_t* result = _malloc(arg2 + 8)

if (result == 0)
    return result

*result = *arg1
*arg1 = result
return &result[2]

// 函数: sub_4a8d50
// 地址: 0x4a8d50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg3
BOOL result = sub_4d6c40(arg3, &esi[1])
*esi = 0
esi[1] = 0
esi[2] = 0
esi[3] = 0

if (arg2 s> 0 && arg4 s> 0)
    uint32_t eax_1 = arg2 * arg4
    result = sub_4d6960(eax_1, &esi[1], esi, eax_1, "AVG_MASKZOOM")
    esi[2] = arg2
    esi[3] = arg4

return result

// 函数: sub_4cea50
// 地址: 0x4cea50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*arg2 = 0
*arg4 = 0
*arg5 = 0

if (sub_4d0f10(arg3, "PDT10") == 0)
    *arg2 = *(arg3 + 0xc)
    *arg4 = *(arg3 + 0x10)
    int32_t eax_4 = *(arg3 + 0x1c)
    *arg5 = eax_4
    return eax_4

int32_t* eax_5 = sub_4d0f10(arg3, "PDT11")

if (eax_5 == 0)
    *arg2 = *(arg3 + 0xc)
    *arg4 = *(arg3 + 0x10)
    eax_5 = arg5
    *eax_5 = 3

return eax_5

// 函数: sub_460f20
// 地址: 0x460f20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

BOOL result = sub_4d6c40(arg3 + 0x10, arg3 + 0x14)
*(arg3 + 0x18) = 0

if (arg2 != 0 && *arg2 != 0)
    uint32_t eax = sub_4cfc80(arg2)
    sub_4d1c30(sub_4d6960(eax, arg3 + 0x14, arg3 + 0x10, eax, "MSGST_NAME"), arg2, *(arg3 + 0x14), 
        eax)
    result.w = arg4
    *(arg3 + 0x54) = result.w
    result.w = arg5
    *(arg3 + 0x56) = result.w
    result.b = arg6
    *(arg3 + 0x18) = result.b

return result

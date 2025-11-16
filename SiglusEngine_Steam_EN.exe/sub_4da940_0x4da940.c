// 函数: sub_4da940
// 地址: 0x4da940
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    return 0x80004005

if (*(arg1 - 0x20) == 0)
    int32_t* var_14_1 = arg2
    int16_t eax_3
    void* ecx_1
    eax_3, ecx_1 = sub_4df800(0x640008, arg1 - 4)
    uint32_t var_18_2 = zx.d(eax_3)
    sub_4dfb20(arg1 - 0x24, ecx_1, nullptr, "AXWIN UI Window", 0xcf0000, nullptr, 0)

*arg2 = *(arg1 - 0x20)
return 0

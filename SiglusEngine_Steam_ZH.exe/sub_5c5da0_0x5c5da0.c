// 函数: sub_5c5da0
// 地址: 0x5c5da0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    return 0x80004003

if (*(arg1 - 0x20) == 0)
    int32_t* var_14_1 = arg2
    int16_t eax_3
    void* ecx_1
    eax_3, ecx_1 = sub_5cc5a0(0xb8fff8, arg1 - 4)
    uint32_t var_18_2 = zx.d(eax_3)
    sub_5cc8e0(arg1 - 0x24, ecx_1, nullptr, u"AXWIN Frame Window", 0xcf0000, nullptr, 0)

*arg2 = *(arg1 - 0x20)
return 0

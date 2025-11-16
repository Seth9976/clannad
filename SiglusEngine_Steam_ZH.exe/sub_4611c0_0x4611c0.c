// 函数: sub_4611c0
// 地址: 0x4611c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x40)

if (eax == 0)
    int32_t var_8_3 = 0xe
    sub_460651(arg1)
    int32_t var_8_4 = 0x12
    sub_460651(arg1)
    int32_t var_8_5 = 0x12
    sub_460651(arg1)
    int32_t var_8_6 = 0x12
    sub_460651(arg1)
    int32_t var_8_7 = 0xf
    sub_460651(arg1)
    int32_t var_8_8 = 0xb
    sub_460651(arg1)
else if (eax == 1)
    int32_t eax_3 = *(arg1 + 0x58)
    
    if (eax_3 == 0)
        return 0x8876038f
    
    sub_460f5b(arg1, eax_3)
    sub_460594(arg1, "[...]")
    *(arg1 + 0x58) -= 1
    sub_460f5b(arg1, *(arg1 + 0x58))
    sub_460594(arg1, U"}")

return 0

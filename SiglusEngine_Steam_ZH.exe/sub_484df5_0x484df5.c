// 函数: sub_484df5
// 地址: 0x484df5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x40)

if (eax == 0)
    sub_482812(arg1)
    sub_4827e1(arg1)
    int32_t var_8_2 = 0xb
    sub_460651(arg1)
else if (eax == 1)
    int32_t eax_3 = *(arg1 + 0x58)
    
    if (eax_3 == 0)
        return 0x8876038f
    
    *(arg1 + 0x58) = eax_3 - 1
    sub_460f5b(arg1, eax_3 - 1)
    sub_460594(arg1, U"}")

return 0

// 函数: sub_435387
// 地址: 0x435387
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi

if (arg3 == 0)
    return 0x8876086c

int32_t eax_1 = sub_433f9c(arg1, arg2, 1)

if (eax_1 != 0)
    int32_t* ecx_5 = *(*(eax_1 + 4) + 0x40) + *(arg1 + 0x344) + *(eax_1 + 0x18)
    
    if ((ecx_5[4] == 0 || *(eax_1 + 0x10) != 0xffffffff) && ecx_5[1] == 4 && *ecx_5 == 4)
        *arg3 = *(*(*(eax_1 + 0x1c) + 8) + 0x18)
        return 0

return 0x8876086c

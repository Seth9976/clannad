// 函数: sub_4b34ca
// 地址: 0x4b34ca
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
int32_t eax = *(arg2 + 4)

if (eax == arg1[0x20] || eax == arg1[0x21])
    void* eax_3 = sub_4d2a05(&data_b59330, (*(*arg1 + 0x54))(*(arg2 + 0x6c)))
    
    if (*(eax_3 + 0x10) != 0xffffffff)
        int32_t var_14_5 = (*(*arg1 + 0x58))(*(arg2 + 0x6c))
        int32_t var_18_1 = *eax_3
        int32_t var_1c_1 = **(arg1[4] + (*(arg2 + 4) << 2))
        int32_t result = sub_74aa1b(arg3, arg4, "%s%s%u")
        arg3[arg4 - 1] = 0
        return result

return sub_4a406e(arg1, arg2, arg3, arg4)

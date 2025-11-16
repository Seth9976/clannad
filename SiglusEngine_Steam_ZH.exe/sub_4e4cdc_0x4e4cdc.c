// 函数: sub_4e4cdc
// 地址: 0x4e4cdc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg3 + 0x3c)
int32_t esi = *(eax + (arg1 << 2))
int32_t eax_1 = *(eax + (arg2 << 2))
int32_t ecx_2 = *(arg3 + 0x2c)
int32_t edi
int32_t var_c = edi

if (*(ecx_2 + (esi << 2)) u<= *(ecx_2 + (eax_1 << 2)))
    int32_t edx_1 = *(arg3 + 0x2c)
    
    if (*(edx_1 + (esi << 2)) u< *(edx_1 + (eax_1 << 2)))
        return 1
    
    bool c_1 = eax_1 u< esi
    
    if (eax_1 == esi || c_1)
        return neg.d(sbb.d(eax_1, eax_1, c_1))

return 0xffffffff

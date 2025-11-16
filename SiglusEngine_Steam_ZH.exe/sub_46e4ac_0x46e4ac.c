// 函数: sub_46e4ac
// 地址: 0x46e4ac
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg3 + 0x18)
int32_t ecx_2 = *(*(arg3 + 8) + 0x14)
int32_t edi
int32_t var_10 = edi
void* edx_1 = *(ecx_2 + (*(eax + (arg1 << 2)) << 2))
void* ecx_3 = *(ecx_2 + (*(eax + (arg2 << 2)) << 2))
int32_t eax_2 = *(edx_1 + 0x6c)
int32_t esi = *(ecx_3 + 0x6c)

if (eax_2 u>= esi)
    if (eax_2 u> esi)
        return 1
    
    int32_t edx_2 = *(edx_1 + 0x10)
    int32_t ecx_4 = *(ecx_3 + 0x10)
    
    if (edx_2 u>= ecx_4)
        if (edx_2 u> ecx_4)
            return 1
        
        bool c_1 = arg2 u< arg1
        
        if (arg2 == arg1 || c_1)
            return neg.d(sbb.d(eax_2, eax_2, c_1))

return 0xffffffff

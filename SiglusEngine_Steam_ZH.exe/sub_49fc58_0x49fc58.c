// 函数: sub_49fc58
// 地址: 0x49fc58
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(*(arg1 + 0xbc) + 0x58)
void* ecx_1 = eax + arg3 * 0xc
void* eax_1 = eax + arg2 * 0xc
int32_t edx_1 = *(ecx_1 + 4)
int32_t esi = *(eax_1 + 4)

if (edx_1 u>= esi)
    if (edx_1 u> esi)
        return 1
    
    int32_t ecx_2 = *(ecx_1 + 8)
    int32_t eax_4 = *(eax_1 + 8)
    
    if (ecx_2 s>= eax_4)
        int32_t result
        result.b = ecx_2 s> eax_4
        return result

return 0xffffffff

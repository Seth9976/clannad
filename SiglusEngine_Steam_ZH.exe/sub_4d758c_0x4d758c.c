// 函数: sub_4d758c
// 地址: 0x4d758c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi_1 = arg2 | arg3
int32_t edi
int32_t var_c = edi
int32_t result = __endthreadex(esi_1)

if (result s< 0)
    return result

if ((esi_1 & 0x2000) != 0)
    void* ecx_1 = *(*(arg1 + 0x14) + (arg4 << 2))
    int32_t ecx_2 = *(ecx_1 + 0x10)
    int32_t eax_3 = (*(ecx_1 + 0xc) & 0x7ff) | 0xb0000000
    
    if (ecx_2 != 0)
        if (ecx_2 == 1)
            eax_3 |= 0x550000
        else if (ecx_2 == 2)
            eax_3 |= 0xaa0000
        else if (ecx_2 == 3)
            eax_3 |= 0xff0000
    
    __endthreadex(eax_3)

return 0

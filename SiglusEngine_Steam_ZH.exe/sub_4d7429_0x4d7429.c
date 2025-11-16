// 函数: sub_4d7429
// 地址: 0x4d7429
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t edi
int32_t var_10 = edi

if ((*(arg1 + 0xcc) & 1) != 0 && *(arg1 + 0x124) != 0)
    int32_t eax_1 = *(arg1 + 0x12c)
    
    if (*(arg1 + 0x128) u>= eax_1)
        int32_t eax_4 = sub_745f3f(eax_1 * 0x30)
        
        if (eax_4 == 0)
            return 0x8007000e
        
        int32_t ecx_2 = *(arg1 + 0x128) * 0x18
        int32_t esi_2
        int32_t edi_2
        edi_2, esi_2 = __builtin_memcpy(eax_4, *(arg1 + 0x124), ecx_2 u>> 2 << 2)
        __builtin_memcpy(edi_2, esi_2, ecx_2 & 3)
        j__free(*(arg1 + 0x124))
        *(arg1 + 0x12c) <<= 1
        *(arg1 + 0x124) = eax_4
    
    *(*(arg1 + 0x124) + *(arg1 + 0x128) * 0x18) = *(arg1 + 0x104)
    *(*(arg1 + 0x124) + *(arg1 + 0x128) * 0x18 + 4) = *(arg1 + 0x110) << 2
    
    for (int32_t i = 0; i u< 4; i += 1)
        *(*(arg1 + 0x124) + ((i + *(arg1 + 0x128) * 6) << 2) + 8) = 0xffffffff
    
    *(arg1 + 0x128) += 1

*(arg1 + 0x118) = *(arg1 + 0x110)
sub_4d546f(arg1, arg2)
return 0

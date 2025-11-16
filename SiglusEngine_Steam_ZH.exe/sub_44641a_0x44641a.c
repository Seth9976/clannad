// 函数: sub_44641a
// 地址: 0x44641a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t eax = *(arg1 + 0x3c)
int32_t edi
int32_t var_14 = edi

if (eax != 4 && eax == 3)
    int32_t eax_1 = *(arg1 + 0xd0)
    
    if (eax_1 != *(arg1 + 0xd4))
    label_4464cc:
        int32_t ecx_12 = *(arg1 + 0xd0)
        int32_t edx_2 = *(arg1 + 0xd8)
        int32_t esi_5 = *(arg1 + 0xf8)
        *(arg1 + 0x3c) = 0
        *(edx_2 + (ecx_12 << 2)) = esi_5
        *(arg1 + 0xf8) = 0
        int32_t* eax_8 = sub_745f3f(0x28)
        
        if (eax_8 == 0)
            eax_8 = nullptr
        else
            eax_8[2] = 0xffffffff
            eax_8[9] = 0
            eax_8[8] = 0
            *eax_8 = 0
            eax_8[1] = 0
        
        if (eax_8 != 0)
            eax_8[4] = 4
            eax_8[5] = *(arg1 + 0xd0)
            eax_8[9] = *(arg1 + 0xdc)
            *(arg1 + 0xd0) += 1
            *(arg1 + 0xdc) = eax_8
            return not.d(eax_8)
    else
        int32_t esi_2 = (eax_1 * 2 + 1) << 2
        void* edx_1 = sub_745f3f(esi_2)
        
        if (edx_1 != 0)
            __builtin_memset(__builtin_memset(edx_1, 0, esi_2 u>> 2 << 2), 0, esi_2 & 3)
            int32_t ecx_7 = *(arg1 + 0xd0) << 2
            int32_t esi_4
            int32_t edi_4
            edi_4, esi_4 = __builtin_memcpy(edx_1, *(arg1 + 0xd8), ecx_7 u>> 2 << 2)
            __builtin_memcpy(edi_4, esi_4, ecx_7 & 3)
            int32_t eax_5 = *(arg1 + 0xd8)
            
            if (eax_5 != 0)
                j__free(eax_5)
                *(arg1 + 0xd8) = 0
            
            *(arg1 + 0xd8) = edx_1
            *(arg1 + 0xd4) = eax_1 * 2 + 1
            goto label_4464cc

return 0

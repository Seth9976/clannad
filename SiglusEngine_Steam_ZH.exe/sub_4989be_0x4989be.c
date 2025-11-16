// 函数: sub_4989be
// 地址: 0x4989be
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* entry_ebx
int32_t* result_2 = entry_ebx[9]
int32_t* result_4 = result_2
int32_t edi
int32_t var_18 = edi
int32_t* result

do
    int32_t ecx_1 = entry_ebx[0x19]
    int32_t esi_1 = entry_ebx[0x1b]
    int32_t eax_2 = entry_ebx[0xd] - ecx_1
    result = eax_2 - esi_1
    
    if (eax_2 == esi_1)
        if (ecx_1 != 0 || esi_1 != 0)
            goto label_498a00
        
        result = result_2
    else if (result != 0xffffffff)
    label_498a00:
        
        if (ecx_1 u>= result_2 + entry_ebx[9] - 0x106)
            void* edi_1 = entry_ebx[0xc]
            int32_t esi_5
            int32_t edi_2
            edi_2, esi_5 = __builtin_memcpy(edi_1, edi_1 + result_2, result_2 u>> 2 << 2)
            __builtin_memcpy(edi_2, esi_5, result_2 & 3)
            int32_t i_2 = entry_ebx[0x11]
            int32_t eax_4 = entry_ebx[0xf]
            entry_ebx[0x1a] -= result_2
            entry_ebx[0x19] -= result_2
            entry_ebx[0x15] -= result_2
            int16_t* eax_5 = eax_4 + (i_2 << 1)
            int32_t i
            
            do
                eax_5 -= 2
                uint32_t esi_6 = zx.d(*eax_5)
                i = i_2
                i_2 -= 1
                *eax_5 = (not.d(sbb.d(esi_6, esi_6, esi_6 u< result_2))).w & (esi_6.w - result_2.w)
            while (i != 1)
            int32_t* i_3 = result_2
            int16_t* eax_8 = entry_ebx[0xe] + (result_2 << 1)
            int32_t* i_1
            
            do
                eax_8 -= 2
                uint32_t ecx_6 = zx.d(*eax_8)
                i_1 = i_3
                i_3 -= 1
                *eax_8 = (not.d(sbb.d(ecx_6, ecx_6, ecx_6 u< result_2))).w & (ecx_6.w - result_2.w)
            while (i_1 != 1)
            result += result_2
    else
        result = 0xfffffffe
    
    int32_t* result_3 = *entry_ebx
    
    if (result_3[1] == 0)
        break
    
    int32_t* result_5 = result_3[1]
    int32_t edi_9 = entry_ebx[0x1b] + entry_ebx[0x19] + entry_ebx[0xc]
    int32_t* result_1 = result_5
    
    if (result_5 u> result)
        result_1 = result
    
    int32_t* result_6
    
    if (result_1 != 0)
        void* eax_11 = result_3[7]
        result_3[1] = result_5 - result_1
        
        if (*(eax_11 + 0x18) == 0)
            result_2 = result_4
            result_3[0xc] = sub_4e2ce8(result_3[0xc], *result_3, result_1)
        
        int32_t esi_11
        int32_t edi_10
        edi_10, esi_11 = __builtin_memcpy(edi_9, *result_3, result_1 u>> 2 << 2)
        __builtin_memcpy(edi_10, esi_11, result_1 & 3)
        result_6 = result_1
        result = result_3
        *result += result_6
        result[2] += result_6
    else
        result_6 = nullptr
    
    entry_ebx[0x1b] += result_6
    int32_t edi_11 = entry_ebx[0x1b]
    
    if (edi_11 u>= 3)
        char* esi_12 = entry_ebx[0x19] + entry_ebx[0xc]
        uint32_t eax_15 = zx.d(*esi_12)
        char ecx_16 = (entry_ebx[0x14]).b
        entry_ebx[0x10] = eax_15
        result = (eax_15 << ecx_16 ^ zx.d(esi_12[1])) & entry_ebx[0x13]
        entry_ebx[0x10] = result
    
    if (edi_11 u>= 0x106)
        break
    
    result = *entry_ebx
while (result[1] != 0)

return result

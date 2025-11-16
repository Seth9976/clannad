// 函数: __wcsnicmp_l
// 地址: 0x75d590
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t result = 0

if (arg3 != 0)
    int16_t* ebx_1 = arg1
    int16_t* edi_1
    
    if (ebx_1 != 0)
        edi_1 = arg2
    
    if (ebx_1 == 0 || edi_1 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0x7fffffff
    
    void* var_18
    sub_7470a1(&var_18, arg4)
    int16_t eax_7
    int16_t esi
    
    if (*(var_18 + 0xa8) != 0)
        do
            esi = sub_75f275(*ebx_1, &var_18)
            eax_7 = sub_75f275(*edi_1, &var_18)
            int32_t temp0_1 = arg3
            arg3 -= 1
            ebx_1 = &ebx_1[1]
            edi_1 = &edi_1[1]
            
            if (temp0_1 == 1)
                break
            
            if (esi == 0)
                break
        while (esi == eax_7)
    else
        int32_t ecx_2 = arg3
        int16_t* ebx_2 = ebx_1 - edi_1
        int32_t var_8_1 = 0x5a
        
        do
            int16_t eax_4 = *(ebx_2 + edi_1)
            
            if (eax_4 u< 0x41 || eax_4 u> 0x5a)
                esi = eax_4
            else
                esi = eax_4 + 0x20
            
            eax_7 = *edi_1
            
            if (eax_7 u>= 0x41 && eax_7 u<= 0x5a)
                eax_7 += 0x20
            
            edi_1 = &edi_1[1]
            int32_t temp1_1 = ecx_2
            ecx_2 -= 1
            
            if (temp1_1 == 1)
                break
            
            if (esi == 0)
                break
        while (esi == eax_7)
    
    result = zx.d(esi) - zx.d(eax_7)
    char var_c
    void* var_10
    
    if (var_c != 0)
        *(var_10 + 0x70) &= 0xfffffffd

return result

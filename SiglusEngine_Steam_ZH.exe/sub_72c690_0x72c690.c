// 函数: sub_72c690
// 地址: 0x72c690
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
int32_t i_1 = 0

if (arg1[0x4c] s> 0)
    void* ecx = &arg1[0x4d]
    void* var_c_1 = ecx
    
    do
        void* edx_1 = *ecx
        
        if (*(edx_1 + 0x50) == 0)
            int32_t esi_1 = *(edx_1 + 0x10)
            
            if (esi_1 u> 3 || arg1[esi_1 + 0x24] == 0)
                *(*arg1 + 0x14) = 0x36
                *(*arg1 + 0x18) = esi_1
                (**arg1)(arg1)
            
            int32_t eax_6 = (*arg1[1])(arg1, 1, 0x82)
            int16_t* esi_3
            int16_t* edi_2
            edi_2, esi_3 = __builtin_memcpy(eax_6, arg1[esi_1 + 0x24], 0x80)
            *edi_2 = *esi_3
            *(edx_1 + 0x50) = eax_6
            i = i_1
            ecx = var_c_1
        
        i += 1
        ecx += 4
        i_1 = i
        var_c_1 = ecx
    while (i s< arg1[0x4c])

return i

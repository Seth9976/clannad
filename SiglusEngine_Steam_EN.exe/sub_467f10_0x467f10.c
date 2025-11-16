// 函数: sub_467f10
// 地址: 0x467f10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

sub_467e40()
BOOL result = data_7031bc
int32_t i_3 = result * 2
int32_t i_2 = i_3

if (i_3 s> 0)
    void* ebx_1 = &data_d08980
    int32_t esi_1 = 0
    void* var_18_1 = &data_d08980
    int32_t var_14_1 = 0
    int32_t i_1 = i_3
    int32_t i
    
    do
        sub_4d1c30(result, esi_1 + &data_72d6b0, esi_1 + &data_b73f04, 0x650)
        sub_4d1c30(result, ebx_1 - 0x37ca7c, ebx_1 - 0x27c, 0x7a0)
        sub_4631a0(ebx_1 - 0x25c)
        int32_t eax = *(ebx_1 - 0x37ca7c)
        
        if (eax s>= 0)
            if (*(esi_1 + &data_72d6bc) != 2)
                if (eax u<= 0x1ff)
                    *(eax * 0x74 + &data_13747ac) += 1
            else if (eax u<= 0xff)
                *(eax * 0x58 + &data_1b164b4) += 1
        
        int32_t eax_5 = *(ebx_1 - 0x37ca78)
        
        if (eax_5 s>= 0 && eax_5 u<= 0x1ff)
            *(eax_5 * 0x6c + &data_1382f88) += 1
        
        int32_t eax_8 = *(ebx_1 - 0x37ca68)
        
        if (eax_8 s>= 0 && eax_8 u<= 0x1ff)
            *(eax_8 * 0x74 + &data_13747ac) += 1
        
        int32_t eax_11 = *(ebx_1 - 0x37ca64)
        
        if (eax_11 s>= 0 && eax_11 u<= 0x1ff)
            *(eax_11 * 0x74 + &data_13747ac) += 1
        
        result = *(ebx_1 - 0x37ca60)
        
        if (result s>= 0 && result u<= 0x1ff)
            result = result * 0x74 + &data_1374760
            *(result + 0x4c) += 1
        
        char* ecx_4 = *(ebx_1 - 0x37ca44)
        char* var_10_1 = ecx_4
        
        if (ecx_4 != 0)
            int32_t esi_2 = 0
            char* eax_15 = ecx_4
            
            if (*ecx_4 != 0)
                do
                    ecx_4.b = *eax_15
                    
                    if (ecx_4.b u< 0x80)
                        esi_2 += 1
                        eax_15 = &eax_15[1]
                    else if (ecx_4.b u< 0xa0)
                        if (ecx_4.b u>= 0xfe)
                            esi_2 += 1
                            eax_15 = &eax_15[1]
                        else
                            esi_2 += 2
                            eax_15 = &eax_15[2]
                    else if (ecx_4.b u<= 0xdf || ecx_4.b u>= 0xfe)
                        esi_2 += 1
                        eax_15 = &eax_15[1]
                    else
                        esi_2 += 2
                        eax_15 = &eax_15[2]
                while (*eax_15 != 0)
            
            result = sub_4d6960(eax_15, ebx_1 - 0x244, ebx_1 - 0x248, esi_2 + 1, "objmoji04")
            sub_4d1c30(result, var_10_1, *(ebx_1 - 0x244), esi_2 + 1)
            i_1 = i_2
        
        int32_t j_2 = *(ebx_1 - 0x37c808)
        
        if (*(ebx_1 - 0x37c800) != 0 && j_2 s> 0)
            uint32_t edi = j_2 * 0x7d8
            result = sub_4d6960(result, ebx_1, ebx_1 - 4, edi, "CHILD")
            int32_t ecx_8 = *ebx_1
            *(ebx_1 - 8) = j_2
            
            if (ecx_8 != 0)
                sub_4d1c30(result, *(ebx_1 - 0x37c800), ecx_8, edi)
                void* edi_1 = *ebx_1
                result = *(ebx_1 - 0x37c800)
                void* var_10_2 = edi_1
                
                if (j_2 s> 0)
                    int32_t j_1 = j_2
                    void* esi_4 = edi_1 + 0x20
                    void* var_c_1 = result + 0x1c
                    int32_t j
                    
                    do
                        *(esi_4 - 4) = 0
                        *(esi_4 - 8) = 0
                        __builtin_memset(esi_4, 0, 0x18)
                        sub_4d6c40(esi_4 - 8, esi_4 - 4)
                        int32_t* ecx_10 = var_c_1
                        char* eax_17 = *ecx_10
                        
                        if (eax_17 != 0)
                            uint32_t eax_18 = sub_4cfc80(eax_17)
                            sub_4d1c30(
                                sub_4d6960(eax_18, esi_4 - 4, esi_4 - 8, eax_18, "objmoji05"), 
                                eax_17, *(esi_4 - 4), eax_18)
                            edi_1 = var_10_2
                            ecx_10 = var_c_1
                        
                        int32_t eax_20 = *edi_1
                        
                        if (eax_20 s>= 0 && eax_20 u<= 0x1ff)
                            *(eax_20 * 0x74 + &data_13747ac) += 1
                        
                        result = *(esi_4 - 0x1c)
                        
                        if (result s>= 0 && result u<= 0x1ff)
                            result = result * 0x6c + &data_1382f60
                            *(result + 0x28) += 1
                        
                        edi_1 += 0x7d8
                        esi_4 += 0x7d8
                        var_c_1 = &ecx_10[0x1f6]
                        var_10_2 = edi_1
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                    ebx_1 = var_18_1
            
            i_1 = i_2
        
        ebx_1 += 0x7a0
        esi_1 = var_14_1 + 0x650
        var_18_1 = ebx_1
        i = i_1
        i_1 -= 1
        var_14_1 = esi_1
        i_2 = i_1
    while (i != 1)

return result

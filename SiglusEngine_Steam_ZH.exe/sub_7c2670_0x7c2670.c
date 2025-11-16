// 函数: sub_7c2670
// 地址: 0x7c2670
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_134
char* edi = var_134
char* var_124
char* esi_1 = var_124
int32_t i_2
int32_t i_1 = i_2
void* result
int32_t i

do
    int32_t j_2
    int32_t j_1 = j_2
    int32_t var_a8
    int32_t var_a0_1 = var_a8
    int32_t var_bc
    void* result_2
    int32_t j
    
    do
        int32_t ebx_1
        ebx_1.b = esi_1[3]
        
        if (ebx_1 != 0)
            int32_t eax_2
            eax_2.b = *(result_2 + var_a0_1)
            int32_t var_b4
            
            if (var_b4 != 0)
                eax_2.b = not.b(eax_2.b)
            
            char var_b0
            int32_t var_ac
            int32_t eax_4 = (eax_2 << var_b0) + var_ac
            
            if (eax_4 s< 0)
                eax_4 = 0
            else if (eax_4 s> 0xff)
                eax_4 = 0xff
            
            if (eax_4 != 0)
                int32_t ebx_12 = *(*((eax_4 << 2) + &data_4e3da80) + (ebx_1 << 2))
                
                if (ebx_12 != 0)
                    int32_t edx_2 = *((ebx_12 << 2) + &data_4e3da80)
                    int32_t ebx_16
                    ebx_16.b = esi_1[2]
                    int32_t eax_5
                    eax_5.b = not.b(ebx_16.b)
                    int32_t var_d0
                    int32_t eax_6 = eax_5 + *(((ebx_16 - eax_5) << 2) + var_d0)
                    int32_t var_88
                    int32_t ebx_21 = eax_6 + var_88
                    int32_t ebx_29
                    
                    if (eax_6 + var_88 s< 0)
                        if (ebx_21 s< 0xffffff01)
                            ebx_21 = 0xffffff01
                        
                        int32_t ebx_32
                        ebx_32.b = edi[2]
                        ebx_29 = *((ebx_32 << 2) + *((ebx_21 << 2) + data_4ced578))
                    else
                        if (ebx_21 s> 0xff)
                            ebx_21 = 0xff
                        
                        int32_t ebx_24
                        ebx_24.b = edi[2]
                        ebx_29 = *(((ebx_24 - 0xff) << 2) + *((ebx_21 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_9
                    eax_9.b = edi[2]
                    edi[2] = eax_9.b + (*(((ebx_29 - eax_9) << 2) + edx_2)).b
                    int32_t ebx_38
                    ebx_38.b = esi_1[1]
                    int32_t eax_11
                    eax_11.b = not.b(ebx_38.b)
                    int32_t eax_12 = eax_11 + *(((ebx_38 - eax_11) << 2) + var_d0)
                    int32_t var_84
                    int32_t ebx_43 = eax_12 + var_84
                    int32_t ebx_51
                    
                    if (eax_12 + var_84 s< 0)
                        if (ebx_43 s< 0xffffff01)
                            ebx_43 = 0xffffff01
                        
                        int32_t ebx_54
                        ebx_54.b = edi[1]
                        ebx_51 = *((ebx_54 << 2) + *((ebx_43 << 2) + data_4ced578))
                    else
                        if (ebx_43 s> 0xff)
                            ebx_43 = 0xff
                        
                        int32_t ebx_46
                        ebx_46.b = edi[1]
                        ebx_51 = *(((ebx_46 - 0xff) << 2) + *((ebx_43 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_15
                    eax_15.b = edi[1]
                    edi[1] = eax_15.b + (*(((ebx_51 - eax_15) << 2) + edx_2)).b
                    int32_t ebx_60
                    ebx_60.b = *esi_1
                    int32_t eax_17
                    eax_17.b = not.b(ebx_60.b)
                    int32_t eax_18 = eax_17 + *(((ebx_60 - eax_17) << 2) + var_d0)
                    int32_t var_80
                    int32_t ebx_65 = eax_18 + var_80
                    int32_t ebx_73
                    
                    if (eax_18 + var_80 s< 0)
                        if (ebx_65 s< 0xffffff01)
                            ebx_65 = 0xffffff01
                        
                        int32_t ebx_76
                        ebx_76.b = *edi
                        ebx_73 = *((ebx_76 << 2) + *((ebx_65 << 2) + data_4ced578))
                    else
                        if (ebx_65 s> 0xff)
                            ebx_65 = 0xff
                        
                        int32_t ebx_68
                        ebx_68.b = *edi
                        ebx_73 = *(((ebx_68 - 0xff) << 2) + *((ebx_65 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_21
                    eax_21.b = *edi
                    *edi = eax_21.b + (*(((ebx_73 - eax_21) << 2) + edx_2)).b
        
        int32_t eax_24 = var_a0_1 + 1
        
        if (eax_24 s>= var_bc)
            eax_24 = 0
        
        var_a0_1 = eax_24
        esi_1 = &esi_1[4]
        edi = &edi[4]
        j = j_1
        j_1 -= 1
    while (j != 1)
    result = result_2 + var_bc
    int32_t var_94
    void* result_1
    
    if (result s>= var_94)
        result = result_1
    result_2 = result
    int32_t var_120
    esi_1 = &esi_1[var_120]
    int32_t var_130
    edi = &edi[var_130]
    i = i_1
    i_1 -= 1
while (i != 1)
return result

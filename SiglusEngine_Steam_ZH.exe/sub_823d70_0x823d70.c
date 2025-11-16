// 函数: sub_823d70
// 地址: 0x823d70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_134
char* edi = var_134
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
        char* var_124
        int32_t ebx_1
        ebx_1.b = var_124[3]
        
        if (ebx_1 != 0)
            int32_t var_11c
            int32_t ebx_7 = *(*((ebx_1 << 2) + &data_4e3da80) + var_11c)
            
            if (ebx_7 != 0)
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
                    int32_t ebx_18 = *(*((eax_4 << 2) + &data_4e3da80) + (ebx_7 << 2))
                    
                    if (ebx_18 != 0)
                        int32_t edx_2 = *((ebx_18 << 2) + &data_4e3da80)
                        int32_t ebx_22
                        ebx_22.b = var_124[2]
                        int32_t eax_5
                        eax_5.b = not.b(ebx_22.b)
                        int32_t var_f8
                        int32_t var_ec
                        int32_t var_d0
                        int32_t eax_8 = var_f8 + *(((eax_5 + *(((ebx_22 - eax_5) << 2) + var_d0)
                            - var_f8) << 2) + var_ec)
                        int32_t var_88
                        int32_t ebx_31 = eax_8 + var_88
                        int32_t ebx_39
                        
                        if (eax_8 + var_88 s< 0)
                            if (ebx_31 s< 0xffffff01)
                                ebx_31 = 0xffffff01
                            
                            int32_t ebx_42
                            ebx_42.b = edi[2]
                            ebx_39 = *((ebx_42 << 2) + *((ebx_31 << 2) + data_4ced578))
                        else
                            if (ebx_31 s> 0xff)
                                ebx_31 = 0xff
                            
                            int32_t ebx_34
                            ebx_34.b = edi[2]
                            ebx_39 =
                                *(((ebx_34 - 0xff) << 2) + *((ebx_31 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_11
                        eax_11.b = edi[2]
                        edi[2] = eax_11.b + (*(((ebx_39 - eax_11) << 2) + edx_2)).b
                        int32_t ebx_48
                        ebx_48.b = var_124[1]
                        int32_t eax_13
                        eax_13.b = not.b(ebx_48.b)
                        int32_t var_f4
                        int32_t var_e8
                        int32_t eax_16 = var_f4 + *(((eax_13 + *(((ebx_48 - eax_13) << 2) + var_d0)
                            - var_f4) << 2) + var_e8)
                        int32_t var_84
                        int32_t ebx_57 = eax_16 + var_84
                        int32_t ebx_65
                        
                        if (eax_16 + var_84 s< 0)
                            if (ebx_57 s< 0xffffff01)
                                ebx_57 = 0xffffff01
                            
                            int32_t ebx_68
                            ebx_68.b = edi[1]
                            ebx_65 = *((ebx_68 << 2) + *((ebx_57 << 2) + data_4ced578))
                        else
                            if (ebx_57 s> 0xff)
                                ebx_57 = 0xff
                            
                            int32_t ebx_60
                            ebx_60.b = edi[1]
                            ebx_65 =
                                *(((ebx_60 - 0xff) << 2) + *((ebx_57 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_19
                        eax_19.b = edi[1]
                        edi[1] = eax_19.b + (*(((ebx_65 - eax_19) << 2) + edx_2)).b
                        int32_t ebx_74
                        ebx_74.b = *var_124
                        int32_t eax_21
                        eax_21.b = not.b(ebx_74.b)
                        int32_t var_f0
                        int32_t var_e4
                        int32_t eax_24 = var_f0 + *(((eax_21 + *(((ebx_74 - eax_21) << 2) + var_d0)
                            - var_f0) << 2) + var_e4)
                        int32_t var_80
                        int32_t ebx_83 = eax_24 + var_80
                        int32_t ebx_91
                        
                        if (eax_24 + var_80 s< 0)
                            if (ebx_83 s< 0xffffff01)
                                ebx_83 = 0xffffff01
                            
                            int32_t ebx_94
                            ebx_94.b = *edi
                            ebx_91 = *((ebx_94 << 2) + *((ebx_83 << 2) + data_4ced578))
                        else
                            if (ebx_83 s> 0xff)
                                ebx_83 = 0xff
                            
                            int32_t ebx_86
                            ebx_86.b = *edi
                            ebx_91 =
                                *(((ebx_86 - 0xff) << 2) + *((ebx_83 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_27
                        eax_27.b = *edi
                        *edi = eax_27.b + (*(((ebx_91 - eax_27) << 2) + edx_2)).b
        
        int32_t eax_30 = var_a0_1 + 1
        
        if (eax_30 s>= var_bc)
            eax_30 = 0
        
        var_a0_1 = eax_30
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
    int32_t var_130
    edi = &edi[var_130]
    i = i_1
    i_1 -= 1
while (i != 1)
return result

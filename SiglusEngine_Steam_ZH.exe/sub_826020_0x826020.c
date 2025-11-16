// 函数: sub_826020
// 地址: 0x826020
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
                        int32_t var_88
                        int32_t ebx_23 = ebx_22 + var_88
                        int32_t ebx_31
                        
                        if (ebx_22 + var_88 s< 0)
                            if (ebx_23 s< 0xffffff01)
                                ebx_23 = 0xffffff01
                            
                            int32_t ebx_34
                            ebx_34.b = edi[2]
                            ebx_31 = *((ebx_34 << 2) + *((ebx_23 << 2) + data_4ced578))
                        else
                            if (ebx_23 s> 0xff)
                                ebx_23 = 0xff
                            
                            int32_t ebx_26
                            ebx_26.b = edi[2]
                            ebx_31 =
                                *(((ebx_26 - 0xff) << 2) + *((ebx_23 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_7
                        eax_7.b = edi[2]
                        edi[2] = eax_7.b + (*(((ebx_31 - eax_7) << 2) + edx_2)).b
                        int32_t ebx_40
                        ebx_40.b = var_124[1]
                        int32_t var_84
                        int32_t ebx_41 = ebx_40 + var_84
                        int32_t ebx_49
                        
                        if (ebx_40 + var_84 s< 0)
                            if (ebx_41 s< 0xffffff01)
                                ebx_41 = 0xffffff01
                            
                            int32_t ebx_52
                            ebx_52.b = edi[1]
                            ebx_49 = *((ebx_52 << 2) + *((ebx_41 << 2) + data_4ced578))
                        else
                            if (ebx_41 s> 0xff)
                                ebx_41 = 0xff
                            
                            int32_t ebx_44
                            ebx_44.b = edi[1]
                            ebx_49 =
                                *(((ebx_44 - 0xff) << 2) + *((ebx_41 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_11
                        eax_11.b = edi[1]
                        edi[1] = eax_11.b + (*(((ebx_49 - eax_11) << 2) + edx_2)).b
                        int32_t ebx_58
                        ebx_58.b = *var_124
                        int32_t var_80
                        int32_t ebx_59 = ebx_58 + var_80
                        int32_t ebx_67
                        
                        if (ebx_58 + var_80 s< 0)
                            if (ebx_59 s< 0xffffff01)
                                ebx_59 = 0xffffff01
                            
                            int32_t ebx_70
                            ebx_70.b = *edi
                            ebx_67 = *((ebx_70 << 2) + *((ebx_59 << 2) + data_4ced578))
                        else
                            if (ebx_59 s> 0xff)
                                ebx_59 = 0xff
                            
                            int32_t ebx_62
                            ebx_62.b = *edi
                            ebx_67 =
                                *(((ebx_62 - 0xff) << 2) + *((ebx_59 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_15
                        eax_15.b = *edi
                        *edi = eax_15.b + (*(((ebx_67 - eax_15) << 2) + edx_2)).b
        
        int32_t eax_18 = var_a0_1 + 1
        
        if (eax_18 s>= var_bc)
            eax_18 = 0
        
        var_a0_1 = eax_18
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

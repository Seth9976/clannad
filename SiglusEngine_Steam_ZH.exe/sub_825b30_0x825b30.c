// 函数: sub_825b30
// 地址: 0x825b30
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
                    ebx_16.b = var_124[2]
                    int32_t var_88
                    int32_t ebx_17 = ebx_16 + var_88
                    int32_t ebx_25
                    
                    if (ebx_16 + var_88 s< 0)
                        if (ebx_17 s< 0xffffff01)
                            ebx_17 = 0xffffff01
                        
                        int32_t ebx_28
                        ebx_28.b = edi[2]
                        ebx_25 = *((ebx_28 << 2) + *((ebx_17 << 2) + data_4ced578))
                    else
                        if (ebx_17 s> 0xff)
                            ebx_17 = 0xff
                        
                        int32_t ebx_20
                        ebx_20.b = edi[2]
                        ebx_25 = *(((ebx_20 - 0xff) << 2) + *((ebx_17 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_7
                    eax_7.b = edi[2]
                    edi[2] = eax_7.b + (*(((ebx_25 - eax_7) << 2) + edx_2)).b
                    int32_t ebx_34
                    ebx_34.b = var_124[1]
                    int32_t var_84
                    int32_t ebx_35 = ebx_34 + var_84
                    int32_t ebx_43
                    
                    if (ebx_34 + var_84 s< 0)
                        if (ebx_35 s< 0xffffff01)
                            ebx_35 = 0xffffff01
                        
                        int32_t ebx_46
                        ebx_46.b = edi[1]
                        ebx_43 = *((ebx_46 << 2) + *((ebx_35 << 2) + data_4ced578))
                    else
                        if (ebx_35 s> 0xff)
                            ebx_35 = 0xff
                        
                        int32_t ebx_38
                        ebx_38.b = edi[1]
                        ebx_43 = *(((ebx_38 - 0xff) << 2) + *((ebx_35 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_11
                    eax_11.b = edi[1]
                    edi[1] = eax_11.b + (*(((ebx_43 - eax_11) << 2) + edx_2)).b
                    int32_t ebx_52
                    ebx_52.b = *var_124
                    int32_t var_80
                    int32_t ebx_53 = ebx_52 + var_80
                    int32_t ebx_61
                    
                    if (ebx_52 + var_80 s< 0)
                        if (ebx_53 s< 0xffffff01)
                            ebx_53 = 0xffffff01
                        
                        int32_t ebx_64
                        ebx_64.b = *edi
                        ebx_61 = *((ebx_64 << 2) + *((ebx_53 << 2) + data_4ced578))
                    else
                        if (ebx_53 s> 0xff)
                            ebx_53 = 0xff
                        
                        int32_t ebx_56
                        ebx_56.b = *edi
                        ebx_61 = *(((ebx_56 - 0xff) << 2) + *((ebx_53 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_15
                    eax_15.b = *edi
                    *edi = eax_15.b + (*(((ebx_61 - eax_15) << 2) + edx_2)).b
        
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

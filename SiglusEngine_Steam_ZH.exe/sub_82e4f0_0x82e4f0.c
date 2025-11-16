// 函数: sub_82e4f0
// 地址: 0x82e4f0
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
                    int32_t eax_5
                    eax_5.b = var_124[2]
                    int32_t eax_7
                    eax_7.b = var_124[1]
                    int32_t eax_9
                    eax_9.b = *var_124
                    uint32_t edx_6 = (*(&data_4e3d680 + (eax_5 << 2))
                        + *(&data_4e3e280 + (eax_7 << 2)) + *(&data_4e3de80 + (eax_9 << 2))) u>> 8
                    int32_t var_cc
                    int32_t eax_11 = *(&data_4e3da80 + var_cc)
                    int32_t ebx_20
                    ebx_20.b = var_124[2]
                    int32_t eax_18
                    eax_18.b = edi[2]
                    int32_t var_f8
                    int32_t var_ec
                    int32_t var_e0
                    int32_t var_d4
                    int32_t* ebx_34 = ((var_f8 + *(((var_e0
                        + *(((edx_6 + *(((ebx_20 - edx_6) << 2) + eax_11) - var_e0) << 2) + var_d4)
                        - var_f8) << 2) + var_ec)) << 2) + *((eax_18 << 2) + &data_4e3da80)
                    int32_t eax_22
                    eax_22.b = edi[2]
                    edi[2] = eax_22.b + (*(((*ebx_34 - eax_22) << 2) + edx_2)).b
                    int32_t ebx_39
                    ebx_39.b = var_124[1]
                    int32_t eax_30
                    eax_30.b = edi[1]
                    int32_t var_f4
                    int32_t var_e8
                    int32_t var_dc
                    int32_t* ebx_53 = ((var_f4 + *(((var_dc
                        + *(((edx_6 + *(((ebx_39 - edx_6) << 2) + eax_11) - var_dc) << 2) + var_d4)
                        - var_f4) << 2) + var_e8)) << 2) + *((eax_30 << 2) + &data_4e3da80)
                    int32_t eax_34
                    eax_34.b = edi[1]
                    edi[1] = eax_34.b + (*(((*ebx_53 - eax_34) << 2) + edx_2)).b
                    int32_t ebx_58
                    ebx_58.b = *var_124
                    int32_t eax_42
                    eax_42.b = *edi
                    int32_t var_f0
                    int32_t var_e4
                    int32_t var_d8
                    int32_t* ebx_72 = ((var_f0 + *(((var_d8
                        + *(((edx_6 + *(((ebx_58 - edx_6) << 2) + eax_11) - var_d8) << 2) + var_d4)
                        - var_f0) << 2) + var_e4)) << 2) + *((eax_42 << 2) + &data_4e3da80)
                    int32_t eax_46
                    eax_46.b = *edi
                    *edi = eax_46.b + (*(((*ebx_72 - eax_46) << 2) + edx_2)).b
        
        int32_t eax_49 = var_a0_1 + 1
        
        if (eax_49 s>= var_bc)
            eax_49 = 0
        
        var_a0_1 = eax_49
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

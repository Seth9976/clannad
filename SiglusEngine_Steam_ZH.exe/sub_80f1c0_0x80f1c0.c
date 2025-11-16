// 函数: sub_80f1c0
// 地址: 0x80f1c0
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
                    int32_t eax_13 = edx_6 + *(((ebx_20 - edx_6) << 2) + eax_11)
                    int32_t eax_14
                    eax_14.b = not.b(eax_13.b)
                    int32_t eax_18
                    eax_18.b = edi[2]
                    int32_t var_f8
                    int32_t var_ec
                    int32_t var_d0
                    int32_t eax_19 = eax_18 - *((neg.d(var_f8 +
                        *(((eax_14 + *(((eax_13 - eax_14) << 2) + var_d0) - var_f8) << 2) + var_ec)
                        - 0xff) << 2) + edx_2)
                    
                    if (eax_19 s< 0)
                        eax_19 = 0
                    
                    edi[2] = eax_19.b
                    int32_t ebx_38
                    ebx_38.b = var_124[1]
                    int32_t eax_21 = edx_6 + *(((ebx_38 - edx_6) << 2) + eax_11)
                    int32_t eax_22
                    eax_22.b = not.b(eax_21.b)
                    int32_t eax_26
                    eax_26.b = edi[1]
                    int32_t var_f4
                    int32_t var_e8
                    int32_t eax_27 = eax_26 - *((neg.d(var_f4 +
                        *(((eax_22 + *(((eax_21 - eax_22) << 2) + var_d0) - var_f4) << 2) + var_e8)
                        - 0xff) << 2) + edx_2)
                    
                    if (eax_27 s< 0)
                        eax_27 = 0
                    
                    edi[1] = eax_27.b
                    int32_t ebx_56
                    ebx_56.b = *var_124
                    int32_t eax_29 = edx_6 + *(((ebx_56 - edx_6) << 2) + eax_11)
                    int32_t eax_30
                    eax_30.b = not.b(eax_29.b)
                    int32_t eax_34
                    eax_34.b = *edi
                    int32_t var_f0
                    int32_t var_e4
                    int32_t eax_35 = eax_34 - *((neg.d(var_f0 +
                        *(((eax_30 + *(((eax_29 - eax_30) << 2) + var_d0) - var_f0) << 2) + var_e4)
                        - 0xff) << 2) + edx_2)
                    
                    if (eax_35 s< 0)
                        eax_35 = 0
                    
                    *edi = eax_35.b
        
        int32_t eax_37 = var_a0_1 + 1
        
        if (eax_37 s>= var_bc)
            eax_37 = 0
        
        var_a0_1 = eax_37
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

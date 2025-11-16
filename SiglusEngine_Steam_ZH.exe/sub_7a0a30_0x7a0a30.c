// 函数: sub_7a0a30
// 地址: 0x7a0a30
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
                    int32_t eax_5
                    eax_5.b = esi_1[2]
                    int32_t eax_7
                    eax_7.b = esi_1[1]
                    int32_t eax_9
                    eax_9.b = *esi_1
                    uint32_t edx_6 = (*(&data_4e3d680 + (eax_5 << 2))
                        + *(&data_4e3e280 + (eax_7 << 2)) + *(&data_4e3de80 + (eax_9 << 2))) u>> 8
                    int32_t var_cc
                    int32_t eax_11 = *(&data_4e3da80 + var_cc)
                    int32_t ebx_20
                    ebx_20.b = esi_1[2]
                    int32_t eax_13 = edx_6 + *(((ebx_20 - edx_6) << 2) + eax_11)
                    int32_t eax_14
                    eax_14.b = not.b(eax_13.b)
                    int32_t eax_16
                    eax_16.b = edi[2]
                    int32_t var_d0
                    int32_t eax_17 =
                        eax_16 - *(((eax_14 + *(((eax_13 - eax_14) << 2) + var_d0)) << 2) + edx_2)
                    
                    if (eax_17 s< 0)
                        eax_17 = 0
                    
                    edi[2] = eax_17.b
                    int32_t ebx_32
                    ebx_32.b = esi_1[1]
                    int32_t eax_19 = edx_6 + *(((ebx_32 - edx_6) << 2) + eax_11)
                    int32_t eax_20
                    eax_20.b = not.b(eax_19.b)
                    int32_t eax_22
                    eax_22.b = edi[1]
                    int32_t eax_23 =
                        eax_22 - *(((eax_20 + *(((eax_19 - eax_20) << 2) + var_d0)) << 2) + edx_2)
                    
                    if (eax_23 s< 0)
                        eax_23 = 0
                    
                    edi[1] = eax_23.b
                    int32_t ebx_44
                    ebx_44.b = *esi_1
                    int32_t eax_25 = edx_6 + *(((ebx_44 - edx_6) << 2) + eax_11)
                    int32_t eax_26
                    eax_26.b = not.b(eax_25.b)
                    int32_t eax_28
                    eax_28.b = *edi
                    int32_t eax_29 =
                        eax_28 - *(((eax_26 + *(((eax_25 - eax_26) << 2) + var_d0)) << 2) + edx_2)
                    
                    if (eax_29 s< 0)
                        eax_29 = 0
                    
                    *edi = eax_29.b
        
        int32_t eax_31 = var_a0_1 + 1
        
        if (eax_31 s>= var_bc)
            eax_31 = 0
        
        var_a0_1 = eax_31
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

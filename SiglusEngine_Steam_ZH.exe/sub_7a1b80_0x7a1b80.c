// 函数: sub_7a1b80
// 地址: 0x7a1b80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
void* var_134
void* edi = var_134
void* var_124
void* esi_1 = var_124
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
            int32_t var_11c
            int32_t ebx_9 = *(*((eax_4 << 2) + &data_4e3da80) + var_11c)
            
            if (ebx_9 != 0)
                int32_t edx_2 = *((ebx_9 << 2) + &data_4e3da80)
                int32_t ebx_13
                ebx_13.b = *(esi_1 + 2)
                int32_t eax_5
                eax_5.b = not.b(ebx_13.b)
                int32_t var_f8
                int32_t var_ec
                int32_t var_e0
                int32_t var_d4
                int32_t var_d0
                int32_t ebx_28 = *(((var_f8 + *(((var_e0
                    + *(((eax_5 + *(((ebx_13 - eax_5) << 2) + var_d0) - var_e0) << 2) + var_d4)
                    - var_f8) << 2) + var_ec)) << 2) + edx_2)
                int32_t eax_11
                eax_11.b = *(edi + 2)
                int32_t eax_12 = eax_11 - ebx_28
                
                if (eax_12 s< 0)
                    eax_12 = 0
                
                *(edi + 2) = eax_12.b
                int32_t ebx_29
                ebx_29.b = *(esi_1 + 1)
                int32_t eax_13
                eax_13.b = not.b(ebx_29.b)
                int32_t var_f4
                int32_t var_e8
                int32_t var_dc
                int32_t ebx_44 = *(((var_f4 + *(((var_dc
                    + *(((eax_13 + *(((ebx_29 - eax_13) << 2) + var_d0) - var_dc) << 2) + var_d4)
                    - var_f4) << 2) + var_e8)) << 2) + edx_2)
                int32_t eax_19
                eax_19.b = *(edi + 1)
                int32_t eax_20 = eax_19 - ebx_44
                
                if (eax_20 s< 0)
                    eax_20 = 0
                
                *(edi + 1) = eax_20.b
                int32_t ebx_45
                ebx_45.b = *esi_1
                int32_t eax_21
                eax_21.b = not.b(ebx_45.b)
                int32_t var_f0
                int32_t var_e4
                int32_t var_d8
                int32_t ebx_60 = *(((var_f0 + *(((var_d8
                    + *(((eax_21 + *(((ebx_45 - eax_21) << 2) + var_d0) - var_d8) << 2) + var_d4)
                    - var_f0) << 2) + var_e4)) << 2) + edx_2)
                int32_t eax_27
                eax_27.b = *edi
                int32_t eax_28 = eax_27 - ebx_60
                
                if (eax_28 s< 0)
                    eax_28 = 0
                
                *edi = eax_28.b
        
        int32_t eax_30 = var_a0_1 + 1
        
        if (eax_30 s>= var_bc)
            eax_30 = 0
        
        var_a0_1 = eax_30
        esi_1 += 4
        edi += 4
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
    esi_1 += var_120
    int32_t var_130
    edi += var_130
    i = i_1
    i_1 -= 1
while (i != 1)
return result

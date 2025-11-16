// 函数: sub_7850d0
// 地址: 0x7850d0
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
                int32_t eax_5
                eax_5.b = *(esi_1 + 2)
                int32_t eax_7
                eax_7.b = *(esi_1 + 1)
                int32_t eax_9
                eax_9.b = *esi_1
                uint32_t edx_6 = (*(&data_4e3d680 + (eax_5 << 2)) + *(&data_4e3e280 + (eax_7 << 2))
                    + *(&data_4e3de80 + (eax_9 << 2))) u>> 8
                int32_t var_cc
                int32_t eax_11 = *(&data_4e3da80 + var_cc)
                int32_t ebx_17
                ebx_17.b = *(esi_1 + 2)
                int32_t eax_18
                eax_18.b = *(edi + 2)
                int32_t var_f8
                int32_t var_ec
                int32_t var_e0
                int32_t var_d4
                int32_t ebx_32 = ((var_f8 + *(((var_e0
                    + *(((edx_6 + *(((ebx_17 - edx_6) << 2) + eax_11) - var_e0) << 2) + var_d4)
                    - var_f8) << 2) + var_ec) - eax_18) << 2) + edx_2
                *(edi + 2) = eax_18.b + (*ebx_32).b
                int32_t ebx_33
                ebx_33.b = *(esi_1 + 1)
                int32_t eax_26
                eax_26.b = *(edi + 1)
                int32_t var_f4
                int32_t var_e8
                int32_t var_dc
                int32_t ebx_48 = ((var_f4 + *(((var_dc
                    + *(((edx_6 + *(((ebx_33 - edx_6) << 2) + eax_11) - var_dc) << 2) + var_d4)
                    - var_f4) << 2) + var_e8) - eax_26) << 2) + edx_2
                *(edi + 1) = eax_26.b + (*ebx_48).b
                int32_t ebx_49
                ebx_49.b = *esi_1
                int32_t eax_34
                eax_34.b = *edi
                int32_t var_f0
                int32_t var_e4
                int32_t var_d8
                int32_t ebx_64 = ((var_f0 + *(((var_d8
                    + *(((edx_6 + *(((ebx_49 - edx_6) << 2) + eax_11) - var_d8) << 2) + var_d4)
                    - var_f0) << 2) + var_e4) - eax_34) << 2) + edx_2
                *edi = eax_34.b + (*ebx_64).b
        
        int32_t eax_37 = var_a0_1 + 1
        
        if (eax_37 s>= var_bc)
            eax_37 = 0
        
        var_a0_1 = eax_37
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

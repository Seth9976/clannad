// 函数: sub_995bf0
// 地址: 0x995bf0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
int32_t* var_14
int32_t* esi_1 = var_14
char* var_1c
char* edi = var_1c
int32_t i_2
int32_t i_1 = i_2
int32_t result
int32_t i

do
    char* var_98
    char* ebx_1 = var_98
    int32_t eax_1 = *esi_1
    void* esi_2 = &esi_1[1]
    int32_t var_bc
    
    if (eax_1 != 0)
        int32_t var_a0
        int32_t var_90
        int32_t var_c
        
        if (eax_1 s> 0)
            edi = &edi[var_c]
            int32_t eax_5 = var_a0 + 1
            ebx_1 = &ebx_1[1]
            
            if (eax_5 s>= var_bc)
                eax_5 -= var_bc
                ebx_1 -= var_90
            
            var_a0 = eax_5
        else
            edi -= var_c
            int32_t eax_3 = var_a0 - 1
            ebx_1 -= 1
            
            if (eax_3 s<= 0)
                eax_3 += var_bc
                ebx_1 = &ebx_1[var_90]
            
            var_a0 = eax_3
    
    result = *esi_2
    
    if (result != 0)
        int32_t var_b8
        int32_t result_1
        int32_t var_8c
        int32_t var_8
        
        if (result s> 0)
            edi = &edi[var_8]
            result = result_1 + 1
            ebx_1 = &ebx_1[var_bc]
            
            if (result s>= var_b8)
                result -= var_b8
                ebx_1 -= var_8c
            
            result_1 = result
        else
            edi -= var_8
            result = result_1 - 1
            ebx_1 -= var_bc
            
            if (result s<= 0)
                result += var_b8
                ebx_1 = &ebx_1[var_8c]
            
            result_1 = result
    
    var_98 = ebx_1
    int32_t ebx_2
    ebx_2.b = edi[3]
    
    if (ebx_2 != 0)
        int32_t var_11c
        int32_t ebx_8 = *(*((ebx_2 << 2) + &data_4e3da80) + var_11c)
        
        if (ebx_8 != 0)
            int32_t eax_8
            eax_8.b = *var_98
            int32_t var_b4
            
            if (var_b4 != 0)
                eax_8.b = not.b(eax_8.b)
            
            char var_b0
            int32_t var_ac
            result = (eax_8 << var_b0) + var_ac
            
            if (result s< 0)
                result = 0
            else if (result s> 0xff)
                result = 0xff
            
            if (result != 0)
                int32_t ebx_18 = *(*((result << 2) + &data_4e3da80) + (ebx_8 << 2))
                
                if (ebx_18 != 0)
                    int32_t edx_2 = *((ebx_18 << 2) + &data_4e3da80)
                    int32_t eax_10
                    eax_10.b = edi[2]
                    int32_t eax_12
                    eax_12.b = edi[1]
                    int32_t eax_14
                    eax_14.b = *edi
                    uint32_t edx_6 = (*(&data_4e3d680 + (eax_10 << 2))
                        + *(&data_4e3e280 + (eax_12 << 2)) + *(&data_4e3de80 + (eax_14 << 2))) u>> 8
                    int32_t var_cc
                    int32_t eax_16 = *(&data_4e3da80 + var_cc)
                    int32_t ebx_26
                    ebx_26.b = edi[2]
                    int32_t eax_23
                    eax_23.b = edi[2]
                    int32_t var_f8
                    int32_t var_ec
                    int32_t var_e0
                    int32_t var_d4
                    int32_t ebx_41 = ((var_f8 + *(((var_e0
                        + *(((edx_6 + *(((ebx_26 - edx_6) << 2) + eax_16) - var_e0) << 2) + var_d4)
                        - var_f8) << 2) + var_ec) - eax_23) << 2) + edx_2
                    edi[2] = eax_23.b + (*ebx_41).b
                    int32_t ebx_42
                    ebx_42.b = edi[1]
                    int32_t eax_31
                    eax_31.b = edi[1]
                    int32_t var_f4
                    int32_t var_e8
                    int32_t var_dc
                    int32_t ebx_57 = ((var_f4 + *(((var_dc
                        + *(((edx_6 + *(((ebx_42 - edx_6) << 2) + eax_16) - var_dc) << 2) + var_d4)
                        - var_f4) << 2) + var_e8) - eax_31) << 2) + edx_2
                    edi[1] = eax_31.b + (*ebx_57).b
                    int32_t ebx_58
                    ebx_58.b = *edi
                    int32_t eax_39
                    eax_39.b = *edi
                    int32_t var_f0
                    int32_t var_e4
                    int32_t var_d8
                    int32_t ebx_73 = ((var_f0 + *(((var_d8
                        + *(((edx_6 + *(((ebx_58 - edx_6) << 2) + eax_16) - var_d8) << 2) + var_d4)
                        - var_f0) << 2) + var_e4) - eax_39) << 2) + edx_2
                    result = eax_39 + *ebx_73
                    *edi = result.b
    
    esi_1 = esi_2 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result

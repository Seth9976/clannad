// 函数: sub_86a400
// 地址: 0x86a400
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_3c
char* esi_1 = var_3c
char* var_54
char* edi = var_54
int32_t var_40
int32_t edx = var_40
int32_t result_1
int32_t result = result_1
int32_t var_34
int32_t ebx = var_34
int32_t var_28
int32_t i_1 = var_28 + 1
int32_t i

do
    i = i_1
    int32_t temp0_1 = edx
    int32_t var_48
    edx += var_48
    
    if (temp0_1 + var_48 s>= 0)
        int32_t var_44
        int32_t temp4_1
        
        do
            int32_t var_a0
            int32_t var_50
            
            if (edi s>= var_50)
                int32_t var_4c
                
                if (edi s> var_4c)
                    return result
                
                int32_t ebx_2
                ebx_2.b = esi_1[3]
                
                if (ebx_2 != 0)
                    void* var_98
                    int32_t eax
                    eax.b = *(var_98 + var_a0)
                    int32_t var_b4
                    
                    if (var_b4 != 0)
                        eax.b = not.b(eax.b)
                    
                    char var_b0
                    int32_t var_ac
                    int32_t eax_2 = (eax << var_b0) + var_ac
                    
                    if (eax_2 s< 0)
                        eax_2 = 0
                    else if (eax_2 s> 0xff)
                        eax_2 = 0xff
                    
                    if (eax_2 != 0)
                        int32_t ebx_13 = *(*((eax_2 << 2) + &data_4e3da80) + (ebx_2 << 2))
                        
                        if (ebx_13 != 0)
                            int32_t edx_2 = *((ebx_13 << 2) + &data_4e3da80)
                            int32_t ebx_17
                            ebx_17.b = esi_1[2]
                            int32_t eax_3
                            eax_3.b = not.b(ebx_17.b)
                            int32_t var_f8
                            int32_t var_ec
                            int32_t var_e0
                            int32_t var_d4
                            int32_t var_d0
                            int32_t ebx_32 = *(((var_f8 + *(((var_e0 + *(((eax_3
                                + *(((ebx_17 - eax_3) << 2) + var_d0) - var_e0) << 2) + var_d4)
                                - var_f8) << 2) + var_ec)) << 2) + edx_2)
                            int32_t eax_9
                            eax_9.b = edi[2]
                            int32_t eax_10 = eax_9 - ebx_32
                            
                            if (eax_10 s< 0)
                                eax_10 = 0
                            
                            edi[2] = eax_10.b
                            int32_t ebx_33
                            ebx_33.b = esi_1[1]
                            int32_t eax_11
                            eax_11.b = not.b(ebx_33.b)
                            int32_t var_f4
                            int32_t var_e8
                            int32_t var_dc
                            int32_t ebx_48 = *(((var_f4 + *(((var_dc + *(((eax_11
                                + *(((ebx_33 - eax_11) << 2) + var_d0) - var_dc) << 2) + var_d4)
                                - var_f4) << 2) + var_e8)) << 2) + edx_2)
                            int32_t eax_17
                            eax_17.b = edi[1]
                            int32_t eax_18 = eax_17 - ebx_48
                            
                            if (eax_18 s< 0)
                                eax_18 = 0
                            
                            edi[1] = eax_18.b
                            int32_t ebx_49
                            ebx_49.b = *esi_1
                            int32_t eax_19
                            eax_19.b = not.b(ebx_49.b)
                            int32_t var_f0
                            int32_t var_e4
                            int32_t var_d8
                            int32_t ebx_64 = *(((var_f0 + *(((var_d8 + *(((eax_19
                                + *(((ebx_49 - eax_19) << 2) + var_d0) - var_d8) << 2) + var_d4)
                                - var_f0) << 2) + var_e4)) << 2) + edx_2)
                            int32_t eax_25
                            eax_25.b = *edi
                            int32_t eax_26 = eax_25 - ebx_64
                            
                            if (eax_26 s< 0)
                                eax_26 = 0
                            
                            *edi = eax_26.b
            
            int32_t eax_28 = var_a0 + 1
            int32_t var_bc
            
            if (eax_28 s>= var_bc)
                eax_28 = 0
            
            var_a0 = eax_28
            edi = &edi[4]
            temp4_1 = edx
            edx -= var_44
        while (temp4_1 - var_44 s>= 0)
    
    result &= 1
    
    if (result != 0)
        int32_t var_24
        esi_1 = &esi_1[var_24]
        int32_t temp2_1 = ebx
        int32_t var_30
        ebx += var_30
        
        if (temp2_1 + var_30 s>= 0)
            int32_t var_20
            esi_1 = &esi_1[var_20]
            int32_t var_2c
            ebx -= var_2c
    else
        esi_1 = &esi_1[ebx]
    
    i_1 = i - 1
while (i != 1)
return result

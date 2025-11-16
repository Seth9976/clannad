// 函数: sub_8f7ab0
// 地址: 0x8f7ab0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_54
char* edi = var_54
int32_t var_40
int32_t edx = var_40
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
        int32_t temp3_1
        
        do
            int32_t var_a0
            int32_t var_50
            
            if (edi s>= var_50)
                int32_t var_4c
                
                if (edi s> var_4c)
                    return 
                
                char* var_3c
                int32_t ebx_1
                ebx_1.b = var_3c[3]
                
                if (ebx_1 != 0)
                    int32_t var_11c
                    int32_t ebx_7 = *(*((ebx_1 << 2) + &data_4e3da80) + var_11c)
                    
                    if (ebx_7 != 0)
                        void* var_98
                        int32_t eax_1
                        eax_1.b = *(var_98 + var_a0)
                        int32_t var_b4
                        
                        if (var_b4 != 0)
                            eax_1.b = not.b(eax_1.b)
                        
                        char var_b0
                        int32_t var_ac
                        int32_t eax_3 = (eax_1 << var_b0) + var_ac
                        
                        if (eax_3 s< 0)
                            eax_3 = 0
                        else if (eax_3 s> 0xff)
                            eax_3 = 0xff
                        
                        if (eax_3 != 0)
                            int32_t ebx_18 = *(*((eax_3 << 2) + &data_4e3da80) + (ebx_7 << 2))
                            
                            if (ebx_18 != 0)
                                int32_t edx_2 = *((ebx_18 << 2) + &data_4e3da80)
                                int32_t ebx_22
                                ebx_22.b = var_3c[2]
                                int32_t eax_8
                                eax_8.b = edi[2]
                                int32_t eax_12
                                eax_12.b = edi[2]
                                int32_t var_f8
                                int32_t var_ec
                                int32_t var_e0
                                int32_t var_d4
                                int32_t ebx_35 = (*(((var_f8 + *(((var_e0
                                    + *(((ebx_22 - var_e0) << 2) + var_d4) - var_f8) << 2) + var_ec))
                                    << 2) + *((eax_8 << 2) + &data_4e3da80)) - eax_12) << 2
                                edi[2] = eax_12.b + (*(ebx_35 + edx_2)).b
                                int32_t ebx_37
                                ebx_37.b = var_3c[1]
                                int32_t eax_18
                                eax_18.b = edi[1]
                                int32_t eax_22
                                eax_22.b = edi[1]
                                int32_t var_f4
                                int32_t var_e8
                                int32_t var_dc
                                int32_t ebx_50 = (*(((var_f4 + *(((var_dc
                                    + *(((ebx_37 - var_dc) << 2) + var_d4) - var_f4) << 2) + var_e8))
                                    << 2) + *((eax_18 << 2) + &data_4e3da80)) - eax_22) << 2
                                edi[1] = eax_22.b + (*(ebx_50 + edx_2)).b
                                int32_t ebx_52
                                ebx_52.b = *var_3c
                                int32_t eax_28
                                eax_28.b = *edi
                                int32_t eax_32
                                eax_32.b = *edi
                                int32_t var_f0
                                int32_t var_e4
                                int32_t var_d8
                                int32_t ebx_65 = (*(((var_f0 + *(((var_d8
                                    + *(((ebx_52 - var_d8) << 2) + var_d4) - var_f0) << 2) + var_e4))
                                    << 2) + *((eax_28 << 2) + &data_4e3da80)) - eax_32) << 2
                                *edi = eax_32.b + (*(ebx_65 + edx_2)).b
            
            int32_t eax = var_a0 + 1
            int32_t var_bc
            
            if (eax s>= var_bc)
                eax = 0
            
            var_a0 = eax
            edi = &edi[4]
            temp3_1 = edx
            edx -= var_44
        while (temp3_1 - var_44 s>= 0)
    
    i_1 = i - 1
while (i != 1)

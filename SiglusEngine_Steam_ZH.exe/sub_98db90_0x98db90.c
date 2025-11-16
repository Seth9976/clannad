// 函数: sub_98db90
// 地址: 0x98db90
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
                    int32_t var_11c
                    int32_t ebx_9 = *(*((eax_3 << 2) + &data_4e3da80) + var_11c)
                    
                    if (ebx_9 != 0)
                        int32_t edx_2 = *((ebx_9 << 2) + &data_4e3da80)
                        int32_t ebx_13
                        ebx_13.b = edi[2]
                        int32_t eax_4
                        eax_4.b = not.b(ebx_13.b)
                        int32_t eax_8
                        eax_8.b = edi[2]
                        int32_t var_e0
                        int32_t var_d4
                        int32_t var_d0
                        edi[2] = eax_8.b + (*(((var_e0 + *(((eax_4
                            + *(((ebx_13 - eax_4) << 2) + var_d0) - var_e0) << 2) + var_d4) - eax_8)
                            << 2) + edx_2)).b
                        int32_t ebx_25
                        ebx_25.b = edi[1]
                        int32_t eax_10
                        eax_10.b = not.b(ebx_25.b)
                        int32_t eax_14
                        eax_14.b = edi[1]
                        int32_t var_dc
                        edi[1] = eax_14.b + (*(((var_dc + *(((eax_10
                            + *(((ebx_25 - eax_10) << 2) + var_d0) - var_dc) << 2) + var_d4) - eax_14)
                            << 2) + edx_2)).b
                        int32_t ebx_37
                        ebx_37.b = *edi
                        int32_t eax_16
                        eax_16.b = not.b(ebx_37.b)
                        int32_t eax_20
                        eax_20.b = *edi
                        int32_t var_d8
                        *edi = eax_20.b + (*(((var_d8 + *(((eax_16
                            + *(((ebx_37 - eax_16) << 2) + var_d0) - var_d8) << 2) + var_d4) - eax_20)
                            << 2) + edx_2)).b
            
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

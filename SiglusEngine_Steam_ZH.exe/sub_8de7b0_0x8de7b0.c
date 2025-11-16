// 函数: sub_8de7b0
// 地址: 0x8de7b0
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
    int32_t temp0_1 = edx
    int32_t var_48
    edx += var_48
    
    if (temp0_1 + var_48 s>= 0)
        int32_t var_44
        int32_t temp3_1
        
        do
            int32_t var_50
            
            if (edi s>= var_50)
                int32_t var_4c
                
                if (edi s> var_4c)
                    return 
                
                char* var_3c
                int32_t ebx_1
                ebx_1.b = var_3c[3]
                
                if (ebx_1 != 0)
                    int32_t edx_2 = *((ebx_1 << 2) + &data_4e3da80)
                    int32_t ebx_5
                    ebx_5.b = var_3c[2]
                    int32_t var_f8
                    int32_t var_ec
                    int32_t var_e0
                    int32_t var_d4
                    int32_t eax_4 = var_f8 +
                        *(((var_e0 + *(((ebx_5 - var_e0) << 2) + var_d4) - var_f8) << 2) + var_ec)
                    int32_t var_88
                    int32_t ebx_14 = eax_4 + var_88
                    int32_t ebx_22
                    
                    if (eax_4 + var_88 s< 0)
                        if (ebx_14 s< 0xffffff01)
                            ebx_14 = 0xffffff01
                        
                        int32_t ebx_25
                        ebx_25.b = edi[2]
                        ebx_22 = *((ebx_25 << 2) + *((ebx_14 << 2) + data_4ced578))
                    else
                        if (ebx_14 s> 0xff)
                            ebx_14 = 0xff
                        
                        int32_t ebx_17
                        ebx_17.b = edi[2]
                        ebx_22 = *(((ebx_17 - 0xff) << 2) + *((ebx_14 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_7
                    eax_7.b = edi[2]
                    edi[2] = eax_7.b + (*(((ebx_22 - eax_7) << 2) + edx_2)).b
                    int32_t ebx_31
                    ebx_31.b = var_3c[1]
                    int32_t var_f4
                    int32_t var_e8
                    int32_t var_dc
                    int32_t eax_12 = var_f4 +
                        *(((var_dc + *(((ebx_31 - var_dc) << 2) + var_d4) - var_f4) << 2) + var_e8)
                    int32_t var_84
                    int32_t ebx_40 = eax_12 + var_84
                    int32_t ebx_48
                    
                    if (eax_12 + var_84 s< 0)
                        if (ebx_40 s< 0xffffff01)
                            ebx_40 = 0xffffff01
                        
                        int32_t ebx_51
                        ebx_51.b = edi[1]
                        ebx_48 = *((ebx_51 << 2) + *((ebx_40 << 2) + data_4ced578))
                    else
                        if (ebx_40 s> 0xff)
                            ebx_40 = 0xff
                        
                        int32_t ebx_43
                        ebx_43.b = edi[1]
                        ebx_48 = *(((ebx_43 - 0xff) << 2) + *((ebx_40 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_15
                    eax_15.b = edi[1]
                    edi[1] = eax_15.b + (*(((ebx_48 - eax_15) << 2) + edx_2)).b
                    int32_t ebx_57
                    ebx_57.b = *var_3c
                    int32_t var_f0
                    int32_t var_e4
                    int32_t var_d8
                    int32_t eax_20 = var_f0 +
                        *(((var_d8 + *(((ebx_57 - var_d8) << 2) + var_d4) - var_f0) << 2) + var_e4)
                    int32_t var_80
                    int32_t ebx_66 = eax_20 + var_80
                    int32_t ebx_74
                    
                    if (eax_20 + var_80 s< 0)
                        if (ebx_66 s< 0xffffff01)
                            ebx_66 = 0xffffff01
                        
                        int32_t ebx_77
                        ebx_77.b = *edi
                        ebx_74 = *((ebx_77 << 2) + *((ebx_66 << 2) + data_4ced578))
                    else
                        if (ebx_66 s> 0xff)
                            ebx_66 = 0xff
                        
                        int32_t ebx_69
                        ebx_69.b = *edi
                        ebx_74 = *(((ebx_69 - 0xff) << 2) + *((ebx_66 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_23
                    eax_23.b = *edi
                    *edi = eax_23.b + (*(((ebx_74 - eax_23) << 2) + edx_2)).b
            
            edi = &edi[4]
            temp3_1 = edx
            edx -= var_44
        while (temp3_1 - var_44 s>= 0)
    
    i = i_1
    i_1 -= 1
while (i != 1)

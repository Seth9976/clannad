// 函数: sub_8e5b80
// 地址: 0x8e5b80
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
                    int32_t eax_1
                    eax_1.b = not.b(ebx_5.b)
                    int32_t var_f8
                    int32_t var_ec
                    int32_t var_e0
                    int32_t var_d4
                    int32_t var_d0
                    int32_t eax_6 = var_f8 + *(((var_e0
                        + *(((eax_1 + *(((ebx_5 - eax_1) << 2) + var_d0) - var_e0) << 2) + var_d4)
                        - var_f8) << 2) + var_ec)
                    int32_t var_88
                    int32_t ebx_18 = eax_6 + var_88
                    int32_t ebx_26
                    
                    if (eax_6 + var_88 s< 0)
                        if (ebx_18 s< 0xffffff01)
                            ebx_18 = 0xffffff01
                        
                        int32_t ebx_29
                        ebx_29.b = edi[2]
                        ebx_26 = *((ebx_29 << 2) + *((ebx_18 << 2) + data_4ced578))
                    else
                        if (ebx_18 s> 0xff)
                            ebx_18 = 0xff
                        
                        int32_t ebx_21
                        ebx_21.b = edi[2]
                        ebx_26 = *(((ebx_21 - 0xff) << 2) + *((ebx_18 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_9
                    eax_9.b = edi[2]
                    edi[2] = eax_9.b + (*(((ebx_26 - eax_9) << 2) + edx_2)).b
                    int32_t ebx_35
                    ebx_35.b = var_3c[1]
                    int32_t eax_11
                    eax_11.b = not.b(ebx_35.b)
                    int32_t var_f4
                    int32_t var_e8
                    int32_t var_dc
                    int32_t eax_16 = var_f4 + *(((var_dc +
                        *(((eax_11 + *(((ebx_35 - eax_11) << 2) + var_d0) - var_dc) << 2) + var_d4)
                        - var_f4) << 2) + var_e8)
                    int32_t var_84
                    int32_t ebx_48 = eax_16 + var_84
                    int32_t ebx_56
                    
                    if (eax_16 + var_84 s< 0)
                        if (ebx_48 s< 0xffffff01)
                            ebx_48 = 0xffffff01
                        
                        int32_t ebx_59
                        ebx_59.b = edi[1]
                        ebx_56 = *((ebx_59 << 2) + *((ebx_48 << 2) + data_4ced578))
                    else
                        if (ebx_48 s> 0xff)
                            ebx_48 = 0xff
                        
                        int32_t ebx_51
                        ebx_51.b = edi[1]
                        ebx_56 = *(((ebx_51 - 0xff) << 2) + *((ebx_48 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_19
                    eax_19.b = edi[1]
                    edi[1] = eax_19.b + (*(((ebx_56 - eax_19) << 2) + edx_2)).b
                    int32_t ebx_65
                    ebx_65.b = *var_3c
                    int32_t eax_21
                    eax_21.b = not.b(ebx_65.b)
                    int32_t var_f0
                    int32_t var_e4
                    int32_t var_d8
                    int32_t eax_26 = var_f0 + *(((var_d8 +
                        *(((eax_21 + *(((ebx_65 - eax_21) << 2) + var_d0) - var_d8) << 2) + var_d4)
                        - var_f0) << 2) + var_e4)
                    int32_t var_80
                    int32_t ebx_78 = eax_26 + var_80
                    int32_t ebx_86
                    
                    if (eax_26 + var_80 s< 0)
                        if (ebx_78 s< 0xffffff01)
                            ebx_78 = 0xffffff01
                        
                        int32_t ebx_89
                        ebx_89.b = *edi
                        ebx_86 = *((ebx_89 << 2) + *((ebx_78 << 2) + data_4ced578))
                    else
                        if (ebx_78 s> 0xff)
                            ebx_78 = 0xff
                        
                        int32_t ebx_81
                        ebx_81.b = *edi
                        ebx_86 = *(((ebx_81 - 0xff) << 2) + *((ebx_78 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_29
                    eax_29.b = *edi
                    *edi = eax_29.b + (*(((ebx_86 - eax_29) << 2) + edx_2)).b
            
            edi = &edi[4]
            temp3_1 = edx
            edx -= var_44
        while (temp3_1 - var_44 s>= 0)
    
    i = i_1
    i_1 -= 1
while (i != 1)

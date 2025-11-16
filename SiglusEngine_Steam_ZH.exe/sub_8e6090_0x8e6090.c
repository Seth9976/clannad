// 函数: sub_8e6090
// 地址: 0x8e6090
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
                    int32_t var_11c
                    int32_t ebx_7 = *(*((ebx_1 << 2) + &data_4e3da80) + var_11c)
                    
                    if (ebx_7 != 0)
                        int32_t edx_2 = *((ebx_7 << 2) + &data_4e3da80)
                        int32_t ebx_11
                        ebx_11.b = var_3c[2]
                        int32_t eax_1
                        eax_1.b = not.b(ebx_11.b)
                        int32_t var_f8
                        int32_t var_ec
                        int32_t var_e0
                        int32_t var_d4
                        int32_t var_d0
                        int32_t eax_6 = var_f8 + *(((var_e0 + *(((eax_1
                            + *(((ebx_11 - eax_1) << 2) + var_d0) - var_e0) << 2) + var_d4) - var_f8)
                            << 2) + var_ec)
                        int32_t var_88
                        int32_t ebx_24 = eax_6 + var_88
                        int32_t ebx_32
                        
                        if (eax_6 + var_88 s< 0)
                            if (ebx_24 s< 0xffffff01)
                                ebx_24 = 0xffffff01
                            
                            int32_t ebx_35
                            ebx_35.b = edi[2]
                            ebx_32 = *((ebx_35 << 2) + *((ebx_24 << 2) + data_4ced578))
                        else
                            if (ebx_24 s> 0xff)
                                ebx_24 = 0xff
                            
                            int32_t ebx_27
                            ebx_27.b = edi[2]
                            ebx_32 =
                                *(((ebx_27 - 0xff) << 2) + *((ebx_24 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_9
                        eax_9.b = edi[2]
                        edi[2] = eax_9.b + (*(((ebx_32 - eax_9) << 2) + edx_2)).b
                        int32_t ebx_41
                        ebx_41.b = var_3c[1]
                        int32_t eax_11
                        eax_11.b = not.b(ebx_41.b)
                        int32_t var_f4
                        int32_t var_e8
                        int32_t var_dc
                        int32_t eax_16 = var_f4 + *(((var_dc + *(((eax_11
                            + *(((ebx_41 - eax_11) << 2) + var_d0) - var_dc) << 2) + var_d4) - var_f4)
                            << 2) + var_e8)
                        int32_t var_84
                        int32_t ebx_54 = eax_16 + var_84
                        int32_t ebx_62
                        
                        if (eax_16 + var_84 s< 0)
                            if (ebx_54 s< 0xffffff01)
                                ebx_54 = 0xffffff01
                            
                            int32_t ebx_65
                            ebx_65.b = edi[1]
                            ebx_62 = *((ebx_65 << 2) + *((ebx_54 << 2) + data_4ced578))
                        else
                            if (ebx_54 s> 0xff)
                                ebx_54 = 0xff
                            
                            int32_t ebx_57
                            ebx_57.b = edi[1]
                            ebx_62 =
                                *(((ebx_57 - 0xff) << 2) + *((ebx_54 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_19
                        eax_19.b = edi[1]
                        edi[1] = eax_19.b + (*(((ebx_62 - eax_19) << 2) + edx_2)).b
                        int32_t ebx_71
                        ebx_71.b = *var_3c
                        int32_t eax_21
                        eax_21.b = not.b(ebx_71.b)
                        int32_t var_f0
                        int32_t var_e4
                        int32_t var_d8
                        int32_t eax_26 = var_f0 + *(((var_d8 + *(((eax_21
                            + *(((ebx_71 - eax_21) << 2) + var_d0) - var_d8) << 2) + var_d4) - var_f0)
                            << 2) + var_e4)
                        int32_t var_80
                        int32_t ebx_84 = eax_26 + var_80
                        int32_t ebx_92
                        
                        if (eax_26 + var_80 s< 0)
                            if (ebx_84 s< 0xffffff01)
                                ebx_84 = 0xffffff01
                            
                            int32_t ebx_95
                            ebx_95.b = *edi
                            ebx_92 = *((ebx_95 << 2) + *((ebx_84 << 2) + data_4ced578))
                        else
                            if (ebx_84 s> 0xff)
                                ebx_84 = 0xff
                            
                            int32_t ebx_87
                            ebx_87.b = *edi
                            ebx_92 =
                                *(((ebx_87 - 0xff) << 2) + *((ebx_84 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_29
                        eax_29.b = *edi
                        *edi = eax_29.b + (*(((ebx_92 - eax_29) << 2) + edx_2)).b
            
            edi = &edi[4]
            temp3_1 = edx
            edx -= var_44
        while (temp3_1 - var_44 s>= 0)
    
    i = i_1
    i_1 -= 1
while (i != 1)

// 函数: sub_8eaf90
// 地址: 0x8eaf90
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
                        char* var_3c
                        int32_t eax_4
                        eax_4.b = var_3c[2]
                        int32_t eax_6
                        eax_6.b = var_3c[1]
                        int32_t eax_8
                        eax_8.b = *var_3c
                        uint32_t edx_6 = (*(&data_4e3d680 + (eax_4 << 2))
                            + *(&data_4e3e280 + (eax_6 << 2)) + *(&data_4e3de80 + (eax_8 << 2))) u>> 8
                        int32_t var_cc
                        int32_t eax_10 = *(&data_4e3da80 + var_cc)
                        int32_t ebx_17
                        ebx_17.b = var_3c[2]
                        int32_t eax_12 = edx_6 + *(((ebx_17 - edx_6) << 2) + eax_10)
                        int32_t eax_13
                        eax_13.b = not.b(eax_12.b)
                        int32_t var_f8
                        int32_t var_ec
                        int32_t var_d0
                        int32_t eax_16 = var_f8 + *(((eax_13 + *(((eax_12 - eax_13) << 2) + var_d0)
                            - var_f8) << 2) + var_ec)
                        int32_t var_88
                        int32_t ebx_30 = eax_16 + var_88
                        int32_t ebx_38
                        
                        if (eax_16 + var_88 s< 0)
                            if (ebx_30 s< 0xffffff01)
                                ebx_30 = 0xffffff01
                            
                            int32_t ebx_41
                            ebx_41.b = edi[2]
                            ebx_38 = *((ebx_41 << 2) + *((ebx_30 << 2) + data_4ced578))
                        else
                            if (ebx_30 s> 0xff)
                                ebx_30 = 0xff
                            
                            int32_t ebx_33
                            ebx_33.b = edi[2]
                            ebx_38 =
                                *(((ebx_33 - 0xff) << 2) + *((ebx_30 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_19
                        eax_19.b = edi[2]
                        edi[2] = eax_19.b + (*(((ebx_38 - eax_19) << 2) + edx_2)).b
                        int32_t ebx_47
                        ebx_47.b = var_3c[1]
                        int32_t eax_22 = edx_6 + *(((ebx_47 - edx_6) << 2) + eax_10)
                        int32_t eax_23
                        eax_23.b = not.b(eax_22.b)
                        int32_t var_f4
                        int32_t var_e8
                        int32_t eax_26 = var_f4 + *(((eax_23 + *(((eax_22 - eax_23) << 2) + var_d0)
                            - var_f4) << 2) + var_e8)
                        int32_t var_84
                        int32_t ebx_60 = eax_26 + var_84
                        int32_t ebx_68
                        
                        if (eax_26 + var_84 s< 0)
                            if (ebx_60 s< 0xffffff01)
                                ebx_60 = 0xffffff01
                            
                            int32_t ebx_71
                            ebx_71.b = edi[1]
                            ebx_68 = *((ebx_71 << 2) + *((ebx_60 << 2) + data_4ced578))
                        else
                            if (ebx_60 s> 0xff)
                                ebx_60 = 0xff
                            
                            int32_t ebx_63
                            ebx_63.b = edi[1]
                            ebx_68 =
                                *(((ebx_63 - 0xff) << 2) + *((ebx_60 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_29
                        eax_29.b = edi[1]
                        edi[1] = eax_29.b + (*(((ebx_68 - eax_29) << 2) + edx_2)).b
                        int32_t ebx_77
                        ebx_77.b = *var_3c
                        int32_t eax_32 = edx_6 + *(((ebx_77 - edx_6) << 2) + eax_10)
                        int32_t eax_33
                        eax_33.b = not.b(eax_32.b)
                        int32_t var_f0
                        int32_t var_e4
                        int32_t eax_36 = var_f0 + *(((eax_33 + *(((eax_32 - eax_33) << 2) + var_d0)
                            - var_f0) << 2) + var_e4)
                        int32_t var_80
                        int32_t ebx_90 = eax_36 + var_80
                        int32_t ebx_98
                        
                        if (eax_36 + var_80 s< 0)
                            if (ebx_90 s< 0xffffff01)
                                ebx_90 = 0xffffff01
                            
                            int32_t ebx_101
                            ebx_101.b = *edi
                            ebx_98 = *((ebx_101 << 2) + *((ebx_90 << 2) + data_4ced578))
                        else
                            if (ebx_90 s> 0xff)
                                ebx_90 = 0xff
                            
                            int32_t ebx_93
                            ebx_93.b = *edi
                            ebx_98 =
                                *(((ebx_93 - 0xff) << 2) + *((ebx_90 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_39
                        eax_39.b = *edi
                        *edi = eax_39.b + (*(((ebx_98 - eax_39) << 2) + edx_2)).b
            
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

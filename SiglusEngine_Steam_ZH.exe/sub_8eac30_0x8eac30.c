// 函数: sub_8eac30
// 地址: 0x8eac30
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
                        int32_t ebx_12 = *(*((eax_3 << 2) + &data_4e3da80) + (ebx_1 << 2))
                        
                        if (ebx_12 != 0)
                            int32_t edx_2 = *((ebx_12 << 2) + &data_4e3da80)
                            int32_t eax_4
                            eax_4.b = var_3c[2]
                            int32_t eax_6
                            eax_6.b = var_3c[1]
                            int32_t eax_8
                            eax_8.b = *var_3c
                            uint32_t edx_6 = (*(&data_4e3d680 + (eax_4 << 2))
                                + *(&data_4e3e280 + (eax_6 << 2))
                                + *(&data_4e3de80 + (eax_8 << 2))) u>> 8
                            int32_t var_cc
                            int32_t eax_10 = *(&data_4e3da80 + var_cc)
                            int32_t ebx_20
                            ebx_20.b = var_3c[2]
                            int32_t eax_12 = edx_6 + *(((ebx_20 - edx_6) << 2) + eax_10)
                            int32_t eax_13
                            eax_13.b = not.b(eax_12.b)
                            int32_t var_f8
                            int32_t var_ec
                            int32_t var_d0
                            int32_t eax_16 = var_f8 + *(((eax_13
                                + *(((eax_12 - eax_13) << 2) + var_d0) - var_f8) << 2) + var_ec)
                            int32_t var_88
                            int32_t ebx_33 = eax_16 + var_88
                            int32_t ebx_41
                            
                            if (eax_16 + var_88 s< 0)
                                if (ebx_33 s< 0xffffff01)
                                    ebx_33 = 0xffffff01
                                
                                int32_t ebx_44
                                ebx_44.b = edi[2]
                                ebx_41 = *((ebx_44 << 2) + *((ebx_33 << 2) + data_4ced578))
                            else
                                if (ebx_33 s> 0xff)
                                    ebx_33 = 0xff
                                
                                int32_t ebx_36
                                ebx_36.b = edi[2]
                                ebx_41 = *(((ebx_36 - 0xff) << 2) + *((ebx_33 << 2) + data_4ced578))
                                    + 0xff
                            
                            int32_t eax_19
                            eax_19.b = edi[2]
                            edi[2] = eax_19.b + (*(((ebx_41 - eax_19) << 2) + edx_2)).b
                            int32_t ebx_50
                            ebx_50.b = var_3c[1]
                            int32_t eax_22 = edx_6 + *(((ebx_50 - edx_6) << 2) + eax_10)
                            int32_t eax_23
                            eax_23.b = not.b(eax_22.b)
                            int32_t var_f4
                            int32_t var_e8
                            int32_t eax_26 = var_f4 + *(((eax_23
                                + *(((eax_22 - eax_23) << 2) + var_d0) - var_f4) << 2) + var_e8)
                            int32_t var_84
                            int32_t ebx_63 = eax_26 + var_84
                            int32_t ebx_71
                            
                            if (eax_26 + var_84 s< 0)
                                if (ebx_63 s< 0xffffff01)
                                    ebx_63 = 0xffffff01
                                
                                int32_t ebx_74
                                ebx_74.b = edi[1]
                                ebx_71 = *((ebx_74 << 2) + *((ebx_63 << 2) + data_4ced578))
                            else
                                if (ebx_63 s> 0xff)
                                    ebx_63 = 0xff
                                
                                int32_t ebx_66
                                ebx_66.b = edi[1]
                                ebx_71 = *(((ebx_66 - 0xff) << 2) + *((ebx_63 << 2) + data_4ced578))
                                    + 0xff
                            
                            int32_t eax_29
                            eax_29.b = edi[1]
                            edi[1] = eax_29.b + (*(((ebx_71 - eax_29) << 2) + edx_2)).b
                            int32_t ebx_80
                            ebx_80.b = *var_3c
                            int32_t eax_32 = edx_6 + *(((ebx_80 - edx_6) << 2) + eax_10)
                            int32_t eax_33
                            eax_33.b = not.b(eax_32.b)
                            int32_t var_f0
                            int32_t var_e4
                            int32_t eax_36 = var_f0 + *(((eax_33
                                + *(((eax_32 - eax_33) << 2) + var_d0) - var_f0) << 2) + var_e4)
                            int32_t var_80
                            int32_t ebx_93 = eax_36 + var_80
                            int32_t ebx_101
                            
                            if (eax_36 + var_80 s< 0)
                                if (ebx_93 s< 0xffffff01)
                                    ebx_93 = 0xffffff01
                                
                                int32_t ebx_104
                                ebx_104.b = *edi
                                ebx_101 = *((ebx_104 << 2) + *((ebx_93 << 2) + data_4ced578))
                            else
                                if (ebx_93 s> 0xff)
                                    ebx_93 = 0xff
                                
                                int32_t ebx_96
                                ebx_96.b = *edi
                                ebx_101 =
                                    *(((ebx_96 - 0xff) << 2) + *((ebx_93 << 2) + data_4ced578))
                                    + 0xff
                            
                            int32_t eax_39
                            eax_39.b = *edi
                            *edi = eax_39.b + (*(((ebx_101 - eax_39) << 2) + edx_2)).b
            
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

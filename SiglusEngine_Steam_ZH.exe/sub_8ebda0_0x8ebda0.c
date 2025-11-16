// 函数: sub_8ebda0
// 地址: 0x8ebda0
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
                                int32_t ebx_26
                                ebx_26.b = var_3c[2]
                                int32_t eax_12 = edx_6 + *(((ebx_26 - edx_6) << 2) + eax_10)
                                int32_t eax_13
                                eax_13.b = not.b(eax_12.b)
                                int32_t var_f8
                                int32_t var_ec
                                int32_t var_e0
                                int32_t var_d4
                                int32_t var_d0
                                int32_t eax_18 = var_f8 + *(((var_e0 + *(((eax_13
                                    + *(((eax_12 - eax_13) << 2) + var_d0) - var_e0) << 2) + var_d4)
                                    - var_f8) << 2) + var_ec)
                                int32_t var_88
                                int32_t ebx_43 = eax_18 + var_88
                                int32_t ebx_51
                                
                                if (eax_18 + var_88 s< 0)
                                    if (ebx_43 s< 0xffffff01)
                                        ebx_43 = 0xffffff01
                                    
                                    int32_t ebx_54
                                    ebx_54.b = edi[2]
                                    ebx_51 = *((ebx_54 << 2) + *((ebx_43 << 2) + data_4ced578))
                                else
                                    if (ebx_43 s> 0xff)
                                        ebx_43 = 0xff
                                    
                                    int32_t ebx_46
                                    ebx_46.b = edi[2]
                                    ebx_51 =
                                        *(((ebx_46 - 0xff) << 2) + *((ebx_43 << 2) + data_4ced578))
                                        + 0xff
                                
                                int32_t eax_21
                                eax_21.b = edi[2]
                                edi[2] = eax_21.b + (*(((ebx_51 - eax_21) << 2) + edx_2)).b
                                int32_t ebx_60
                                ebx_60.b = var_3c[1]
                                int32_t eax_24 = edx_6 + *(((ebx_60 - edx_6) << 2) + eax_10)
                                int32_t eax_25
                                eax_25.b = not.b(eax_24.b)
                                int32_t var_f4
                                int32_t var_e8
                                int32_t var_dc
                                int32_t eax_30 = var_f4 + *(((var_dc + *(((eax_25
                                    + *(((eax_24 - eax_25) << 2) + var_d0) - var_dc) << 2) + var_d4)
                                    - var_f4) << 2) + var_e8)
                                int32_t var_84
                                int32_t ebx_77 = eax_30 + var_84
                                int32_t ebx_85
                                
                                if (eax_30 + var_84 s< 0)
                                    if (ebx_77 s< 0xffffff01)
                                        ebx_77 = 0xffffff01
                                    
                                    int32_t ebx_88
                                    ebx_88.b = edi[1]
                                    ebx_85 = *((ebx_88 << 2) + *((ebx_77 << 2) + data_4ced578))
                                else
                                    if (ebx_77 s> 0xff)
                                        ebx_77 = 0xff
                                    
                                    int32_t ebx_80
                                    ebx_80.b = edi[1]
                                    ebx_85 =
                                        *(((ebx_80 - 0xff) << 2) + *((ebx_77 << 2) + data_4ced578))
                                        + 0xff
                                
                                int32_t eax_33
                                eax_33.b = edi[1]
                                edi[1] = eax_33.b + (*(((ebx_85 - eax_33) << 2) + edx_2)).b
                                int32_t ebx_94
                                ebx_94.b = *var_3c
                                int32_t eax_36 = edx_6 + *(((ebx_94 - edx_6) << 2) + eax_10)
                                int32_t eax_37
                                eax_37.b = not.b(eax_36.b)
                                int32_t var_f0
                                int32_t var_e4
                                int32_t var_d8
                                int32_t eax_42 = var_f0 + *(((var_d8 + *(((eax_37
                                    + *(((eax_36 - eax_37) << 2) + var_d0) - var_d8) << 2) + var_d4)
                                    - var_f0) << 2) + var_e4)
                                int32_t var_80
                                int32_t ebx_111 = eax_42 + var_80
                                int32_t ebx_119
                                
                                if (eax_42 + var_80 s< 0)
                                    if (ebx_111 s< 0xffffff01)
                                        ebx_111 = 0xffffff01
                                    
                                    int32_t ebx_122
                                    ebx_122.b = *edi
                                    ebx_119 = *((ebx_122 << 2) + *((ebx_111 << 2) + data_4ced578))
                                else
                                    if (ebx_111 s> 0xff)
                                        ebx_111 = 0xff
                                    
                                    int32_t ebx_114
                                    ebx_114.b = *edi
                                    ebx_119 = *(((ebx_114 - 0xff) << 2)
                                        + *((ebx_111 << 2) + data_4ced578)) + 0xff
                                
                                int32_t eax_45
                                eax_45.b = *edi
                                *edi = eax_45.b + (*(((ebx_119 - eax_45) << 2) + edx_2)).b
            
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

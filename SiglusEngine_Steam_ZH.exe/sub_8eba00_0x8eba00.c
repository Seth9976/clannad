// 函数: sub_8eba00
// 地址: 0x8eba00
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
                        int32_t var_e0
                        int32_t var_d4
                        int32_t var_d0
                        int32_t eax_18 = var_f8 + *(((var_e0 + *(((eax_13
                            + *(((eax_12 - eax_13) << 2) + var_d0) - var_e0) << 2) + var_d4) - var_f8)
                            << 2) + var_ec)
                        int32_t var_88
                        int32_t ebx_34 = eax_18 + var_88
                        int32_t ebx_42
                        
                        if (eax_18 + var_88 s< 0)
                            if (ebx_34 s< 0xffffff01)
                                ebx_34 = 0xffffff01
                            
                            int32_t ebx_45
                            ebx_45.b = edi[2]
                            ebx_42 = *((ebx_45 << 2) + *((ebx_34 << 2) + data_4ced578))
                        else
                            if (ebx_34 s> 0xff)
                                ebx_34 = 0xff
                            
                            int32_t ebx_37
                            ebx_37.b = edi[2]
                            ebx_42 =
                                *(((ebx_37 - 0xff) << 2) + *((ebx_34 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_21
                        eax_21.b = edi[2]
                        edi[2] = eax_21.b + (*(((ebx_42 - eax_21) << 2) + edx_2)).b
                        int32_t ebx_51
                        ebx_51.b = var_3c[1]
                        int32_t eax_24 = edx_6 + *(((ebx_51 - edx_6) << 2) + eax_10)
                        int32_t eax_25
                        eax_25.b = not.b(eax_24.b)
                        int32_t var_f4
                        int32_t var_e8
                        int32_t var_dc
                        int32_t eax_30 = var_f4 + *(((var_dc + *(((eax_25
                            + *(((eax_24 - eax_25) << 2) + var_d0) - var_dc) << 2) + var_d4) - var_f4)
                            << 2) + var_e8)
                        int32_t var_84
                        int32_t ebx_68 = eax_30 + var_84
                        int32_t ebx_76
                        
                        if (eax_30 + var_84 s< 0)
                            if (ebx_68 s< 0xffffff01)
                                ebx_68 = 0xffffff01
                            
                            int32_t ebx_79
                            ebx_79.b = edi[1]
                            ebx_76 = *((ebx_79 << 2) + *((ebx_68 << 2) + data_4ced578))
                        else
                            if (ebx_68 s> 0xff)
                                ebx_68 = 0xff
                            
                            int32_t ebx_71
                            ebx_71.b = edi[1]
                            ebx_76 =
                                *(((ebx_71 - 0xff) << 2) + *((ebx_68 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_33
                        eax_33.b = edi[1]
                        edi[1] = eax_33.b + (*(((ebx_76 - eax_33) << 2) + edx_2)).b
                        int32_t ebx_85
                        ebx_85.b = *var_3c
                        int32_t eax_36 = edx_6 + *(((ebx_85 - edx_6) << 2) + eax_10)
                        int32_t eax_37
                        eax_37.b = not.b(eax_36.b)
                        int32_t var_f0
                        int32_t var_e4
                        int32_t var_d8
                        int32_t eax_42 = var_f0 + *(((var_d8 + *(((eax_37
                            + *(((eax_36 - eax_37) << 2) + var_d0) - var_d8) << 2) + var_d4) - var_f0)
                            << 2) + var_e4)
                        int32_t var_80
                        int32_t ebx_102 = eax_42 + var_80
                        int32_t ebx_110
                        
                        if (eax_42 + var_80 s< 0)
                            if (ebx_102 s< 0xffffff01)
                                ebx_102 = 0xffffff01
                            
                            int32_t ebx_113
                            ebx_113.b = *edi
                            ebx_110 = *((ebx_113 << 2) + *((ebx_102 << 2) + data_4ced578))
                        else
                            if (ebx_102 s> 0xff)
                                ebx_102 = 0xff
                            
                            int32_t ebx_105
                            ebx_105.b = *edi
                            ebx_110 =
                                *(((ebx_105 - 0xff) << 2) + *((ebx_102 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_45
                        eax_45.b = *edi
                        *edi = eax_45.b + (*(((ebx_110 - eax_45) << 2) + edx_2)).b
            
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

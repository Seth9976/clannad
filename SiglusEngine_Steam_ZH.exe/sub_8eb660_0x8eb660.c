// 函数: sub_8eb660
// 地址: 0x8eb660
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
                            int32_t var_e0
                            int32_t var_d4
                            int32_t var_d0
                            int32_t eax_18 = var_f8 + *(((var_e0 + *(((eax_13
                                + *(((eax_12 - eax_13) << 2) + var_d0) - var_e0) << 2) + var_d4)
                                - var_f8) << 2) + var_ec)
                            int32_t var_88
                            int32_t ebx_37 = eax_18 + var_88
                            int32_t ebx_45
                            
                            if (eax_18 + var_88 s< 0)
                                if (ebx_37 s< 0xffffff01)
                                    ebx_37 = 0xffffff01
                                
                                int32_t ebx_48
                                ebx_48.b = edi[2]
                                ebx_45 = *((ebx_48 << 2) + *((ebx_37 << 2) + data_4ced578))
                            else
                                if (ebx_37 s> 0xff)
                                    ebx_37 = 0xff
                                
                                int32_t ebx_40
                                ebx_40.b = edi[2]
                                ebx_45 = *(((ebx_40 - 0xff) << 2) + *((ebx_37 << 2) + data_4ced578))
                                    + 0xff
                            
                            int32_t eax_21
                            eax_21.b = edi[2]
                            edi[2] = eax_21.b + (*(((ebx_45 - eax_21) << 2) + edx_2)).b
                            int32_t ebx_54
                            ebx_54.b = var_3c[1]
                            int32_t eax_24 = edx_6 + *(((ebx_54 - edx_6) << 2) + eax_10)
                            int32_t eax_25
                            eax_25.b = not.b(eax_24.b)
                            int32_t var_f4
                            int32_t var_e8
                            int32_t var_dc
                            int32_t eax_30 = var_f4 + *(((var_dc + *(((eax_25
                                + *(((eax_24 - eax_25) << 2) + var_d0) - var_dc) << 2) + var_d4)
                                - var_f4) << 2) + var_e8)
                            int32_t var_84
                            int32_t ebx_71 = eax_30 + var_84
                            int32_t ebx_79
                            
                            if (eax_30 + var_84 s< 0)
                                if (ebx_71 s< 0xffffff01)
                                    ebx_71 = 0xffffff01
                                
                                int32_t ebx_82
                                ebx_82.b = edi[1]
                                ebx_79 = *((ebx_82 << 2) + *((ebx_71 << 2) + data_4ced578))
                            else
                                if (ebx_71 s> 0xff)
                                    ebx_71 = 0xff
                                
                                int32_t ebx_74
                                ebx_74.b = edi[1]
                                ebx_79 = *(((ebx_74 - 0xff) << 2) + *((ebx_71 << 2) + data_4ced578))
                                    + 0xff
                            
                            int32_t eax_33
                            eax_33.b = edi[1]
                            edi[1] = eax_33.b + (*(((ebx_79 - eax_33) << 2) + edx_2)).b
                            int32_t ebx_88
                            ebx_88.b = *var_3c
                            int32_t eax_36 = edx_6 + *(((ebx_88 - edx_6) << 2) + eax_10)
                            int32_t eax_37
                            eax_37.b = not.b(eax_36.b)
                            int32_t var_f0
                            int32_t var_e4
                            int32_t var_d8
                            int32_t eax_42 = var_f0 + *(((var_d8 + *(((eax_37
                                + *(((eax_36 - eax_37) << 2) + var_d0) - var_d8) << 2) + var_d4)
                                - var_f0) << 2) + var_e4)
                            int32_t var_80
                            int32_t ebx_105 = eax_42 + var_80
                            int32_t ebx_113
                            
                            if (eax_42 + var_80 s< 0)
                                if (ebx_105 s< 0xffffff01)
                                    ebx_105 = 0xffffff01
                                
                                int32_t ebx_116
                                ebx_116.b = *edi
                                ebx_113 = *((ebx_116 << 2) + *((ebx_105 << 2) + data_4ced578))
                            else
                                if (ebx_105 s> 0xff)
                                    ebx_105 = 0xff
                                
                                int32_t ebx_108
                                ebx_108.b = *edi
                                ebx_113 =
                                    *(((ebx_108 - 0xff) << 2) + *((ebx_105 << 2) + data_4ced578))
                                    + 0xff
                            
                            int32_t eax_45
                            eax_45.b = *edi
                            *edi = eax_45.b + (*(((ebx_113 - eax_45) << 2) + edx_2)).b
            
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

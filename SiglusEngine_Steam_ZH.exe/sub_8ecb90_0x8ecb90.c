// 函数: sub_8ecb90
// 地址: 0x8ecb90
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
                        int32_t var_d0
                        int32_t eax_14 = eax_13 + *(((eax_12 - eax_13) << 2) + var_d0)
                        int32_t var_88
                        int32_t ebx_26 = eax_14 + var_88
                        int32_t ebx_34
                        
                        if (eax_14 + var_88 s< 0)
                            if (ebx_26 s< 0xffffff01)
                                ebx_26 = 0xffffff01
                            
                            int32_t ebx_37
                            ebx_37.b = edi[2]
                            ebx_34 = *((ebx_37 << 2) + *((ebx_26 << 2) + data_4ced578))
                        else
                            if (ebx_26 s> 0xff)
                                ebx_26 = 0xff
                            
                            int32_t ebx_29
                            ebx_29.b = edi[2]
                            ebx_34 =
                                *(((ebx_29 - 0xff) << 2) + *((ebx_26 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_17
                        eax_17.b = edi[2]
                        edi[2] = eax_17.b + (*(((ebx_34 - eax_17) << 2) + edx_2)).b
                        int32_t ebx_43
                        ebx_43.b = var_3c[1]
                        int32_t eax_20 = edx_6 + *(((ebx_43 - edx_6) << 2) + eax_10)
                        int32_t eax_21
                        eax_21.b = not.b(eax_20.b)
                        int32_t eax_22 = eax_21 + *(((eax_20 - eax_21) << 2) + var_d0)
                        int32_t var_84
                        int32_t ebx_52 = eax_22 + var_84
                        int32_t ebx_60
                        
                        if (eax_22 + var_84 s< 0)
                            if (ebx_52 s< 0xffffff01)
                                ebx_52 = 0xffffff01
                            
                            int32_t ebx_63
                            ebx_63.b = edi[1]
                            ebx_60 = *((ebx_63 << 2) + *((ebx_52 << 2) + data_4ced578))
                        else
                            if (ebx_52 s> 0xff)
                                ebx_52 = 0xff
                            
                            int32_t ebx_55
                            ebx_55.b = edi[1]
                            ebx_60 =
                                *(((ebx_55 - 0xff) << 2) + *((ebx_52 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_25
                        eax_25.b = edi[1]
                        edi[1] = eax_25.b + (*(((ebx_60 - eax_25) << 2) + edx_2)).b
                        int32_t ebx_69
                        ebx_69.b = *var_3c
                        int32_t eax_28 = edx_6 + *(((ebx_69 - edx_6) << 2) + eax_10)
                        int32_t eax_29
                        eax_29.b = not.b(eax_28.b)
                        int32_t eax_30 = eax_29 + *(((eax_28 - eax_29) << 2) + var_d0)
                        int32_t var_80
                        int32_t ebx_78 = eax_30 + var_80
                        int32_t ebx_86
                        
                        if (eax_30 + var_80 s< 0)
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
                            ebx_86 =
                                *(((ebx_81 - 0xff) << 2) + *((ebx_78 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_33
                        eax_33.b = *edi
                        *edi = eax_33.b + (*(((ebx_86 - eax_33) << 2) + edx_2)).b
            
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

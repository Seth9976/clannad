// 函数: sub_8e39c0
// 地址: 0x8e39c0
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
                        int32_t eax_1
                        eax_1.b = var_3c[2]
                        int32_t eax_3
                        eax_3.b = var_3c[1]
                        int32_t eax_5
                        eax_5.b = *var_3c
                        uint32_t edx_6 = (*(&data_4e3d680 + (eax_1 << 2))
                            + *(&data_4e3e280 + (eax_3 << 2)) + *(&data_4e3de80 + (eax_5 << 2))) u>> 8
                        int32_t var_cc
                        int32_t eax_7 = *(&data_4e3da80 + var_cc)
                        int32_t ebx_15
                        ebx_15.b = var_3c[2]
                        int32_t eax_9 = edx_6 + *(((ebx_15 - edx_6) << 2) + eax_7)
                        int32_t eax_10
                        eax_10.b = not.b(eax_9.b)
                        int32_t var_e0
                        int32_t var_d4
                        int32_t var_d0
                        int32_t eax_13 = var_e0 + *(((eax_10 + *(((eax_9 - eax_10) << 2) + var_d0)
                            - var_e0) << 2) + var_d4)
                        int32_t var_88
                        int32_t ebx_28 = eax_13 + var_88
                        int32_t ebx_36
                        
                        if (eax_13 + var_88 s< 0)
                            if (ebx_28 s< 0xffffff01)
                                ebx_28 = 0xffffff01
                            
                            int32_t ebx_39
                            ebx_39.b = edi[2]
                            ebx_36 = *((ebx_39 << 2) + *((ebx_28 << 2) + data_4ced578))
                        else
                            if (ebx_28 s> 0xff)
                                ebx_28 = 0xff
                            
                            int32_t ebx_31
                            ebx_31.b = edi[2]
                            ebx_36 =
                                *(((ebx_31 - 0xff) << 2) + *((ebx_28 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_16
                        eax_16.b = edi[2]
                        edi[2] = eax_16.b + (*(((ebx_36 - eax_16) << 2) + edx_2)).b
                        int32_t ebx_45
                        ebx_45.b = var_3c[1]
                        int32_t eax_19 = edx_6 + *(((ebx_45 - edx_6) << 2) + eax_7)
                        int32_t eax_20
                        eax_20.b = not.b(eax_19.b)
                        int32_t var_dc
                        int32_t eax_23 = var_dc + *(((eax_20 + *(((eax_19 - eax_20) << 2) + var_d0)
                            - var_dc) << 2) + var_d4)
                        int32_t var_84
                        int32_t ebx_58 = eax_23 + var_84
                        int32_t ebx_66
                        
                        if (eax_23 + var_84 s< 0)
                            if (ebx_58 s< 0xffffff01)
                                ebx_58 = 0xffffff01
                            
                            int32_t ebx_69
                            ebx_69.b = edi[1]
                            ebx_66 = *((ebx_69 << 2) + *((ebx_58 << 2) + data_4ced578))
                        else
                            if (ebx_58 s> 0xff)
                                ebx_58 = 0xff
                            
                            int32_t ebx_61
                            ebx_61.b = edi[1]
                            ebx_66 =
                                *(((ebx_61 - 0xff) << 2) + *((ebx_58 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_26
                        eax_26.b = edi[1]
                        edi[1] = eax_26.b + (*(((ebx_66 - eax_26) << 2) + edx_2)).b
                        int32_t ebx_75
                        ebx_75.b = *var_3c
                        int32_t eax_29 = edx_6 + *(((ebx_75 - edx_6) << 2) + eax_7)
                        int32_t eax_30
                        eax_30.b = not.b(eax_29.b)
                        int32_t var_d8
                        int32_t eax_33 = var_d8 + *(((eax_30 + *(((eax_29 - eax_30) << 2) + var_d0)
                            - var_d8) << 2) + var_d4)
                        int32_t var_80
                        int32_t ebx_88 = eax_33 + var_80
                        int32_t ebx_96
                        
                        if (eax_33 + var_80 s< 0)
                            if (ebx_88 s< 0xffffff01)
                                ebx_88 = 0xffffff01
                            
                            int32_t ebx_99
                            ebx_99.b = *edi
                            ebx_96 = *((ebx_99 << 2) + *((ebx_88 << 2) + data_4ced578))
                        else
                            if (ebx_88 s> 0xff)
                                ebx_88 = 0xff
                            
                            int32_t ebx_91
                            ebx_91.b = *edi
                            ebx_96 =
                                *(((ebx_91 - 0xff) << 2) + *((ebx_88 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_36
                        eax_36.b = *edi
                        *edi = eax_36.b + (*(((ebx_96 - eax_36) << 2) + edx_2)).b
            
            edi = &edi[4]
            temp3_1 = edx
            edx -= var_44
        while (temp3_1 - var_44 s>= 0)
    
    i = i_1
    i_1 -= 1
while (i != 1)

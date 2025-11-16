// 函数: sub_7b4810
// 地址: 0x7b4810
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_134
char* edi = var_134
char* var_124
char* esi_1 = var_124
int32_t i_2
int32_t i_1 = i_2
int32_t i

do
    int32_t j_2
    int32_t j_1 = j_2
    int32_t j
    
    do
        int32_t ebx_1
        ebx_1.b = esi_1[3]
        
        if (ebx_1 != 0)
            int32_t var_11c
            int32_t ebx_7 = *(*((ebx_1 << 2) + &data_4e3da80) + var_11c)
            
            if (ebx_7 != 0)
                int32_t edx_1 = *((ebx_7 << 2) + &data_4e3da80)
                int32_t eax_1
                eax_1.b = esi_1[2]
                int32_t eax_3
                eax_3.b = esi_1[1]
                int32_t eax_5
                eax_5.b = *esi_1
                uint32_t edx_5 = (*(&data_4e3d680 + (eax_1 << 2)) + *(&data_4e3e280 + (eax_3 << 2))
                    + *(&data_4e3de80 + (eax_5 << 2))) u>> 8
                int32_t var_cc
                int32_t eax_7 = *(&data_4e3da80 + var_cc)
                int32_t ebx_15
                ebx_15.b = esi_1[2]
                int32_t eax_9 = edx_5 + *(((ebx_15 - edx_5) << 2) + eax_7)
                int32_t eax_10
                eax_10.b = not.b(eax_9.b)
                int32_t var_f8
                int32_t var_ec
                int32_t var_d0
                int32_t eax_13 = var_f8
                    + *(((eax_10 + *(((eax_9 - eax_10) << 2) + var_d0) - var_f8) << 2) + var_ec)
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
                    ebx_36 = *(((ebx_31 - 0xff) << 2) + *((ebx_28 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_16
                eax_16.b = edi[2]
                edi[2] = eax_16.b + (*(((ebx_36 - eax_16) << 2) + edx_1)).b
                int32_t ebx_45
                ebx_45.b = esi_1[1]
                int32_t eax_19 = edx_5 + *(((ebx_45 - edx_5) << 2) + eax_7)
                int32_t eax_20
                eax_20.b = not.b(eax_19.b)
                int32_t var_f4
                int32_t var_e8
                int32_t eax_23 = var_f4
                    + *(((eax_20 + *(((eax_19 - eax_20) << 2) + var_d0) - var_f4) << 2) + var_e8)
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
                    ebx_66 = *(((ebx_61 - 0xff) << 2) + *((ebx_58 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_26
                eax_26.b = edi[1]
                edi[1] = eax_26.b + (*(((ebx_66 - eax_26) << 2) + edx_1)).b
                int32_t ebx_75
                ebx_75.b = *esi_1
                int32_t eax_29 = edx_5 + *(((ebx_75 - edx_5) << 2) + eax_7)
                int32_t eax_30
                eax_30.b = not.b(eax_29.b)
                int32_t var_f0
                int32_t var_e4
                int32_t eax_33 = var_f0
                    + *(((eax_30 + *(((eax_29 - eax_30) << 2) + var_d0) - var_f0) << 2) + var_e4)
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
                    ebx_96 = *(((ebx_91 - 0xff) << 2) + *((ebx_88 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_36
                eax_36.b = *edi
                *edi = eax_36.b + (*(((ebx_96 - eax_36) << 2) + edx_1)).b
        
        esi_1 = &esi_1[4]
        edi = &edi[4]
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_120
    esi_1 = &esi_1[var_120]
    int32_t var_130
    edi = &edi[var_130]
    i = i_1
    i_1 -= 1
while (i != 1)

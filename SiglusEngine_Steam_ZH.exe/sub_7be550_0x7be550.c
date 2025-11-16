// 函数: sub_7be550
// 地址: 0x7be550
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_134
char* edi = var_134
char* var_124
char* esi_1 = var_124
int32_t i_2
int32_t i_1 = i_2
void* result
int32_t i

do
    int32_t j_2
    int32_t j_1 = j_2
    int32_t var_a8
    int32_t var_a0_1 = var_a8
    int32_t var_bc
    void* result_2
    int32_t j
    
    do
        int32_t ebx_1
        ebx_1.b = esi_1[3]
        
        if (ebx_1 != 0)
            int32_t eax_2
            eax_2.b = *(result_2 + var_a0_1)
            int32_t var_b4
            
            if (var_b4 != 0)
                eax_2.b = not.b(eax_2.b)
            
            char var_b0
            int32_t var_ac
            int32_t eax_4 = (eax_2 << var_b0) + var_ac
            
            if (eax_4 s< 0)
                eax_4 = 0
            else if (eax_4 s> 0xff)
                eax_4 = 0xff
            
            if (eax_4 != 0)
                int32_t ebx_12 = *(*((eax_4 << 2) + &data_4e3da80) + (ebx_1 << 2))
                
                if (ebx_12 != 0)
                    int32_t edx_2 = *((ebx_12 << 2) + &data_4e3da80)
                    int32_t eax_5
                    eax_5.b = esi_1[2]
                    int32_t eax_7
                    eax_7.b = esi_1[1]
                    int32_t eax_9
                    eax_9.b = *esi_1
                    uint32_t edx_6 = (*(&data_4e3d680 + (eax_5 << 2))
                        + *(&data_4e3e280 + (eax_7 << 2)) + *(&data_4e3de80 + (eax_9 << 2))) u>> 8
                    int32_t var_cc
                    int32_t eax_11 = *(&data_4e3da80 + var_cc)
                    int32_t ebx_20
                    ebx_20.b = esi_1[2]
                    int32_t eax_13 = edx_6 + *(((ebx_20 - edx_6) << 2) + eax_11)
                    int32_t eax_14
                    eax_14.b = not.b(eax_13.b)
                    int32_t var_f8
                    int32_t var_ec
                    int32_t var_e0
                    int32_t var_d4
                    int32_t var_d0
                    int32_t eax_19 = var_f8 + *(((var_e0 +
                        *(((eax_14 + *(((eax_13 - eax_14) << 2) + var_d0) - var_e0) << 2) + var_d4)
                        - var_f8) << 2) + var_ec)
                    int32_t var_88
                    int32_t ebx_37 = eax_19 + var_88
                    int32_t ebx_45
                    
                    if (eax_19 + var_88 s< 0)
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
                        ebx_45 = *(((ebx_40 - 0xff) << 2) + *((ebx_37 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_22
                    eax_22.b = edi[2]
                    edi[2] = eax_22.b + (*(((ebx_45 - eax_22) << 2) + edx_2)).b
                    int32_t ebx_54
                    ebx_54.b = esi_1[1]
                    int32_t eax_25 = edx_6 + *(((ebx_54 - edx_6) << 2) + eax_11)
                    int32_t eax_26
                    eax_26.b = not.b(eax_25.b)
                    int32_t var_f4
                    int32_t var_e8
                    int32_t var_dc
                    int32_t eax_31 = var_f4 + *(((var_dc +
                        *(((eax_26 + *(((eax_25 - eax_26) << 2) + var_d0) - var_dc) << 2) + var_d4)
                        - var_f4) << 2) + var_e8)
                    int32_t var_84
                    int32_t ebx_71 = eax_31 + var_84
                    int32_t ebx_79
                    
                    if (eax_31 + var_84 s< 0)
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
                        ebx_79 = *(((ebx_74 - 0xff) << 2) + *((ebx_71 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_34
                    eax_34.b = edi[1]
                    edi[1] = eax_34.b + (*(((ebx_79 - eax_34) << 2) + edx_2)).b
                    int32_t ebx_88
                    ebx_88.b = *esi_1
                    int32_t eax_37 = edx_6 + *(((ebx_88 - edx_6) << 2) + eax_11)
                    int32_t eax_38
                    eax_38.b = not.b(eax_37.b)
                    int32_t var_f0
                    int32_t var_e4
                    int32_t var_d8
                    int32_t eax_43 = var_f0 + *(((var_d8 +
                        *(((eax_38 + *(((eax_37 - eax_38) << 2) + var_d0) - var_d8) << 2) + var_d4)
                        - var_f0) << 2) + var_e4)
                    int32_t var_80
                    int32_t ebx_105 = eax_43 + var_80
                    int32_t ebx_113
                    
                    if (eax_43 + var_80 s< 0)
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
                            *(((ebx_108 - 0xff) << 2) + *((ebx_105 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_46
                    eax_46.b = *edi
                    *edi = eax_46.b + (*(((ebx_113 - eax_46) << 2) + edx_2)).b
        
        int32_t eax_49 = var_a0_1 + 1
        
        if (eax_49 s>= var_bc)
            eax_49 = 0
        
        var_a0_1 = eax_49
        esi_1 = &esi_1[4]
        edi = &edi[4]
        j = j_1
        j_1 -= 1
    while (j != 1)
    result = result_2 + var_bc
    int32_t var_94
    void* result_1
    
    if (result s>= var_94)
        result = result_1
    result_2 = result
    int32_t var_120
    esi_1 = &esi_1[var_120]
    int32_t var_130
    edi = &edi[var_130]
    i = i_1
    i_1 -= 1
while (i != 1)
return result

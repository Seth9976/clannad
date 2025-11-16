// 函数: sub_7b5410
// 地址: 0x7b5410
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
                int32_t var_e0
                int32_t var_d4
                int32_t var_d0
                int32_t eax_15 = var_f8 + *(((var_e0
                    + *(((eax_10 + *(((eax_9 - eax_10) << 2) + var_d0) - var_e0) << 2) + var_d4)
                    - var_f8) << 2) + var_ec)
                int32_t var_88
                int32_t ebx_32 = eax_15 + var_88
                int32_t ebx_40
                
                if (eax_15 + var_88 s< 0)
                    if (ebx_32 s< 0xffffff01)
                        ebx_32 = 0xffffff01
                    
                    int32_t ebx_43
                    ebx_43.b = edi[2]
                    ebx_40 = *((ebx_43 << 2) + *((ebx_32 << 2) + data_4ced578))
                else
                    if (ebx_32 s> 0xff)
                        ebx_32 = 0xff
                    
                    int32_t ebx_35
                    ebx_35.b = edi[2]
                    ebx_40 = *(((ebx_35 - 0xff) << 2) + *((ebx_32 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_18
                eax_18.b = edi[2]
                edi[2] = eax_18.b + (*(((ebx_40 - eax_18) << 2) + edx_1)).b
                int32_t ebx_49
                ebx_49.b = esi_1[1]
                int32_t eax_21 = edx_5 + *(((ebx_49 - edx_5) << 2) + eax_7)
                int32_t eax_22
                eax_22.b = not.b(eax_21.b)
                int32_t var_f4
                int32_t var_e8
                int32_t var_dc
                int32_t eax_27 = var_f4 + *(((var_dc
                    + *(((eax_22 + *(((eax_21 - eax_22) << 2) + var_d0) - var_dc) << 2) + var_d4)
                    - var_f4) << 2) + var_e8)
                int32_t var_84
                int32_t ebx_66 = eax_27 + var_84
                int32_t ebx_74
                
                if (eax_27 + var_84 s< 0)
                    if (ebx_66 s< 0xffffff01)
                        ebx_66 = 0xffffff01
                    
                    int32_t ebx_77
                    ebx_77.b = edi[1]
                    ebx_74 = *((ebx_77 << 2) + *((ebx_66 << 2) + data_4ced578))
                else
                    if (ebx_66 s> 0xff)
                        ebx_66 = 0xff
                    
                    int32_t ebx_69
                    ebx_69.b = edi[1]
                    ebx_74 = *(((ebx_69 - 0xff) << 2) + *((ebx_66 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_30
                eax_30.b = edi[1]
                edi[1] = eax_30.b + (*(((ebx_74 - eax_30) << 2) + edx_1)).b
                int32_t ebx_83
                ebx_83.b = *esi_1
                int32_t eax_33 = edx_5 + *(((ebx_83 - edx_5) << 2) + eax_7)
                int32_t eax_34
                eax_34.b = not.b(eax_33.b)
                int32_t var_f0
                int32_t var_e4
                int32_t var_d8
                int32_t eax_39 = var_f0 + *(((var_d8
                    + *(((eax_34 + *(((eax_33 - eax_34) << 2) + var_d0) - var_d8) << 2) + var_d4)
                    - var_f0) << 2) + var_e4)
                int32_t var_80
                int32_t ebx_100 = eax_39 + var_80
                int32_t ebx_108
                
                if (eax_39 + var_80 s< 0)
                    if (ebx_100 s< 0xffffff01)
                        ebx_100 = 0xffffff01
                    
                    int32_t ebx_111
                    ebx_111.b = *edi
                    ebx_108 = *((ebx_111 << 2) + *((ebx_100 << 2) + data_4ced578))
                else
                    if (ebx_100 s> 0xff)
                        ebx_100 = 0xff
                    
                    int32_t ebx_103
                    ebx_103.b = *edi
                    ebx_108 = *(((ebx_103 - 0xff) << 2) + *((ebx_100 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_42
                eax_42.b = *edi
                *edi = eax_42.b + (*(((ebx_108 - eax_42) << 2) + edx_1)).b
        
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

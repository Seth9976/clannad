// 函数: sub_7bbba0
// 地址: 0x7bbba0
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
            int32_t var_11c
            int32_t ebx_7 = *(*((ebx_1 << 2) + &data_4e3da80) + var_11c)
            
            if (ebx_7 != 0)
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
                    int32_t ebx_18 = *(*((eax_4 << 2) + &data_4e3da80) + (ebx_7 << 2))
                    
                    if (ebx_18 != 0)
                        int32_t edx_2 = *((ebx_18 << 2) + &data_4e3da80)
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
                        int32_t ebx_26
                        ebx_26.b = esi_1[2]
                        int32_t var_f8
                        int32_t var_ec
                        int32_t eax_15 = var_f8 + *(((edx_6 + *(((ebx_26 - edx_6) << 2) + eax_11)
                            - var_f8) << 2) + var_ec)
                        int32_t var_88
                        int32_t ebx_35 = eax_15 + var_88
                        int32_t ebx_43
                        
                        if (eax_15 + var_88 s< 0)
                            if (ebx_35 s< 0xffffff01)
                                ebx_35 = 0xffffff01
                            
                            int32_t ebx_46
                            ebx_46.b = edi[2]
                            ebx_43 = *((ebx_46 << 2) + *((ebx_35 << 2) + data_4ced578))
                        else
                            if (ebx_35 s> 0xff)
                                ebx_35 = 0xff
                            
                            int32_t ebx_38
                            ebx_38.b = edi[2]
                            ebx_43 =
                                *(((ebx_38 - 0xff) << 2) + *((ebx_35 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_18
                        eax_18.b = edi[2]
                        edi[2] = eax_18.b + (*(((ebx_43 - eax_18) << 2) + edx_2)).b
                        int32_t ebx_52
                        ebx_52.b = esi_1[1]
                        int32_t var_f4
                        int32_t var_e8
                        int32_t eax_23 = var_f4 + *(((edx_6 + *(((ebx_52 - edx_6) << 2) + eax_11)
                            - var_f4) << 2) + var_e8)
                        int32_t var_84
                        int32_t ebx_61 = eax_23 + var_84
                        int32_t ebx_69
                        
                        if (eax_23 + var_84 s< 0)
                            if (ebx_61 s< 0xffffff01)
                                ebx_61 = 0xffffff01
                            
                            int32_t ebx_72
                            ebx_72.b = edi[1]
                            ebx_69 = *((ebx_72 << 2) + *((ebx_61 << 2) + data_4ced578))
                        else
                            if (ebx_61 s> 0xff)
                                ebx_61 = 0xff
                            
                            int32_t ebx_64
                            ebx_64.b = edi[1]
                            ebx_69 =
                                *(((ebx_64 - 0xff) << 2) + *((ebx_61 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_26
                        eax_26.b = edi[1]
                        edi[1] = eax_26.b + (*(((ebx_69 - eax_26) << 2) + edx_2)).b
                        int32_t ebx_78
                        ebx_78.b = *esi_1
                        int32_t var_f0
                        int32_t var_e4
                        int32_t eax_31 = var_f0 + *(((edx_6 + *(((ebx_78 - edx_6) << 2) + eax_11)
                            - var_f0) << 2) + var_e4)
                        int32_t var_80
                        int32_t ebx_87 = eax_31 + var_80
                        int32_t ebx_95
                        
                        if (eax_31 + var_80 s< 0)
                            if (ebx_87 s< 0xffffff01)
                                ebx_87 = 0xffffff01
                            
                            int32_t ebx_98
                            ebx_98.b = *edi
                            ebx_95 = *((ebx_98 << 2) + *((ebx_87 << 2) + data_4ced578))
                        else
                            if (ebx_87 s> 0xff)
                                ebx_87 = 0xff
                            
                            int32_t ebx_90
                            ebx_90.b = *edi
                            ebx_95 =
                                *(((ebx_90 - 0xff) << 2) + *((ebx_87 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_34
                        eax_34.b = *edi
                        *edi = eax_34.b + (*(((ebx_95 - eax_34) << 2) + edx_2)).b
        
        int32_t eax_37 = var_a0_1 + 1
        
        if (eax_37 s>= var_bc)
            eax_37 = 0
        
        var_a0_1 = eax_37
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

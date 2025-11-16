// 函数: sub_7ba0d0
// 地址: 0x7ba0d0
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
                        int32_t ebx_22
                        ebx_22.b = esi_1[2]
                        int32_t var_f8
                        int32_t var_ec
                        int32_t eax_6 = var_f8 + *(((ebx_22 - var_f8) << 2) + var_ec)
                        int32_t var_88
                        int32_t ebx_27 = eax_6 + var_88
                        int32_t ebx_35
                        
                        if (eax_6 + var_88 s< 0)
                            if (ebx_27 s< 0xffffff01)
                                ebx_27 = 0xffffff01
                            
                            int32_t ebx_38
                            ebx_38.b = edi[2]
                            ebx_35 = *((ebx_38 << 2) + *((ebx_27 << 2) + data_4ced578))
                        else
                            if (ebx_27 s> 0xff)
                                ebx_27 = 0xff
                            
                            int32_t ebx_30
                            ebx_30.b = edi[2]
                            ebx_35 =
                                *(((ebx_30 - 0xff) << 2) + *((ebx_27 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_9
                        eax_9.b = edi[2]
                        edi[2] = eax_9.b + (*(((ebx_35 - eax_9) << 2) + edx_2)).b
                        int32_t ebx_44
                        ebx_44.b = esi_1[1]
                        int32_t var_f4
                        int32_t var_e8
                        int32_t eax_12 = var_f4 + *(((ebx_44 - var_f4) << 2) + var_e8)
                        int32_t var_84
                        int32_t ebx_49 = eax_12 + var_84
                        int32_t ebx_57
                        
                        if (eax_12 + var_84 s< 0)
                            if (ebx_49 s< 0xffffff01)
                                ebx_49 = 0xffffff01
                            
                            int32_t ebx_60
                            ebx_60.b = edi[1]
                            ebx_57 = *((ebx_60 << 2) + *((ebx_49 << 2) + data_4ced578))
                        else
                            if (ebx_49 s> 0xff)
                                ebx_49 = 0xff
                            
                            int32_t ebx_52
                            ebx_52.b = edi[1]
                            ebx_57 =
                                *(((ebx_52 - 0xff) << 2) + *((ebx_49 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_15
                        eax_15.b = edi[1]
                        edi[1] = eax_15.b + (*(((ebx_57 - eax_15) << 2) + edx_2)).b
                        int32_t ebx_66
                        ebx_66.b = *esi_1
                        int32_t var_f0
                        int32_t var_e4
                        int32_t eax_18 = var_f0 + *(((ebx_66 - var_f0) << 2) + var_e4)
                        int32_t var_80
                        int32_t ebx_71 = eax_18 + var_80
                        int32_t ebx_79
                        
                        if (eax_18 + var_80 s< 0)
                            if (ebx_71 s< 0xffffff01)
                                ebx_71 = 0xffffff01
                            
                            int32_t ebx_82
                            ebx_82.b = *edi
                            ebx_79 = *((ebx_82 << 2) + *((ebx_71 << 2) + data_4ced578))
                        else
                            if (ebx_71 s> 0xff)
                                ebx_71 = 0xff
                            
                            int32_t ebx_74
                            ebx_74.b = *edi
                            ebx_79 =
                                *(((ebx_74 - 0xff) << 2) + *((ebx_71 << 2) + data_4ced578)) + 0xff
                        
                        int32_t eax_21
                        eax_21.b = *edi
                        *edi = eax_21.b + (*(((ebx_79 - eax_21) << 2) + edx_2)).b
        
        int32_t eax_24 = var_a0_1 + 1
        
        if (eax_24 s>= var_bc)
            eax_24 = 0
        
        var_a0_1 = eax_24
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

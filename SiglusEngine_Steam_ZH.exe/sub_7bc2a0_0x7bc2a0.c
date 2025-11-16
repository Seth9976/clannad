// 函数: sub_7bc2a0
// 地址: 0x7bc2a0
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
            int32_t var_11c
            int32_t ebx_9 = *(*((eax_4 << 2) + &data_4e3da80) + var_11c)
            
            if (ebx_9 != 0)
                int32_t edx_2 = *((ebx_9 << 2) + &data_4e3da80)
                int32_t eax_5
                eax_5.b = esi_1[2]
                int32_t eax_7
                eax_7.b = esi_1[1]
                int32_t eax_9
                eax_9.b = *esi_1
                uint32_t edx_6 = (*(&data_4e3d680 + (eax_5 << 2)) + *(&data_4e3e280 + (eax_7 << 2))
                    + *(&data_4e3de80 + (eax_9 << 2))) u>> 8
                int32_t var_cc
                int32_t eax_11 = *(&data_4e3da80 + var_cc)
                int32_t ebx_17
                ebx_17.b = esi_1[2]
                int32_t var_f8
                int32_t var_ec
                int32_t var_e0
                int32_t var_d4
                int32_t eax_17 = var_f8 + *(((var_e0
                    + *(((edx_6 + *(((ebx_17 - edx_6) << 2) + eax_11) - var_e0) << 2) + var_d4)
                    - var_f8) << 2) + var_ec)
                int32_t var_88
                int32_t ebx_30 = eax_17 + var_88
                int32_t ebx_38
                
                if (eax_17 + var_88 s< 0)
                    if (ebx_30 s< 0xffffff01)
                        ebx_30 = 0xffffff01
                    
                    int32_t ebx_41
                    ebx_41.b = edi[2]
                    ebx_38 = *((ebx_41 << 2) + *((ebx_30 << 2) + data_4ced578))
                else
                    if (ebx_30 s> 0xff)
                        ebx_30 = 0xff
                    
                    int32_t ebx_33
                    ebx_33.b = edi[2]
                    ebx_38 = *(((ebx_33 - 0xff) << 2) + *((ebx_30 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_20
                eax_20.b = edi[2]
                edi[2] = eax_20.b + (*(((ebx_38 - eax_20) << 2) + edx_2)).b
                int32_t ebx_47
                ebx_47.b = esi_1[1]
                int32_t var_f4
                int32_t var_e8
                int32_t var_dc
                int32_t eax_27 = var_f4 + *(((var_dc
                    + *(((edx_6 + *(((ebx_47 - edx_6) << 2) + eax_11) - var_dc) << 2) + var_d4)
                    - var_f4) << 2) + var_e8)
                int32_t var_84
                int32_t ebx_60 = eax_27 + var_84
                int32_t ebx_68
                
                if (eax_27 + var_84 s< 0)
                    if (ebx_60 s< 0xffffff01)
                        ebx_60 = 0xffffff01
                    
                    int32_t ebx_71
                    ebx_71.b = edi[1]
                    ebx_68 = *((ebx_71 << 2) + *((ebx_60 << 2) + data_4ced578))
                else
                    if (ebx_60 s> 0xff)
                        ebx_60 = 0xff
                    
                    int32_t ebx_63
                    ebx_63.b = edi[1]
                    ebx_68 = *(((ebx_63 - 0xff) << 2) + *((ebx_60 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_30
                eax_30.b = edi[1]
                edi[1] = eax_30.b + (*(((ebx_68 - eax_30) << 2) + edx_2)).b
                int32_t ebx_77
                ebx_77.b = *esi_1
                int32_t var_f0
                int32_t var_e4
                int32_t var_d8
                int32_t eax_37 = var_f0 + *(((var_d8
                    + *(((edx_6 + *(((ebx_77 - edx_6) << 2) + eax_11) - var_d8) << 2) + var_d4)
                    - var_f0) << 2) + var_e4)
                int32_t var_80
                int32_t ebx_90 = eax_37 + var_80
                int32_t ebx_98
                
                if (eax_37 + var_80 s< 0)
                    if (ebx_90 s< 0xffffff01)
                        ebx_90 = 0xffffff01
                    
                    int32_t ebx_101
                    ebx_101.b = *edi
                    ebx_98 = *((ebx_101 << 2) + *((ebx_90 << 2) + data_4ced578))
                else
                    if (ebx_90 s> 0xff)
                        ebx_90 = 0xff
                    
                    int32_t ebx_93
                    ebx_93.b = *edi
                    ebx_98 = *(((ebx_93 - 0xff) << 2) + *((ebx_90 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_40
                eax_40.b = *edi
                *edi = eax_40.b + (*(((ebx_98 - eax_40) << 2) + edx_2)).b
        
        int32_t eax_43 = var_a0_1 + 1
        
        if (eax_43 s>= var_bc)
            eax_43 = 0
        
        var_a0_1 = eax_43
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

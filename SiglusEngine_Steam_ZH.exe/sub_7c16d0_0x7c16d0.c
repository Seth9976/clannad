// 函数: sub_7c16d0
// 地址: 0x7c16d0
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
                int32_t ebx_13
                ebx_13.b = esi_1[2]
                int32_t eax_5
                eax_5.b = not.b(ebx_13.b)
                int32_t var_f8
                int32_t var_ec
                int32_t var_e0
                int32_t var_d4
                int32_t var_d0
                int32_t eax_10 = var_f8 + *(((var_e0
                    + *(((eax_5 + *(((ebx_13 - eax_5) << 2) + var_d0) - var_e0) << 2) + var_d4)
                    - var_f8) << 2) + var_ec)
                int32_t var_88
                int32_t ebx_26 = eax_10 + var_88
                int32_t ebx_34
                
                if (eax_10 + var_88 s< 0)
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
                    ebx_34 = *(((ebx_29 - 0xff) << 2) + *((ebx_26 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_13
                eax_13.b = edi[2]
                edi[2] = eax_13.b + (*(((ebx_34 - eax_13) << 2) + edx_2)).b
                int32_t ebx_43
                ebx_43.b = esi_1[1]
                int32_t eax_15
                eax_15.b = not.b(ebx_43.b)
                int32_t var_f4
                int32_t var_e8
                int32_t var_dc
                int32_t eax_20 = var_f4 + *(((var_dc
                    + *(((eax_15 + *(((ebx_43 - eax_15) << 2) + var_d0) - var_dc) << 2) + var_d4)
                    - var_f4) << 2) + var_e8)
                int32_t var_84
                int32_t ebx_56 = eax_20 + var_84
                int32_t ebx_64
                
                if (eax_20 + var_84 s< 0)
                    if (ebx_56 s< 0xffffff01)
                        ebx_56 = 0xffffff01
                    
                    int32_t ebx_67
                    ebx_67.b = edi[1]
                    ebx_64 = *((ebx_67 << 2) + *((ebx_56 << 2) + data_4ced578))
                else
                    if (ebx_56 s> 0xff)
                        ebx_56 = 0xff
                    
                    int32_t ebx_59
                    ebx_59.b = edi[1]
                    ebx_64 = *(((ebx_59 - 0xff) << 2) + *((ebx_56 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_23
                eax_23.b = edi[1]
                edi[1] = eax_23.b + (*(((ebx_64 - eax_23) << 2) + edx_2)).b
                int32_t ebx_73
                ebx_73.b = *esi_1
                int32_t eax_25
                eax_25.b = not.b(ebx_73.b)
                int32_t var_f0
                int32_t var_e4
                int32_t var_d8
                int32_t eax_30 = var_f0 + *(((var_d8
                    + *(((eax_25 + *(((ebx_73 - eax_25) << 2) + var_d0) - var_d8) << 2) + var_d4)
                    - var_f0) << 2) + var_e4)
                int32_t var_80
                int32_t ebx_86 = eax_30 + var_80
                int32_t ebx_94
                
                if (eax_30 + var_80 s< 0)
                    if (ebx_86 s< 0xffffff01)
                        ebx_86 = 0xffffff01
                    
                    int32_t ebx_97
                    ebx_97.b = *edi
                    ebx_94 = *((ebx_97 << 2) + *((ebx_86 << 2) + data_4ced578))
                else
                    if (ebx_86 s> 0xff)
                        ebx_86 = 0xff
                    
                    int32_t ebx_89
                    ebx_89.b = *edi
                    ebx_94 = *(((ebx_89 - 0xff) << 2) + *((ebx_86 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_33
                eax_33.b = *edi
                *edi = eax_33.b + (*(((ebx_94 - eax_33) << 2) + edx_2)).b
        
        int32_t eax_36 = var_a0_1 + 1
        
        if (eax_36 s>= var_bc)
            eax_36 = 0
        
        var_a0_1 = eax_36
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

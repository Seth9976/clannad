// 函数: sub_7c0d70
// 地址: 0x7c0d70
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
                    int32_t ebx_16
                    ebx_16.b = esi_1[2]
                    int32_t eax_5
                    eax_5.b = not.b(ebx_16.b)
                    int32_t var_f8
                    int32_t var_ec
                    int32_t var_d0
                    int32_t eax_8 = var_f8
                        + *(((eax_5 + *(((ebx_16 - eax_5) << 2) + var_d0) - var_f8) << 2) + var_ec)
                    int32_t var_88
                    int32_t ebx_25 = eax_8 + var_88
                    int32_t ebx_33
                    
                    if (eax_8 + var_88 s< 0)
                        if (ebx_25 s< 0xffffff01)
                            ebx_25 = 0xffffff01
                        
                        int32_t ebx_36
                        ebx_36.b = edi[2]
                        ebx_33 = *((ebx_36 << 2) + *((ebx_25 << 2) + data_4ced578))
                    else
                        if (ebx_25 s> 0xff)
                            ebx_25 = 0xff
                        
                        int32_t ebx_28
                        ebx_28.b = edi[2]
                        ebx_33 = *(((ebx_28 - 0xff) << 2) + *((ebx_25 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_11
                    eax_11.b = edi[2]
                    edi[2] = eax_11.b + (*(((ebx_33 - eax_11) << 2) + edx_2)).b
                    int32_t ebx_42
                    ebx_42.b = esi_1[1]
                    int32_t eax_13
                    eax_13.b = not.b(ebx_42.b)
                    int32_t var_f4
                    int32_t var_e8
                    int32_t eax_16 = var_f4 +
                        *(((eax_13 + *(((ebx_42 - eax_13) << 2) + var_d0) - var_f4) << 2) + var_e8)
                    int32_t var_84
                    int32_t ebx_51 = eax_16 + var_84
                    int32_t ebx_59
                    
                    if (eax_16 + var_84 s< 0)
                        if (ebx_51 s< 0xffffff01)
                            ebx_51 = 0xffffff01
                        
                        int32_t ebx_62
                        ebx_62.b = edi[1]
                        ebx_59 = *((ebx_62 << 2) + *((ebx_51 << 2) + data_4ced578))
                    else
                        if (ebx_51 s> 0xff)
                            ebx_51 = 0xff
                        
                        int32_t ebx_54
                        ebx_54.b = edi[1]
                        ebx_59 = *(((ebx_54 - 0xff) << 2) + *((ebx_51 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_19
                    eax_19.b = edi[1]
                    edi[1] = eax_19.b + (*(((ebx_59 - eax_19) << 2) + edx_2)).b
                    int32_t ebx_68
                    ebx_68.b = *esi_1
                    int32_t eax_21
                    eax_21.b = not.b(ebx_68.b)
                    int32_t var_f0
                    int32_t var_e4
                    int32_t eax_24 = var_f0 +
                        *(((eax_21 + *(((ebx_68 - eax_21) << 2) + var_d0) - var_f0) << 2) + var_e4)
                    int32_t var_80
                    int32_t ebx_77 = eax_24 + var_80
                    int32_t ebx_85
                    
                    if (eax_24 + var_80 s< 0)
                        if (ebx_77 s< 0xffffff01)
                            ebx_77 = 0xffffff01
                        
                        int32_t ebx_88
                        ebx_88.b = *edi
                        ebx_85 = *((ebx_88 << 2) + *((ebx_77 << 2) + data_4ced578))
                    else
                        if (ebx_77 s> 0xff)
                            ebx_77 = 0xff
                        
                        int32_t ebx_80
                        ebx_80.b = *edi
                        ebx_85 = *(((ebx_80 - 0xff) << 2) + *((ebx_77 << 2) + data_4ced578)) + 0xff
                    
                    int32_t eax_27
                    eax_27.b = *edi
                    *edi = eax_27.b + (*(((ebx_85 - eax_27) << 2) + edx_2)).b
        
        int32_t eax_30 = var_a0_1 + 1
        
        if (eax_30 s>= var_bc)
            eax_30 = 0
        
        var_a0_1 = eax_30
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

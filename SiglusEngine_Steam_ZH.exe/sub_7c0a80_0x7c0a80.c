// 函数: sub_7c0a80
// 地址: 0x7c0a80
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
                int32_t var_d0
                int32_t eax_8 = var_f8
                    + *(((eax_5 + *(((ebx_13 - eax_5) << 2) + var_d0) - var_f8) << 2) + var_ec)
                int32_t var_88
                int32_t ebx_22 = eax_8 + var_88
                int32_t ebx_30
                
                if (eax_8 + var_88 s< 0)
                    if (ebx_22 s< 0xffffff01)
                        ebx_22 = 0xffffff01
                    
                    int32_t ebx_33
                    ebx_33.b = edi[2]
                    ebx_30 = *((ebx_33 << 2) + *((ebx_22 << 2) + data_4ced578))
                else
                    if (ebx_22 s> 0xff)
                        ebx_22 = 0xff
                    
                    int32_t ebx_25
                    ebx_25.b = edi[2]
                    ebx_30 = *(((ebx_25 - 0xff) << 2) + *((ebx_22 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_11
                eax_11.b = edi[2]
                edi[2] = eax_11.b + (*(((ebx_30 - eax_11) << 2) + edx_2)).b
                int32_t ebx_39
                ebx_39.b = esi_1[1]
                int32_t eax_13
                eax_13.b = not.b(ebx_39.b)
                int32_t var_f4
                int32_t var_e8
                int32_t eax_16 = var_f4
                    + *(((eax_13 + *(((ebx_39 - eax_13) << 2) + var_d0) - var_f4) << 2) + var_e8)
                int32_t var_84
                int32_t ebx_48 = eax_16 + var_84
                int32_t ebx_56
                
                if (eax_16 + var_84 s< 0)
                    if (ebx_48 s< 0xffffff01)
                        ebx_48 = 0xffffff01
                    
                    int32_t ebx_59
                    ebx_59.b = edi[1]
                    ebx_56 = *((ebx_59 << 2) + *((ebx_48 << 2) + data_4ced578))
                else
                    if (ebx_48 s> 0xff)
                        ebx_48 = 0xff
                    
                    int32_t ebx_51
                    ebx_51.b = edi[1]
                    ebx_56 = *(((ebx_51 - 0xff) << 2) + *((ebx_48 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_19
                eax_19.b = edi[1]
                edi[1] = eax_19.b + (*(((ebx_56 - eax_19) << 2) + edx_2)).b
                int32_t ebx_65
                ebx_65.b = *esi_1
                int32_t eax_21
                eax_21.b = not.b(ebx_65.b)
                int32_t var_f0
                int32_t var_e4
                int32_t eax_24 = var_f0
                    + *(((eax_21 + *(((ebx_65 - eax_21) << 2) + var_d0) - var_f0) << 2) + var_e4)
                int32_t var_80
                int32_t ebx_74 = eax_24 + var_80
                int32_t ebx_82
                
                if (eax_24 + var_80 s< 0)
                    if (ebx_74 s< 0xffffff01)
                        ebx_74 = 0xffffff01
                    
                    int32_t ebx_85
                    ebx_85.b = *edi
                    ebx_82 = *((ebx_85 << 2) + *((ebx_74 << 2) + data_4ced578))
                else
                    if (ebx_74 s> 0xff)
                        ebx_74 = 0xff
                    
                    int32_t ebx_77
                    ebx_77.b = *edi
                    ebx_82 = *(((ebx_77 - 0xff) << 2) + *((ebx_74 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_27
                eax_27.b = *edi
                *edi = eax_27.b + (*(((ebx_82 - eax_27) << 2) + edx_2)).b
        
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

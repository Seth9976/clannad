// 函数: sub_81ad80
// 地址: 0x81ad80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_134
char* edi = var_134
int32_t i_2
int32_t i_1 = i_2
int32_t i

do
    int32_t j_2
    int32_t j_1 = j_2
    int32_t j
    
    do
        char* var_124
        int32_t ebx_1
        ebx_1.b = var_124[3]
        
        if (ebx_1 != 0)
            int32_t var_11c
            int32_t ebx_7 = *(*((ebx_1 << 2) + &data_4e3da80) + var_11c)
            
            if (ebx_7 != 0)
                int32_t edx_1 = *((ebx_7 << 2) + &data_4e3da80)
                int32_t ebx_11
                ebx_11.b = var_124[2]
                int32_t eax_1
                eax_1.b = not.b(ebx_11.b)
                int32_t var_f8
                int32_t var_ec
                int32_t var_d0
                int32_t eax_4 = var_f8
                    + *(((eax_1 + *(((ebx_11 - eax_1) << 2) + var_d0) - var_f8) << 2) + var_ec)
                int32_t var_88
                int32_t ebx_20 = eax_4 + var_88
                int32_t ebx_28
                
                if (eax_4 + var_88 s< 0)
                    if (ebx_20 s< 0xffffff01)
                        ebx_20 = 0xffffff01
                    
                    int32_t ebx_31
                    ebx_31.b = edi[2]
                    ebx_28 = *((ebx_31 << 2) + *((ebx_20 << 2) + data_4ced578))
                else
                    if (ebx_20 s> 0xff)
                        ebx_20 = 0xff
                    
                    int32_t ebx_23
                    ebx_23.b = edi[2]
                    ebx_28 = *(((ebx_23 - 0xff) << 2) + *((ebx_20 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_7
                eax_7.b = edi[2]
                edi[2] = eax_7.b + (*(((ebx_28 - eax_7) << 2) + edx_1)).b
                int32_t ebx_37
                ebx_37.b = var_124[1]
                int32_t eax_9
                eax_9.b = not.b(ebx_37.b)
                int32_t var_f4
                int32_t var_e8
                int32_t eax_12 = var_f4
                    + *(((eax_9 + *(((ebx_37 - eax_9) << 2) + var_d0) - var_f4) << 2) + var_e8)
                int32_t var_84
                int32_t ebx_46 = eax_12 + var_84
                int32_t ebx_54
                
                if (eax_12 + var_84 s< 0)
                    if (ebx_46 s< 0xffffff01)
                        ebx_46 = 0xffffff01
                    
                    int32_t ebx_57
                    ebx_57.b = edi[1]
                    ebx_54 = *((ebx_57 << 2) + *((ebx_46 << 2) + data_4ced578))
                else
                    if (ebx_46 s> 0xff)
                        ebx_46 = 0xff
                    
                    int32_t ebx_49
                    ebx_49.b = edi[1]
                    ebx_54 = *(((ebx_49 - 0xff) << 2) + *((ebx_46 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_15
                eax_15.b = edi[1]
                edi[1] = eax_15.b + (*(((ebx_54 - eax_15) << 2) + edx_1)).b
                int32_t ebx_63
                ebx_63.b = *var_124
                int32_t eax_17
                eax_17.b = not.b(ebx_63.b)
                int32_t var_f0
                int32_t var_e4
                int32_t eax_20 = var_f0
                    + *(((eax_17 + *(((ebx_63 - eax_17) << 2) + var_d0) - var_f0) << 2) + var_e4)
                int32_t var_80
                int32_t ebx_72 = eax_20 + var_80
                int32_t ebx_80
                
                if (eax_20 + var_80 s< 0)
                    if (ebx_72 s< 0xffffff01)
                        ebx_72 = 0xffffff01
                    
                    int32_t ebx_83
                    ebx_83.b = *edi
                    ebx_80 = *((ebx_83 << 2) + *((ebx_72 << 2) + data_4ced578))
                else
                    if (ebx_72 s> 0xff)
                        ebx_72 = 0xff
                    
                    int32_t ebx_75
                    ebx_75.b = *edi
                    ebx_80 = *(((ebx_75 - 0xff) << 2) + *((ebx_72 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_23
                eax_23.b = *edi
                *edi = eax_23.b + (*(((ebx_80 - eax_23) << 2) + edx_1)).b
        
        edi = &edi[4]
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_130
    edi = &edi[var_130]
    i = i_1
    i_1 -= 1
while (i != 1)

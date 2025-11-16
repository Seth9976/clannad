// 函数: sub_8224a0
// 地址: 0x8224a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_134
char* edi = var_134
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
                char* var_124
                int32_t eax_5
                eax_5.b = var_124[2]
                int32_t eax_7
                eax_7.b = var_124[1]
                int32_t eax_9
                eax_9.b = *var_124
                uint32_t edx_6 = (*(&data_4e3d680 + (eax_5 << 2)) + *(&data_4e3e280 + (eax_7 << 2))
                    + *(&data_4e3de80 + (eax_9 << 2))) u>> 8
                int32_t var_cc
                int32_t eax_11 = *(&data_4e3da80 + var_cc)
                int32_t ebx_17
                ebx_17.b = var_124[2]
                int32_t eax_13 = edx_6 + *(((ebx_17 - edx_6) << 2) + eax_11)
                int32_t eax_14
                eax_14.b = not.b(eax_13.b)
                int32_t var_d0
                int32_t eax_15 = eax_14 + *(((eax_13 - eax_14) << 2) + var_d0)
                int32_t var_88
                int32_t ebx_26 = eax_15 + var_88
                int32_t ebx_34
                
                if (eax_15 + var_88 s< 0)
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
                
                int32_t eax_18
                eax_18.b = edi[2]
                edi[2] = eax_18.b + (*(((ebx_34 - eax_18) << 2) + edx_2)).b
                int32_t ebx_43
                ebx_43.b = var_124[1]
                int32_t eax_21 = edx_6 + *(((ebx_43 - edx_6) << 2) + eax_11)
                int32_t eax_22
                eax_22.b = not.b(eax_21.b)
                int32_t eax_23 = eax_22 + *(((eax_21 - eax_22) << 2) + var_d0)
                int32_t var_84
                int32_t ebx_52 = eax_23 + var_84
                int32_t ebx_60
                
                if (eax_23 + var_84 s< 0)
                    if (ebx_52 s< 0xffffff01)
                        ebx_52 = 0xffffff01
                    
                    int32_t ebx_63
                    ebx_63.b = edi[1]
                    ebx_60 = *((ebx_63 << 2) + *((ebx_52 << 2) + data_4ced578))
                else
                    if (ebx_52 s> 0xff)
                        ebx_52 = 0xff
                    
                    int32_t ebx_55
                    ebx_55.b = edi[1]
                    ebx_60 = *(((ebx_55 - 0xff) << 2) + *((ebx_52 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_26
                eax_26.b = edi[1]
                edi[1] = eax_26.b + (*(((ebx_60 - eax_26) << 2) + edx_2)).b
                int32_t ebx_69
                ebx_69.b = *var_124
                int32_t eax_29 = edx_6 + *(((ebx_69 - edx_6) << 2) + eax_11)
                int32_t eax_30
                eax_30.b = not.b(eax_29.b)
                int32_t eax_31 = eax_30 + *(((eax_29 - eax_30) << 2) + var_d0)
                int32_t var_80
                int32_t ebx_78 = eax_31 + var_80
                int32_t ebx_86
                
                if (eax_31 + var_80 s< 0)
                    if (ebx_78 s< 0xffffff01)
                        ebx_78 = 0xffffff01
                    
                    int32_t ebx_89
                    ebx_89.b = *edi
                    ebx_86 = *((ebx_89 << 2) + *((ebx_78 << 2) + data_4ced578))
                else
                    if (ebx_78 s> 0xff)
                        ebx_78 = 0xff
                    
                    int32_t ebx_81
                    ebx_81.b = *edi
                    ebx_86 = *(((ebx_81 - 0xff) << 2) + *((ebx_78 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_34
                eax_34.b = *edi
                *edi = eax_34.b + (*(((ebx_86 - eax_34) << 2) + edx_2)).b
        
        int32_t eax_37 = var_a0_1 + 1
        
        if (eax_37 s>= var_bc)
            eax_37 = 0
        
        var_a0_1 = eax_37
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
    int32_t var_130
    edi = &edi[var_130]
    i = i_1
    i_1 -= 1
while (i != 1)
return result

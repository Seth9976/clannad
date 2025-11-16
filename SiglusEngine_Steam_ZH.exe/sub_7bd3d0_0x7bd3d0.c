// 函数: sub_7bd3d0
// 地址: 0x7bd3d0
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
                int32_t eax_13 = edx_6 + *(((ebx_17 - edx_6) << 2) + eax_11)
                int32_t var_88
                int32_t ebx_22 = eax_13 + var_88
                int32_t ebx_30
                
                if (eax_13 + var_88 s< 0)
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
                
                int32_t eax_16
                eax_16.b = edi[2]
                edi[2] = eax_16.b + (*(((ebx_30 - eax_16) << 2) + edx_2)).b
                int32_t ebx_39
                ebx_39.b = esi_1[1]
                int32_t eax_19 = edx_6 + *(((ebx_39 - edx_6) << 2) + eax_11)
                int32_t var_84
                int32_t ebx_44 = eax_19 + var_84
                int32_t ebx_52
                
                if (eax_19 + var_84 s< 0)
                    if (ebx_44 s< 0xffffff01)
                        ebx_44 = 0xffffff01
                    
                    int32_t ebx_55
                    ebx_55.b = edi[1]
                    ebx_52 = *((ebx_55 << 2) + *((ebx_44 << 2) + data_4ced578))
                else
                    if (ebx_44 s> 0xff)
                        ebx_44 = 0xff
                    
                    int32_t ebx_47
                    ebx_47.b = edi[1]
                    ebx_52 = *(((ebx_47 - 0xff) << 2) + *((ebx_44 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_22
                eax_22.b = edi[1]
                edi[1] = eax_22.b + (*(((ebx_52 - eax_22) << 2) + edx_2)).b
                int32_t ebx_61
                ebx_61.b = *esi_1
                int32_t eax_25 = edx_6 + *(((ebx_61 - edx_6) << 2) + eax_11)
                int32_t var_80
                int32_t ebx_66 = eax_25 + var_80
                int32_t ebx_74
                
                if (eax_25 + var_80 s< 0)
                    if (ebx_66 s< 0xffffff01)
                        ebx_66 = 0xffffff01
                    
                    int32_t ebx_77
                    ebx_77.b = *edi
                    ebx_74 = *((ebx_77 << 2) + *((ebx_66 << 2) + data_4ced578))
                else
                    if (ebx_66 s> 0xff)
                        ebx_66 = 0xff
                    
                    int32_t ebx_69
                    ebx_69.b = *edi
                    ebx_74 = *(((ebx_69 - 0xff) << 2) + *((ebx_66 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_28
                eax_28.b = *edi
                *edi = eax_28.b + (*(((ebx_74 - eax_28) << 2) + edx_2)).b
        
        int32_t eax_31 = var_a0_1 + 1
        
        if (eax_31 s>= var_bc)
            eax_31 = 0
        
        var_a0_1 = eax_31
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

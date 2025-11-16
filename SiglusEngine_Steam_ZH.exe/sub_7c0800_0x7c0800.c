// 函数: sub_7c0800
// 地址: 0x7c0800
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
                int32_t var_88
                int32_t ebx_14 = ebx_13 + var_88
                int32_t ebx_22
                
                if (ebx_13 + var_88 s< 0)
                    if (ebx_14 s< 0xffffff01)
                        ebx_14 = 0xffffff01
                    
                    int32_t ebx_25
                    ebx_25.b = edi[2]
                    ebx_22 = *((ebx_25 << 2) + *((ebx_14 << 2) + data_4ced578))
                else
                    if (ebx_14 s> 0xff)
                        ebx_14 = 0xff
                    
                    int32_t ebx_17
                    ebx_17.b = edi[2]
                    ebx_22 = *(((ebx_17 - 0xff) << 2) + *((ebx_14 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_7
                eax_7.b = edi[2]
                edi[2] = eax_7.b + (*(((ebx_22 - eax_7) << 2) + edx_2)).b
                int32_t ebx_31
                ebx_31.b = esi_1[1]
                int32_t var_84
                int32_t ebx_32 = ebx_31 + var_84
                int32_t ebx_40
                
                if (ebx_31 + var_84 s< 0)
                    if (ebx_32 s< 0xffffff01)
                        ebx_32 = 0xffffff01
                    
                    int32_t ebx_43
                    ebx_43.b = edi[1]
                    ebx_40 = *((ebx_43 << 2) + *((ebx_32 << 2) + data_4ced578))
                else
                    if (ebx_32 s> 0xff)
                        ebx_32 = 0xff
                    
                    int32_t ebx_35
                    ebx_35.b = edi[1]
                    ebx_40 = *(((ebx_35 - 0xff) << 2) + *((ebx_32 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_11
                eax_11.b = edi[1]
                edi[1] = eax_11.b + (*(((ebx_40 - eax_11) << 2) + edx_2)).b
                int32_t ebx_49
                ebx_49.b = *esi_1
                int32_t var_80
                int32_t ebx_50 = ebx_49 + var_80
                int32_t ebx_58
                
                if (ebx_49 + var_80 s< 0)
                    if (ebx_50 s< 0xffffff01)
                        ebx_50 = 0xffffff01
                    
                    int32_t ebx_61
                    ebx_61.b = *edi
                    ebx_58 = *((ebx_61 << 2) + *((ebx_50 << 2) + data_4ced578))
                else
                    if (ebx_50 s> 0xff)
                        ebx_50 = 0xff
                    
                    int32_t ebx_53
                    ebx_53.b = *edi
                    ebx_58 = *(((ebx_53 - 0xff) << 2) + *((ebx_50 << 2) + data_4ced578)) + 0xff
                
                int32_t eax_15
                eax_15.b = *edi
                *edi = eax_15.b + (*(((ebx_58 - eax_15) << 2) + edx_2)).b
        
        int32_t eax_18 = var_a0_1 + 1
        
        if (eax_18 s>= var_bc)
            eax_18 = 0
        
        var_a0_1 = eax_18
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

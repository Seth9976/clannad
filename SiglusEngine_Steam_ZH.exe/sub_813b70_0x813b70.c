// 函数: sub_813b70
// 地址: 0x813b70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
void* var_134
void* edi = var_134
int32_t i_2
int32_t i_1 = i_2
char result
int32_t i

do
    int32_t j_2
    int32_t j_1 = j_2
    int32_t j
    
    do
        char* var_124
        int32_t ebx_1
        ebx_1.b = var_124[2]
        int32_t var_f8
        int32_t var_ec
        int32_t eax_2 = var_f8 + *(((ebx_1 - var_f8) << 2) + var_ec)
        int32_t var_88
        int32_t ebx_6 = eax_2 + var_88
        int32_t ebx_14
        
        if (eax_2 + var_88 s< 0)
            if (ebx_6 s< 0xffffff01)
                ebx_6 = 0xffffff01
            
            int32_t ebx_17
            ebx_17.b = *(edi + 2)
            ebx_14 = *((ebx_17 << 2) + *((ebx_6 << 2) + data_4ced578))
        else
            if (ebx_6 s> 0xff)
                ebx_6 = 0xff
            
            int32_t ebx_9
            ebx_9.b = *(edi + 2)
            ebx_14 = *(((ebx_9 - 0xff) << 2) + *((ebx_6 << 2) + data_4ced578)) + 0xff
        
        int32_t eax_5
        eax_5.b = *(edi + 2)
        int32_t var_118
        *(edi + 2) = eax_5.b + (*(((ebx_14 - eax_5) << 2) + var_118)).b
        int32_t ebx_23
        ebx_23.b = var_124[1]
        int32_t var_f4
        int32_t var_e8
        int32_t eax_8 = var_f4 + *(((ebx_23 - var_f4) << 2) + var_e8)
        int32_t var_84
        int32_t ebx_28 = eax_8 + var_84
        int32_t ebx_36
        
        if (eax_8 + var_84 s< 0)
            if (ebx_28 s< 0xffffff01)
                ebx_28 = 0xffffff01
            
            int32_t ebx_39
            ebx_39.b = *(edi + 1)
            ebx_36 = *((ebx_39 << 2) + *((ebx_28 << 2) + data_4ced578))
        else
            if (ebx_28 s> 0xff)
                ebx_28 = 0xff
            
            int32_t ebx_31
            ebx_31.b = *(edi + 1)
            ebx_36 = *(((ebx_31 - 0xff) << 2) + *((ebx_28 << 2) + data_4ced578)) + 0xff
        
        int32_t eax_11
        eax_11.b = *(edi + 1)
        *(edi + 1) = eax_11.b + (*(((ebx_36 - eax_11) << 2) + var_118)).b
        int32_t ebx_45
        ebx_45.b = *var_124
        int32_t var_f0
        int32_t var_e4
        int32_t eax_14 = var_f0 + *(((ebx_45 - var_f0) << 2) + var_e4)
        int32_t var_80
        int32_t ebx_50 = eax_14 + var_80
        int32_t ebx_58
        
        if (eax_14 + var_80 s< 0)
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
        
        int32_t eax_17
        eax_17.b = *edi
        result = eax_17.b + (*(((ebx_58 - eax_17) << 2) + var_118)).b
        *edi = result
        edi += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_130
    edi += var_130
    i = i_1
    i_1 -= 1
while (i != 1)
return result

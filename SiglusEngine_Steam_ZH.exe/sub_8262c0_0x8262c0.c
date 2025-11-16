// 函数: sub_8262c0
// 地址: 0x8262c0
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
        int32_t var_88
        int32_t ebx_2 = ebx_1 + var_88
        int32_t ebx_10
        
        if (ebx_1 + var_88 s< 0)
            if (ebx_2 s< 0xffffff01)
                ebx_2 = 0xffffff01
            
            int32_t ebx_13
            ebx_13.b = *(edi + 2)
            ebx_10 = *((ebx_13 << 2) + *((ebx_2 << 2) + data_4ced578))
        else
            if (ebx_2 s> 0xff)
                ebx_2 = 0xff
            
            int32_t ebx_5
            ebx_5.b = *(edi + 2)
            ebx_10 = *(((ebx_5 - 0xff) << 2) + *((ebx_2 << 2) + data_4ced578)) + 0xff
        
        int32_t eax_3
        eax_3.b = *(edi + 2)
        int32_t var_118
        *(edi + 2) = eax_3.b + (*(((ebx_10 - eax_3) << 2) + var_118)).b
        int32_t ebx_19
        ebx_19.b = var_124[1]
        int32_t var_84
        int32_t ebx_20 = ebx_19 + var_84
        int32_t ebx_28
        
        if (ebx_19 + var_84 s< 0)
            if (ebx_20 s< 0xffffff01)
                ebx_20 = 0xffffff01
            
            int32_t ebx_31
            ebx_31.b = *(edi + 1)
            ebx_28 = *((ebx_31 << 2) + *((ebx_20 << 2) + data_4ced578))
        else
            if (ebx_20 s> 0xff)
                ebx_20 = 0xff
            
            int32_t ebx_23
            ebx_23.b = *(edi + 1)
            ebx_28 = *(((ebx_23 - 0xff) << 2) + *((ebx_20 << 2) + data_4ced578)) + 0xff
        
        int32_t eax_7
        eax_7.b = *(edi + 1)
        *(edi + 1) = eax_7.b + (*(((ebx_28 - eax_7) << 2) + var_118)).b
        int32_t ebx_37
        ebx_37.b = *var_124
        int32_t var_80
        int32_t ebx_38 = ebx_37 + var_80
        int32_t ebx_46
        
        if (ebx_37 + var_80 s< 0)
            if (ebx_38 s< 0xffffff01)
                ebx_38 = 0xffffff01
            
            int32_t ebx_49
            ebx_49.b = *edi
            ebx_46 = *((ebx_49 << 2) + *((ebx_38 << 2) + data_4ced578))
        else
            if (ebx_38 s> 0xff)
                ebx_38 = 0xff
            
            int32_t ebx_41
            ebx_41.b = *edi
            ebx_46 = *(((ebx_41 - 0xff) << 2) + *((ebx_38 << 2) + data_4ced578)) + 0xff
        
        int32_t eax_11
        eax_11.b = *edi
        result = eax_11.b + (*(((ebx_46 - eax_11) << 2) + var_118)).b
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

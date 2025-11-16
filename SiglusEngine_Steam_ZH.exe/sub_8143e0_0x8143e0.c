// 函数: sub_8143e0
// 地址: 0x8143e0
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
        int32_t var_e0
        int32_t var_d4
        int32_t eax_4 =
            var_f8 + *(((var_e0 + *(((ebx_1 - var_e0) << 2) + var_d4) - var_f8) << 2) + var_ec)
        int32_t var_88
        int32_t ebx_10 = eax_4 + var_88
        int32_t ebx_18
        
        if (eax_4 + var_88 s< 0)
            if (ebx_10 s< 0xffffff01)
                ebx_10 = 0xffffff01
            
            int32_t ebx_21
            ebx_21.b = *(edi + 2)
            ebx_18 = *((ebx_21 << 2) + *((ebx_10 << 2) + data_4ced578))
        else
            if (ebx_10 s> 0xff)
                ebx_10 = 0xff
            
            int32_t ebx_13
            ebx_13.b = *(edi + 2)
            ebx_18 = *(((ebx_13 - 0xff) << 2) + *((ebx_10 << 2) + data_4ced578)) + 0xff
        
        int32_t eax_7
        eax_7.b = *(edi + 2)
        int32_t var_118
        *(edi + 2) = eax_7.b + (*(((ebx_18 - eax_7) << 2) + var_118)).b
        int32_t ebx_27
        ebx_27.b = var_124[1]
        int32_t var_f4
        int32_t var_e8
        int32_t var_dc
        int32_t eax_12 =
            var_f4 + *(((var_dc + *(((ebx_27 - var_dc) << 2) + var_d4) - var_f4) << 2) + var_e8)
        int32_t var_84
        int32_t ebx_36 = eax_12 + var_84
        int32_t ebx_44
        
        if (eax_12 + var_84 s< 0)
            if (ebx_36 s< 0xffffff01)
                ebx_36 = 0xffffff01
            
            int32_t ebx_47
            ebx_47.b = *(edi + 1)
            ebx_44 = *((ebx_47 << 2) + *((ebx_36 << 2) + data_4ced578))
        else
            if (ebx_36 s> 0xff)
                ebx_36 = 0xff
            
            int32_t ebx_39
            ebx_39.b = *(edi + 1)
            ebx_44 = *(((ebx_39 - 0xff) << 2) + *((ebx_36 << 2) + data_4ced578)) + 0xff
        
        int32_t eax_15
        eax_15.b = *(edi + 1)
        *(edi + 1) = eax_15.b + (*(((ebx_44 - eax_15) << 2) + var_118)).b
        int32_t ebx_53
        ebx_53.b = *var_124
        int32_t var_f0
        int32_t var_e4
        int32_t var_d8
        int32_t eax_20 =
            var_f0 + *(((var_d8 + *(((ebx_53 - var_d8) << 2) + var_d4) - var_f0) << 2) + var_e4)
        int32_t var_80
        int32_t ebx_62 = eax_20 + var_80
        int32_t ebx_70
        
        if (eax_20 + var_80 s< 0)
            if (ebx_62 s< 0xffffff01)
                ebx_62 = 0xffffff01
            
            int32_t ebx_73
            ebx_73.b = *edi
            ebx_70 = *((ebx_73 << 2) + *((ebx_62 << 2) + data_4ced578))
        else
            if (ebx_62 s> 0xff)
                ebx_62 = 0xff
            
            int32_t ebx_65
            ebx_65.b = *edi
            ebx_70 = *(((ebx_65 - 0xff) << 2) + *((ebx_62 << 2) + data_4ced578)) + 0xff
        
        int32_t eax_23
        eax_23.b = *edi
        result = eax_23.b + (*(((ebx_70 - eax_23) << 2) + var_118)).b
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

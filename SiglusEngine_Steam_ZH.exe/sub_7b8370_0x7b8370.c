// 函数: sub_7b8370
// 地址: 0x7b8370
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
void* var_134
void* edi = var_134
void* var_124
void* esi_1 = var_124
int32_t i_2
int32_t i_1 = i_2
char result
int32_t i

do
    int32_t j_2
    int32_t j_1 = j_2
    int32_t j
    
    do
        int32_t ebx_1
        ebx_1.b = *(esi_1 + 2)
        int32_t eax_1
        eax_1.b = not.b(ebx_1.b)
        int32_t var_f8
        int32_t var_ec
        int32_t var_e0
        int32_t var_d4
        int32_t var_d0
        int32_t eax_6 = var_f8 + *(((var_e0
            + *(((eax_1 + *(((ebx_1 - eax_1) << 2) + var_d0) - var_e0) << 2) + var_d4) - var_f8) << 2)
            + var_ec)
        int32_t var_88
        int32_t ebx_14 = eax_6 + var_88
        int32_t ebx_22
        
        if (eax_6 + var_88 s< 0)
            if (ebx_14 s< 0xffffff01)
                ebx_14 = 0xffffff01
            
            int32_t ebx_25
            ebx_25.b = *(edi + 2)
            ebx_22 = *((ebx_25 << 2) + *((ebx_14 << 2) + data_4ced578))
        else
            if (ebx_14 s> 0xff)
                ebx_14 = 0xff
            
            int32_t ebx_17
            ebx_17.b = *(edi + 2)
            ebx_22 = *(((ebx_17 - 0xff) << 2) + *((ebx_14 << 2) + data_4ced578)) + 0xff
        
        int32_t eax_9
        eax_9.b = *(edi + 2)
        int32_t var_118
        *(edi + 2) = eax_9.b + (*(((ebx_22 - eax_9) << 2) + var_118)).b
        int32_t ebx_31
        ebx_31.b = *(esi_1 + 1)
        int32_t eax_11
        eax_11.b = not.b(ebx_31.b)
        int32_t var_f4
        int32_t var_e8
        int32_t var_dc
        int32_t eax_16 = var_f4 + *(((var_dc
            + *(((eax_11 + *(((ebx_31 - eax_11) << 2) + var_d0) - var_dc) << 2) + var_d4) - var_f4)
            << 2) + var_e8)
        int32_t var_84
        int32_t ebx_44 = eax_16 + var_84
        int32_t ebx_52
        
        if (eax_16 + var_84 s< 0)
            if (ebx_44 s< 0xffffff01)
                ebx_44 = 0xffffff01
            
            int32_t ebx_55
            ebx_55.b = *(edi + 1)
            ebx_52 = *((ebx_55 << 2) + *((ebx_44 << 2) + data_4ced578))
        else
            if (ebx_44 s> 0xff)
                ebx_44 = 0xff
            
            int32_t ebx_47
            ebx_47.b = *(edi + 1)
            ebx_52 = *(((ebx_47 - 0xff) << 2) + *((ebx_44 << 2) + data_4ced578)) + 0xff
        
        int32_t eax_19
        eax_19.b = *(edi + 1)
        *(edi + 1) = eax_19.b + (*(((ebx_52 - eax_19) << 2) + var_118)).b
        int32_t ebx_61
        ebx_61.b = *esi_1
        int32_t eax_21
        eax_21.b = not.b(ebx_61.b)
        int32_t var_f0
        int32_t var_e4
        int32_t var_d8
        int32_t eax_26 = var_f0 + *(((var_d8
            + *(((eax_21 + *(((ebx_61 - eax_21) << 2) + var_d0) - var_d8) << 2) + var_d4) - var_f0)
            << 2) + var_e4)
        int32_t var_80
        int32_t ebx_74 = eax_26 + var_80
        int32_t ebx_82
        
        if (eax_26 + var_80 s< 0)
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
        
        int32_t eax_29
        eax_29.b = *edi
        result = eax_29.b + (*(((ebx_82 - eax_29) << 2) + var_118)).b
        *edi = result
        esi_1 += 4
        edi += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_120
    esi_1 += var_120
    int32_t var_130
    edi += var_130
    i = i_1
    i_1 -= 1
while (i != 1)
return result

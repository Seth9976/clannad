// 函数: sub_815570
// 地址: 0x815570
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
        int32_t eax_1
        eax_1.b = var_124[2]
        int32_t eax_3
        eax_3.b = var_124[1]
        int32_t eax_5
        eax_5.b = *var_124
        uint32_t edx_4 = (*(&data_4e3d680 + (eax_1 << 2)) + *(&data_4e3e280 + (eax_3 << 2))
            + *(&data_4e3de80 + (eax_5 << 2))) u>> 8
        int32_t var_cc
        int32_t eax_7 = *(&data_4e3da80 + var_cc)
        int32_t ebx_5
        ebx_5.b = var_124[2]
        int32_t var_f8
        int32_t var_ec
        int32_t eax_11 =
            var_f8 + *(((edx_4 + *(((ebx_5 - edx_4) << 2) + eax_7) - var_f8) << 2) + var_ec)
        int32_t var_88
        int32_t ebx_14 = eax_11 + var_88
        int32_t ebx_22
        
        if (eax_11 + var_88 s< 0)
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
        
        int32_t eax_14
        eax_14.b = *(edi + 2)
        int32_t var_118
        *(edi + 2) = eax_14.b + (*(((ebx_22 - eax_14) << 2) + var_118)).b
        int32_t ebx_31
        ebx_31.b = var_124[1]
        int32_t var_f4
        int32_t var_e8
        int32_t eax_19 =
            var_f4 + *(((edx_4 + *(((ebx_31 - edx_4) << 2) + eax_7) - var_f4) << 2) + var_e8)
        int32_t var_84
        int32_t ebx_40 = eax_19 + var_84
        int32_t ebx_48
        
        if (eax_19 + var_84 s< 0)
            if (ebx_40 s< 0xffffff01)
                ebx_40 = 0xffffff01
            
            int32_t ebx_51
            ebx_51.b = *(edi + 1)
            ebx_48 = *((ebx_51 << 2) + *((ebx_40 << 2) + data_4ced578))
        else
            if (ebx_40 s> 0xff)
                ebx_40 = 0xff
            
            int32_t ebx_43
            ebx_43.b = *(edi + 1)
            ebx_48 = *(((ebx_43 - 0xff) << 2) + *((ebx_40 << 2) + data_4ced578)) + 0xff
        
        int32_t eax_22
        eax_22.b = *(edi + 1)
        *(edi + 1) = eax_22.b + (*(((ebx_48 - eax_22) << 2) + var_118)).b
        int32_t ebx_57
        ebx_57.b = *var_124
        int32_t var_f0
        int32_t var_e4
        int32_t eax_27 =
            var_f0 + *(((edx_4 + *(((ebx_57 - edx_4) << 2) + eax_7) - var_f0) << 2) + var_e4)
        int32_t var_80
        int32_t ebx_66 = eax_27 + var_80
        int32_t ebx_74
        
        if (eax_27 + var_80 s< 0)
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
        
        int32_t eax_30
        eax_30.b = *edi
        result = eax_30.b + (*(((ebx_74 - eax_30) << 2) + var_118)).b
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

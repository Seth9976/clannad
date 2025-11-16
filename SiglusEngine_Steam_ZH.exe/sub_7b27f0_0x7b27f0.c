// 函数: sub_7b27f0
// 地址: 0x7b27f0
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
        int32_t eax_1
        eax_1.b = *(esi_1 + 2)
        int32_t eax_3
        eax_3.b = *(esi_1 + 1)
        int32_t eax_5
        eax_5.b = *esi_1
        uint32_t edx_4 = (*(&data_4e3d680 + (eax_1 << 2)) + *(&data_4e3e280 + (eax_3 << 2))
            + *(&data_4e3de80 + (eax_5 << 2))) u>> 8
        int32_t var_cc
        int32_t eax_7 = *(&data_4e3da80 + var_cc)
        int32_t ebx_5
        ebx_5.b = *(esi_1 + 2)
        int32_t var_f8
        int32_t var_ec
        int32_t var_e0
        int32_t var_d4
        int32_t eax_13 = var_f8 + *(((var_e0
            + *(((edx_4 + *(((ebx_5 - edx_4) << 2) + eax_7) - var_e0) << 2) + var_d4) - var_f8) << 2)
            + var_ec)
        int32_t var_88
        int32_t ebx_18 = eax_13 + var_88
        char eax_16
        
        if (eax_13 + var_88 s< 0)
            if (ebx_18 s< 0xffffff01)
                ebx_18 = 0xffffff01
            
            int32_t ebx_27
            ebx_27.b = *(edi + 2)
            eax_16 = (*((ebx_27 << 2) + *((ebx_18 << 2) + data_4ced578))).b
        else
            if (ebx_18 s> 0xff)
                ebx_18 = 0xff
            
            int32_t ebx_21
            ebx_21.b = *(edi + 2)
            eax_16 = (*(((ebx_21 - 0xff) << 2) + *((ebx_18 << 2) + data_4ced578))).b - 1
        
        *(edi + 2) = eax_16
        int32_t ebx_30
        ebx_30.b = *(esi_1 + 1)
        int32_t var_f4
        int32_t var_e8
        int32_t var_dc
        int32_t eax_23 = var_f4 + *(((var_dc
            + *(((edx_4 + *(((ebx_30 - edx_4) << 2) + eax_7) - var_dc) << 2) + var_d4) - var_f4) << 2)
            + var_e8)
        int32_t var_84
        int32_t ebx_43 = eax_23 + var_84
        char eax_26
        
        if (eax_23 + var_84 s< 0)
            if (ebx_43 s< 0xffffff01)
                ebx_43 = 0xffffff01
            
            int32_t ebx_52
            ebx_52.b = *(edi + 1)
            eax_26 = (*((ebx_52 << 2) + *((ebx_43 << 2) + data_4ced578))).b
        else
            if (ebx_43 s> 0xff)
                ebx_43 = 0xff
            
            int32_t ebx_46
            ebx_46.b = *(edi + 1)
            eax_26 = (*(((ebx_46 - 0xff) << 2) + *((ebx_43 << 2) + data_4ced578))).b - 1
        
        *(edi + 1) = eax_26
        int32_t ebx_55
        ebx_55.b = *esi_1
        int32_t var_f0
        int32_t var_e4
        int32_t var_d8
        int32_t eax_33 = var_f0 + *(((var_d8
            + *(((edx_4 + *(((ebx_55 - edx_4) << 2) + eax_7) - var_d8) << 2) + var_d4) - var_f0) << 2)
            + var_e4)
        int32_t var_80
        int32_t ebx_68 = eax_33 + var_80
        
        if (eax_33 + var_80 s< 0)
            if (ebx_68 s< 0xffffff01)
                ebx_68 = 0xffffff01
            
            int32_t ebx_77
            ebx_77.b = *edi
            result = (*((ebx_77 << 2) + *((ebx_68 << 2) + data_4ced578))).b
        else
            if (ebx_68 s> 0xff)
                ebx_68 = 0xff
            
            int32_t ebx_71
            ebx_71.b = *edi
            result = (*(((ebx_71 - 0xff) << 2) + *((ebx_68 << 2) + data_4ced578))).b - 1
        
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

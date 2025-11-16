// 函数: sub_7b1da0
// 地址: 0x7b1da0
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
        int32_t eax_11 =
            var_f8 + *(((edx_4 + *(((ebx_5 - edx_4) << 2) + eax_7) - var_f8) << 2) + var_ec)
        int32_t var_88
        int32_t ebx_14 = eax_11 + var_88
        char eax_14
        
        if (eax_11 + var_88 s< 0)
            if (ebx_14 s< 0xffffff01)
                ebx_14 = 0xffffff01
            
            int32_t ebx_23
            ebx_23.b = *(edi + 2)
            eax_14 = (*((ebx_23 << 2) + *((ebx_14 << 2) + data_4ced578))).b
        else
            if (ebx_14 s> 0xff)
                ebx_14 = 0xff
            
            int32_t ebx_17
            ebx_17.b = *(edi + 2)
            eax_14 = (*(((ebx_17 - 0xff) << 2) + *((ebx_14 << 2) + data_4ced578))).b - 1
        
        *(edi + 2) = eax_14
        int32_t ebx_26
        ebx_26.b = *(esi_1 + 1)
        int32_t var_f4
        int32_t var_e8
        int32_t eax_19 =
            var_f4 + *(((edx_4 + *(((ebx_26 - edx_4) << 2) + eax_7) - var_f4) << 2) + var_e8)
        int32_t var_84
        int32_t ebx_35 = eax_19 + var_84
        char eax_22
        
        if (eax_19 + var_84 s< 0)
            if (ebx_35 s< 0xffffff01)
                ebx_35 = 0xffffff01
            
            int32_t ebx_44
            ebx_44.b = *(edi + 1)
            eax_22 = (*((ebx_44 << 2) + *((ebx_35 << 2) + data_4ced578))).b
        else
            if (ebx_35 s> 0xff)
                ebx_35 = 0xff
            
            int32_t ebx_38
            ebx_38.b = *(edi + 1)
            eax_22 = (*(((ebx_38 - 0xff) << 2) + *((ebx_35 << 2) + data_4ced578))).b - 1
        
        *(edi + 1) = eax_22
        int32_t ebx_47
        ebx_47.b = *esi_1
        int32_t var_f0
        int32_t var_e4
        int32_t eax_27 =
            var_f0 + *(((edx_4 + *(((ebx_47 - edx_4) << 2) + eax_7) - var_f0) << 2) + var_e4)
        int32_t var_80
        int32_t ebx_56 = eax_27 + var_80
        
        if (eax_27 + var_80 s< 0)
            if (ebx_56 s< 0xffffff01)
                ebx_56 = 0xffffff01
            
            int32_t ebx_65
            ebx_65.b = *edi
            result = (*((ebx_65 << 2) + *((ebx_56 << 2) + data_4ced578))).b
        else
            if (ebx_56 s> 0xff)
                ebx_56 = 0xff
            
            int32_t ebx_59
            ebx_59.b = *edi
            result = (*(((ebx_59 - 0xff) << 2) + *((ebx_56 << 2) + data_4ced578))).b - 1
        
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

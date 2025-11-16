// 函数: sub_827e50
// 地址: 0x827e50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
void* var_134
void* edi = var_134
int32_t i_2
int32_t i_1 = i_2
int32_t i

do
    int32_t j_2
    int32_t j_1 = j_2
    int32_t j
    
    do
        char* var_124
        int32_t ebx_1
        ebx_1.b = var_124[3]
        
        if (ebx_1 != 0)
            int32_t edx_1 = *((ebx_1 << 2) + &data_4e3da80)
            int32_t eax_1
            eax_1.b = var_124[2]
            int32_t eax_3
            eax_3.b = var_124[1]
            int32_t eax_5
            eax_5.b = *var_124
            uint32_t edx_5 = (*(&data_4e3d680 + (eax_1 << 2)) + *(&data_4e3e280 + (eax_3 << 2))
                + *(&data_4e3de80 + (eax_5 << 2))) u>> 8
            int32_t var_cc
            int32_t eax_7 = *(&data_4e3da80 + var_cc)
            int32_t ebx_9
            ebx_9.b = var_124[2]
            int32_t eax_14
            eax_14.b = *(edi + 2)
            int32_t var_f8
            int32_t var_ec
            int32_t var_e0
            int32_t var_d4
            int32_t* ebx_23 = ((var_f8 + *(((var_e0
                + *(((edx_5 + *(((ebx_9 - edx_5) << 2) + eax_7) - var_e0) << 2) + var_d4) - var_f8)
                << 2) + var_ec)) << 2) + *((eax_14 << 2) + &data_4e3da80)
            int32_t eax_18
            eax_18.b = *(edi + 2)
            *(edi + 2) = eax_18.b + (*(((*ebx_23 - eax_18) << 2) + edx_1)).b
            int32_t ebx_28
            ebx_28.b = var_124[1]
            int32_t eax_26
            eax_26.b = *(edi + 1)
            int32_t var_f4
            int32_t var_e8
            int32_t var_dc
            int32_t* ebx_42 = ((var_f4 + *(((var_dc
                + *(((edx_5 + *(((ebx_28 - edx_5) << 2) + eax_7) - var_dc) << 2) + var_d4)
                - var_f4) << 2) + var_e8)) << 2) + *((eax_26 << 2) + &data_4e3da80)
            int32_t eax_30
            eax_30.b = *(edi + 1)
            *(edi + 1) = eax_30.b + (*(((*ebx_42 - eax_30) << 2) + edx_1)).b
            int32_t ebx_47
            ebx_47.b = *var_124
            int32_t eax_38
            eax_38.b = *edi
            int32_t var_f0
            int32_t var_e4
            int32_t var_d8
            int32_t* ebx_61 = ((var_f0 + *(((var_d8
                + *(((edx_5 + *(((ebx_47 - edx_5) << 2) + eax_7) - var_d8) << 2) + var_d4)
                - var_f0) << 2) + var_e4)) << 2) + *((eax_38 << 2) + &data_4e3da80)
            int32_t eax_42
            eax_42.b = *edi
            *edi = eax_42.b + (*(((*ebx_61 - eax_42) << 2) + edx_1)).b
        
        edi += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_130
    edi += var_130
    i = i_1
    i_1 -= 1
while (i != 1)

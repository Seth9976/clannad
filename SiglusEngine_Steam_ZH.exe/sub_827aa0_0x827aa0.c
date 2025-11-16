// 函数: sub_827aa0
// 地址: 0x827aa0
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
            int32_t var_11c
            int32_t ebx_7 = *(*((ebx_1 << 2) + &data_4e3da80) + var_11c)
            
            if (ebx_7 != 0)
                int32_t edx_1 = *((ebx_7 << 2) + &data_4e3da80)
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
                int32_t ebx_15
                ebx_15.b = var_124[2]
                int32_t eax_12
                eax_12.b = *(edi + 2)
                int32_t eax_16
                eax_16.b = *(edi + 2)
                int32_t var_f8
                int32_t var_ec
                int32_t ebx_28 = (*(((var_f8
                    + *(((edx_5 + *(((ebx_15 - edx_5) << 2) + eax_7) - var_f8) << 2) + var_ec)) << 2)
                    + *((eax_12 << 2) + &data_4e3da80)) - eax_16) << 2
                *(edi + 2) = eax_16.b + (*(ebx_28 + edx_1)).b
                int32_t ebx_30
                ebx_30.b = var_124[1]
                int32_t eax_22
                eax_22.b = *(edi + 1)
                int32_t eax_26
                eax_26.b = *(edi + 1)
                int32_t var_f4
                int32_t var_e8
                int32_t ebx_43 = (*(((var_f4
                    + *(((edx_5 + *(((ebx_30 - edx_5) << 2) + eax_7) - var_f4) << 2) + var_e8)) << 2)
                    + *((eax_22 << 2) + &data_4e3da80)) - eax_26) << 2
                *(edi + 1) = eax_26.b + (*(ebx_43 + edx_1)).b
                int32_t ebx_45
                ebx_45.b = *var_124
                int32_t eax_32
                eax_32.b = *edi
                int32_t eax_36
                eax_36.b = *edi
                int32_t var_f0
                int32_t var_e4
                int32_t ebx_58 = (*(((var_f0
                    + *(((edx_5 + *(((ebx_45 - edx_5) << 2) + eax_7) - var_f0) << 2) + var_e4)) << 2)
                    + *((eax_32 << 2) + &data_4e3da80)) - eax_36) << 2
                *edi = eax_36.b + (*(ebx_58 + edx_1)).b
        
        edi += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_130
    edi += var_130
    i = i_1
    i_1 -= 1
while (i != 1)

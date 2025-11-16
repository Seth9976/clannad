// 函数: sub_7e6250
// 地址: 0x7e6250
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
                int32_t eax_9 = edx_5 + *(((ebx_15 - edx_5) << 2) + eax_7)
                int32_t eax_10
                eax_10.b = not.b(eax_9.b)
                int32_t eax_12
                eax_12.b = *(edi + 2)
                int32_t var_d0
                *(edi + 2) = eax_12.b
                    + (*(((eax_10 + *(((eax_9 - eax_10) << 2) + var_d0) - eax_12) << 2) + edx_1)).b
                int32_t ebx_27
                ebx_27.b = var_124[1]
                int32_t eax_15 = edx_5 + *(((ebx_27 - edx_5) << 2) + eax_7)
                int32_t eax_16
                eax_16.b = not.b(eax_15.b)
                int32_t eax_18
                eax_18.b = *(edi + 1)
                *(edi + 1) = eax_18.b +
                    (*(((eax_16 + *(((eax_15 - eax_16) << 2) + var_d0) - eax_18) << 2) + edx_1)).b
                int32_t ebx_39
                ebx_39.b = *var_124
                int32_t eax_21 = edx_5 + *(((ebx_39 - edx_5) << 2) + eax_7)
                int32_t eax_22
                eax_22.b = not.b(eax_21.b)
                int32_t eax_24
                eax_24.b = *edi
                *edi = eax_24.b +
                    (*(((eax_22 + *(((eax_21 - eax_22) << 2) + var_d0) - eax_24) << 2) + edx_1)).b
        
        edi += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_130
    edi += var_130
    i = i_1
    i_1 -= 1
while (i != 1)

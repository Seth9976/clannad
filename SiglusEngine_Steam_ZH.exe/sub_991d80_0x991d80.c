// 函数: sub_991d80
// 地址: 0x991d80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
int32_t* var_14
int32_t* esi_4 = var_14
char* var_1c
char* edi = var_1c
int32_t i_2
int32_t i_1 = i_2
int32_t result
int32_t i

do
    int32_t eax_1 = *esi_4
    void* esi_1 = &esi_4[1]
    
    if (eax_1 != 0)
        int32_t var_c
        
        if (eax_1 s> 0)
            edi = &edi[var_c]
        else
            edi -= var_c
    
    result = *esi_1
    
    if (result != 0)
        int32_t var_8
        
        if (result s> 0)
            edi = &edi[var_8]
        else
            edi -= var_8
    
    int32_t ebx_1
    ebx_1.b = edi[3]
    
    if (ebx_1 != 0)
        int32_t var_11c
        int32_t ebx_7 = *(*((ebx_1 << 2) + &data_4e3da80) + var_11c)
        
        if (ebx_7 != 0)
            int32_t edx_2 = *((ebx_7 << 2) + &data_4e3da80)
            int32_t eax_2
            eax_2.b = edi[2]
            int32_t eax_4
            eax_4.b = edi[1]
            int32_t eax_6
            eax_6.b = *edi
            uint32_t edx_6 = (*(&data_4e3d680 + (eax_2 << 2)) + *(&data_4e3e280 + (eax_4 << 2))
                + *(&data_4e3de80 + (eax_6 << 2))) u>> 8
            int32_t var_cc
            int32_t eax_8 = *(&data_4e3da80 + var_cc)
            int32_t ebx_15
            ebx_15.b = edi[2]
            int32_t eax_10 = edx_6 + *(((ebx_15 - edx_6) << 2) + eax_8)
            int32_t eax_11
            eax_11.b = not.b(eax_10.b)
            int32_t eax_15
            eax_15.b = edi[2]
            int32_t var_e0
            int32_t var_d4
            int32_t var_d0
            edi[2] = eax_15.b + (*(((var_e0
                + *(((eax_11 + *(((eax_10 - eax_11) << 2) + var_d0) - var_e0) << 2) + var_d4)
                - eax_15) << 2) + edx_2)).b
            int32_t ebx_31
            ebx_31.b = edi[1]
            int32_t eax_18 = edx_6 + *(((ebx_31 - edx_6) << 2) + eax_8)
            int32_t eax_19
            eax_19.b = not.b(eax_18.b)
            int32_t eax_23
            eax_23.b = edi[1]
            int32_t var_dc
            edi[1] = eax_23.b + (*(((var_dc
                + *(((eax_19 + *(((eax_18 - eax_19) << 2) + var_d0) - var_dc) << 2) + var_d4)
                - eax_23) << 2) + edx_2)).b
            int32_t ebx_47
            ebx_47.b = *edi
            int32_t eax_26 = edx_6 + *(((ebx_47 - edx_6) << 2) + eax_8)
            int32_t eax_27
            eax_27.b = not.b(eax_26.b)
            int32_t eax_31
            eax_31.b = *edi
            int32_t var_d8
            result = eax_31 + *(((var_d8
                + *(((eax_27 + *(((eax_26 - eax_27) << 2) + var_d0) - var_d8) << 2) + var_d4)
                - eax_31) << 2) + edx_2)
            *edi = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result

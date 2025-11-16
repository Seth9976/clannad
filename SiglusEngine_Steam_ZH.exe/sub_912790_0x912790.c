// 函数: sub_912790
// 地址: 0x912790
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
int32_t* var_14
int32_t* esi_4 = var_14
void* var_1c
void* edi = var_1c
int32_t i_2
int32_t i_1 = i_2
char result
int32_t i

do
    int32_t eax_1 = *esi_4
    void* esi_1 = &esi_4[1]
    
    if (eax_1 != 0)
        int32_t var_c
        
        if (eax_1 s> 0)
            edi += var_c
        else
            edi -= var_c
    
    int32_t eax_2 = *esi_1
    
    if (eax_2 != 0)
        int32_t var_8
        
        if (eax_2 s> 0)
            edi += var_8
        else
            edi -= var_8
    
    char* var_18
    int32_t eax_3
    eax_3.b = var_18[2]
    int32_t eax_5
    eax_5.b = var_18[1]
    int32_t eax_7
    eax_7.b = *var_18
    uint32_t edx_5 = (*(&data_4e3d680 + (eax_3 << 2)) + *(&data_4e3e280 + (eax_5 << 2))
        + *(&data_4e3de80 + (eax_7 << 2))) u>> 8
    int32_t var_cc
    int32_t eax_9 = *(&data_4e3da80 + var_cc)
    int32_t ebx_5
    ebx_5.b = var_18[2]
    int32_t eax_11 = edx_5 + *(((ebx_5 - edx_5) << 2) + eax_9)
    int32_t eax_12
    eax_12.b = not.b(eax_11.b)
    int32_t eax_14
    eax_14.b = *(edi + 2)
    int32_t var_118
    int32_t var_d0
    *(edi + 2) =
        eax_14.b + (*(((eax_12 + *(((eax_11 - eax_12) << 2) + var_d0) - eax_14) << 2) + var_118)).b
    int32_t ebx_17
    ebx_17.b = var_18[1]
    int32_t eax_17 = edx_5 + *(((ebx_17 - edx_5) << 2) + eax_9)
    int32_t eax_18
    eax_18.b = not.b(eax_17.b)
    int32_t eax_20
    eax_20.b = *(edi + 1)
    *(edi + 1) =
        eax_20.b + (*(((eax_18 + *(((eax_17 - eax_18) << 2) + var_d0) - eax_20) << 2) + var_118)).b
    int32_t ebx_29
    ebx_29.b = *var_18
    int32_t eax_23 = edx_5 + *(((ebx_29 - edx_5) << 2) + eax_9)
    int32_t eax_24
    eax_24.b = not.b(eax_23.b)
    int32_t eax_26
    eax_26.b = *edi
    result =
        eax_26.b + (*(((eax_24 + *(((eax_23 - eax_24) << 2) + var_d0) - eax_26) << 2) + var_118)).b
    *edi = result
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result

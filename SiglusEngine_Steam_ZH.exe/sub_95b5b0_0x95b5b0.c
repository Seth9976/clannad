// 函数: sub_95b5b0
// 地址: 0x95b5b0
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
    
    int32_t var_118
    int32_t var_15c_1 = var_118
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
    int32_t var_d0
    *(edi + 2) = (*
        (((eax_12 + *(((eax_11 - eax_12) << 2) + var_d0)) << 2) + *((eax_14 << 2) + &data_4e3da80))).b
    int32_t ebx_16
    ebx_16.b = var_18[1]
    int32_t eax_20 = edx_5 + *(((ebx_16 - edx_5) << 2) + eax_9)
    int32_t eax_21
    eax_21.b = not.b(eax_20.b)
    int32_t eax_23
    eax_23.b = *(edi + 1)
    *(edi + 1) = (*
        (((eax_21 + *(((eax_20 - eax_21) << 2) + var_d0)) << 2) + *((eax_23 << 2) + &data_4e3da80))).b
    int32_t ebx_27
    ebx_27.b = *var_18
    int32_t eax_29 = edx_5 + *(((ebx_27 - edx_5) << 2) + eax_9)
    int32_t eax_30
    eax_30.b = not.b(eax_29.b)
    int32_t eax_32
    eax_32.b = *edi
    result = (*
        (((eax_30 + *(((eax_29 - eax_30) << 2) + var_d0)) << 2) + *((eax_32 << 2) + &data_4e3da80))).b
    *edi = result
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result

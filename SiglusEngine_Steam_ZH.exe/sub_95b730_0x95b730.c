// 函数: sub_95b730
// 地址: 0x95b730
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
int32_t* var_14
int32_t* esi_4 = var_14
void* var_1c
void* edi = var_1c
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
            edi += var_c
        else
            edi -= var_c
    
    result = *esi_1
    
    if (result != 0)
        int32_t var_8
        
        if (result s> 0)
            edi += var_8
        else
            edi -= var_8
    
    char* var_18
    int32_t ebx_1
    ebx_1.b = var_18[3]
    
    if (ebx_1 != 0)
        int32_t edx_2 = *((ebx_1 << 2) + &data_4e3da80)
        int32_t eax_2
        eax_2.b = var_18[2]
        int32_t eax_4
        eax_4.b = var_18[1]
        int32_t eax_6
        eax_6.b = *var_18
        uint32_t edx_6 = (*(&data_4e3d680 + (eax_2 << 2)) + *(&data_4e3e280 + (eax_4 << 2))
            + *(&data_4e3de80 + (eax_6 << 2))) u>> 8
        int32_t var_cc
        int32_t eax_8 = *(&data_4e3da80 + var_cc)
        int32_t ebx_9
        ebx_9.b = var_18[2]
        int32_t eax_10 = edx_6 + *(((ebx_9 - edx_6) << 2) + eax_8)
        int32_t eax_11
        eax_11.b = not.b(eax_10.b)
        int32_t eax_13
        eax_13.b = *(edi + 2)
        int32_t eax_17
        eax_17.b = *(edi + 2)
        int32_t var_d0
        *(edi + 2) = eax_17.b + (*(((*(((eax_11 + *(((eax_10 - eax_11) << 2) + var_d0)) << 2)
            + *((eax_13 << 2) + &data_4e3da80)) - eax_17) << 2) + edx_2)).b
        int32_t ebx_24
        ebx_24.b = var_18[1]
        int32_t eax_20 = edx_6 + *(((ebx_24 - edx_6) << 2) + eax_8)
        int32_t eax_21
        eax_21.b = not.b(eax_20.b)
        int32_t eax_23
        eax_23.b = *(edi + 1)
        int32_t eax_27
        eax_27.b = *(edi + 1)
        *(edi + 1) = eax_27.b + (*(((*(((eax_21 + *(((eax_20 - eax_21) << 2) + var_d0)) << 2)
            + *((eax_23 << 2) + &data_4e3da80)) - eax_27) << 2) + edx_2)).b
        int32_t ebx_39
        ebx_39.b = *var_18
        int32_t eax_30 = edx_6 + *(((ebx_39 - edx_6) << 2) + eax_8)
        int32_t eax_31
        eax_31.b = not.b(eax_30.b)
        int32_t eax_33
        eax_33.b = *edi
        int32_t eax_37
        eax_37.b = *edi
        result = eax_37 + *(((*(((eax_31 + *(((eax_30 - eax_31) << 2) + var_d0)) << 2)
            + *((eax_33 << 2) + &data_4e3da80)) - eax_37) << 2) + edx_2)
        *edi = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result

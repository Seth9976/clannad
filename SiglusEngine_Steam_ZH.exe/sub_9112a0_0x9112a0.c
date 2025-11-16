// 函数: sub_9112a0
// 地址: 0x9112a0
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
    int32_t eax_16
    eax_16.b = *(edi + 2)
    int32_t var_118
    int32_t var_f8
    int32_t var_ec
    int32_t var_d0
    *(edi + 2) = eax_16.b + (*(((var_f8
        + *(((eax_12 + *(((eax_11 - eax_12) << 2) + var_d0) - var_f8) << 2) + var_ec) - eax_16) << 2)
        + var_118)).b
    int32_t ebx_21
    ebx_21.b = var_18[1]
    int32_t eax_19 = edx_5 + *(((ebx_21 - edx_5) << 2) + eax_9)
    int32_t eax_20
    eax_20.b = not.b(eax_19.b)
    int32_t eax_24
    eax_24.b = *(edi + 1)
    int32_t var_f4
    int32_t var_e8
    *(edi + 1) = eax_24.b + (*(((var_f4
        + *(((eax_20 + *(((eax_19 - eax_20) << 2) + var_d0) - var_f4) << 2) + var_e8) - eax_24) << 2)
        + var_118)).b
    int32_t ebx_37
    ebx_37.b = *var_18
    int32_t eax_27 = edx_5 + *(((ebx_37 - edx_5) << 2) + eax_9)
    int32_t eax_28
    eax_28.b = not.b(eax_27.b)
    int32_t eax_32
    eax_32.b = *edi
    int32_t var_f0
    int32_t var_e4
    result = eax_32.b + (*(((var_f0
        + *(((eax_28 + *(((eax_27 - eax_28) << 2) + var_d0) - var_f0) << 2) + var_e4) - eax_32) << 2)
        + var_118)).b
    *edi = result
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result

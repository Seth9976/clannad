// 函数: sub_965780
// 地址: 0x965780
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
    int32_t ebx_1
    ebx_1.b = var_18[2]
    int32_t eax_3
    eax_3.b = *(edi + 2)
    int32_t eax_7
    eax_7.b = *(edi + 2)
    int32_t var_118
    *(edi + 2) = eax_7.b
        + (*(((*((ebx_1 << 2) + *((eax_3 << 2) + &data_4e3da80)) - eax_7) << 2) + var_118)).b
    int32_t ebx_8
    ebx_8.b = var_18[1]
    int32_t eax_9
    eax_9.b = *(edi + 1)
    int32_t eax_13
    eax_13.b = *(edi + 1)
    *(edi + 1) = eax_13.b
        + (*(((*((ebx_8 << 2) + *((eax_9 << 2) + &data_4e3da80)) - eax_13) << 2) + var_118)).b
    int32_t ebx_15
    ebx_15.b = *var_18
    int32_t eax_15
    eax_15.b = *edi
    int32_t eax_19
    eax_19.b = *edi
    result = eax_19.b
        + (*(((*((ebx_15 << 2) + *((eax_15 << 2) + &data_4e3da80)) - eax_19) << 2) + var_118)).b
    *edi = result
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result

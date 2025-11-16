// 函数: sub_992990
// 地址: 0x992990
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
    
    int32_t eax_2 = *esi_1
    
    if (eax_2 != 0)
        int32_t var_8
        
        if (eax_2 s> 0)
            edi = &edi[var_8]
        else
            edi -= var_8
    
    int32_t ebx_1
    ebx_1.b = edi[2]
    int32_t eax_3
    eax_3.b = not.b(ebx_1.b)
    int32_t var_f8
    int32_t var_ec
    int32_t var_d0
    edi[2] = (var_f8 + *(((eax_3 + *(((ebx_1 - eax_3) << 2) + var_d0) - var_f8) << 2) + var_ec)).b
    int32_t ebx_9
    ebx_9.b = edi[1]
    int32_t eax_7
    eax_7.b = not.b(ebx_9.b)
    int32_t var_f4
    int32_t var_e8
    edi[1] = (var_f4 + *(((eax_7 + *(((ebx_9 - eax_7) << 2) + var_d0) - var_f4) << 2) + var_e8)).b
    int32_t ebx_17
    ebx_17.b = *edi
    int32_t eax_11
    eax_11.b = not.b(ebx_17.b)
    int32_t var_f0
    int32_t var_e4
    result = var_f0 + *(((eax_11 + *(((ebx_17 - eax_11) << 2) + var_d0) - var_f0) << 2) + var_e4)
    *edi = result.b
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result

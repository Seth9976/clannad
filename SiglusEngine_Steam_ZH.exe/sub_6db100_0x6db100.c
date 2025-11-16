// 函数: sub_6db100
// 地址: 0x6db100
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg3 + 0x278)

if (eax != 0)
    if (eax == 1)
        return sub_6d8610(arg3, arg4)
    
    *(arg3 + 0x278) = eax - 1
    
    if (eax == 2)
        sub_6d8610(arg3, arg4)
        return sub_6d4840(arg3, "no space in chunk cache")

int32_t eax_4 = *(arg3 + 0x74)

if ((eax_4.b & 1) == 0)
    sub_6d47a0(arg3, "missing IHDR")
    noreturn

if ((eax_4.b & 4) != 0)
    eax_4 |= 8
    *(arg3 + 0x74) = eax_4

int32_t eax_5 = sub_6d87a0(eax_4, arg4 + 1, arg3, 1)
char* edi = eax_5

if (edi == 0)
    return sub_6d4840(arg3, "out of memory")

sub_6d85d0(eax_5, edi, arg3, arg4)
int32_t* result = sub_6d8610(arg3, 0)

if (result == 0)
    void* eax_7 = &edi[arg4]
    char* ecx_3 = edi
    *eax_7 = 0
    
    if (*edi != 0)
        do
            ecx_3 = &ecx_3[1]
        while (*ecx_3 != 0)
    
    if (ecx_3 != eax_7)
        ecx_3 = &ecx_3[1]
    
    int32_t var_24 = 0xffffffff
    char* var_20_1 = edi
    int32_t var_10_1 = 0
    int32_t var_c_1 = 0
    int32_t var_14_1 = 0
    char* var_1c_1 = ecx_3
    
    do
        eax_7.b = *ecx_3
        ecx_3 = &ecx_3[1]
    while (eax_7.b != 0)
    
    void* ecx_4 = ecx_3 - &ecx_3[1]
    void* var_34_1 = ecx_4
    void* var_18_1 = ecx_4
    result = sub_6ce670(&var_24, arg2, arg3, &var_24)
    
    if (result != 0)
        return sub_6d4470(arg3, "Insufficient memory to process text chunk")

return result

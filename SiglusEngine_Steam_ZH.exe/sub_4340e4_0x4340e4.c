// 函数: sub_4340e4
// 地址: 0x4340e4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t result = 0

if (arg3 == 0)
    return 0x8876086c

int32_t edi
int32_t var_14_1 = edi
int32_t eax_1 = sub_433f9c(arg1, arg2, 1)

if (eax_1 != 0)
    int32_t* edx_3 = *(*(eax_1 + 4) + 0x40) + *(arg1 + 0x344) + *(eax_1 + 0x18)
    __builtin_memset(arg3, 0, 0x2c)
    int32_t* eax_4 = edx_3[2] + *(arg1 + 0x344)
    void* eax_5
    
    if (*eax_4 != 0)
        eax_5 = &eax_4[1]
    else
        eax_5 = nullptr
    
    *arg3 = eax_5
    int32_t* eax_7 = edx_3[3] + *(arg1 + 0x344)
    void* eax_8
    
    if (*eax_7 != 0)
        eax_8 = &eax_7[1]
    else
        eax_8 = nullptr
    
    arg3[1] = eax_8
    arg3[0xa] = *(eax_1 + 0x14)
    int32_t* eax_11 = *(*(eax_1 + 4) + 0x44)
    int32_t eax_12
    
    if (eax_11 != 0)
        eax_12 = *(eax_11 + *(arg1 + 0x33c))
    else
        eax_12 = 4
    
    arg3[9] = eax_12
    arg3[3] = *edx_3
    arg3[2] = edx_3[1]
    int32_t eax_15
    
    if (*(eax_1 + 0x10) != 0xffffffff)
        eax_15 = 0
    else
        eax_15 = edx_3[4]
    
    arg3[6] = eax_15
    arg3[7] = 0
    
    if (*(eax_1 + 0x18) == 0 && *(eax_1 + 0x10) == 0xffffffff)
        arg3[7] = *(*(eax_1 + 4) + 0x28)
    
    int32_t eax_18 = arg3[2]
    
    if (eax_18 == 1)
        arg3[8] = 0
        arg3[4] = 1
        arg3[5] = edx_3[5]
    else if (eax_18 == 4)
        arg3[8] = 0
        arg3[4] = 0
        arg3[5] = 0
    else if (eax_18 == 5)
        arg3[8] = edx_3[5]
        arg3[4] = 0
        arg3[5] = 0
    else
        arg3[8] = 0
        arg3[4] = edx_3[5]
        arg3[5] = edx_3[6]
else
    result = 0x8876086c

return result

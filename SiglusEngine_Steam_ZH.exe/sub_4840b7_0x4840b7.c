// 函数: sub_4840b7
// 地址: 0x4840b7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = *(arg1 + 0x38)
*(arg1 + 0x3c) = 0
*(arg1 + 0x40) = 0

if (eax == 0)
    return 0

int32_t edi
int32_t var_20_1 = edi
int32_t i = 0

if (*eax u> 0)
    do
        (*(**(*(*(arg1 + 0x38) + 0xc) + (i << 2)) + 4))(arg1)
        i += 1
    while (i u< **(arg1 + 0x38))

void* ecx_1 = *(arg1 + 0x24)
int32_t var_10 = *(arg1 + 0x40)
int32_t eax_6 = *(arg1 + 0x3c)
double* var_c = nullptr
int32_t var_14 = eax_6
int32_t var_8 = 0
int32_t result
int32_t result_1

if (*(ecx_1 + 0x28) == 0)
    result_1 = sub_482992(ecx_1, &var_10, &var_8, eax_6)
    
    if (result_1 s< 0 || var_8 == *(arg1 + 0x3c))
        result = result_1
    else
        _free(*(arg1 + 0x40))
        *(arg1 + 0x40) = 0
        result = 0x88760394
else
    result_1 = sub_4829e3(ecx_1, &var_10, &var_8, &var_14, &var_c)
    
    if (result_1 s>= 0)
        _free(*(arg1 + 0x40))
        *(arg1 + 0x3c) = var_8
        *(arg1 + 0x40) = var_c
    
    result = result_1
return result

// 函数: sub_42cd60
// 地址: 0x42cd60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = 0
int32_t edi = 0
int32_t* eax_1 = *(arg2 + 4)
int32_t var_c = 0
int32_t var_8 = 0

if (eax_1 u<= 0x1ff)
    sub_425430(eax_1, 1)
    
    if (*(eax_1 * 0x74 + 0x13747b0) != 0)
        sub_426980(&var_c, 0, eax_1 * 0x74 + 0x13747b0, &var_c, &var_8)
        ebx = var_8
        edi = var_c

int32_t edx = *(arg1 + 0x5c)
var_8 = *(arg1 + 0x58) + edi
int32_t edx_1 = edx + ebx
int32_t ecx_5 = *(arg2 + 0x54) - data_70300c
int32_t eax_7 = *(arg2 + 0x58) - data_7030dc

if (var_8 s<= ecx_5)
    ecx_5 = var_8
    
    if (ecx_5 s< 0)
        ecx_5 = 0

if (edx_1 s<= eax_7)
    eax_7 = edx_1
    
    if (edx_1 s< 0)
        eax_7 = 0

int32_t ecx_6 = ecx_5 - edi
int32_t edx_3 = *(arg1 + 0x50) + ecx_6
*(arg1 + 0x58) = ecx_6
int32_t eax_8 = eax_7 - ebx
var_8 = edx_3 + edi
int32_t edx_6 = *(arg1 + 0x54) + eax_8
*(arg1 + 0x5c) = eax_8
int32_t edx_7 = edx_6 + ebx
int32_t ecx_8 = *(arg2 + 0x54) - data_70300c
int32_t eax_11 = *(arg2 + 0x58) - data_7030dc

if (var_8 s<= ecx_8)
    ecx_8 = var_8
    
    if (ecx_8 s< 0)
        ecx_8 = 0

if (edx_7 s<= eax_11)
    eax_11 = edx_7
    
    if (edx_7 s< 0)
        eax_11 = 0

int32_t result = eax_11 - *(arg1 + 0x5c) - ebx
*(arg1 + 0x50) = ecx_8 - *(arg1 + 0x58) - edi
*(arg1 + 0x54) = result
return result

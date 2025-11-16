// 函数: sub_472d10
// 地址: 0x472d10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = arg4
*eax = 0
bool cond:0 = *arg3 != 0
*arg2 = 0

if (cond:0)
    *arg3 = 0
else
    eax = zx.d(arg3[0x10]) * data_1b14a28
    *(arg3 + 0xc) += eax

int32_t ecx = *(arg3 + 4)

if (ecx == 0)
    *(arg3 + 4) = ecx
    return eax

int32_t* eax_2 = *(arg3 + 8)
int32_t edi = *(arg3 + 0xc)

if (edi u> eax_2)
    int32_t var_18 = 0
    void* edx_1 = edi - eax_2
    int32_t var_14_1 = 0
    int32_t eax_3 = edi
    int32_t edx_2 = *(arg3 + 0x1c)
    int32_t var_8
    
    if (edx_2 != 0)
        var_8 = edi
        int32_t eax_4 = sx.d(*(arg3 + 0x24))
        int32_t eax_5 = sub_472ca0(eax_4, ecx, edx_1, edx_2, eax_4, &var_8, &var_18)
        ecx = *(arg3 + 4)
        var_14_1 = eax_5
        eax_3 = var_8
    
    int32_t edx_5 = 0
    int32_t var_10 = 0
    int32_t ecx_3
    
    if (*(arg3 + 0x20) == 0)
        ecx_3 = 0
    else
        var_8 = edi
        int32_t eax_6 = sx.d(*(arg3 + 0x24))
        int32_t eax_7 = sub_472ca0(eax_6, ecx, edx_1, *(arg3 + 0x20), eax_6, &var_8, &var_10)
        edx_5 = var_10
        ecx_3 = eax_7
        eax_3 = var_8
    
    *(arg3 + 0xc) = eax_3
    
    if (var_14_1 == 0 && ecx_3 == 0)
        *(arg3 + 4) = ecx_3
        return eax_3
    
    *arg2 = var_18
    eax_2 = arg4
    *eax_2 = edx_5

return eax_2

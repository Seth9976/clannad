// 函数: sub_4740e0
// 地址: 0x4740e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = data_1cd640c
int32_t var_14
int32_t var_10
int32_t var_c
int32_t var_8

switch (edi[0x64])
    case 0
        __builtin_memset(&edi[0x13], 0xff, 0x20)
    case 1, 9
        sub_4266f0(&var_8, edi[0x1b], *edi, &var_8, &var_c, &var_10, &var_14)
    label_4741ec:
        int32_t esi_1 = var_8
        int32_t edx_3 = var_c
        int32_t ecx_3 = var_10
        int32_t eax_9 = var_14
        edi[0x13] += esi_1
        edi[0x14] += edx_3
        edi[0x15] += ecx_3
        edi[0x16] += eax_9
        edi[0x17] += esi_1
        edi[0x18] += edx_3
        edi[0x19] += ecx_3
        edi[0x1a] += eax_9
    case 3
        edi[0x13] += edi[0x83]
        edi[0x14] += edi[0x84]
        edi[0x15] += edi[0x85]
        edi[0x16] += edi[0x86]
        edi[0x17] += edi[0x83]
        edi[0x18] += edi[0x84]
        edi[0x19] += edi[0x85]
        edi[0x1a] += edi[0x86]
    case 4
        edi[0x15] += edi[0xc] - 1
        edi[0x16] += edi[0xd] - 1
        edi[0x19] += edi[0xc] - 1
        edi[0x1a] += edi[0xd] - 1
    case 6
        sub_46ee50(&edi[0xe], &edi[0x90], *edi, &edi[0xe], &var_8, &var_c, &var_10, &var_14)
        goto label_4741ec

int32_t result = edi[0x39]

if (result != 0xffffffff || edi[0x3a] != result || edi[0x3b] != result || edi[0x3c] != result)
    if (edi[0x13] s< result)
        edi[0x13] = result
    
    int32_t eax_18 = edi[0x3a]
    
    if (edi[0x14] s< eax_18)
        edi[0x14] = eax_18
    
    int32_t eax_19 = edi[0x3b]
    
    if (edi[0x15] s> eax_19)
        edi[0x15] = eax_19
    
    int32_t eax_20 = edi[0x3c]
    
    if (edi[0x16] s> eax_20)
        edi[0x16] = eax_20
    
    int32_t eax_21 = edi[0x39]
    
    if (edi[0x17] s< eax_21)
        edi[0x17] = eax_21
    
    int32_t eax_22 = edi[0x3a]
    
    if (edi[0x18] s< eax_22)
        edi[0x18] = eax_22
    
    int32_t eax_23 = edi[0x3b]
    
    if (edi[0x19] s> eax_23)
        edi[0x19] = eax_23
    
    result = edi[0x3c]
    
    if (edi[0x1a] s> result)
        edi[0x1a] = result

return result

// 函数: sub_473ed0
// 地址: 0x473ed0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* edx = data_1cd6404
int32_t** edi = data_1cd6408
int32_t var_14
int32_t var_10
int32_t var_c
int32_t var_8

switch (*(edx + 0xc))
    case 0
        __builtin_memset(&edi[0x1a], 0xff, 0x20)
    case 1, 9
        sub_4266f0(&var_8, edi[0xa0], *edi, &var_8, &var_c, &var_10, &var_14)
    label_473fee:
        int32_t esi_1 = var_8
        int32_t edx_3 = var_c
        int32_t ecx_3 = var_10
        int32_t eax_9 = var_14
        edi[0x1a] += esi_1
        edi[0x1b] += edx_3
        edi[0x1c] += ecx_3
        edi[0x1d] += eax_9
        edi[0x1e] += esi_1
        edi[0x1f] += edx_3
        edi[0x20] += ecx_3
        edi[0x21] += eax_9
    case 3
        edi[0x1a] += *(edx + 0x88)
        edi[0x1b] += *(edx + 0x8c)
        edi[0x1c] += *(edx + 0x90)
        edi[0x1d] += *(edx + 0x94)
        edi[0x1e] += *(edx + 0x88)
        edi[0x1f] += *(edx + 0x8c)
        edi[0x20] += *(edx + 0x90)
        edi[0x21] += *(edx + 0x94)
    case 4
        edi[0x1c] += edi[0x13] - 1
        edi[0x1d] += edi[0x14] - 1
        edi[0x20] += edi[0x13] - 1
        edi[0x21] += edi[0x14] - 1
    case 6
        sub_46ee50(&edi[0x15], edx + 0xbc, *edi, &edi[0x15], &var_8, &var_c, &var_10, &var_14)
        goto label_473fee

int32_t result = edi[0xbe]

if (result != 0xffffffff || edi[0xbf] != result || edi[0xc0] != result || edi[0xc1] != result)
    if (edi[0x1a] s< result)
        edi[0x1a] = result
    
    int32_t eax_18 = edi[0xbf]
    
    if (edi[0x1b] s< eax_18)
        edi[0x1b] = eax_18
    
    int32_t eax_19 = edi[0xc0]
    
    if (edi[0x1c] s> eax_19)
        edi[0x1c] = eax_19
    
    int32_t eax_20 = edi[0xc1]
    
    if (edi[0x1d] s> eax_20)
        edi[0x1d] = eax_20
    
    int32_t eax_21 = edi[0xbe]
    
    if (edi[0x1e] s< eax_21)
        edi[0x1e] = eax_21
    
    int32_t eax_22 = edi[0xbf]
    
    if (edi[0x1f] s< eax_22)
        edi[0x1f] = eax_22
    
    int32_t eax_23 = edi[0xc0]
    
    if (edi[0x20] s> eax_23)
        edi[0x20] = eax_23
    
    result = edi[0xc1]
    
    if (edi[0x21] s> result)
        edi[0x21] = result

return result

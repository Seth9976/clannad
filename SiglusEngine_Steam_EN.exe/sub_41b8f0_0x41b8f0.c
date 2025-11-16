// 函数: sub_41b8f0
// 地址: 0x41b8f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s<= 0)
    arg3 = 0
else if (arg3 s>= 7)
    arg3 = 7

if ((&data_98be10)[arg3 * 8] == 0)
    return 0

int32_t esi = (&data_98be04)[arg3 * 8]
int32_t edx = 0

if (esi s<= 0)
label_41b934:
    edx = 0xffffffff
else
    int32_t* eax_1 = (&data_98be14)[arg3 * 8]
    
    while (*eax_1 != arg2)
        edx += 1
        eax_1 = &eax_1[1]
        
        if (edx s>= esi)
            goto label_41b934

int32_t edi_1 = (&data_98be08)[arg3 * 8]
int32_t esi_1 = 0

if (edi_1 s<= 0)
label_41b953:
    esi_1 = 0xffffffff
else
    int32_t* eax_2 = (&data_98be18)[arg3 * 8]
    
    while (*eax_2 != arg4)
        esi_1 += 1
        eax_2 = &eax_2[2]
        
        if (esi_1 s>= edi_1)
            goto label_41b953

if (edx != 0xffffffff && esi_1 != 0xffffffff
        && *((&data_98be18)[arg3 * 8] + (esi_1 << 3) + 4) == 0x56)
    return *((&data_98be1c)[arg3 * 8] + ((edi_1 * edx + esi_1) << 2))

return 0

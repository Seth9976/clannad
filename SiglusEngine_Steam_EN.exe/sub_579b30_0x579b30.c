// 函数: sub_579b30
// 地址: 0x579b30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

sub_579980(arg4)
int32_t eax = data_71929c
*arg6 = 0

if (eax == 0x22 || eax == 0x23 || eax == 0x24)
    *arg6 = 1

int32_t edx = *(arg5 + 0x88)
int32_t edi

if (edx == 0xffffffff)
    edi = 0xffffffff
else
    edi = *((edx << 2) + &data_12997e4)

void* eax_2 = *(arg5 + 0x74)
*(arg6 + 4) = edi
char* eax_3

if (eax_2 == 0xffffffff)
    eax_3 = 0xffffffff
else
    eax_3 = *((eax_2 << 2) + &data_12997e4)

*(arg6 + 8) = eax_3
int32_t ecx_4

if (arg3 u<= 0x3f)
    if (*(arg3 * 0x2d0 + 0x8fcd90) != 0)
        ecx_4 = *(arg3 * 0x2d0 + &data_8fcd8c)
    else
        ecx_4 = data_1313290

if (arg3 u> 0x3f || ecx_4 s< 0 || ecx_4 s>= 8)
    ecx_4 = 0

*(arg6 + 0xc) = ecx_4
*(arg6 + 0x10) = 0

if (edx != 0xffffffff && edi != 5 && *((ecx_4 + (edx << 3)) * 0x374 + 0x1b1bef8) == 1)
    *(arg6 + 0x10) = 1

*(arg6 + 0x14) = 0

if (edx != 0xffffffff && eax_3 != 5 && *((ecx_4 + (eax_2 << 3)) * 0x374 + 0x1b1bef8) == 1)
    *(arg6 + 0x14) = 1

*(arg6 + 0x18) = 0
int32_t eax_10 = *(arg4 + 0x2c68)

if ((eax_10 != 0 || data_1320e74 != 0xffffffff) && data_12a2984 == 2)
    *(arg6 + 0x18) = 1
else if (*arg6 != 0)
    *(arg6 + 0x18) = 2

arg6[0x1c] = 0
__builtin_memset(&arg6[0x20], 0, 0x14)

if (eax_10 == 0 || data_12a2988 s>= 2)
    eax_10 = *(arg2 + 0x2b8)
    
    if (eax_10 == 0)
    label_579cbb:
        *(arg6 + 0x20) = data_1313294
        *(arg6 + 0x24) = data_1313298
        *(arg6 + 0x28) = data_131329c
        *(arg6 + 0x2c) = data_13132a0
        int32_t eax_15 = data_13132a4
        *(arg6 + 0x30) = eax_15
        arg6[0x1c] = 1
        return eax_15
    
    if (eax_10 == 1)
        if (eax_10 == 0)
            goto label_579cbb
        
        *(arg6 + 0x20) = *(arg2 + 0x2bc)
        *(arg6 + 0x24) = *(arg2 + 0x2c0)
        *(arg6 + 0x28) = *(arg2 + 0x2c4)
        *(arg6 + 0x2c) = *(arg2 + 0x2c8)
        eax_10 = *(arg2 + 0x2cc)
        *(arg6 + 0x30) = eax_10
        arg6[0x1c] = 1

return eax_10

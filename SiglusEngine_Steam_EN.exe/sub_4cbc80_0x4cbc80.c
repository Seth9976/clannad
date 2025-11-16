// 函数: sub_4cbc80
// 地址: 0x4cbc80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u> 0x3f || *(arg1 * 0x3c0 + &data_20af854) == 0)
    return 

*(arg1 * 0x3c0 + 0x20af9bc) = 0xbb8
int32_t eax_4 = *(arg1 * 0x3c0 + 0x20af888) * 0xbb8 s/ 0xff
*(arg1 * 0x3c0 + 0x20af9bc) = eax_4
int32_t eax_8 = *(arg1 * 0x3c0 + 0x20af88c) * eax_4 s/ 0xff
*(arg1 * 0x3c0 + 0x20af9bc) = eax_8
int32_t eax_12 = (&data_20af890)[arg1 * 0xf0] * eax_8 s/ 0xff
*(arg1 * 0x3c0 + 0x20af9bc) = eax_12
int32_t eax_16 = (&data_20af894)[arg1 * 0xf0] * eax_12 s/ 0xff
*(arg1 * 0x3c0 + 0x20af9bc) = eax_16
int32_t eax_20 = *(arg1 * 0x3c0 + 0x20af898) * eax_16 s/ 0xff
*(arg1 * 0x3c0 + 0x20af9bc) = eax_20
int32_t ecx_13 = *(arg1 * 0x3c0 + 0x20af89c) * eax_20 s/ 0xff
*(arg1 * 0x3c0 + 0x20af9bc) = ecx_13
int32_t eax_25 = (&data_20af8a0)[arg1 * 0xf0] * ecx_13 s/ 0xff
int32_t edx_22 = 0xbb8 - eax_25
*(arg1 * 0x3c0 + 0x20af9bc) = eax_25

if (edx_22 s> 0x9c4)
    edx_22 = edx_22 * 0x11 - 0x9c40
    
    if (edx_22 s> 0x2710)
        edx_22 = 0x2710

int32_t* eax_29 = *(arg1 * 0x3c0 + 0x20af868)
int32_t edx_23 = neg.d(edx_22)
*(arg1 * 0x3c0 + 0x20af9bc) = edx_23
(*(*eax_29 + 0x1c))(eax_29, edx_23)

// 函数: sub_4c33a0
// 地址: 0x4c33a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_641b5c == 0 || arg1 u> 0x3f)
    return 

int32_t* ebx_1 = (&data_208cd58)[arg1 * 0x60]

if (ebx_1 == 0 || (&data_208cd54)[arg1 * 0x60] == 0)
    return 

*(arg1 * 0x180 + 0x208cecc) = 0xbb8
int32_t eax_4 = *(arg1 * 0x180 + 0x208cd98) * 0xbb8 s/ 0xff
*(arg1 * 0x180 + 0x208cecc) = eax_4
int32_t eax_8 = *(arg1 * 0x180 + 0x208cd9c) * eax_4 s/ 0xff
*(arg1 * 0x180 + 0x208cecc) = eax_8
int32_t eax_12 = (&data_208cda0)[arg1 * 0x60] * eax_8 s/ 0xff
*(arg1 * 0x180 + 0x208cecc) = eax_12
int32_t eax_16 = (&data_208cda4)[arg1 * 0x60] * eax_12 s/ 0xff
*(arg1 * 0x180 + 0x208cecc) = eax_16
int32_t eax_20 = *(arg1 * 0x180 + 0x208cda8) * eax_16 s/ 0xff
*(arg1 * 0x180 + 0x208cecc) = eax_20
int32_t ecx_13 = *(arg1 * 0x180 + 0x208cdac) * eax_20 s/ 0xff
*(arg1 * 0x180 + 0x208cecc) = ecx_13
int32_t eax_25 = (&data_208cdb0)[arg1 * 0x60] * ecx_13 s/ 0xff
int32_t ecx_14 = 0xbb8 - eax_25
*(arg1 * 0x180 + 0x208cecc) = eax_25

if (ecx_14 s> 0x9c4)
    ecx_14 = ecx_14 * 0x11 - 0x9c40
    
    if (ecx_14 s> 0x2710)
        ecx_14 = 0x2710

int32_t ecx_15 = neg.d(ecx_14)
*(arg1 * 0x180 + 0x208cecc) = ecx_15
(*(*ebx_1 + 0x3c))(ebx_1, ecx_15)

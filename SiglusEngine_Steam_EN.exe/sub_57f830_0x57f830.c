// 函数: sub_57f830
// 地址: 0x57f830
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1

if (arg1 u> 0x3f)
    return 

int32_t eax_2 = *(arg1 * 0x2d0 + 0x8fcae0) + *(arg1 * 0x2d0 + &data_8fcadc)
*(arg1 * 0x3920 + 0xf8d2ec) = eax_2
int32_t eax_4 = *(arg1 * 0x2d0 + &data_8fcae4) + *(arg1 * 0x2d0 + &data_8fcadc)
int32_t ecx = *(arg1 * 0x1d4 + 0x1090c00)
*(arg1 * 0x3920 + 0xf8d2f0) = eax_4

if (ecx != 0)
    *(arg1 * 0x3920 + 0xf8d2f0) = eax_4 + ecx

int32_t esi_1 = *(arg1 * 0x1d4 + 0x1090b10)
int32_t ecx_1 = *(arg1 * 0x1d4 + 0x1090b0c)
int32_t eax_7
int32_t edx_3
edx_3:eax_7 = sx.q(eax_2)
*(arg1 * 0x3920 + 0xf8d2f4) = ((eax_7 - edx_3) s>> 1) + esi_1 + eax_2

if (esi_1 s>= ecx_1)
    ecx_1 = esi_1

*(arg1 * 0x3920 + 0xf8d2fc) = ecx_1
*(arg1 * 0x3920 + 0xf8d2f8) = eax_2 + esi_1

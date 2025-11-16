// 函数: sub_576070
// 地址: 0x576070
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u> 0x3f)
    return 

int32_t* eax = arg1 * 0x1d4
int32_t edx_1 = eax[0x4242bd]
int32_t* esi_1 = eax + &data_1090ae4

if (*(arg1 * 0x3920 + &data_f89afc) == edx_1)
    eax = *(arg1 * 0x3920 + 0xf89b00)

if (*(arg1 * 0x3920 + &data_f89afc) == edx_1 && eax == esi_1[5])
    return 

sub_575f00(eax, edx_1, arg1, esi_1[5], 0, 0)
sub_57f7d0(arg1)
int32_t eax_3 = esi_1[1]
*(arg1 * 0x2d0 + 0x8fcae0) = esi_1[2]
int32_t esi_2 = esi_1[3]
*(arg1 * 0x2d0 + &data_8fcadc) = eax_3
*(arg1 * 0x2d0 + &data_8fcae4) = esi_2
int32_t var_20_1 = 0
sub_577970(sub_57f830(arg1), arg1 * 0x2d0 + &data_8fcadc, arg1, arg1 * 0x3920 + &data_f89afc, esi_1)

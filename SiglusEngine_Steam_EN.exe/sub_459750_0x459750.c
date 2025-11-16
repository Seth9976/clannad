// 函数: sub_459750
// 地址: 0x459750
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 u> 3 || arg2 s<= 0 || arg2 s> data_70300c * 6 || arg4 s<= 0 || arg4 s> data_7030dc * 6)
    return 

sub_4597d0(arg3)
int32_t esi_1 = arg3 * 5
uint32_t eax_5 = arg2 * arg4
sub_4d6960(eax_5, (esi_1 << 3) + &data_7030e0:4, (esi_1 << 3) + &data_7030e0, eax_5, 
    "AVG_MASK_BANK")
*((esi_1 << 3) + &data_7030e0:8) = arg2
*((esi_1 << 3) + &data_7030e0:0xc) = arg4

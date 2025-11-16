// 函数: sub_5b9650
// 地址: 0x5b9650
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_5b9860(arg1)
*(arg1 + 0xbc) = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (*(arg1 + 0x148) u>= 8)
    j__free(*(arg1 + 0x134))

*(arg1 + 0x148) = 7
*(arg1 + 0x144) = 0
*(arg1 + 0x134) = 0
sub_6bfb10(arg1 + 0xbc)

if (*(arg1 + 0x98) u>= 8)
    j__free(*(arg1 + 0x84))

*(arg1 + 0x98) = 7
*(arg1 + 0x94) = 0
*(arg1 + 0x84) = 0
return 0

// 函数: sub_535e30
// 地址: 0x535e30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg1 + 0x98) = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (*(arg1 + 0x124) u>= 8)
    j__free(*(arg1 + 0x110))

*(arg1 + 0x124) = 7
*(arg1 + 0x120) = 0
*(arg1 + 0x110) = 0
sub_6bfb10(arg1 + 0x98)
*(arg1 + 4) = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (*(arg1 + 0x90) u>= 8)
    j__free(*(arg1 + 0x7c))

*(arg1 + 0x90) = 7
*(arg1 + 0x8c) = 0
*(arg1 + 0x7c) = 0
return sub_6bfb10(arg1 + 4) __tailcall

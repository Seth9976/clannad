// 函数: sub_63daf0
// 地址: 0x63daf0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_63dc90(&arg1[0x1e2])
arg1[0x1be] = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (arg1[0x1e1] u>= 8)
    j__free(arg1[0x1dc])

arg1[0x1e1] = 7
arg1[0x1e0] = 0
arg1[0x1dc].w = 0
sub_6bfb10(&arg1[0x1be])
arg1[0x19a] = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (arg1[0x1bd] u>= 8)
    j__free(arg1[0x1b8])

arg1[0x1bd] = 7
arg1[0x1bc] = 0
arg1[0x1b8].w = 0
sub_6bfb10(&arg1[0x19a])
sub_575910(&arg1[0xcd])
return sub_575910(arg1) __tailcall

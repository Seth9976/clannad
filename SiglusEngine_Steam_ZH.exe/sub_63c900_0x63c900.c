// 函数: sub_63c900
// 地址: 0x63c900
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

arg1[0x6e] = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (arg1[0x91] u>= 8)
    j__free(arg1[0x8c])

arg1[0x91] = 7
arg1[0x90] = 0
arg1[0x8c].w = 0
sub_6bfb10(&arg1[0x6e])
arg1[0x4a] = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (arg1[0x6d] u>= 8)
    j__free(arg1[0x68])

arg1[0x6d] = 7
arg1[0x6c] = 0
arg1[0x68].w = 0
sub_6bfb10(&arg1[0x4a])
arg1[0x26] = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (arg1[0x49] u>= 8)
    j__free(arg1[0x44])

arg1[0x49] = 7
arg1[0x48] = 0
arg1[0x44].w = 0
sub_6bfb10(&arg1[0x26])
*arg1 = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (arg1[0x23] u>= 8)
    j__free(arg1[0x1e])

arg1[0x23] = 7
arg1[0x22] = 0
arg1[0x1e].w = 0
return sub_6bfb10(arg1) __tailcall

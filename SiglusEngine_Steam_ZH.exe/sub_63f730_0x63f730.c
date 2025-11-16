// 函数: sub_63f730
// 地址: 0x63f730
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

arg1[0xb4] = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (arg1[0xd7] u>= 8)
    j__free(arg1[0xd2])

arg1[0xd7] = 7
arg1[0xd6] = 0
arg1[0xd2].w = 0
sub_6bfb10(&arg1[0xb4])
arg1[0x90] = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (arg1[0xb3] u>= 8)
    j__free(arg1[0xae])

arg1[0xb3] = 7
arg1[0xb2] = 0
arg1[0xae].w = 0
sub_6bfb10(&arg1[0x90])
arg1[0x6c] = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (arg1[0x8f] u>= 8)
    j__free(arg1[0x8a])

arg1[0x8f] = 7
arg1[0x8e] = 0
arg1[0x8a].w = 0
sub_6bfb10(&arg1[0x6c])
arg1[0x48] = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (arg1[0x6b] u>= 8)
    j__free(arg1[0x66])

arg1[0x6b] = 7
arg1[0x6a] = 0
arg1[0x66].w = 0
sub_6bfb10(&arg1[0x48])
arg1[0x24] = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (arg1[0x47] u>= 8)
    j__free(arg1[0x42])

arg1[0x47] = 7
arg1[0x46] = 0
arg1[0x42].w = 0
sub_6bfb10(&arg1[0x24])
*arg1 = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (arg1[0x23] u>= 8)
    j__free(arg1[0x1e])

arg1[0x23] = 7
arg1[0x22] = 0
arg1[0x1e].w = 0
return sub_6bfb10(arg1) __tailcall

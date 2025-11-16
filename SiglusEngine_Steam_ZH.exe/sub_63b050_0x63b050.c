// 函数: sub_63b050
// 地址: 0x63b050
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

arg1[0xdb] = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (arg1[0xfe] u>= 8)
    j__free(arg1[0xf9])

arg1[0xfe] = 7
arg1[0xfd] = 0
arg1[0xf9].w = 0
sub_6bfb10(&arg1[0xdb])
arg1[0xb7] = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (arg1[0xda] u>= 8)
    j__free(arg1[0xd5])

arg1[0xda] = 7
arg1[0xd9] = 0
arg1[0xd5].w = 0
sub_6bfb10(&arg1[0xb7])
arg1[0x93] = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (arg1[0xb6] u>= 8)
    j__free(arg1[0xb1])

arg1[0xb6] = 7
arg1[0xb5] = 0
arg1[0xb1].w = 0
sub_6bfb10(&arg1[0x93])
arg1[0x6f] = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (arg1[0x92] u>= 8)
    j__free(arg1[0x8d])

arg1[0x92] = 7
arg1[0x91] = 0
arg1[0x8d].w = 0
sub_6bfb10(&arg1[0x6f])
sub_63d2f0(&arg1[0x2f])
return sub_575890(arg1) __tailcall

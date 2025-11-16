// 函数: sub_575910
// 地址: 0x575910
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_57a340(&arg1[0xb3])
sub_57a340(&arg1[0xa0])
arg1[0x73] = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (arg1[0x96] u>= 8)
    j__free(arg1[0x91])

arg1[0x96] = 7
arg1[0x95] = 0
arg1[0x91].w = 0
sub_6bfb10(&arg1[0x73])
arg1[0x4d] = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (arg1[0x70] u>= 8)
    j__free(arg1[0x6b])

arg1[0x70] = 7
arg1[0x6f] = 0
arg1[0x6b].w = 0
sub_6bfb10(&arg1[0x4d])
arg1[0x27] = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (arg1[0x4a] u>= 8)
    j__free(arg1[0x45])

arg1[0x4a] = 7
arg1[0x49] = 0
arg1[0x45].w = 0
sub_6bfb10(&arg1[0x27])
int32_t* ecx_5 = arg1[0x24]

if (ecx_5 != 0)
    struct NT3::C_window_base::VTable** var_14_4 = arg1
    int32_t* var_18_1 = ecx_5
    sub_55d500(ecx_5, arg1[0x25])
    j__free(arg1[0x24])
    arg1[0x24] = 0
    arg1[0x25] = 0
    arg1[0x26] = 0

*arg1 = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (arg1[0x23] u>= 8)
    j__free(arg1[0x1e])

arg1[0x23] = 7
arg1[0x22] = 0
arg1[0x1e].w = 0
sub_6bfb10(arg1)
return 0

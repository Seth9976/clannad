// 函数: sub_63d2f0
// 地址: 0x63d2f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_6c8100(&arg1[0x24])
int32_t eax = arg1[0x32]

if (eax != 0)
    j__free(eax)
    arg1[0x32] = 0
    arg1[0x33] = 0
    arg1[0x34] = 0

*arg1 = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (arg1[0x23] u>= 8)
    j__free(arg1[0x1e])

arg1[0x23] = 7
arg1[0x22] = 0
arg1[0x1e].w = 0
return sub_6bfb10(arg1) __tailcall

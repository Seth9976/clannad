// 函数: sub_6ab0b0
// 地址: 0x6ab0b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_63d250(&arg1[0x201])

if (arg1[0x200] u>= 8)
    j__free(arg1[0x1fb])

arg1[0x200] = 7
arg1[0x1ff] = 0
arg1[0x1fb].w = 0
sub_63ec90(&arg1[0x1dd])
sub_63e980(&arg1[0x2d])
*arg1 = &NT3::C_dialog::`vftable'{for `NT3::C_window_base'}
int32_t eax = arg1[0x20]

if (eax != 0)
    j__free(eax)
    arg1[0x20] = 0
    arg1[0x21] = 0
    arg1[0x22] = 0

return sub_6bfb10(arg1) __tailcall

// 函数: sub_6ab330
// 地址: 0x6ab330
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_63f730(&arg1[0x32a])
sub_63f140(&arg1[0x2e])
*arg1 = &NT3::C_dialog::`vftable'{for `NT3::C_window_base'}
int32_t eax = arg1[0x20]

if (eax != 0)
    j__free(eax)
    arg1[0x20] = 0
    arg1[0x21] = 0
    arg1[0x22] = 0

return sub_6bfb10(arg1) __tailcall

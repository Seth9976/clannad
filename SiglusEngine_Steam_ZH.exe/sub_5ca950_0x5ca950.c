// 函数: sub_5ca950
// 地址: 0x5ca950
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_5caa90(&arg1[0x2e])
*arg1 = &NT3::C_dialog::`vftable'{for `NT3::C_window_base'}
int32_t eax = arg1[0x20]

if (eax != 0)
    j__free(eax)
    arg1[0x20] = 0
    arg1[0x21] = 0
    arg1[0x22] = 0

return sub_6bfb10(arg1) __tailcall

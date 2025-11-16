// 函数: sub_760c01
// 地址: 0x760c01
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_760c54(arg1)
*arg1 = 0x38
arg1[2] = &__dos_header
arg1[1] = &__dos_header
arg1[3] = 0xc00
arg1[4] = 0xab2990

if (sub_5c4a50(&arg1[5]) s< NO_ERROR)
    if (IsDebuggerPresent() != 0)
        OutputDebugStringW(u"ERROR : Unable to initialize critical section in CAtlBaseModule\n")
    
    data_bac3fd = 1

return arg1

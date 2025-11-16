// 函数: sub_6037ac
// 地址: 0x6037ac
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

sub_6037ff(arg1)
*arg1 = 0x38
arg1[2] = &__dos_header
arg1[1] = &__dos_header
arg1[3] = 0xc00
arg1[4] = 0x610428

if (sub_4d9400(&arg1[5]) s< NO_ERROR)
    if (IsDebuggerPresent() != 0)
        OutputDebugStringW(u"ERROR : Unable to initialize critical section in CAtlBaseModule\n")
    
    data_20f33fd = 1

return arg1

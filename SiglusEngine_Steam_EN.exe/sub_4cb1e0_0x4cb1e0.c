// 函数: sub_4cb1e0
// 地址: 0x4cb1e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2

if (arg3[1] != 0)
    eax_2 = sub_4d0f10(arg4, &arg3[0x6e])

if (arg3[1] == 0 || eax_2 != 0)
    sub_4caf70(arg3)
    
    if (sub_4cafe0(arg3) == 0)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 0
    
    wchar16 wideCharStr[0x208]
    MultiByteToWideChar(0, 0, arg4, 0xffffffff, &wideCharStr, 0x208)
    int32_t* eax_4 = arg3[1]
    int32_t eax_5 = (*(*eax_4 + 0x34))(eax_4, &wideCharStr, 0)
    int32_t eax_8
    
    if (eax_5 s>= 0)
        int32_t* ecx_6 = arg3[5]
        eax_8 = (*(*ecx_6 + 0x1c))(ecx_6, &arg3[0x66])
    
    if (eax_5 s< 0 || eax_8 s< 0)
        sub_4caf70(arg3)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 0
    
    sub_4cfd70(&arg3[0x6e], arg4)

arg3[0x69] = arg2
arg3[0x6a] = 0xffffffff
arg3[0x6b] = 0xffffffff
arg3[0x6c] = 0xffffffff
arg3[0x6d] = 0xffffffff
sub_4cb180(arg3)
*arg3 = 1
sub_5f02dd(eax_1 ^ &__saved_ebp)
return 1

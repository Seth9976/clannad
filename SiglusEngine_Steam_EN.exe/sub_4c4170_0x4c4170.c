// 函数: sub_4c4170
// 地址: 0x4c4170
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg3 != 0)
    void fileName
    sub_4c36f0(&fileName, arg2, arg3, arg4, &fileName)
    uint32_t eax_3 = GetFileAttributesA(&fileName)
    
    if ((eax_3.b & 1) != 0)
        SetFileAttributesA(&fileName, eax_3 & 0xfffffffe)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 1

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0

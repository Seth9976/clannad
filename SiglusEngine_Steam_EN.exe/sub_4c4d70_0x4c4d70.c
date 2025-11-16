// 函数: sub_4c4d70
// 地址: 0x4c4d70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg1 == 0)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 0xffffffff

void fileName
sub_4c36f0(&fileName, 0xffffffff, arg1, 0xffffffff, &fileName)
HANDLE result = CreateFileA(&fileName, 0x80000000, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, 
    OPEN_EXISTING, 0x8000080, nullptr)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result

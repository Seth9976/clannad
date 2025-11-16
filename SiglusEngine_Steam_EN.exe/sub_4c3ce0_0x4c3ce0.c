// 函数: sub_4c3ce0
// 地址: 0x4c3ce0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg3 == 0)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 0

void fileName
sub_4c36f0(&fileName, 4, arg3, 0x1e, &fileName)
HANDLE eax_5 = CreateFileA(&fileName, 0xc0000000, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, 
    OPEN_EXISTING, 0x8000080, nullptr)

if (eax_5 == 0xffffffff)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 0

SetFileTime(eax_5, arg4, arg5, arg6)
CloseHandle(eax_5)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return 1

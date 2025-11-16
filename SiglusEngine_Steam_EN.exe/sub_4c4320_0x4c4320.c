// 函数: sub_4c4320
// 地址: 0x4c4320
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg1 == 0)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 0

void fileName
sub_4c36f0(&fileName, 5, arg1, 0x1b, &fileName)
uint32_t result = 0
HANDLE eax_4 = CreateFileA(&fileName, 0x80000000, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, 
    OPEN_EXISTING, 0x8000080, nullptr)

if (eax_4 != 0xffffffff)
    result = GetFileSize(eax_4, nullptr)
    CloseHandle(eax_4)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result

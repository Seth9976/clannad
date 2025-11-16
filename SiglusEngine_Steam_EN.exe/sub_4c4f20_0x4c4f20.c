// 函数: sub_4c4f20
// 地址: 0x4c4f20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg1 == 0)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 0

void fileName
sub_4c36f0(&fileName, 4, arg1, 0x1e, &fileName)
HANDLE eax_4 = CreateFileA(&fileName, 0xc0000000, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, 
    OPEN_ALWAYS, 0x8000080, nullptr)

if (eax_4 == 0xffffffff)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 0

if (arg2 != 0)
    SetFilePointer(eax_4, 0, nullptr, FILE_BEGIN)

uint32_t numberOfBytesWritten
WriteFile(eax_4, arg2, 0x7e8, &numberOfBytesWritten, nullptr)
CloseHandle(eax_4)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return 1

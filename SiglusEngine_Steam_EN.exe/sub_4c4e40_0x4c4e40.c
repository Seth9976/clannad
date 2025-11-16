// 函数: sub_4c4e40
// 地址: 0x4c4e40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg3 == 0)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 0

void fileName
sub_4c36f0(&fileName, arg5, arg3, arg6, &fileName)
HANDLE eax_4 = CreateFileA(&fileName, 0xc0000000, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, 
    CREATE_ALWAYS, 0x8000080, nullptr)

if (eax_4 == 0xffffffff)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 0

if (arg2 != 0 && arg4 != 0)
    uint32_t numberOfBytesWritten
    WriteFile(eax_4, arg2, arg4, &numberOfBytesWritten, nullptr)
    CloseHandle(eax_4)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 1

SetFilePointer(eax_4, 0, nullptr, FILE_END)
CloseHandle(eax_4)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return 1

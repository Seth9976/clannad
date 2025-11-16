// 函数: sub_4c3ba0
// 地址: 0x4c3ba0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg3 != 0)
    void fileName
    sub_4c36f0(&fileName, arg2, arg3, arg4, &fileName)
    HANDLE eax_3 = CreateFileA(&fileName, 0x80000000, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, 
        OPEN_EXISTING, 0x8000080, nullptr)
    
    if (eax_3 != 0xffffffff)
        GetFileTime(eax_3, arg5, arg6, arg7)
        CloseHandle(eax_3)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 1
    
    if (arg5 != 0)
        eax_3 = sub_4d1ba0(eax_3, 8, arg5, 0)
    
    if (arg6 != 0)
        eax_3 = sub_4d1ba0(eax_3, 8, arg6, 0)
    
    if (arg7 != 0)
        sub_4d1ba0(eax_3, 8, arg7, 0)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0

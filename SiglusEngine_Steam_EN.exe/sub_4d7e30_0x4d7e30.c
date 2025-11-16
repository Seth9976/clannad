// 函数: sub_4d7e30
// 地址: 0x4d7e30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
OSVERSIONINFOA versionInformation
sub_4d1ba0(eax_1, 0x94, &versionInformation, 0)
versionInformation.dwOSVersionInfoSize = 0x94

if (GetVersionExA(&versionInformation) != 0 && versionInformation.dwPlatformId == 2
        && versionInformation.dwMajorVersion u>= 6)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 1

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 0

// 函数: sub_4bed70
// 地址: 0x4bed70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg3 u> 0x19)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 0xffffffff

uint32_t result = 0xffffffff
int32_t var_24 = arg3 + 0x61
void rootPathName
sub_4c84d0(&rootPathName, "%c:\")

if (GetDriveTypeA(&rootPathName) == 5)
    if (arg4 == 0 || *arg4 == 0)
        result = sub_4bec90(arg3)
    else if (sub_4c3b10(arg3) != 0)
        result = sub_4bec90(arg3)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result

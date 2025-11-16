// 函数: sub_41be50
// 地址: 0x41be50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void libFileName
char* eax_2

if (arg1 == 0)
    eax_2 = sub_4cfd70(&libFileName, 0x1352c30)
else
    int32_t var_220_1 = arg1
    int32_t var_224_1 = 0x1352c30
    eax_2 = sub_4c84d0(&libFileName, "%s\%s")

if (sub_4c3da0(eax_2, 0xffffffff, &libFileName, 0xffffffff) != 1)
    char* eax_6
    
    if (arg1 == 0)
        eax_6 = sub_4cfd70(&libFileName, 0x1351bf0)
    else
        int32_t var_220_3 = arg1
        int32_t var_224_2 = 0x1351bf0
        eax_6 = sub_4c84d0(&libFileName, "%s\%s")
    
    if (sub_4c3da0(eax_6, 0xffffffff, &libFileName, 0xffffffff) != 1)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 0

HMODULE eax_4 = LoadLibraryA(&libFileName)
data_1333e44 = eax_4

if (eax_4 != 0)
    sub_41bdf0()

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 1

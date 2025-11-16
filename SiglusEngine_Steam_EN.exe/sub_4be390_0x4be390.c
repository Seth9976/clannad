// 函数: sub_4be390
// 地址: 0x4be390
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t mciId = data_139270c

if (mciId == 0xffffffff)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 0x20c

int32_t dwParam2 = data_2074448
int32_t var_10 = 4
mciSendCommandA(mciId, 0x814, 0x101, &dwParam2)
sub_5f02dd(eax_1 ^ &__saved_ebp)
int32_t result
return result

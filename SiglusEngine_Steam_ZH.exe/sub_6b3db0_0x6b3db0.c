// 函数: sub_6b3db0
// 地址: 0x6b3db0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_80c = 0

if (arg2[5] u>= 8)
    arg2 = *arg2

void* const var_814
wchar16 buffer[0x400]

if (GetFullPathNameW(arg2, 0x400, &buffer, nullptr) != 0)
    var_814 = &buffer
else
    var_814 = &data_ad7c90

sub_52e820(arg1, var_814)
sub_745f2b(eax_1 ^ &__saved_ebp)
return arg1

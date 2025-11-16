// 函数: sub_753f94
// 地址: 0x753f94
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
*(arg1 + 8) |= 0x104
void var_b4
int32_t result = sub_75524e(&var_b4, 0x55)

if (result s> 1)
    result = _wcsncpy_s(arg1 + 0x250, 0x55, &var_b4, _wcslen(&var_b4) + 1)
    
    if (result != 0)
        int32_t var_cc_2
        __builtin_memset(&var_cc_2, 0, 0x14)
        __invoke_watson()
        noreturn

sub_745f2b(eax_1 ^ &__saved_ebp)
return result

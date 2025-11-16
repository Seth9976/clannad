// 函数: sub_762c46
// 地址: 0x762c46
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* edi = __mbsrchr(arg1, 0x2e) + 1
int32_t result

if (edi u< arg1 || arg2 u<= edi - arg1)
    __invalid_parameter_noinfo()
    result = 0xffffffff
else
    int32_t eax_4 = _strtoul(edi, nullptr, 0x20) + 1
    
    if (eax_4 u>= arg3)
        result = 0xffffffff
    else
        void var_10
        int32_t eax_5 = __ultoa_s(eax_4, &var_10, 8, 0x20)
        
        if (eax_5 == 0)
            result = _strcpy_s(edi, arg1 - edi + arg2, &var_10)
        
        if (eax_5 != 0 || result != 0)
            int32_t var_30
            __builtin_memset(&var_30, 0, 0x14)
            __invoke_watson()
            noreturn

sub_745f2b(eax_1 ^ &__saved_ebp)
return result

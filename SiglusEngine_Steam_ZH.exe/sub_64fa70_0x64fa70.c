// 函数: sub_64fa70
// 地址: 0x64fa70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3c6b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_184 = eax_2
char result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx
ebx.b = arg2

if (arg1 != 0)
    result = *(arg1 + 0x1d6)
    
    if (result != 0)
        sub_5d9690(arg1)
        result = sub_5d8380(arg1)
        
        if (ebx.b != 0)
            int32_t var_16c
            sub_54aed0(&var_16c)
            int32_t var_8_1 = 0
            var_16c = 0x17
            void var_168
            __builtin_memcpy(&var_168, arg1, 0x80)
            void var_2dc
            sub_54cf80(&var_2dc, &var_16c)
            sub_6766e0()
            void var_e0
            result = sub_54ae40(&var_e0)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

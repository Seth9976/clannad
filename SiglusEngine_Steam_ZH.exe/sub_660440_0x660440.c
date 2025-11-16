// 函数: sub_660440
// 地址: 0x660440
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c4edb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_7c4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_7bc
sub_6604f0(&var_7bc)
int32_t var_8_1 = 0
int32_t esi = data_4ebe3ac
sub_683ad0(0)
int32_t result = (*(var_7bc + 0x10))(esi)

if (result != 0xffffffff && sub_660750(sub_683ad0(1), 1, result, 1, 1) == 0)
    result = 0xfffffffe

sub_660350(&var_7bc)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

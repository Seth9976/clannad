// 函数: sub_651e40
// 地址: 0x651e40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3f20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_bac4d8
int32_t (* const* const var_60)() = &boost::detail::sp_counted_impl_p<struct S_tnm_local_save>::`vftable'{for `boost::detail::sp_counted_base'}
    .vFunc_5
int32_t var_64 = arg2
int32_t var_4c = 0
void var_7c
sub_52e820(&var_7c, u"\%04d")
int32_t var_44
int16_t* eax_4 = sub_6ae4c0(&var_44, var_7c)
int32_t var_8_1 = 0
int16_t var_2c
int16_t* eax_5 = sub_5327a0(eax_4, esi + 0x48, &var_2c, eax_4)
var_8_1.b = 1
sub_532b80(eax_5, eax_5, arg1, var_60)
int32_t var_18

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t var_18_1 = 7
int32_t var_1c = 0
var_2c = 0
int32_t var_30

if (var_30 u>= 8)
    j__free(var_44)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1

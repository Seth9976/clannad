// 函数: sub_6e17f0
// 地址: 0x6e17f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cccf0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = &var_24
*arg1 = 0
int32_t var_8_1 = 0
struct boost::detail::sp_counted_base::boost::detail::sp_counted_impl_p<struct NT3::C_ogg_stream::Simpl>::VTable
    ** eax_3 = sub_745f3f(0x10)

if (eax_3 == 0)
    eax_3 = nullptr
else
    eax_3[1] = 1
    eax_3[2] = 1
    *eax_3 = &boost::detail::sp_counted_impl_p<struct NT3::C_ogg_stream::Simpl>::`vftable'{for `boost::detail::sp_counted_base'}
    eax_3[3] = arg2

*arg1 = eax_3
fsbase->NtTib.ExceptionList = ExceptionList
return arg1

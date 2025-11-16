// 函数: sub_58ca20
// 地址: 0x58ca20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b780b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::exception::VTable** eax_3 = sub_745f3f(0x2c)
struct std::exception::VTable** var_18 = eax_3
int32_t var_8_1 = 0

if (eax_3 != 0)
    struct std::exception::VTable** var_24_1 = eax_3
    int32_t var_28_1 = 0.d
    struct boost::exception_detail::error_info_injector<class boost::bad_any_cast>::boost::exception_detail::clone_impl<struct boost::exception_detail::error_info_injector<class boost::bad_any_cast> >::VTable
        ** eax_5 = sub_58cb50(eax_3, arg1 - 0x28)
    
    if (eax_5 != 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return &eax_5[8] + eax_5[8]->__offset(0x4).d

fsbase->NtTib.ExceptionList = ExceptionList
return 0

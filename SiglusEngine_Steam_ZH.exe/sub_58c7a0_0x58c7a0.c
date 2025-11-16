// 函数: sub_58c7a0
// 地址: 0x58c7a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b77ac
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct boost::exception_detail::error_info_injector<class boost::bad_any_cast>::boost::exception_detail::clone_impl<struct boost::exception_detail::error_info_injector<class boost::bad_any_cast> >::VTable
    ** var_18 = arg1
int32_t var_14 = 0

if (arg3 != 0)
    arg1[8] = &data_aef7fc
    arg1[0xa] = &boost::exception_detail::clone_base::`vftable'
    int32_t var_8_1 = 0
    int32_t var_14_1 = 1

sub_58c840(arg1, arg2)
void* eax_3 = arg1[8]
*arg1 = &boost::exception_detail::clone_impl<struct boost::exception_detail::error_info_injector<class boost::bad_any_cast> >::`vftable'{for `boost::exception_detail::error_info_injector<class boost::bad_any_cast>'}
arg1[3] = &boost::exception_detail::clone_impl<struct boost::exception_detail::error_info_injector<class boost::bad_any_cast> >::`vftable'{for `boost::exception'}
*(*(eax_3 + 4) + arg1 + 0x20) = &boost::exception_detail::clone_impl<struct boost::exception_detail::error_info_injector<class boost::bad_any_cast> >::`vftable'
*(arg1[8]->__offset(0x4).d + arg1 + 0x1c) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1

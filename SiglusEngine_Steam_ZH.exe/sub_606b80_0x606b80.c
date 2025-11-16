// 函数: sub_606b80
// 地址: 0x606b80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b7849
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_44 = __security_cookie ^ &var_4
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0
void* const var_20 = &data_aef7fc
struct boost::exception_detail::clone_base::VTable* const var_18 =
    &boost::exception_detail::clone_base::`vftable'
int32_t var_8_1 = 0
int32_t var_14_1 = 1
struct boost::exception_detail::error_info_injector<class boost::bad_function_call>::boost::exception_detail::clone_impl<struct boost::exception_detail::error_info_injector<class boost::bad_function_call> >::VTable
    * const var_40
sub_606910(&var_40, arg1 - 0x28)
void* const eax_3 = var_20
var_40 = &boost::exception_detail::clone_impl<struct boost::exception_detail::error_info_injector<class boost::bad_function_call> >::`vftable'{for `boost::exception_detail::error_info_injector<class boost::bad_function_call>'}
struct boost::exception::boost::exception_detail::clone_impl<struct boost::exception_detail::error_info_injector<class boost::bad_function_call> >::VTable
    * const var_34 = &boost::exception_detail::clone_impl<struct boost::exception_detail::error_info_injector<class boost::bad_function_call> >::`vftable'{for `boost::exception'}
*(&var_20 + *(eax_3 + 4)) = &boost::exception_detail::clone_impl<struct boost::exception_detail::error_info_injector<class boost::bad_function_call> >::`vftable'
int32_t var_8_2 = 0xffffffff
void var_24
*(&var_24 + *(var_20 + 4)) = 0
sub_748f1b(&var_40, 0xb49608)
noreturn

// 函数: sub_58cb50
// 地址: 0x58cb50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b7894
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct boost::exception_detail::error_info_injector<class boost::bad_any_cast>::boost::exception_detail::clone_impl<struct boost::exception_detail::error_info_injector<class boost::bad_any_cast> >::VTable
    ** result = arg1
struct boost::exception_detail::error_info_injector<class boost::bad_any_cast>::boost::exception_detail::clone_impl<struct boost::exception_detail::error_info_injector<class boost::bad_any_cast> >::VTable
    ** result_1 = result
int32_t var_14 = 0
result[8] = &data_aef7fc
result[0xa] = &boost::exception_detail::clone_base::`vftable'
int32_t var_8_1 = 0
int32_t var_14_1 = 1
sub_58c840(arg1, arg2)
int32_t var_8_2 = 1
void* eax_3 = result[8]
*result = &boost::exception_detail::clone_impl<struct boost::exception_detail::error_info_injector<class boost::bad_any_cast> >::`vftable'{for `boost::exception_detail::error_info_injector<class boost::bad_any_cast>'}
result[3] = &boost::exception_detail::clone_impl<struct boost::exception_detail::error_info_injector<class boost::bad_any_cast> >::`vftable'{for `boost::exception'}
*(*(eax_3 + 4) + result + 0x20) = &boost::exception_detail::clone_impl<struct boost::exception_detail::error_info_injector<class boost::bad_any_cast> >::`vftable'
int32_t ecx = result[8]->__offset(0x4).d
*(ecx + result + 0x1c) = ecx - 8
void* edx

if (arg2 == 0)
    edx = nullptr
else
    edx = arg2 + 0xc

_com_util::ConvertBSTRToString(&result[3], edx)
fsbase->NtTib.ExceptionList = ExceptionList
return result

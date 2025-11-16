// 函数: sub_606910
// 地址: 0x606910
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b77d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct std::exception::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct std::runtime_error::boost::bad_function_call::VTable** result = arg1
struct std::runtime_error::boost::bad_function_call::VTable** result_1 = result
std::exception::exception(arg1, arg2)
*result = &boost::bad_function_call::`vftable'{for `std::runtime_error'}
int32_t var_8_1 = 0
void* edi_1

if (arg2 == 0)
    edi_1 = nullptr
else
    edi_1 = arg2 + 0xc

result[3] = &boost::exception::`vftable'
int32_t* ecx = *(edi_1 + 4)
result[4] = ecx

if (ecx != 0)
    (*(*ecx + 0xc))(eax_2)

result[5] = *(edi_1 + 8)
result[6] = *(edi_1 + 0xc)
result[7] = *(edi_1 + 0x10)
*result = &boost::exception_detail::error_info_injector<class boost::bad_function_call>::`vftable'{for `boost::bad_function_call'}
result[3] = &boost::exception_detail::error_info_injector<class boost::bad_function_call>::`vftable'{for `boost::exception'}
fsbase->NtTib.ExceptionList = ExceptionList
return result

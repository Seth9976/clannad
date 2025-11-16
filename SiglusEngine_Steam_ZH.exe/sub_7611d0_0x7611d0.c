// 函数: sub_7611d0
// 地址: 0x7611d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_9d3266
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_6 = __security_cookie ^ &__saved_ebp
void* const var_28_1 = &data_7611dc
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
void var_14
std::_Lockit::_Lockit(&var_14, 0)
int32_t var_8 = 0
struct std::locale::facet::std::locale::_Locimp::VTable** result = data_b9bf88

if (result == 0)
    result = std::locale::_Locimp::_New_Locimp(result.b)
    std::locale::_Setgloballocale(result)
    result[4] = 0x3f
    std::_Yarn<char>::operator=(&result[6], &data_ab55ec)
    data_b9bf8c = result
    (*result)->vFunc_1(eax_6)
    data_b9bfa8 = data_b9bf8c

if (arg1 != 0)
    (*result)->vFunc_1(eax_6)

std::_Lockit::~_Lockit(&var_14)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_76124b
return result

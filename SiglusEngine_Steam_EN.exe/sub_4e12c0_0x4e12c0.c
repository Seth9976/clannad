// 函数: sub_4e12c0
// 地址: 0x4e12c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_605963
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IRegistrarBase::ATL::CRegObject::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct IRegistrarBase::ATL::CRegObject::VTable** var_14_1 = arg1
*arg1 = &ATL::CRegObject::`vftable'{for `IRegistrarBase'}
int32_t var_8_1 = 0
sub_4e1030(&arg1[1])
void* var_14_2 = &arg1[1]
int32_t var_8_2 = 1
sub_4e1030(&arg1[1])
int32_t eax_3 = arg1[1]

if (eax_3 != 0)
    _free(eax_3)
    arg1[1] = 0

int32_t result = arg1[2]

if (result != 0)
    result = _free(result)
    arg1[2] = 0

arg1[3] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result

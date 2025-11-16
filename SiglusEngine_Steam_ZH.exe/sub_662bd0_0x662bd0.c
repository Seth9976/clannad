// 函数: sub_662bd0
// 地址: 0x662bd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c520b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
OLECHAR** esi = sub_745f3f(0xc)
OLECHAR** var_14_1 = esi
int32_t var_8_1 = 0

if (esi == 0)
    esi = nullptr
else
    esi[1] = 0
    esi[2] = 1
    BSTR eax_4 = SysAllocString(u"\\.\ROOT\CIMV2")
    *esi = eax_4
    
    if (eax_4 == 0)
        _com_issue_error(0x8007000e)
        esi = nullptr

int32_t var_8_2 = 0xffffffff
*arg1 = esi

if (esi == 0)
    _com_issue_error(0x8007000e)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1

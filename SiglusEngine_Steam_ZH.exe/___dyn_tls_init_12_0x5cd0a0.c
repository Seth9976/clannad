// 函数: ___dyn_tls_init@12
// 地址: 0x5cd0a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bbd18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg1

if (edi == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0x80004003

*edi = 0
int32_t var_8_1 = 0
LRESULT eax_4 = SendMessageW(data_4ebe284, data_bac3dc, 0, 0)
int32_t result = 0x80004005
arg1 = eax_4

if (eax_4 != 0)
    result = 0

if (result s>= 0)
    result = (**eax_4)(eax_4, 0xaf2e48, edi)

int32_t var_8_2 = 0xffffffff

if (eax_4 != 0)
    (*(*eax_4 + 8))(eax_4)

fsbase->NtTib.ExceptionList = ExceptionList
return result

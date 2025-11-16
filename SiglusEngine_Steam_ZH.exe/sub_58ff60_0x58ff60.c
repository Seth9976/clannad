// 函数: sub_58ff60
// 地址: 0x58ff60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b7c2e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_14 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = data_bac3a0

if ((eax_3.b & 1) == 0)
    data_bac3a0 = eax_3 | 1
    int32_t var_8_1 = 0
    sub_58fa00()
    _atexit(j_sub_58fec0)

fsbase->NtTib.ExceptionList = ExceptionList
return &data_bac3a4

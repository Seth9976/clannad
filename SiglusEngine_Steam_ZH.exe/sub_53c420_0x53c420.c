// 函数: sub_53c420
// 地址: 0x53c420
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0719
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14_1 = 0
*(arg2 + 0x14) = 7
*(arg2 + 0x10) = 0
*arg2 = 0
int32_t var_8_1 = 0
int32_t eax_3 = *(arg1 + 0xc)
int32_t var_14_2 = 1

if (eax_3 != 0 && eax_3 != 0x65)
    if (eax_3 == 0x64 && arg2 != &data_b6b4d4)
        int32_t var_20_2 = 0xffffffff
        int32_t var_24_2 = 0
        sub_52e3c0(arg2, &data_b6b4d4, 0, 0xffffffff)
else if (arg2 != &data_b6b4bc)
    int32_t var_20_1 = 0xffffffff
    int32_t var_24_1 = 0
    sub_52e3c0(arg2, &data_b6b4bc, 0, 0xffffffff)

fsbase->NtTib.ExceptionList = ExceptionList
return arg2

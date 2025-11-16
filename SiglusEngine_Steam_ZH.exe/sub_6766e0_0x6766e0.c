// 函数: sub_6766e0
// 地址: 0x6766e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6d58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_14 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx
int32_t var_18 = ecx
int32_t var_8_1 = 0
sub_6767a0(data_bac458 + 0x158)
void* arg_4
int32_t ecx_4 = sub_62f9b0(data_bac458, &arg_4)

if (*(arg_4 + 0xad9a68) != 0)
    int32_t var_18_2 = ecx_4
    sub_696dc0()

void arg_90
sub_54ae40(&arg_90)
fsbase->NtTib.ExceptionList = ExceptionList
return 0

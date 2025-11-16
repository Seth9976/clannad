// 函数: ??1_Pop_finalizer@_Micro_queue@details@Concurrency@@QAE@XZ
// 地址: 0x552b50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1fe8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
*arg1 = *arg2
void* eax_4 = arg2[1]
arg1[1] = eax_4

if (eax_4 != 0)
    *(eax_4 + 4)
    *(eax_4 + 4) += 1

int32_t var_8_1 = 0
arg1[2] = arg2[2]
arg1[8] = 7
arg1[7] = 0
arg1[3].w = 0
sub_52e3c0(&arg1[3], &arg2[3], 0, 0xffffffff)
arg1[9] = arg2[9]
arg1[0xa] = arg2[0xa]
arg1[0xb] = arg2[0xb]
arg1[0xc].b = arg2[0xc].b
*(arg1 + 0x31) = *(arg2 + 0x31)
*(arg1 + 0x32) = *(arg2 + 0x32)
*(arg1 + 0x33) = *(arg2 + 0x33)
arg1[0xd].b = arg2[0xd].b
*(arg1 + 0x35) = *(arg2 + 0x35)
*(arg1 + 0x36) = *(arg2 + 0x36)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1

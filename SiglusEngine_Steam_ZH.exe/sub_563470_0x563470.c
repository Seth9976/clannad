// 函数: sub_563470
// 地址: 0x563470
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b2f56
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
*arg1 = *arg2
arg1[1].b = arg2[1].b
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = arg2[4]
arg1[5].b = arg2[5].b
arg1[6] = arg2[6]
arg1[7] = arg2[7]
void* eax_11 = arg2[8]
arg1[8] = eax_11

if (eax_11 != 0)
    *(eax_11 + 4)
    *(eax_11 + 4) += 1

int32_t var_8_1 = 0
arg1[9] = arg2[9]
void* eax_14 = arg2[0xa]
arg1[0xa] = eax_14

if (eax_14 != 0)
    *(eax_14 + 4)
    *(eax_14 + 4) += 1

var_8_1.b = 1
sub_551c30(&arg1[0xb], &arg2[0xb])
*(arg1 + 0x14c) = *(arg2 + 0x14c)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1

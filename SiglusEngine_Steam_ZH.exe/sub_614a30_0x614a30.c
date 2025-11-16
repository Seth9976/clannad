// 函数: sub_614a30
// 地址: 0x614a30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bf161
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = *(arg1 + 0x10)
int32_t* edx = *(ecx + 4)

if (edx u< *(ecx + 8))
    *(ecx + 4) = &edx[4]
    *edx = *arg2
    sub_6143d0(&edx[1], &arg2[1])
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1

int32_t* var_14 = edx
int32_t* var_18 = edx
int32_t var_8_1 = 0

if (edx != 0)
    *edx = *arg2
    sub_5b5160(&edx[1], &arg2[1])

void* ecx_7 = *(arg1 + 0x10)
*(ecx_7 + 4) += 0x10
*(*(arg1 + 0x10) + 8) = *(ecx_7 + 4)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1

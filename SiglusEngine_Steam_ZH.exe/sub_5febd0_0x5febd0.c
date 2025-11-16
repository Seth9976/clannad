// 函数: sub_5febd0
// 地址: 0x5febd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd774
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14_1 = arg1
int32_t var_8_1 = 2
sub_5feab0(arg1 + 0xf4)

if (*(arg1 + 0xcc) u>= 8)
    j__free(*(arg1 + 0xb8))

*(arg1 + 0xcc) = 7
*(arg1 + 0xc8) = 0
*(arg1 + 0xb8) = 0

if (*(arg1 + 0xb4) u>= 8)
    j__free(*(arg1 + 0xa0))

*(arg1 + 0xb4) = 7
*(arg1 + 0xb0) = 0
*(arg1 + 0xa0) = 0

if (*(arg1 + 0x98) u>= 8)
    j__free(*(arg1 + 0x84))

*(arg1 + 0x98) = 7
*(arg1 + 0x94) = 0
*(arg1 + 0x84) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return 0

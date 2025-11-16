// 函数: sub_54af70
// 地址: 0x54af70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b11e9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14_1 = arg1
int32_t var_8_1 = 1
int32_t* ecx = *(arg1 + 0x160)

if (ecx != 0)
    (**ecx)(1)

var_8_1.b = 0
sub_54d390(arg1 + 0x148)
sub_548f60(arg1 + 0xa8)

if (*(arg1 + 0x20) u>= 8)
    j__free(*(arg1 + 0xc))

*(arg1 + 0x20) = 7
*(arg1 + 0x1c) = 0
*(arg1 + 0xc) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return 0

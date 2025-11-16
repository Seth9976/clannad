// 函数: sub_5627c0
// 地址: 0x5627c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b2f17
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 2
sub_6efc80(arg1 + 0x1c4)
var_8_1.b = 1
sub_6efc80(arg1 + 0x94)
var_8_1.b = 0
void* ecx_2 = *(arg1 + 0x88)

if (ecx_2 != 0)
    void* var_20_1 = arg1
    void* var_24_1 = ecx_2
    sub_551590(ecx_2, *(arg1 + 0x8c))
    j__free(*(arg1 + 0x88))
    *(arg1 + 0x88) = 0
    *(arg1 + 0x8c) = 0
    *(arg1 + 0x90) = 0

if (*(arg1 + 0x74) u>= 8)
    j__free(*(arg1 + 0x60))

*(arg1 + 0x74) = 7
*(arg1 + 0x70) = 0
*(arg1 + 0x60) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return 0

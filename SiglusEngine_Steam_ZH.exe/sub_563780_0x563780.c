// 函数: sub_563780
// 地址: 0x563780
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b31cb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void* ecx = *(arg1 + 0x80)

if (ecx != 0)
    void* var_20_1 = arg1
    void* var_24_1 = ecx
    sub_551590(ecx, *(arg1 + 0x84))
    j__free(*(arg1 + 0x80))
    *(arg1 + 0x80) = 0
    *(arg1 + 0x84) = 0
    *(arg1 + 0x88) = 0

sub_67d400(arg1 + 0x3c)

if (*(arg1 + 0x20) u>= 8)
    j__free(*(arg1 + 0xc))

*(arg1 + 0x20) = 7
*(arg1 + 0x1c) = 0
*(arg1 + 0xc) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return 0

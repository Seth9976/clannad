// 函数: sub_6e2460
// 地址: 0x6e2460
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cce80
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
int32_t var_8_1 = 4
sub_6e2680(arg1)
int32_t eax_3 = arg1[0x50]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[0x50] = 0
    arg1[0x51] = 0
    arg1[0x52] = 0

int32_t eax_4 = arg1[0x4d]

if (eax_4 != 0)
    j__free(eax_4)
    arg1[0x4d] = 0
    arg1[0x4e] = 0
    arg1[0x4f] = 0

int32_t eax_5 = arg1[0x4a]

if (eax_5 != 0)
    j__free(eax_5)
    arg1[0x4a] = 0
    arg1[0x4b] = 0
    arg1[0x4c] = 0

var_8_1.b = 0

if (sub_6b73d0(arg1[0x40]) != 0)
    arg1[0x40] = 0
    arg1[0x42] = 0
    arg1[0x43] = 0

if (arg1[5] u>= 8)
    j__free(*arg1)

arg1[5] = 7
arg1[4] = 0
*arg1 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return 0

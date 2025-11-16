// 函数: sub_562d00
// 地址: 0x562d00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b2dd0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14_1 = arg1
int32_t var_8_1 = 4
sub_562a70(arg1 + 0x19a4)

if (*(arg1 + 0x1990) u>= 8)
    j__free(*(arg1 + 0x197c))

*(arg1 + 0x1990) = 7
*(arg1 + 0x198c) = 0
*(arg1 + 0x197c) = 0
sub_562510(arg1 + 0xf28)
var_8_1.b = 3
sub_5627c0(arg1 + 0xc34)
var_8_1.b = 2
sub_562510(arg1 + 0x234)
sub_562ac0(arg1 + 0x228)
int32_t eax_3 = *(arg1 + 0x1ec)

if (eax_3 != 0)
    j__free(eax_3)
    *(arg1 + 0x1ec) = 0
    *(arg1 + 0x1f0) = 0
    *(arg1 + 0x1f4) = 0

if (*(arg1 + 0x98) u>= 8)
    j__free(*(arg1 + 0x84))

*(arg1 + 0x98) = 7
*(arg1 + 0x94) = 0
*(arg1 + 0x84) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return 0

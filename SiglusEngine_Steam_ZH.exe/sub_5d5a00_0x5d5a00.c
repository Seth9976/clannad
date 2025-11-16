// 函数: sub_5d5a00
// 地址: 0x5d5a00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bc14a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14_1 = arg1
int32_t var_8_1 = 4

if (*(arg1 + 0x2e44) u>= 8)
    j__free(*(arg1 + 0x2e30))

*(arg1 + 0x2e44) = 7
*(arg1 + 0x2e40) = 0
*(arg1 + 0x2e30) = 0
int32_t eax_3 = *(arg1 + 0x2e20)

if (eax_3 != 0)
    j__free(eax_3)
    *(arg1 + 0x2e20) = 0
    *(arg1 + 0x2e24) = 0
    *(arg1 + 0x2e28) = 0

int32_t eax_4 = *(arg1 + 0x2e14)

if (eax_4 != 0)
    j__free(eax_4)
    *(arg1 + 0x2e14) = 0
    *(arg1 + 0x2e18) = 0
    *(arg1 + 0x2e1c) = 0

sub_551320(arg1 + 0x1818)
var_8_1.b = 3
sub_551320(arg1 + 0x21c)
sub_563840(arg1 + 0x4c)

if (*(arg1 + 0x48) u>= 8)
    j__free(*(arg1 + 0x34))

*(arg1 + 0x48) = 7
*(arg1 + 0x44) = 0
*(arg1 + 0x34) = 0

if (*(arg1 + 0x30) u>= 8)
    j__free(*(arg1 + 0x1c))

*(arg1 + 0x30) = 7
*(arg1 + 0x2c) = 0
*(arg1 + 0x1c) = 0

if (*(arg1 + 0x18) u>= 8)
    j__free(*(arg1 + 4))

*(arg1 + 0x18) = 7
*(arg1 + 0x14) = 0
*(arg1 + 4) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return 0

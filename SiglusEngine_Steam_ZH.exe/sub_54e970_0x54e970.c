// 函数: sub_54e970
// 地址: 0x54e970
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b16d2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14_1 = arg1
int32_t var_8_1 = 0xb
sub_552c20(arg1 + 0x10ec)
sub_550550(arg1 + 0x1058)

if (*(arg1 + 0x1050) u>= 8)
    j__free(*(arg1 + 0x103c))

*(arg1 + 0x1050) = 7
*(arg1 + 0x104c) = 0
*(arg1 + 0x103c) = 0
sub_54ec30(arg1 + 0xce8)

if (*(arg1 + 0xce4) u>= 8)
    j__free(*(arg1 + 0xcd0))

*(arg1 + 0xce4) = 7
*(arg1 + 0xce0) = 0
*(arg1 + 0xcd0) = 0

if (*(arg1 + 0xccc) u>= 8)
    j__free(*(arg1 + 0xcb8))

*(arg1 + 0xccc) = 7
*(arg1 + 0xcc8) = 0
*(arg1 + 0xcb8) = 0
var_8_1.b = 6
`eh vector vbase constructor iterator'(arg1 + 0xbf8, 0x18, 8, sub_52e8a0)

if (*(arg1 + 0xbf4) u>= 8)
    j__free(*(arg1 + 0xbe0))

*(arg1 + 0xbf4) = 7
*(arg1 + 0xbf0) = 0
*(arg1 + 0xbe0) = 0

if (*(arg1 + 0xbdc) u>= 8)
    j__free(*(arg1 + 0xbc8))

*(arg1 + 0xbdc) = 7
*(arg1 + 0xbd8) = 0
*(arg1 + 0xbc8) = 0
sub_54ed60(arg1 + 0xb14)
sub_54ed60(arg1 + 0xa58)
sub_54ed60(arg1 + 0x99c)
sub_54ed60(arg1 + 0x8e0)
sub_54ed60(arg1 + 0x824)
fsbase->NtTib.ExceptionList = ExceptionList
return 0

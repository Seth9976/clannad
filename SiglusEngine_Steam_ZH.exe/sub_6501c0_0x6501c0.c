// 函数: sub_6501c0
// 地址: 0x6501c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3de2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_604 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3
eax_3.b = *(arg1 + 0x130) == 1
*(arg1 + 0x33c) = eax_3
int32_t var_49c
sub_54aed0(&var_49c)
int32_t var_8_1 = 0
int32_t var_18 = 1
var_49c = 0x12
void var_94
__builtin_memcpy(&var_94, arg1, 0x80)
*(&var_94 + (var_18 << 2)) = 3
int32_t var_18_1 = var_18 + 1
void var_498
__builtin_memcpy(&var_498, &var_94, 0x80)
void* const var_1ec
int32_t var_608_1 = sub_54cf80(&var_1ec, &var_49c)
var_8_1.b = 1
sub_6767a0(data_bac458 + 0x158)
int32_t ecx_6 = sub_62f9b0(data_bac458, &var_1ec)

if (*(var_1ec + 0xad9a68) != 0)
    int32_t var_608_3 = ecx_6
    sub_696dc0()

void var_160
sub_54ae40(&var_160)
sub_54aed0(&var_1ec)
var_8_1.b = 2
var_1ec = 0x1a
void var_1e8
__builtin_memcpy(&var_1e8, arg1, 0x80)
void* const var_344
int32_t var_608_5 = sub_54cf80(&var_344, &var_1ec)
var_8_1.b = 3
sub_6767a0(data_bac458 + 0x158)
int32_t ecx_14 = sub_62f9b0(data_bac458, &var_344)

if (*(var_344 + 0xad9a68) != 0)
    int32_t var_608_7 = ecx_14
    sub_696dc0()

void var_2b8
sub_54ae40(&var_2b8)
sub_54aed0(&var_344)
var_8_1.b = 4
var_344 = 0x19
void var_340
__builtin_memcpy(&var_340, arg1, 0x80)
void* var_5f4
int32_t var_608_9 = sub_54cf80(&var_5f4, &var_344)
var_8_1.b = 5
sub_6767a0(data_bac458 + 0x158)
int32_t ecx_22 = sub_62f9b0(data_bac458, &var_5f4)

if (*(var_5f4 + 0xad9a68) != 0)
    int32_t var_608_11 = ecx_22
    sub_696dc0()

void var_568
sub_54ae40(&var_568)
sub_54ae40(&var_2b8)
sub_54ae40(&var_160)
void var_410
sub_54ae40(&var_410)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return 0

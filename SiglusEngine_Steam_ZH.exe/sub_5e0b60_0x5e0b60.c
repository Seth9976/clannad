// 函数: sub_5e0b60
// 地址: 0x5e0b60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MBE?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AAVios_base@2@G_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_b8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = arg4

if (esi s< 0)
    esi = *(arg1 + 0x20)

int32_t var_a4
sub_5e0c60(&var_a4)
int32_t var_8_1 = 0
int32_t* var_98
int32_t* eax_3 = &var_98
int32_t var_a8
int32_t var_bc = var_a8
int32_t var_84

if (var_84 u>= 8)
    eax_3 = var_98

int32_t var_88 = 0
int32_t var_c0 = 0
*eax_3 = 0
void* var_24
int32_t var_20
sub_551590(var_24, var_20)
void* var_20_1 = var_24
void var_68
sub_67d4b0(&var_68)
int32_t var_bc_1 = *(arg1 + 0x44)
var_a4 = 1
sub_5e1c50(&var_a4, arg2, arg3, *(arg1 + 0x3c), esi, *(arg1 + 0x4c), *(arg1 + 0x50), *(arg1 + 0x40))
sub_5e1180(arg1 + 0x7c, &var_a4)
int32_t var_8_2 = 0xffffffff
sub_563780(&var_a4)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return 0

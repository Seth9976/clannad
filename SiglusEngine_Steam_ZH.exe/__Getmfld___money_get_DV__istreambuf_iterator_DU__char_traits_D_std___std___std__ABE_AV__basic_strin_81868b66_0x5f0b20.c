// 函数: ?_Getmfld@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0_NAAVios_base@2@PAD@Z
// 地址: 0x5f0b20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Getmfld@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0_NAAVios_base@2@AAY0M@D@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_2d4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_16c
sub_54aed0(&var_16c)
int32_t var_8_1 = 0
var_16c = 0x33
void var_168
__builtin_memcpy(&var_168, arg1, 0x80)
char var_2c = arg2
char var_2a = arg3
void* var_2c4
int32_t var_2d8_1 = sub_54cf80(&var_2c4, &var_16c)
var_8_1.b = 1
sub_6767a0(data_bac458 + 0x158)
int32_t ecx_6 = sub_62f9b0(data_bac458, &var_2c4)

if (*(var_2c4 + 0xad9a68) != 0)
    int32_t var_2d8_3 = ecx_6
    sub_696dc0()

void var_238
sub_54ae40(&var_238)
void var_e0
sub_54ae40(&var_e0)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return 0

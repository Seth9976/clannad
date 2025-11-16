// 函数: sub_64f820
// 地址: 0x64f820
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Getmfld@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0_NAAVios_base@2@AAY0M@D@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_2d4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = data_bac458
*(eax_3 + 0x340) = arg2
*(eax_3 + 0x344) = arg4
*(arg3 + 0x1ec) = arg2
*(arg3 + 0x1f0) = arg4
sub_620fd0()
sub_621090()
sub_5afcc0(arg3, arg5)
int32_t var_16c
sub_54aed0(&var_16c)
int32_t var_8_1 = 0
var_16c = 0xf
void* var_2c4
int32_t var_2d8_2 = sub_54cf80(&var_2c4, &var_16c)
var_8_1.b = 1
sub_6767a0(data_bac458 + 0x158)
int32_t ecx_7 = sub_62f9b0(data_bac458, &var_2c4)

if (*(var_2c4 + 0xad9a68) != 0)
    int32_t var_2d8_4 = ecx_7
    sub_696dc0()

void var_238
sub_54ae40(&var_238)
void var_e0
sub_54ae40(&var_e0)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return 0

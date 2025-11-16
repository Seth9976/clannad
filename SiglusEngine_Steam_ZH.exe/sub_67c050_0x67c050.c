// 函数: sub_67c050
// 地址: 0x67c050
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b0468
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_20 = 7
int32_t var_24 = 0
int16_t var_34 = 0
sub_52e720(&var_34, u"sys_wnd_modal_load", 0x12)
int32_t var_c_1 = 0

if (*(arg1 + 4) == 0)
    if (arg1 + 8 != &var_34)
        sub_52e3c0(arg1 + 8, &var_34, 0, 0xffffffff)
    
    *(arg1 + 0x58) = 1
    DialogBoxParamW(data_4ebe3a8, 0x92, arg2, sub_6bfec0, arg1)

if (var_20 u>= 8)
    j__free(var_34.d)

int32_t result = *(arg1 + 0xb4)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_38)
return result

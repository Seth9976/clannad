// 函数: sub_52ea00
// 地址: 0x52ea00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$___std_fs_get_file_id@8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_28
sub_52e820(&var_28, u"cfg_wnd_base_else")
int32_t var_8_1 = 0
int32_t* result = &var_28

if (arg1 + 0x98 != &var_28)
    result = sub_52e3c0(arg1 + 0x98, &var_28, 0, 0xffffffff)

*(arg1 + 0xb0) = 1
*(arg1 + 0xb4) = 0xcd
int32_t var_14

if (var_14 u>= 8)
    result = j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
return result

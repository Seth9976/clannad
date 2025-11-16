// 函数: ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z
// 地址: 0x699da0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c9308
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_14 = arg1
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14_1 = 0
int32_t var_8_1 = 0

if (arg3 == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0x80070057

enum WIN32_ERROR result = sub_699b50(arg2, arg3, u"REGISTRY", 0)
fsbase->NtTib.ExceptionList = ExceptionList
return result

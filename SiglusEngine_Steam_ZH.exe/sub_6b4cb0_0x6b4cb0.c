// 函数: sub_6b4cb0
// 地址: 0x6b4cb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b14a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_34 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[5] u>= 8)
    arg1 = *arg1

BOOL result = DeleteFileW(arg1)

if (result != 0)
    result.b = 1
else
    int32_t var_18_1 = 7
    BOOL result_1 = result
    int16_t var_2c = result.w
    sub_52e720(&var_2c, u"DeleteFile", 0xa)
    int32_t var_8_1 = 0
    enum WIN32_ERROR eax_3 = GetLastError()
    sub_6b9c90(eax_3, eax_3, 2, &var_2c)
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

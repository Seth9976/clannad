// 函数: sub_6b52f0
// 地址: 0x6b52f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ba258
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1
int32_t execInfo
_memset(&execInfo, 0, 0x3c)
int32_t eax_3 = data_4ebe3ac
bool cond:0 = esi[5] u< 8
execInfo = 0x3c
int32_t var_60 = eax_3
wchar16 const* const var_5c = u"open"
int32_t var_64 = 0x40
int32_t var_50 = 0

if (not(cond:0))
    esi = *esi

int32_t* var_58 = esi
int32_t var_54 = 0
int32_t var_4c = 1
BOOL result = ShellExecuteExW(&execInfo)

if (result != 0)
    result.b = 1
else
    int32_t var_18_1 = 7
    BOOL result_1 = result
    int16_t var_2c = result.w
    sub_52e720(&var_2c, u"ShellExecuteEx", 0xe)
    int32_t var_8_1 = 0
    enum WIN32_ERROR eax_4 = GetLastError()
    sub_6b9c90(eax_4, eax_4, 2, &var_2c)
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

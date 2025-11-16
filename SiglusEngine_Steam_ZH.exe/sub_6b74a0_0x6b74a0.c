// 函数: sub_6b74a0
// 地址: 0x6b74a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cb338
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_70 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_6b95c0()
int16_t var_30
int32_t var_1c_1

if (arg4 == 0)
    var_1c_1 = 7
    int32_t* var_20_1 = arg4
    var_30 = 0
    sub_52e720(&var_30, u"file_read", 9)
    int32_t* var_8_1 = arg4
    int32_t var_34_1 = 7
    int32_t* var_38_1 = arg4
    int16_t var_48 = 0
    sub_52e720(&var_48, 0xb006d8, 0xe)
    var_8_1.b = 1
    sub_6b9da0(&var_48, &var_30)
    
    if (var_34_1 u>= 8)
        j__free(var_48.d)
    
    int32_t var_34_2 = 7
    int32_t var_38_2 = 0
    var_48 = 0
    goto label_6b7558

uint32_t result

if (arg3 != 0)
    if (arg2 s< 0)
        var_1c_1 = 7
        int32_t var_20_3 = 0
        var_30 = 0
        sub_52e720(&var_30, u"file_read", 9)
        int32_t var_8_3 = 3
        goto label_6b75a2
    
    uint32_t result_1 = _fread(arg3, 1, arg2, arg4)
    
    if (result_1 s< arg2 && _ferror(arg4) != 0)
        int32_t var_4c_1 = 7
        int32_t var_50_1 = 0
        int16_t var_60 = 0
        sub_52e720(&var_60, u"fread", 5)
        int32_t var_8_4 = 4
        sub_6b9e80(&var_60)
        sub_52e8a0(&var_60)
    
    result = result_1
else
    var_1c_1 = 7
    char* var_20_2 = arg3
    var_30 = 0
    sub_52e720(&var_30, u"file_read", 9)
    int32_t var_8_2 = 2
label_6b75a2:
    sub_6b9c90(&var_30, 0x16, 1, &var_30)
label_6b7558:
    
    if (var_1c_1 u>= 8)
        j__free(var_30.d)
    
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

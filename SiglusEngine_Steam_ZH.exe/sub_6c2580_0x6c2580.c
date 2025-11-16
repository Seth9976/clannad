// 函数: sub_6c2580
// 地址: 0x6c2580
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cbfbe
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x18) == 0)
    *arg2 = arg5
else
    int32_t var_1c_1 = 7
    int32_t var_64_1 = 0
    void* const var_68_1 = &data_ad7c90
    int32_t var_20_1 = 0
    struct _EXCEPTION_REGISTRATION_RECORD* var_30
    var_30.w = 0
    sub_52e720(&var_30)
    int32_t var_8_1 = 0
    int16_t var_48
    int16_t* eax_4 = sub_6c10c0(arg1, &var_48)
    var_8_1.b = 1
    int32_t eax_5 = data_bac3a0
    
    if ((eax_5.b & 1) == 0)
        data_bac3a0 = eax_5 | 1
        var_8_1.b = 2
        sub_58fa00()
        int32_t (__fastcall* var_64_3)(int32_t arg1) = j_sub_58fec0
        _atexit(j_sub_58fec0)
        var_8_1.b = 1
    
    sub_6bb8e0(&data_bac3a4, arg2, arg3, arg4, eax_4, arg1 + 8, &var_30, arg5)
    int32_t var_34
    
    if (var_34 u>= 8)
        j__free(var_48.d)
    
    int32_t var_34_1 = 7
    int32_t var_38_1 = 0
    var_48 = 0
    
    if (var_1c_1 u>= 8)
        j__free(var_30)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg2

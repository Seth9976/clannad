// 函数: sub_6c20c0
// 地址: 0x6c20c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cc05e
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
int32_t var_5c = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x18) != 0)
    int32_t var_18_1 = 7
    int32_t var_60_1 = 0
    void* const var_64_1 = &data_ad7c90
    int32_t var_1c_1 = 0
    struct _EXCEPTION_REGISTRATION_RECORD* var_2c
    var_2c.w = 0
    sub_52e720(&var_2c)
    int32_t var_8_1 = 0
    int16_t var_44
    int16_t* eax_3 = sub_6c10c0(arg1, &var_44)
    var_8_1.b = 1
    int32_t ecx_2 = data_bac3a0
    
    if ((ecx_2.b & 1) == 0)
        data_bac3a0 = ecx_2 | 1
        var_8_1.b = 2
        sub_58fa00()
        int32_t (__fastcall* var_60_3)(int32_t arg1) = j_sub_58fec0
        _atexit(j_sub_58fec0)
        var_8_1.b = 1
    
    sub_6bb3b0(&data_bac3a4, arg2, arg3, eax_3, arg1 + 8, &var_2c, arg4)
    int32_t var_30
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    result = nullptr
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    var_44 = 0
    
    if (var_18_1 u>= 8)
        result = j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

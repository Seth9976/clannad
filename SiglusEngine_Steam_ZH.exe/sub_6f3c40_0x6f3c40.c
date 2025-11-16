// 函数: sub_6f3c40
// 地址: 0x6f3c40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1130
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *arg1
int32_t result

if (ecx != 0)
    result = (*(*ecx + 0x50))(ecx, 0)
    
    if (result s>= 0)
        result.b = 1
    else
        void var_70
        int16_t* eax_4
        int32_t edx_2
        eax_4, edx_2 = sub_52e820(&var_70, u"UnlockRect")
        sub_6f1a40(eax_4, edx_2, result, var_70)
        result.b = 0
else
    void* var_5c = 0xa
    int32_t* var_38_1 = ecx
    wchar16 const* const var_60 = u"UnlockRect"
    int32_t var_34_1 = 7
    int16_t var_48 = 0
    sub_52e720(&var_48, var_60, var_5c)
    int32_t var_8_1 = 0
    void* const var_5c_1 = 0x10
    int32_t var_1c_1 = 7
    int32_t* var_60_1 = &data_b06e04
    int32_t var_20_1 = 0
    int16_t var_30 = 0
    sub_52e720(&var_30, var_60_1, var_5c_1)
    var_8_1.b = 1
    sub_6b9da0(&var_30, &var_48)
    
    if (var_1c_1 u>= 8)
        j__free(var_30.d)
    
    int32_t var_1c_2 = 7
    int32_t var_20_2 = 0
    var_30 = 0
    
    if (var_34_1 u>= 8)
        j__free(var_48.d)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

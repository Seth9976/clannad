// 函数: sub_6fe040
// 地址: 0x6fe040
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Init@?$numpunct@D@std@@IAEXABV_Locinfo@2@_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *arg1
int32_t result

if (ecx != 0)
    result = (*(*ecx + 0x30))(ecx)
    
    if (result s>= 0)
        result.b = 1
    else
        void var_6c
        int16_t* eax_4
        int32_t edx_2
        eax_4, edx_2 = sub_52e820(&var_6c, u"Unlock")
        sub_6f1a40(eax_4, edx_2, result, var_6c)
        result.b = 0
else
    void* var_58 = 0x1a
    int32_t* var_34_1 = ecx
    wchar16 const* const var_5c_1 = u"C_d3d_index_buffer::unlock"
    int32_t var_30_1 = 7
    int16_t var_44 = 0
    sub_52e720(&var_44, var_5c_1, var_58)
    int32_t var_8_1 = 0
    void* const var_58_1 = 0x15
    int32_t var_18_1 = 7
    int32_t* var_5c_2 = &data_b08510
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, var_5c_2, var_58_1)
    var_8_1.b = 1
    sub_6b9da0(&var_2c, &var_44)
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_2 = 7
    int32_t var_1c_2 = 0
    var_2c = 0
    
    if (var_30_1 u>= 8)
        j__free(var_44.d)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

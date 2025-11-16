// 函数: sub_6a4f50
// 地址: 0x6a4f50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ca198
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg3 != 0 && arg2 s>= 0)
    result = data_bac510

if (arg3 == 0 || arg2 s< 0 || result[0x42e4] + result[0x42e3] + result[0x42e2] s<= arg2)
    result.b = 0
else
    sub_6a4eb0(arg1, arg2)
    int32_t var_44
    sub_651e40(&var_44, arg2)
    int32_t var_8_1 = 0
    int32_t* var_5c = nullptr
    int64_t var_54_1 = 0
    var_8_1.b = 1
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, 
        &boost::detail::sp_counted_impl_p<class NT3::C_d3d_surface>::`vftable'{for `boost::detail::sp_counted_base'}
            .vFunc_5, 
        3)
    var_8_1.b = 2
    var_8_1.b = 1
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = sub_6b7a80(&var_5c, &var_44, &var_2c).b == 0
    char var_45_1 = eax_3.b
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
        eax_3.b = var_45_1
    
    int32_t* ebx
    
    if (eax_3.b == 0)
        sub_6b7660(eax_3, 0x122c, arg3, var_5c)
        sub_6b7b20(&var_5c)
        ebx.b = 1
    else
        ebx.b = 0
        *(*arg1 + arg2 * 0xc + 8) = 1
    
    var_8_1.b = 0
    
    if (sub_6b73d0(var_5c).b != 0)
        var_5c = nullptr
        int64_t var_54_2 = 0
    
    int32_t var_30
    
    if (var_30 u>= 8)
        j__free(var_44)
    
    result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

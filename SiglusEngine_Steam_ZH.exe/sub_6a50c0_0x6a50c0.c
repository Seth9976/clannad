// 函数: sub_6a50c0
// 地址: 0x6a50c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ca198
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg3 == 0 || arg2 s< 0)
    result.b = 0
else
    result = data_bac510
    
    if (result[0x42e4] + result[0x42e3] + result[0x42e2] s<= arg2)
        result.b = 0
    else
        int32_t ecx_4 = arg2 * 0xc
        struct _EXCEPTION_REGISTRATION_RECORD*** ecx_5 = ecx_4 + *arg1
        result = *ecx_5
        
        if (result != 0)
            sub_748840(arg3, result, 0x122c, eax_2)
            result.b = 1
        else if (ecx_5[2].b != 0)
            result.b = 0
        else
            void var_44
            sub_651e40(&var_44, arg2)
            int32_t var_8_1 = 0
            int32_t* var_5c = nullptr
            int64_t var_54_1 = 0
            var_8_1.b = 1
            int32_t var_18_1 = 7
            int32_t var_1c_1 = 0
            int16_t var_2c = 0
            sub_52e720(&var_2c, &data_af335c, 2)
            var_8_1.b = 2
            var_8_1.b = 1
            int32_t ebx
            ebx.b = sub_6b7a80(&var_5c, &var_44, &var_2c) == 0
            sub_52e8a0(&var_2c)
            
            if (ebx.b == 0)
                sub_6b74a0(0, 0x122c, arg3, var_5c)
                sub_6b7b20(&var_5c)
                sub_6a4d10(arg1, arg2, arg3)
                ebx.b = 1
            else
                ebx.b = 0
                *(*arg1 + ecx_4 + 8) = 1
            
            var_8_1.b = 0
            sub_6b7a50(&var_5c)
            sub_52e8a0(&var_44)
            result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

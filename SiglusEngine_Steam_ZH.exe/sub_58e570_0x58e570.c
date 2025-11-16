// 函数: sub_58e570
// 地址: 0x58e570
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b0438
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
LRESULT result

if (arg2 u> 0x110)
    if (arg2 == 0x111)
        if (arg3.w == 0x500)
            *(arg1 + 0x5a4)
            void* var_48_2 = arg1
            int32_t var_c_1 = 0
            sub_6b5950(sub_6ad9b0(&var_34))
            int32_t var_20
            
            if (var_20 u>= 8)
                j__free(var_34)
        
        result = sub_6c4530(arg1, arg2, arg3, arg4)
    else if (arg2 == 0x201)
        LPARAM var_48_1 = arg4
        
        if (sub_58ed80(arg1, arg1.w) != 0)
            result = sub_6c4530(arg1, arg2, arg3, arg4)
        else
            result = 0
    else if (arg2 != 6)
        result = sub_6c4530(arg1, arg2, arg3, arg4)
    else
    label_58e5d8:
        
        if (arg3.w == 0)
            sub_681b70(arg1)
        
        result = sub_6c4530(arg1, arg2, arg3, arg4)
else if (arg2 == 0x110)
    if (sub_58e690(arg1) != 0)
        result = sub_6c4530(arg1, arg2, arg3, arg4)
    else
        result = 0
else if (arg2 == 5)
    sub_58f780(arg1)
    result = sub_6c4530(arg1, arg2, arg3, arg4)
else if (arg2 == 0x10)
    if (sub_58ecc0(arg1) != 0)
        result = sub_6c4530(arg1, arg2, arg3, arg4)
    else
        result = 0
else
    if (arg2 != 0x4e && arg2 == 6)
        goto label_58e5d8
    
    result = sub_6c4530(arg1, arg2, arg3, arg4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_34)
return result

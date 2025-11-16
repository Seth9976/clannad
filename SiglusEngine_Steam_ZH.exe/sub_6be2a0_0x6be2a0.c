// 函数: sub_6be2a0
// 地址: 0x6be2a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0f88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 7
int32_t var_20 = 0
int16_t* result = *arg1
int16_t var_30 = 0
int32_t var_8_1 = 0
int32_t* ebx

if (result == arg2 || *result != 0x3c || &result[1] == arg2 || result[1] != 0x2f)
    ebx.b = 0
else
    void* eax_3 = &result[2]
    void* var_34 = eax_3
    
    if (sub_6af510(eax_3, &var_30, &var_34, arg2).b == 0)
        ebx.b = 0
    else
        void* esi_1 = var_34
        
        if (esi_1 == arg2 || *esi_1 != 0x3e)
            ebx.b = 0
        else
            if (arg3 != &var_30)
                sub_52e3c0(arg3, &var_30, 0, 0xffffffff)
            
            *arg1 = esi_1 + 2
            ebx.b = 1

if (var_1c u>= 8)
    j__free(var_30.d)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

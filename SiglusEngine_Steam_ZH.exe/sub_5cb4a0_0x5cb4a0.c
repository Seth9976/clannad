// 函数: sub_5cb4a0
// 地址: 0x5cb4a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b9a90
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 1
int32_t result

if (*(arg1 + 0xa0) != 0)
    result = result_1
else
    int32_t var_8_1 = 0
    int32_t var_8_2 = 0xffffffff
    int32_t var_30
    int32_t ebx
    ebx.b = sub_5ccf10(sub_53d730(arg2, &var_30, 0, 9), u"not ready")
    int32_t var_1c
    
    if (var_1c u>= 8)
        j__free(var_30)
    
    if (ebx.b != 0)
        result = 1
    else
        int32_t var_8_3 = 1
        int32_t var_8_4 = 0xffffffff
        ebx.b = sub_5ccf10(sub_53d730(arg2, &var_30, 0, 7), u"stopped")
        sub_52e8a0(&var_30)
        
        if (ebx.b == 0)
            int32_t var_8_5 = 2
            int32_t var_8_6 = 0xffffffff
            ebx.b = sub_5ccf10(sub_53d730(arg2, &var_30, 0, 7), u"playing")
            sub_52e8a0(&var_30)
            
            if (ebx.b == 0)
                int32_t var_8_7 = 3
                void var_48
                ebx.b = sub_5ccf10(sub_53d730(arg2, &var_48, 0, 6), u"paused")
                sub_52e8a0(&var_48)
                
                if (ebx.b != 0)
                    result_1 = 3
                
                result = result_1
            else
                result = 2
        else
            result = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

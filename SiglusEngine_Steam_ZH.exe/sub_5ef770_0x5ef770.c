// 函数: sub_5ef770
// 地址: 0x5ef770
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1130
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x1ac) == 2 && arg2 s> 0)
    int32_t* ecx = *(arg1 + 0x1568)
    
    if (ecx != 0)
        result = (ecx[1] - *ecx) s>> 3
        
        if (arg2 s>= result)
            int32_t var_5c_1 = (ecx[1] - *ecx) s>> 3
            int32_t var_60_1 = arg2
            void var_48
            int16_t* eax_8 = sub_5483b0(arg1, &var_48)
            int32_t var_8_1 = 0
            
            if (*(eax_8 + 0x14) u>= 8)
                eax_8 = *eax_8
            
            int16_t* var_64_2 = eax_8
            void var_7c
            sub_52e820(&var_7c, 0xaf3148)
            void var_30
            int16_t* eax_9 = sub_6ae4c0(&var_30, var_7c)
            var_8_1.b = 1
            sub_684160(data_bac424, 0xd, eax_9)
            sub_52e8a0(&var_30)
            result = sub_52e8a0(&var_48)

*(arg1 + 0x364) = arg2
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

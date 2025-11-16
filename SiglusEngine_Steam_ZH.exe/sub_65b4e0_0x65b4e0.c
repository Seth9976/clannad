// 函数: sub_65b4e0
// 地址: 0x65b4e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ba430
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[3] += 4
int32_t eax_4 = *arg1
int32_t* ebx = arg3

if (eax_4 == arg1[1])
    eax_4 = 0

*arg4 = *(arg1[3] + eax_4 - 4)
arg1[3] += 4
int32_t eax_6 = *arg1

if (eax_6 == arg1[1])
    eax_6 = 0

int32_t result_1 = *(arg1[3] + eax_6 - 4)
int32_t eax_10 = (arg2[1] - *arg2) s/ 0xb4
int32_t result

if (result_1 == eax_10)
    result = result_1
else
    void var_80
    
    if (result_1 s<= eax_10)
        if (result_1 s< eax_10)
            int32_t var_64_4 = eax_10 - result_1
            
            if (ebx[5] u>= 8)
                ebx = *ebx
            
            int32_t* var_68_3 = ebx
            sub_52e820(&var_80, 0xaf1a10)
            int32_t var_48
            int16_t* eax_16 = sub_6ae4c0(&var_48, var_80)
            int32_t var_8_2 = 1
            sub_684160(data_bac424, 3, eax_16)
            int32_t var_34
            
            if (var_34 u>= 8)
                j__free(var_48)
        
        result = result_1
    else
        int32_t var_64_1 = result_1 - eax_10
        
        if (ebx[5] u>= 8)
            ebx = *ebx
        
        int32_t* var_68_1 = ebx
        sub_52e820(&var_80, 0xaf1988)
        int32_t var_30
        int16_t* eax_11 = sub_6ae4c0(&var_30, var_80)
        int32_t var_8_1 = 0
        sub_684160(data_bac424, 3, eax_11)
        int32_t var_1c
        
        if (var_1c u>= 8)
            j__free(var_30)
        
        result = (arg2[1] - *arg2) s/ 0xb4

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

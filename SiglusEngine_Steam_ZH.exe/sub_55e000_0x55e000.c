// 函数: sub_55e000
// 地址: 0x55e000
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b14a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_34 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = *arg2 - 0x57

if (result u> 8)
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, 0xad8dec, 0x18)
    int32_t var_8_1 = 0
    sub_684160(data_bac424, 2, &var_2c)
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
else
    switch (result)
        case nullptr
            void** edx_1 = *(arg3 + 4) + 0xc
            int32_t* ecx_2 = data_bac41c + 0x6e8
            
            if (ecx_2 != edx_1)
                sub_52e3c0(ecx_2, edx_1, 0, 0xffffffff)
        case 1
            sub_60c680(data_bac49c + 0xc, data_bac41c + 0x6e8)
        case 2
            sub_53a350(data_bac41c + 0x6e8)
        case 3
            data_bac41c[0x1d3] = *(*(arg3 + 4) + 8)
        case 4
            data_bac41c[0x1d3] = 0xffffffff
        case 5
            sub_677bb0(*(data_bac41c + 0x74c))
        case 6
            data_bac41c[0x1d4] = *(*(arg3 + 4) + 8)
        case 7
            data_bac41c[0x1d4] = 0xffffffff
        case 8
            sub_677bb0(*(data_bac41c + 0x750))

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

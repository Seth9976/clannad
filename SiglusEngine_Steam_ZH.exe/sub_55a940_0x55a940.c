// 函数: sub_55a940
// 地址: 0x55a940
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b2928
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = data_bac4b8
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2 != arg3)
    int32_t eax_3 = *arg2
    
    if (eax_3 == 0xffffffff)
        void* eax_5 = sub_55c1c0(ecx + 4, arg2[1], *(arg4 + 0x18))
        
        if (eax_5 == 0)
            result = *(arg4 + 0x10)
            
            if (result == 0xa)
                sub_677bb0(0)
            else if (result == 0x14)
                int32_t var_18_1 = 7
                int32_t var_1c_1 = 0
                int16_t var_2c = 0
                sub_52e720(&var_2c, &data_ad7c90, nullptr)
                int32_t var_8_1 = 0
                sub_60c680(data_bac49c + 0xc, &var_2c)
                sub_52e8a0(&var_2c)
        else
            Concurrency::details::UMSFreeVirtualProcessorRoot::CreatePrimary(eax_5, &arg2[2], 
                eax_5, arg3, arg4)
    else if (eax_3 == 2)
        sub_677bb0(*(data_bac510 + 0x1274c))
    else if (eax_3 != 0)
        void var_5c
        int16_t* eax_6 = sub_5483b0(ecx + 4, &var_5c)
        int32_t var_8_2 = 1
        void var_44
        int16_t* eax_7 = sub_548cb0(eax_6, 0xad88a4, &var_44, eax_6)
        var_8_2.b = 2
        sub_684160(data_bac424, 2, eax_7)
        sub_52e8a0(&var_44)
        sub_52e8a0(&var_5c)
    else
        sub_6260f0()
else if (ecx == 0)
    *(arg4 + 0x14) = 0
else
    *(arg4 + 0x14) = ecx + 4

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

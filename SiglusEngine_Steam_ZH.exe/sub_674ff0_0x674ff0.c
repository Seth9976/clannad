// 函数: sub_674ff0
// 地址: 0x674ff0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b8868
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edx
int32_t eax_3 = sub_677fa0(arg1, edx)
void* edx_1 = data_bac460
uint32_t ebx = zx.d(*(sub_548970(edx_1 + 4, *(edx_1 + 0xb8) - 1, 1) + 0x2cd))
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_65da00()

if (result.b != 0)
    void* ecx_3 = data_bac460
    result = *(sub_548970(ecx_3 + 4, *(ecx_3 + 0xb8) - 1, 1) + 0x2d0)
    
    if (result == 0xa)
        void* ecx_5
        
        if (eax_3 == 1)
            ecx_5 = *(arg1 + 0xa4)
        
        if (eax_3 != 1 || *(ecx_5 + 4) != result)
            sub_677bb0(0)
        else
            sub_677bb0(*(ecx_5 + 8))
    else if (result == 0x14)
        void* eax_8
        
        if (eax_3 == 1)
            eax_8 = *(arg1 + 0xa4)
        
        if (eax_3 != 1 || *(eax_8 + 4) != 0x14)
            int32_t var_18_1 = 7
            int32_t var_1c_1 = 0
            int16_t var_2c = 0
            sub_52e720(&var_2c, &data_ad7c90, nullptr)
            int32_t var_8_1 = 0
            sub_60c680(data_bac49c + 0xc, &var_2c)
            sub_52e8a0(&var_2c)
        else
            sub_60c680(data_bac49c + 0xc, eax_8 + 0xc)
    
    result.b = ebx != 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

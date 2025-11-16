// 函数: sub_5b5f80
// 地址: 0x5b5f80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9ba918
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result_1
int32_t eax_2 = __security_cookie ^ &result_1
int32_t __saved_edi
int32_t var_4c = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_38 = arg1

if (arg3 s< arg4)
    result = arg3 * 0x30c
    int32_t i_1 = arg4 - arg3
    result_1 = result
    int32_t i
    
    do
        void* edi_2 = *(arg1 + 0xa4) + result
        sub_5b61c0(edi_2 + 0x158, arg2)
        sub_5b6390(edi_2 + 0x210, arg2)
        sub_5b6660(edi_2 + 0xa0, arg2)
        int32_t* ecx_3 = *arg2
        
        if (ecx_3 == arg2[1])
            ecx_3 = nullptr
        
        *(edi_2 + 0x2c8) = *(ecx_3 + arg2[3])
        arg2[3] += 4
        int32_t eax_7 = *arg2
        
        if (eax_7 == arg2[1])
            eax_7 = 0
        
        *(edi_2 + 0x2d0) = *(arg2[3] + eax_7)
        arg2[3] += 4
        int16_t var_34
        void** eax_9 = sub_5b0600(arg2, &var_34)
        int32_t var_c_1 = 0
        
        if (edi_2 + 0x2e0 != eax_9)
            sub_52e3c0(edi_2 + 0x2e0, eax_9, 0, 0xffffffff)
        
        int32_t var_c_2 = 0xffffffff
        int32_t var_20
        
        if (var_20 u>= 8)
            j__free(var_34.d)
        
        int32_t* ecx_8 = *arg2
        bool cond:1_1 = ecx_8 == arg2[1]
        var_34 = 0
        
        if (cond:1_1)
            ecx_8 = nullptr
        
        var_20 = 7
        int32_t var_24_1 = 0
        *(edi_2 + 0x2f8) = *(ecx_8 + arg2[3])
        arg2[3] += 4
        int32_t eax_13 = *arg2
        
        if (eax_13 == arg2[1])
            eax_13 = 0
        
        arg1 = var_38
        *(edi_2 + 0x2fc) = *(arg2[3] + eax_13)
        struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result_1
        arg2[3] += 4
        result = &result_2[0xc3]
        result_1 = result
        i = i_1
        i_1 -= 1
    while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &result_1)
return result

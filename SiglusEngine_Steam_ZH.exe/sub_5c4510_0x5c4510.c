// 函数: sub_5c4510
// 地址: 0x5c4510
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??0UMSThreadProxy@details@Concurrency@@QAE@PAUIThreadProxyFactory@12@PAXI@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_38 = arg1

if (arg3 s< arg4)
    result = arg3 * 0x118
    int32_t i_1 = arg4 - arg3
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
    int32_t i
    
    do
        void* edi_2 = *(arg1 + 0xa4) + result
        int128_t xmm0_1 = *(edi_2 + 0xb8)
        int128_t xmm0_2 = *(edi_2 + 0xc8)
        int128_t xmm0_3 = *(edi_2 + 0xd8)
        int128_t xmm0_4 = *(edi_2 + 0xe8)
        int128_t xmm0_5 = *(edi_2 + 0xf8)
        int64_t xmm0_6 = *(edi_2 + 0x108)
        sub_5979b0(arg2, arg2[3] + 0x58)
        int32_t eax_5 = *arg2
        
        if (eax_5 == arg2[1])
            eax_5 = 0
        
        int32_t var_18_1 = 7
        int128_t* ecx_2 = arg2[3] + eax_5
        void* var_1c_1 = nullptr
        *ecx_2 = xmm0_1
        int16_t var_2c = 0
        ecx_2[1] = xmm0_2
        ecx_2[2] = xmm0_3
        ecx_2[3] = xmm0_4
        ecx_2[4] = xmm0_5
        ecx_2[5].q = xmm0_6
        arg2[3] += 0x58
        sub_52e3c0(&var_2c, edi_2 + 0xa0, 0, 0xffffffff)
        int32_t var_8_1 = 0
        sub_5979b0(arg2, arg2[3] + 4)
        int32_t* ecx_5 = *arg2
        int16_t* edx_1 = &var_2c
        
        if (ecx_5 == arg2[1])
            ecx_5 = nullptr
        
        *(ecx_5 + arg2[3]) = var_1c_1
        arg2[3] += 4
        int16_t* ecx_6 = var_2c.d
        void* edi_4 = var_1c_1 * 2
        int32_t eax_11 = var_18_1
        
        if (eax_11 u>= 8)
            edx_1 = ecx_6
        
        int64_t var_34_1
        var_34_1:4.d = edx_1
        
        if (edi_4 s> 0)
            sub_5979b0(arg2, arg2[3] + edi_4)
            int32_t ecx_8 = *arg2
            
            if (ecx_8 == arg2[1])
                ecx_8 = 0
            
            sub_748840(arg2[3] + ecx_8, var_34_1:4.d, edi_4, eax_2)
            eax_11 = var_18_1
            arg2[3] += edi_4
            ecx_6 = var_2c.d
        
        int32_t var_8_2 = 0xffffffff
        
        if (eax_11 u>= 8)
            j__free(ecx_6)
        
        arg1 = var_38
        var_2c = 0
        result = &result_1[0x46]
        int32_t var_18_2 = 7
        int32_t var_1c_2 = 0
        result_1 = result
        i = i_1
        i_1 -= 1
    while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
return result

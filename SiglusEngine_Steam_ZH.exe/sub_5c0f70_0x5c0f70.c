// 函数: sub_5c0f70
// 地址: 0x5c0f70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ba8e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edx = arg1
void* var_14 = edx
int32_t result = arg3

if (result s< arg4)
    int32_t ecx_1 = result * 0xc0
    void* i_1 = arg4 - result
    arg3 = ecx_1
    void* i
    
    do
        int32_t result_1 = 7
        void* var_1c_1 = nullptr
        void** eax_5 = *(edx + 0xa4) + ecx_1 + 0xa0
        int16_t var_2c = 0
        sub_52e3c0(&var_2c, eax_5, 0, 0xffffffff)
        int32_t var_8_1 = 0
        sub_5979b0(arg2, arg2[3] + 4)
        int32_t* ecx_4 = *arg2
        int16_t* edx_1 = &var_2c
        
        if (ecx_4 == arg2[1])
            ecx_4 = nullptr
        
        *(ecx_4 + arg2[3]) = var_1c_1
        arg2[3] += 4
        int16_t* ecx_5 = var_2c.d
        void* edi_2 = var_1c_1 * 2
        result = result_1
        
        if (result u>= 8)
            edx_1 = ecx_5
        
        if (edi_2 s> 0)
            sub_5979b0(arg2, arg2[3] + edi_2)
            int32_t ecx_7 = *arg2
            
            if (ecx_7 == arg2[1])
                ecx_7 = 0
            
            sub_748840(arg2[3] + ecx_7, edx_1, edi_2, eax_2)
            result = result_1
            arg2[3] += edi_2
            ecx_5 = var_2c.d
        
        int32_t var_8_2 = 0xffffffff
        
        if (result u>= 8)
            result = j__free(ecx_5)
        
        edx = var_14
        ecx_1 = arg3 + 0xc0
        arg3 = ecx_1
        i = i_1
        i_1 -= 1
    while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
return result

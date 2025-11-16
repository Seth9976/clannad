// 函数: sub_614ae0
// 地址: 0x614ae0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bf188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_48 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i_4 = (arg2 - arg3) s>> 4
int32_t i_5 = (arg4 - arg3) s>> 4
int32_t i_3 = i_4
int32_t i_7 = i_4
int32_t i_6 = i_5
int32_t i_2 = i_5

if (i_4 != 0)
    int32_t i
    
    do
        int32_t i_8 = i_6
        i_6 = i_3
        int32_t eax_3
        int32_t edx_1
        edx_1:eax_3 = sx.q(i_8)
        i = mods.dp.d(edx_1:eax_3, i_3)
        result = divs.dp.d(edx_1:eax_3, i_3)
        i_3 = i
    while (i != 0)
    i_4 = i_7
    i_2 = i_6

if (i_6 s< i_5 && i_6 s> 0)
    void* result_4 = arg3
    int32_t ecx_1 = i_4 << 4
    result = (i_6 << 4) + result_4
    int32_t var_24_1 = ecx_1
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
    int32_t i_1
    
    do
        void* result_3 = result + ecx_1
        void* result_2 = result
        
        if (result_3 == arg4)
            result_3 = result_4
        
        do
            int32_t eax_6 = *result_2
            void* var_34
            sub_5b5160(&var_34, result_2 + 4)
            int32_t var_8_1 = 0
            *result_2 = *result_3
            sub_6143d0(result_2 + 4, result_3 + 4)
            *result_3 = eax_6
            sub_6143d0(result_3 + 4, &var_34)
            int32_t var_8_2 = 0xffffffff
            void* eax_9 = var_34
            
            if (eax_9 != 0)
                void* esi_3 = eax_9
                int32_t var_30
                
                if (eax_9 != var_30)
                    do
                        sub_5b4b40(esi_3)
                        esi_3 += 0x10
                    while (esi_3 != var_30)
                    
                    eax_9 = var_34
                
                j__free(eax_9)
                var_34 = nullptr
                var_30 = 0
                int32_t var_2c_1 = 0
            
            result_2 = result_3
            ecx_1 = var_24_1
            int32_t eax_12 = (arg4 - result_3) s>> 4
            
            if (i_7 s>= eax_12)
                result_4 = arg3
                result_3 = ((i_7 - eax_12) << 4) + result_4
            else
                result_4 = arg3
                result_3 += ecx_1
        while (result_3 != result_1)
        
        result = result_1 - 0x10
        i_1 = i_2 - 1
        result_1 = result
        i_2 = i_1
    while (i_1 s> 0)

fsbase->NtTib.ExceptionList = ExceptionList
return result

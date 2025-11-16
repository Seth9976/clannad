// 函数: sub_6c8730
// 地址: 0x6c8730
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cc6a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* var_18 = arg1

if (arg1 != arg2)
    int32_t* eax_3 = *arg2
    int32_t ecx = arg2[1]
    int32_t edx_1 = arg1[1]
    
    if (eax_3 != ecx)
        int32_t* ecx_2 = *arg1
        int32_t esi_3 = (ecx - eax_3) s>> 3
        int32_t edx_3 = (edx_1 - ecx_2) s>> 3
        
        if (esi_3 u<= edx_3)
            int32_t* var_2c_2 = arg2
            int32_t* eax_5
            int32_t ecx_4
            eax_5, ecx_4 = sub_6c8870(eax_3, arg2[1], eax_3, ecx_2)
            int32_t* var_2c_3 = arg2
            int32_t var_30_3 = ecx_4
            sub_579a70(eax_5, arg1[1])
            arg1[1] = *arg1 + ((arg2[1] - *arg2) s>> 3 << 3)
        else
            int32_t* eax_11
            
            if (esi_3 u> (arg1[2] - ecx_2) s>> 3)
                if (ecx_2 != 0)
                    int32_t* var_2c_6 = arg2
                    int32_t* var_30_6 = ecx_2
                    sub_579a70(ecx_2, arg1[1])
                    j__free(*arg1)
                
                int32_t ecx_15
                eax_11, ecx_15 = sub_541a20(arg1, (arg2[1] - *arg2) s>> 3)
                
                if (eax_11.b != 0)
                    int32_t var_8_1 = 0
                    int32_t* var_2c_8 = arg2
                    int32_t var_30_7 = ecx_15
                    arg1[1] = sub_6c88f0(eax_11, arg2[1], *arg2, *arg1)
            else
                int32_t* eax_10 = *arg2
                int32_t* var_2c_4 = arg2
                void* esi_4 = &eax_10[edx_3 * 2]
                int32_t ecx_10
                eax_11, ecx_10 = sub_6c8870(eax_10, esi_4, eax_10, ecx_2)
                int32_t* var_2c_5 = arg2
                int32_t var_30_5 = ecx_10
                arg1[1] = sub_6c88f0(eax_11, arg2[1], esi_4, arg1[1])
    else
        int32_t* var_2c_1 = arg2
        int32_t var_30_1 = ecx
        sub_579a70(*arg1, edx_1)
        arg1[1] = *arg1

fsbase->NtTib.ExceptionList = ExceptionList
return arg1

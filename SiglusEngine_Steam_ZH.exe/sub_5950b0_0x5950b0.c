// 函数: sub_5950b0
// 地址: 0x5950b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b8330
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* var_18 = arg1

if (arg1 != arg2)
    int32_t eax_3 = *arg2
    int32_t ecx = arg2[1]
    
    if (eax_3 != ecx)
        int32_t* ecx_1 = *arg1
        int32_t esi_3 = (ecx - eax_3) s>> 2
        int32_t edx_3 = (arg1[1] - ecx_1) s>> 2
        
        if (esi_3 u<= edx_3)
            sub_5953d0(eax_3, arg2[1], eax_3, ecx_1)
            arg1[1] = *arg1 + ((arg2[1] - *arg2) s>> 2 << 2)
        else
            int32_t* eax_10
            
            if (esi_3 u> (arg1[2] - ecx_1) s>> 2)
                if (ecx_1 != 0)
                    j__free(ecx_1)
                
                int32_t ecx_12
                eax_10, ecx_12 = sub_536100(arg1, (arg2[1] - *arg2) s>> 2)
                
                if (eax_10.b != 0)
                    int32_t var_8_1 = 0
                    int32_t* var_2c_6 = arg2
                    int32_t var_30_2 = ecx_12
                    arg1[1] = sub_595430(eax_10, arg2[1], *arg2, *arg1)
            else
                int32_t eax_9 = *arg2
                int32_t esi_4 = eax_9 + (edx_3 << 2)
                int32_t ecx_7
                eax_10, ecx_7 = sub_5953d0(eax_9, esi_4, eax_9, ecx_1)
                int32_t* var_2c_3 = arg2
                int32_t var_30_1 = ecx_7
                arg1[1] = sub_595430(eax_10, arg2[1], esi_4, arg1[1])
    else
        arg1[1] = *arg1

fsbase->NtTib.ExceptionList = ExceptionList
return arg1

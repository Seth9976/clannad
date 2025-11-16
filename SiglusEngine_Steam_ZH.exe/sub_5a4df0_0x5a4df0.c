// 函数: sub_5a4df0
// 地址: 0x5a4df0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b9910
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t* var_20 = arg1

if (arg1 != arg2)
    int32_t esi_1 = arg2[1]
    int32_t* ecx = *arg2
    
    if (ecx != esi_1)
        void* edx_1 = *arg1
        int32_t eax_6 = (esi_1 - ecx) s>> 3
        int32_t ebx_3 = (arg1[1] - edx_1) s>> 3
        
        if (eax_6 u<= ebx_3)
            while (ecx != esi_1)
                edx_1 += 8
                *(edx_1 - 8) = *ecx
                int32_t eax_8 = ecx[1]
                ecx = &ecx[2]
                *(edx_1 - 4) = eax_8
            
            arg1[1] = *arg1 + ((arg2[1] - *arg2) s>> 3 << 3)
        else
            int32_t* eax_14
            
            if (eax_6 u> (arg1[2] - edx_1) s>> 3)
                if (edx_1 != 0)
                    j__free(edx_1)
                
                int32_t ecx_9
                eax_14, ecx_9 = sub_541a20(arg1, (arg2[1] - *arg2) s>> 3)
                
                if (eax_14.b != 0)
                    int32_t var_8_1 = 0
                    int32_t* var_34_5 = arg2
                    int32_t var_38_2 = ecx_9
                    arg1[1] = sub_5384d0(eax_14, arg2[1], *arg2, *arg1)
            else
                void* esi_2 = &ecx[ebx_3 * 2]
                int32_t ecx_4
                eax_14, ecx_4 = sub_5a4fe0(ebx_3, esi_2, ecx, edx_1)
                int32_t* var_34_2 = arg2
                int32_t var_38_1 = ecx_4
                arg1[1] = sub_5384d0(eax_14, arg2[1], esi_2, arg1[1])
    else
        arg1[1] = *arg1

fsbase->NtTib.ExceptionList = ExceptionList
return arg1

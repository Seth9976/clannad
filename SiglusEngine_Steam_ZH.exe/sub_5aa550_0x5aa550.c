// 函数: sub_5aa550
// 地址: 0x5aa550
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b9ee0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* var_1c = arg1
int32_t* ebx = arg2

if (arg1 != ebx)
    int32_t eax_3 = *ebx
    int32_t ecx = ebx[1]
    
    if (eax_3 != ecx)
        int32_t* esi_1 = *arg1
        arg2 = (ecx - eax_3) s/ 0x3c
        int32_t eax_12 = (arg1[1] - esi_1) s/ 0x3c
        
        if (arg2 u> eax_12)
            void* ecx_14 = arg1[2] - esi_1
            int32_t* eax_26
            
            if (arg2 u> ecx_14 s/ 0x3c)
                if (esi_1 != 0)
                    int32_t* var_30_6 = arg2
                    void* var_34_6 = ecx_14
                    sub_5aac00(esi_1, arg1[1])
                    j__free(*arg1)
                
                int32_t ecx_24
                eax_26, ecx_24 = sub_5aa820(arg1, (ebx[1] - *ebx) s/ 0x3c)
                
                if (eax_26.b != 0)
                    int32_t var_8_1 = 0
                    int32_t* var_30_8 = arg2
                    int32_t var_34_7 = ecx_24
                    arg1[1] = sub_5aacb0(eax_26, ebx[1], *ebx, *arg1)
            else
                void* ecx_15 = *ebx
                int32_t* var_30_4 = arg2
                int32_t eax_25 = eax_12 * 0xf
                int32_t* esi_2 = ecx_15 + (eax_25 << 2)
                int32_t ecx_16
                eax_26, ecx_16 = sub_5aab40(eax_25, esi_2, ecx_15, *arg1)
                int32_t* var_30_5 = arg2
                int32_t var_34_5 = ecx_16
                arg1[1] = sub_5aacb0(eax_26, ebx[1], esi_2, arg1[1])
        else
            int32_t* var_30_2 = arg2
            int32_t* eax_13
            int32_t ecx_6
            eax_13, ecx_6 = sub_5aab40(eax_12, ebx[1], *ebx, esi_1)
            int32_t* var_30_3 = arg2
            int32_t var_34_3 = ecx_6
            sub_5aac00(eax_13, arg1[1])
            arg1[1] = *arg1 + (ebx[1] - *ebx) s/ 0x3c * 0x3c
    else
        int32_t* var_30_1 = arg2
        int32_t var_34_1 = ecx
        sub_5aac00(*arg1, arg1[1])
        arg1[1] = *arg1

fsbase->NtTib.ExceptionList = ExceptionList
return arg1

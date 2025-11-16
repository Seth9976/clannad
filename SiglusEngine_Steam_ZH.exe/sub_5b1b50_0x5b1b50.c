// 函数: sub_5b1b50
// 地址: 0x5b1b50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ba4a0
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
        int32_t eax_7 = (ecx - eax_3) s/ 0x2cc
        int32_t eax_11 = (arg1[1] - esi_1) s/ 0x2cc
        
        if (eax_7 u> eax_11)
            int32_t eax_22 = (arg1[2] - esi_1) s/ 0x2cc
            int32_t* eax_23
            
            if (eax_7 u> eax_22)
                if (esi_1 != 0)
                    sub_550640(esi_1, arg1[1])
                    j__free(*arg1)
                
                int32_t ecx_18
                eax_23, ecx_18 = sub_553060(arg1, (ebx[1] - *ebx) s/ 0x2cc)
                
                if (eax_23.b != 0)
                    int32_t var_8_1 = 0
                    int32_t var_30_8 = eax_7
                    int32_t var_34_6 = ecx_18
                    arg1[1] = sub_553270(eax_23, ebx[1], *ebx, *arg1)
            else
                void* ecx_10 = *ebx
                int32_t var_30_3 = eax_7
                void* esi_3 = eax_11 * 0x2cc + ecx_10
                int32_t ecx_11
                eax_23, ecx_11 = sub_5b2330(eax_22, esi_3, ecx_10, *arg1)
                int32_t var_30_4 = eax_7
                int32_t var_34_4 = ecx_11
                arg1[1] = sub_553270(eax_23, ebx[1], esi_3, arg1[1])
        else
            int32_t var_30_1 = eax_7
            sub_550640(sub_5b2330(eax_11, ebx[1], *ebx, esi_1), arg1[1])
            arg1[1] = (ebx[1] - *ebx) s/ 0x2cc * 0x2cc + *arg1
    else
        sub_5b2160(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1

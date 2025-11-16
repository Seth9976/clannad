// 函数: sub_5b1ce0
// 地址: 0x5b1ce0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ba4c0
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
        int128_t* esi_1 = *arg1
        arg2 = (ecx - eax_3) s/ 0x58
        int32_t eax_9
        int32_t edx_3
        edx_3:eax_9 = muls.dp.d(0x2e8ba2e9, arg1[1] - esi_1)
        int32_t edx_4 = edx_3 s>> 4
        int32_t eax_12 = (edx_4 u>> 0x1f) + edx_4
        
        if (arg2 u> eax_12)
            int32_t eax_18
            int32_t edx_8
            edx_8:eax_18 = muls.dp.d(0x2e8ba2e9, arg1[2] - esi_1)
            int32_t edx_9 = edx_8 s>> 4
            int32_t eax_21 = (edx_9 u>> 0x1f) + edx_9
            int128_t* eax_22
            
            if (arg2 u> eax_21)
                if (esi_1 != 0)
                    j__free(esi_1)
                
                int32_t eax_24
                int32_t edx_12
                edx_12:eax_24 = muls.dp.d(0x2e8ba2e9, ebx[1] - *ebx)
                int32_t edx_13 = edx_12 s>> 4
                int32_t ecx_17
                eax_22, ecx_17 = sub_5530d0(arg1, (edx_13 u>> 0x1f) + edx_13)
                
                if (eax_22.b != 0)
                    int32_t var_8_1 = 0
                    int32_t* var_30_6 = arg2
                    int32_t var_34_4 = ecx_17
                    arg1[1] = sub_553320(eax_22, ebx[1], *ebx, *arg1)
            else
                int128_t* ecx_9 = *ebx
                int32_t* var_30_2 = arg2
                void* esi_3 = eax_12 * 0x58 + ecx_9
                int32_t ecx_10
                eax_22, ecx_10 = sub_5b24e0(eax_21, esi_3, ecx_9, *arg1)
                int32_t* var_30_3 = arg2
                int32_t var_34_3 = ecx_10
                arg1[1] = sub_553320(eax_22, ebx[1], esi_3, arg1[1])
        else
            int32_t* var_30_1 = arg2
            sub_5b24e0(eax_12, ebx[1], *ebx, esi_1)
            int32_t eax_13
            int32_t edx_6
            edx_6:eax_13 = muls.dp.d(0x2e8ba2e9, ebx[1] - *ebx)
            int32_t edx_7 = edx_6 s>> 4
            arg1[1] = ((edx_7 u>> 0x1f) + edx_7) * 0x58 + *arg1
    else
        arg1[1] = *arg1

fsbase->NtTib.ExceptionList = ExceptionList
return arg1

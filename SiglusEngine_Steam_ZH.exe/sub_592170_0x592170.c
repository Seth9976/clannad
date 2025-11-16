// 函数: sub_592170
// 地址: 0x592170
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b7fb0
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
        int32_t eax_8 = (ecx - eax_3) s/ 0x28
        int32_t eax_9
        int32_t edx_4
        edx_4:eax_9 = muls.dp.d(0x66666667, arg1[1] - esi_1)
        int32_t edx_5 = edx_4 s>> 4
        int32_t eax_12 = (edx_5 u>> 0x1f) + edx_5
        
        if (eax_8 u> eax_12)
            void* ecx_12 = arg1[2] - esi_1
            int32_t* eax_25
            
            if (eax_8 u> ecx_12 s/ 0x28)
                if (esi_1 != 0)
                    int32_t var_30_6 = eax_8
                    void* var_34_6 = ecx_12
                    sub_5926c0(esi_1, arg1[1])
                    j__free(*arg1)
                
                int32_t eax_27
                int32_t edx_15
                edx_15:eax_27 = muls.dp.d(0x66666667, ebx[1] - *ebx)
                int32_t edx_16 = edx_15 s>> 4
                int32_t ecx_22
                eax_25, ecx_22 = sub_592420(arg1, (edx_16 u>> 0x1f) + edx_16)
                
                if (eax_25.b != 0)
                    int32_t var_8_1 = 0
                    int32_t var_30_8 = eax_8
                    int32_t var_34_7 = ecx_22
                    arg1[1] = sub_592740(eax_25, ebx[1], *ebx, *arg1)
            else
                void* ecx_13 = *ebx
                int32_t var_30_4 = eax_8
                int32_t eax_24 = eax_12 * 5
                void* esi_2 = ecx_13 + (eax_24 << 3)
                int32_t ecx_14
                eax_25, ecx_14 = sub_592630(eax_24, esi_2, ecx_13, *arg1)
                int32_t var_30_5 = eax_8
                int32_t var_34_5 = ecx_14
                arg1[1] = sub_592740(eax_25, ebx[1], esi_2, arg1[1])
        else
            int32_t var_30_2 = eax_8
            int32_t* eax_13
            int32_t ecx_6
            eax_13, ecx_6 = sub_592630(eax_12, ebx[1], *ebx, esi_1)
            int32_t var_30_3 = eax_8
            int32_t var_34_3 = ecx_6
            sub_5926c0(eax_13, arg1[1])
            int32_t eax_14
            int32_t edx_8
            edx_8:eax_14 = muls.dp.d(0x66666667, ebx[1] - *ebx)
            int32_t edx_9 = edx_8 s>> 4
            arg1[1] = *arg1 + ((edx_9 u>> 0x1f) + edx_9) * 0x28
    else
        int32_t var_30_1 = arg2
        int32_t var_34_1 = ecx
        sub_5926c0(*arg1, arg1[1])
        arg1[1] = *arg1

fsbase->NtTib.ExceptionList = ExceptionList
return arg1

// 函数: sub_5971b0
// 地址: 0x5971b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b85e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* var_1c = arg1
int32_t* ebx = arg2

if (arg1 != ebx)
    void* esi_1 = *ebx
    int32_t eax_3 = ebx[1]
    
    if (esi_1 != eax_3)
        int32_t eax_8 = (eax_3 - esi_1) s/ 0x14
        int32_t eax_9
        int32_t edx_4
        edx_4:eax_9 = muls.dp.d(0x66666667, arg1[1] - *arg1)
        int32_t edx_5 = edx_4 s>> 3
        int32_t eax_12 = (edx_5 u>> 0x1f) + edx_5
        
        if (eax_8 u> eax_12)
            int32_t ecx_12 = arg1[2] - *arg1
            void* eax_26
            
            if (eax_8 u> ecx_12 s/ 0x14)
                int32_t* eax_28 = *arg1
                
                if (eax_28 != 0)
                    int32_t var_30_6 = eax_8
                    int32_t var_34_4 = ecx_12
                    sub_597720(eax_28, arg1[1])
                    j__free(*arg1)
                
                int32_t eax_29
                int32_t edx_15
                edx_15:eax_29 = muls.dp.d(0x66666667, ebx[1] - *ebx)
                int32_t edx_16 = edx_15 s>> 3
                int32_t ecx_22
                eax_26, ecx_22 = sub_56ce60(arg1, (edx_16 u>> 0x1f) + edx_16)
                
                if (eax_26.b != 0)
                    int32_t var_8_1 = 0
                    int32_t var_30_8 = eax_8
                    int32_t var_34_5 = ecx_22
                    arg1[1] = sub_597790(eax_26, ebx[1], *ebx, *arg1)
            else
                int32_t eax_25 = eax_12 * 5
                void* esi_2 = esi_1 + (eax_25 << 2)
                int32_t ecx_14
                eax_26, ecx_14 = sub_5976a0(eax_25, esi_2, *ebx, *arg1)
                int32_t var_30_5 = eax_8
                int32_t var_34_3 = ecx_14
                arg1[1] = sub_597790(eax_26, ebx[1], esi_2, arg1[1])
        else
            void* eax_13 = *arg1
            void* eax_14
            int32_t ecx_6
            eax_14, ecx_6 = sub_5976a0(eax_13, ebx[1], esi_1, eax_13)
            int32_t var_30_3 = eax_8
            int32_t var_34_2 = ecx_6
            sub_597720(eax_14, arg1[1])
            int32_t eax_15
            int32_t edx_8
            edx_8:eax_15 = muls.dp.d(0x66666667, ebx[1] - *ebx)
            int32_t edx_9 = edx_8 s>> 3
            arg1[1] = *arg1 + ((edx_9 u>> 0x1f) + edx_9) * 0x14
    else
        int32_t var_30_1 = arg2
        int32_t* var_34_1 = arg1
        sub_597720(*arg1, arg1[1])
        arg1[1] = *arg1

fsbase->NtTib.ExceptionList = ExceptionList
return arg1

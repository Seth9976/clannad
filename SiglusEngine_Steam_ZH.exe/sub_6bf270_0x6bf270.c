// 函数: sub_6bf270
// 地址: 0x6bf270
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cbf00
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* var_1c = arg1
int32_t* ebx = arg2

if (arg1 != ebx)
    void** esi_1 = *ebx
    int32_t eax_3 = ebx[1]
    
    if (esi_1 != eax_3)
        int32_t eax_8 = (eax_3 - esi_1) s/ 0x30
        int32_t eax_9
        int32_t edx_4
        edx_4:eax_9 = muls.dp.d(0x2aaaaaab, arg1[1] - *arg1)
        int32_t edx_5 = edx_4 s>> 3
        int32_t eax_12 = (edx_5 u>> 0x1f) + edx_5
        
        if (eax_8 u> eax_12)
            void* esi_2 = *arg1
            void* ecx_11 = arg1[2] - esi_2
            void* eax_27
            
            if (eax_8 u> ecx_11 s/ 0x30)
                if (esi_2 != 0)
                    int32_t var_30_6 = eax_8
                    void* var_34_6 = ecx_11
                    sub_66b250(esi_2, arg1[1])
                    j__free(*arg1)
                
                int32_t eax_29
                int32_t edx_15
                edx_15:eax_29 = muls.dp.d(0x2aaaaaab, ebx[1] - *ebx)
                int32_t edx_16 = edx_15 s>> 3
                int32_t ecx_21
                eax_27, ecx_21 = sub_6697d0(arg1, (edx_16 u>> 0x1f) + edx_16)
                
                if (eax_27.b != 0)
                    int32_t var_8_1 = 0
                    int32_t var_30_8 = eax_8
                    int32_t var_34_7 = ecx_21
                    arg1[1] = sub_66d4f0(eax_27, ebx[1], *ebx, *arg1)
            else
                void** ecx_12 = *ebx
                int32_t var_30_4 = eax_8
                void* eax_26 = *arg1
                void** esi_5 = &ecx_12[eax_12 * 0xc]
                int32_t ecx_13
                eax_27, ecx_13 = sub_6bf600(eax_26, esi_5, ecx_12, eax_26)
                int32_t var_30_5 = eax_8
                int32_t var_34_5 = ecx_13
                arg1[1] = sub_66d4f0(eax_27, ebx[1], esi_5, arg1[1])
        else
            int32_t var_30_2 = eax_8
            void* eax_13 = *arg1
            void* eax_14
            int32_t ecx_6
            eax_14, ecx_6 = sub_6bf600(eax_13, ebx[1], esi_1, eax_13)
            int32_t var_30_3 = eax_8
            int32_t var_34_3 = ecx_6
            sub_66b250(eax_14, arg1[1])
            int32_t eax_15
            int32_t edx_8
            edx_8:eax_15 = muls.dp.d(0x2aaaaaab, ebx[1] - *ebx)
            int32_t edx_9 = edx_8 s>> 3
            arg1[1] = ((edx_9 u>> 0x1f) + edx_9) * 0x30 + *arg1
    else
        int32_t var_30_1 = arg2
        int32_t* var_34_1 = arg1
        sub_66b250(*arg1, arg1[1])
        arg1[1] = *arg1

fsbase->NtTib.ExceptionList = ExceptionList
return arg1

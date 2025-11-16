// 函数: sub_5b1fc0
// 地址: 0x5b1fc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ba500
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t* var_20 = arg1
int32_t* ebx = arg2

if (arg1 != ebx)
    int32_t eax_3 = *ebx
    int32_t ecx = ebx[1]
    
    if (eax_3 != ecx)
        void* esi_1 = *arg1
        int32_t eax_7 = (ecx - eax_3) s/ 0x130
        int32_t eax_8
        int32_t edx_3
        edx_3:eax_8 = muls.dp.d(0x6bca1af3, arg1[1] - esi_1)
        int32_t edx_4 = edx_3 s>> 7
        int32_t eax_11 = (edx_4 u>> 0x1f) + edx_4
        
        if (eax_7 u> eax_11)
            int32_t eax_20
            int32_t edx_8
            edx_8:eax_20 = muls.dp.d(0x6bca1af3, arg1[2] - esi_1)
            int32_t edx_9 = edx_8 s>> 7
            int32_t eax_23 = (edx_9 u>> 0x1f) + edx_9
            
            if (eax_7 u> eax_23)
                if (esi_1 != 0)
                    sub_5506a0(esi_1, arg1[1])
                    j__free(*arg1)
                
                int32_t eax_26
                int32_t edx_12
                edx_12:eax_26 = muls.dp.d(0x6bca1af3, ebx[1] - *ebx)
                int32_t edx_13 = edx_12 s>> 7
                void* eax_24
                int32_t ecx_18
                eax_24, ecx_18 = sub_5531b0(arg1, (edx_13 u>> 0x1f) + edx_13)
                
                if (eax_24.b != 0)
                    int32_t var_8_1 = 0
                    int32_t* var_34_7 = arg2
                    int32_t var_38_5 = ecx_18
                    arg1[1] = sub_553380(eax_24, ebx[1], *ebx, *arg1)
            else
                void* ecx_11 = *ebx
                int32_t* var_34_2 = arg2
                void* esi_4 = eax_11 * 0x130 + ecx_11
                int32_t* var_34_3 = arg2
                void* var_38_3 = ecx_11
                arg1[1] =
                    sub_553380(sub_5b2540(eax_23, esi_4, ecx_11, *arg1), ebx[1], esi_4, arg1[1])
        else
            int32_t* var_34_1 = arg2
            void* esi_2 = sub_5b2540(eax_11, ebx[1], *ebx, esi_1)
            int32_t eax_13 = arg1[1]
            
            if (esi_2 != eax_13)
                do
                    sub_6efc80(esi_2)
                    esi_2 += 0x130
                while (esi_2 != eax_13)
                
                ebx = arg2
            
            int32_t eax_14
            int32_t edx_6
            edx_6:eax_14 = muls.dp.d(0x6bca1af3, ebx[1] - *ebx)
            int32_t edx_7 = edx_6 s>> 7
            arg1[1] = ((edx_7 u>> 0x1f) + edx_7) * 0x130 + *arg1
    else
        sub_5b21a0(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1

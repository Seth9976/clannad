// 函数: sub_6bf420
// 地址: 0x6bf420
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cbf20
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
    int32_t* i = *arg1
    
    if (eax_3 != ecx)
        int32_t eax_7 = (ecx - eax_3) s/ 0x48
        int32_t eax_8
        int32_t edx_3
        edx_3:eax_8 = muls.dp.d(0x38e38e39, arg1[1] - i)
        int32_t edx_4 = edx_3 s>> 4
        int32_t eax_11 = (edx_4 u>> 0x1f) + edx_4
        
        if (eax_7 u> eax_11)
            int32_t eax_20
            int32_t edx_8
            edx_8:eax_20 = muls.dp.d(0x38e38e39, arg1[2] - i)
            int32_t edx_9 = edx_8 s>> 4
            int32_t* eax_26
            
            if (eax_7 u> (edx_9 u>> 0x1f) + edx_9)
                if (i != 0)
                    sub_6bbc00(i, arg1[1])
                    j__free(*arg1)
                
                int32_t eax_28
                int32_t edx_12
                edx_12:eax_28 = muls.dp.d(0x38e38e39, ebx[1] - *ebx)
                int32_t edx_13 = edx_12 s>> 4
                int32_t ecx_21
                eax_26, ecx_21 = sub_6bc360(arg1, (edx_13 u>> 0x1f) + edx_13)
                
                if (eax_26.b != 0)
                    int32_t var_8_1 = 0
                    int32_t* var_34_7 = arg2
                    int32_t var_38_3 = ecx_21
                    arg1[1] = sub_6bc670(eax_26, ebx[1], *ebx, *arg1)
            else
                void** ecx_13 = *ebx
                int32_t eax_25 = eax_11 * 9
                void* esi_2 = &ecx_13[eax_25 * 2]
                int32_t ecx_14
                eax_26, ecx_14 = sub_6bf5d0(eax_25, esi_2, ecx_13, *arg1)
                int32_t* var_34_3 = arg2
                int32_t var_38_1 = ecx_14
                arg1[1] = sub_6bc670(eax_26, ebx[1], esi_2, arg1[1])
        else
            int32_t* esi_1 = sub_6bf5d0(eax_11, ebx[1], *ebx, i)
            int32_t eax_13 = arg1[1]
            
            if (esi_1 != eax_13)
                do
                    sub_6ba6b0(esi_1)
                    esi_1 = &esi_1[0x12]
                while (esi_1 != eax_13)
                
                ebx = arg2
            
            int32_t eax_14
            int32_t edx_6
            edx_6:eax_14 = muls.dp.d(0x38e38e39, ebx[1] - *ebx)
            int32_t edx_7 = edx_6 s>> 4
            arg1[1] = *arg1 + ((edx_7 u>> 0x1f) + edx_7) * 0x48
    else
        for (int32_t ebx_1 = arg1[1]; i != ebx_1; i = &i[0x12])
            sub_6ba6b0(i)
        
        arg1[1] = *arg1

fsbase->NtTib.ExceptionList = ExceptionList
return arg1

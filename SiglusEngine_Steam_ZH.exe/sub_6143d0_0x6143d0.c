// 函数: sub_6143d0
// 地址: 0x6143d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bf0d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* var_18 = arg1
int32_t* ebx = arg2

if (arg1 != ebx)
    int32_t* eax_3 = *ebx
    int32_t ecx = ebx[1]
    
    if (eax_3 != ecx)
        int32_t* ecx_3 = *arg1
        int32_t edx_3 = (ecx - eax_3) s>> 4
        int32_t esi_3 = (arg1[1] - ecx_3) s>> 4
        
        if (edx_3 u> esi_3)
            int32_t eax_12 = (arg1[2] - ecx_3) s>> 4
            int32_t* eax_13
            
            if (edx_3 u> eax_12)
                if (ecx_3 != 0)
                    sub_5b4ec0(ecx_3, arg1[1])
                    j__free(*arg1)
                
                int32_t ecx_12
                eax_13, ecx_12 = sub_5b5200(arg1, (ebx[1] - *ebx) s>> 4)
                
                if (eax_13.b != 0)
                    int32_t var_8_1 = 0
                    int32_t* var_2c_7 = arg2
                    int32_t var_30_3 = ecx_12
                    arg1[1] = sub_5b5320(eax_13, ebx[1], *ebx, *arg1)
            else
                int32_t* esi_6 = (esi_3 << 4) + *ebx
                int32_t ecx_7
                eax_13, ecx_7 = sub_614780(eax_12, esi_6, *ebx, ecx_3)
                int32_t* var_2c_3 = arg2
                int32_t var_30_1 = ecx_7
                arg1[1] = sub_5b5320(eax_13, ebx[1], esi_6, arg1[1])
        else
            int32_t* esi_4 = sub_614780(eax_3, ebx[1], eax_3, ecx_3)
            int32_t eax_5 = arg1[1]
            
            if (esi_4 != eax_5)
                do
                    j_sub_5b4e70(&esi_4[1])
                    esi_4 = &esi_4[4]
                while (esi_4 != eax_5)
                
                ebx = arg2
            
            arg1[1] = ((ebx[1] - *ebx) & 0xfffffff0) + *arg1
    else
        int32_t ebx_1 = arg1[1]
        
        for (void* i = *arg1; i != ebx_1; i += 0x10)
            j_sub_5b4e70(i + 4)
        
        arg1[1] = *arg1

fsbase->NtTib.ExceptionList = ExceptionList
return arg1

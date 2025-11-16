// 函数: sub_5b0200
// 地址: 0x5b0200
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ba3e0
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
        int32_t eax_7 = (ecx - eax_3) s/ 0x15fc
        int32_t eax_11 = (arg1[1] - esi_1) s/ 0x15fc
        
        if (eax_7 u> eax_11)
            int32_t eax_23 = (arg1[2] - esi_1) s/ 0x15fc
            void* eax_24
            
            if (eax_7 u> eax_23)
                if (esi_1 != 0)
                    sub_550670(esi_1, arg1[1])
                    j__free(*arg1)
                
                int32_t ecx_19
                eax_24, ecx_19 = sub_551f20(arg1, (ebx[1] - *ebx) s/ 0x15fc)
                
                if (eax_24.b != 0)
                    int32_t var_8_1 = 0
                    int32_t* var_34_7 = arg2
                    int32_t var_38_3 = ecx_19
                    arg1[1] = sub_552070(eax_24, ebx[1], *ebx, *arg1)
            else
                int32_t* ecx_11 = *ebx
                void* esi_4 = eax_11 * 0x15fc + ecx_11
                int32_t ecx_12
                eax_24, ecx_12 = sub_5b0910(eax_23, esi_4, ecx_11, *arg1)
                int32_t* var_34_3 = arg2
                int32_t var_38_1 = ecx_12
                arg1[1] = sub_552070(eax_24, ebx[1], esi_4, arg1[1])
        else
            void* esi_2 = sub_5b0910(eax_11, ebx[1], *ebx, esi_1)
            int32_t eax_13 = arg1[1]
            
            if (esi_2 != eax_13)
                do
                    sub_551320(esi_2)
                    esi_2 += 0x15fc
                while (esi_2 != eax_13)
                
                ebx = arg2
            
            arg1[1] = (ebx[1] - *ebx) s/ 0x15fc * 0x15fc + *arg1
    else
        sub_5b0550(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1

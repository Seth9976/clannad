// 函数: sub_6b0d40
// 地址: 0x6b0d40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cac30
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
        int32_t esi_1 = *arg1
        arg2 = (ecx - eax_3) s/ 0x11c
        int32_t eax_12 = (arg1[1] - esi_1) s/ 0x11c
        
        if (arg2 u> eax_12)
            int32_t eax_21 = (arg1[2] - esi_1) s/ 0x11c
            int32_t eax_22
            
            if (arg2 u> eax_21)
                if (esi_1 != 0)
                    j__free(esi_1)
                
                int32_t ecx_17
                eax_22, ecx_17 = sub_6b0f20(arg1, (ebx[1] - *ebx) s/ 0x11c)
                
                if (eax_22.b != 0)
                    int32_t var_8_1 = 0
                    int32_t* var_30_6 = arg2
                    int32_t var_34_2 = ecx_17
                    arg1[1] = sub_6b1ac0(eax_22, ebx[1], *ebx, *arg1)
            else
                int32_t ecx_9 = *ebx
                int32_t esi_3 = eax_12 * 0x11c + ecx_9
                int32_t ecx_10
                eax_22, ecx_10 = sub_6b1140(eax_21, esi_3, ecx_9, *arg1)
                int32_t* var_30_3 = arg2
                int32_t var_34_1 = ecx_10
                arg1[1] = sub_6b1ac0(eax_22, ebx[1], esi_3, arg1[1])
        else
            sub_6b1140(eax_12, ebx[1], *ebx, esi_1)
            arg1[1] = (ebx[1] - *ebx) s/ 0x11c * 0x11c + *arg1
    else
        arg1[1] = *arg1

fsbase->NtTib.ExceptionList = ExceptionList
return arg1

// 函数: sub_571450
// 地址: 0x571450
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b4090
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* var_18 = arg1
int32_t* ebx = arg2

if (arg1 != ebx)
    void* eax_3 = *ebx
    int32_t ecx = ebx[1]
    
    if (eax_3 != ecx)
        int32_t* ecx_2 = *arg1
        int32_t edx_3 = (ecx - eax_3) s>> 7
        int32_t esi_3 = (arg1[1] - ecx_2) s>> 7
        
        if (edx_3 u> esi_3)
            int32_t eax_12 = (arg1[2] - ecx_2) s>> 7
            int32_t* eax_13
            
            if (edx_3 u> eax_12)
                if (ecx_2 != 0)
                    sub_571630(ecx_2, arg1[1])
                    j__free(*arg1)
                
                int32_t ecx_11
                eax_13, ecx_11 = sub_5715c0(arg1, (ebx[1] - *ebx) s>> 7)
                
                if (eax_13.b != 0)
                    int32_t var_8_1 = 0
                    int32_t* var_2c_7 = arg2
                    int32_t var_30_5 = ecx_11
                    arg1[1] = sub_571910(eax_13, ebx[1], *ebx, *arg1)
            else
                int32_t* var_2c_2 = arg2
                int32_t* esi_6 = (esi_3 << 7) + *ebx
                int32_t ecx_6
                eax_13, ecx_6 = sub_571710(eax_12, esi_6, *ebx, ecx_2)
                int32_t* var_2c_3 = arg2
                int32_t var_30_3 = ecx_6
                arg1[1] = sub_571910(eax_13, ebx[1], esi_6, arg1[1])
        else
            int32_t* var_2c_1 = arg2
            int32_t* esi_4 = sub_571710(eax_3, ebx[1], eax_3, ecx_2)
            int32_t eax_5 = arg1[1]
            
            if (esi_4 != eax_5)
                do
                    sub_5719b0(esi_4)
                    esi_4 -= 0xffffff80
                while (esi_4 != eax_5)
                
                ebx = arg2
            
            arg1[1] = ((ebx[1] - *ebx) & 0xffffff80) + *arg1
    else
        sub_571590(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1

// 函数: sub_5b03a0
// 地址: 0x5b03a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ba400
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t* var_1c = arg1
int32_t* ebx = arg2

if (arg1 != ebx)
    void* esi_1 = *ebx
    int32_t eax_3 = ebx[1]
    
    if (esi_1 != eax_3)
        int32_t eax_8 = (eax_3 - esi_1) s/ 0x3b4
        int32_t eax_12 = (arg1[1] - *arg1) s/ 0x3b4
        
        if (eax_8 u> eax_12)
            void* esi_2 = *arg1
            void* ecx_11 = arg1[2] - esi_2
            int128_t* eax_25
            
            if (eax_8 u> ecx_11 s/ 0x3b4)
                if (esi_2 != 0)
                    int32_t var_34_6 = eax_8
                    void* var_38_6 = ecx_11
                    sub_551590(esi_2, arg1[1])
                    j__free(*arg1)
                
                int32_t ecx_21
                eax_25, ecx_21 = sub_551f90(arg1, (ebx[1] - *ebx) s/ 0x3b4)
                
                if (eax_25.b != 0)
                    int32_t var_8_1 = 0
                    int32_t var_34_8 = eax_8
                    int32_t var_38_7 = ecx_21
                    arg1[1] = sub_552120(eax_25, ebx[1], *ebx, *arg1)
            else
                void* ecx_12 = *ebx
                int32_t var_34_4 = eax_8
                int128_t* eax_24 = *arg1
                int128_t* esi_4 = eax_12 * 0x3b4 + ecx_12
                int32_t ecx_13
                eax_25, ecx_13 = sub_5b0b20(eax_24, esi_4, ecx_12, eax_24)
                int32_t var_34_5 = eax_8
                int32_t var_38_5 = ecx_13
                arg1[1] = sub_552120(eax_25, ebx[1], esi_4, arg1[1])
        else
            int32_t var_34_2 = eax_8
            int128_t* eax_13 = *arg1
            int128_t* eax_14
            int32_t ecx_6
            eax_14, ecx_6 = sub_5b0b20(eax_13, ebx[1], esi_1, eax_13)
            int32_t var_34_3 = eax_8
            int32_t var_38_3 = ecx_6
            sub_551590(eax_14, arg1[1])
            arg1[1] = (ebx[1] - *ebx) s/ 0x3b4 * 0x3b4 + *arg1
    else
        int32_t var_34_1 = arg2
        int32_t* var_38_1 = arg1
        sub_551590(*arg1, arg1[1])
        arg1[1] = *arg1

fsbase->NtTib.ExceptionList = ExceptionList
return arg1

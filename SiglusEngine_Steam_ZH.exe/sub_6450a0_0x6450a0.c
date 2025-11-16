// 函数: sub_6450a0
// 地址: 0x6450a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3748
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 s<= 0 || arg4 s<= 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

arg3[3] = arg2
arg3[4] = arg4
sub_5979b0(arg3, (arg2 * arg4) << 2)
int32_t* esi_1 = *arg3
int32_t var_34 = 0
int32_t var_30 = 0
int32_t var_2c = 0

if (esi_1 == arg3[1])
    esi_1 = nullptr

int32_t var_8_1 = 0
int32_t eax_9 = arg4 - 1 + arg2
char eax_10 = sub_6447a0(eax_9, eax_9, &var_34, 1, arg5, 1)
char eax_14
int32_t ebx

if (eax_10 != 0)
    int32_t eax_11 = var_34
    
    if (eax_11 == var_30)
        eax_11 = 0
    
    int32_t var_18_1 = eax_11
    
    if (arg4 s> 0)
        ebx = 0
        
        do
            int32_t var_28
            int32_t var_24
            sub_6c97b0(arg3, arg3[3], esi_1, arg3[4], eax_11, var_28, var_24, 0, ebx)
            ebx += 1
            eax_11 = var_18_1 + 4
            var_18_1 = eax_11
        while (ebx s< arg4)
    
    eax_14 = sub_6447a0(eax_11, eax_9, &var_34, 1, arg5, 1)

if (eax_10 == 0 || eax_14 == 0)
    ebx.b = 0
else
    int32_t ecx_3 = var_34
    int32_t eax_15 = ecx_3
    
    if (ecx_3 == var_30)
        eax_15 = 0
    
    ebx = eax_15 + ((arg4 - 1) << 2)
    
    if (arg4 s> 0)
        int32_t j_2 = arg2
        int32_t i_1 = arg4
        int32_t i
        
        do
            if (j_2 s> 0)
                int32_t j_1 = j_2
                int32_t* edx_4 = ebx - esi_1
                int32_t j
                
                do
                    int32_t eax_16 = *(edx_4 + esi_1)
                    
                    if (*esi_1 u< eax_16)
                        *esi_1 = eax_16
                    
                    esi_1 = &esi_1[1]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                j_2 = arg2
            
            ebx -= 4
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    ebx.b = 1

int32_t eax_17 = var_34

if (eax_17 != 0)
    j__free(eax_17)

eax_17.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_17

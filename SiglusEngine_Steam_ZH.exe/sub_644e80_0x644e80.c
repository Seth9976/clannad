// 函数: sub_644e80
// 地址: 0x644e80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c37a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
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
int32_t var_2c = 0
int32_t var_28 = 0
int32_t var_24 = 0

if (esi_1 == arg3[1])
    esi_1 = nullptr

int32_t var_8_1 = 0
char eax_8 = sub_6447a0(arg3, 1, &var_2c, arg4, 1, arg6)
char eax_11
struct _EXCEPTION_REGISTRATION_RECORD** i_1

if (eax_8 != 0)
    int32_t eax_9 = var_2c
    
    if (eax_9 == var_28)
        eax_9 = 0
    
    i_1 = nullptr
    int32_t var_18_1 = eax_9
    
    if (arg2 s> 0)
        do
            int32_t var_20
            int32_t var_1c
            sub_6c97b0(arg3, arg3[3], esi_1, arg3[4], eax_9, var_20, var_1c, i_1, 0)
            eax_9 = var_18_1
            i_1 += 1
        while (i_1 s< arg2)
    
    eax_11 = sub_6447a0(eax_9, arg2, &var_2c, 1, arg5, 1)

if (eax_8 == 0 || eax_11 == 0)
    i_1.b = 0
else
    int32_t ecx_3 = var_2c
    int32_t eax_12 = ecx_3
    i_1 = arg4
    
    if (ecx_3 == var_28)
        eax_12 = 0
    
    int32_t var_18_2 = eax_12
    
    if (i_1 s> 0)
        struct _EXCEPTION_REGISTRATION_RECORD** i
        
        do
            if (arg2 s> 0)
                int32_t j_1 = arg2
                int32_t* edx_3 = eax_12 - esi_1
                int32_t j
                
                do
                    int32_t eax_13 = *(edx_3 + esi_1)
                    
                    if (*esi_1 u< eax_13)
                        *esi_1 = eax_13
                    
                    esi_1 = &esi_1[1]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                eax_12 = var_18_2
            
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    i_1.b = 1

int32_t eax_14 = var_2c

if (eax_14 != 0)
    j__free(eax_14)

eax_14.b = i_1.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_14

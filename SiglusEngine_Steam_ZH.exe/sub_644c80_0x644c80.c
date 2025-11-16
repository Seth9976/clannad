// 函数: sub_644c80
// 地址: 0x644c80
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
int32_t eax_7 = *arg3
bool cond:0 = eax_7 == arg3[1]
int32_t var_2c = 0

if (cond:0)
    eax_7 = 0

int32_t var_28 = 0
int32_t var_24 = 0
int32_t var_8_1 = 0
int32_t ebx_1

if (sub_6447a0(eax_7, arg4 - 1 + arg2, &var_2c, 1, arg6, 1) != 0)
    int32_t eax_9 = var_2c
    int32_t edi_1 = eax_9
    
    if (eax_9 == var_28)
        edi_1 = 0
    
    int32_t var_20
    int32_t var_1c
    
    if (arg5 != 0)
        int32_t eax_11 = edi_1 + ((arg4 - 1) << 2)
        int32_t edi_2 = 0
        int32_t var_18_1 = eax_11
        
        if (arg4 s> 0)
            do
                sub_6c97b0(eax_11, arg3[3], eax_7, arg3[4], eax_11, var_20, var_1c, 0, edi_2)
                edi_2 += 1
                eax_11 = var_18_1 - 4
                var_18_1 = eax_11
            while (edi_2 s< arg4)
    else
        ebx_1 = 0
        
        if (arg4 s> 0)
            do
                eax_9 = sub_6c97b0(eax_9, arg3[3], eax_7, arg3[4], edi_1, var_20, var_1c, 0, ebx_1)
                ebx_1 += 1
                edi_1 += 4
            while (ebx_1 s< arg4)
    ebx_1.b = 1
else
    ebx_1.b = 0

int32_t eax_13 = var_2c

if (eax_13 != 0)
    j__free(eax_13)

eax_13.b = ebx_1.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_13

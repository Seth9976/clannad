// 函数: sub_606e60
// 地址: 0x606e60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be418
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_4c = edi
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_50
int32_t* var_40 = arg1
int32_t var_8_1 = 0
var_8_1.b = 2
int32_t arg_8
int32_t result_1

while (sub_607ed0(&arg_8, &result_1) == 0)
    int32_t var_34
    int32_t* eax_4 = sub_607100(&arg_8, &var_34)
    var_8_1.b = 3
    int32_t ecx_2 = arg1[1]
    
    if (ecx_2 == arg1[2])
        int32_t var_54_3 = ecx_2
        sub_607420(arg1)
    
    int32_t* esi_1 = arg1[1]
    
    if (esi_1 != 0)
        esi_1[5] = 0xf
        esi_1[4] = 0
        *esi_1 = 0
        
        if (eax_4[5] u>= 0x10)
            *esi_1 = *eax_4
            *eax_4 = 0
        else
            void* eax_5 = eax_4[4]
            
            if (eax_5 != 0xffffffff)
                _memcpy(esi_1, eax_4, eax_5 + 1)
        
        esi_1[4] = eax_4[4]
        esi_1[5] = eax_4[5]
        eax_4[5] = 0xf
        eax_4[4] = 0
        *eax_4 = 0
    
    arg1[1] += 0x18
    var_8_1.b = 2
    int32_t var_20
    
    if (var_20 u>= 0x10)
        j__free(var_34)
    
    int32_t arg_28
    int32_t ecx_5
    int32_t edx_1
    int32_t var_3c
    int32_t var_38
    int32_t esi_2
    
    if (arg_8 == 0)
        esi_2 = arg4
        edx_1 = esi_2
        ecx_5 = esi_2
        var_3c = edx_1
        var_38 = ecx_5
    label_606f99:
        char eax_12 = arg5
        
        if (arg2 == esi_2)
            eax_12 = 1
        
        arg5 = eax_12
    else
        int32_t var_54_6 = arg4
        sub_6064f0(&arg_8, &var_3c, arg3)
        edx_1 = var_3c
        esi_2 = arg4
        ecx_5 = var_38
        
        if (edx_1 == esi_2)
            if (ecx_5 == esi_2)
                goto label_606f99
            
            arg_28 = arg3
            arg2 = edx_1
            arg3 = ecx_5
            continue
    arg_28 = arg3
    arg2 = edx_1
    arg3 = ecx_5

int32_t var_8_2 = 0
int32_t eax_14 = arg_8

if (eax_14 != 0)
    if ((eax_14.b & 1) == 0)
        int32_t eax_16 = *(eax_14 & 0xfffffffe)
        void arg_10
        
        if (eax_16 != 0)
            eax_16(&arg_10, &arg_10, 2)
    
    arg_8 = 0

int32_t var_8_3 = 0xffffffff
int32_t result = result_1

if (result != 0 && (result.b & 1) == 0)
    result = *(result & 0xfffffffe)
    void arg_50
    
    if (result != 0)
        result = result(&arg_50, &arg_50, 2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

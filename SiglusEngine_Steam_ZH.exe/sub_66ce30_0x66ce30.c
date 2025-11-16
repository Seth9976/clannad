// 函数: sub_66ce30
// 地址: 0x66ce30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6533
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg1
int32_t var_2c = 5
int32_t* eax_3 = sub_66f630(&var_2c, 4)
int32_t var_8_1 = 0

if (arg1 != eax_3)
    sub_670c00(arg1)
    int32_t* var_18_1 = arg1
    var_8_1.b = 1
    
    if (arg1 != 0)
        sub_6703f0(arg1, eax_3)

int32_t var_8_2 = 0xffffffff
sub_670c00(&var_2c)
int32_t** esi_1 = arg1[2]

if (sub_66d700(arg2, 0x5d) != 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 1

do
    var_2c = 0
    int32_t var_8_3 = 2
    int32_t* ecx_7 = &var_2c
    int32_t eax_5 = esi_1[1]
    
    if (&var_2c u< eax_5)
        ecx_7 = *esi_1
    
    int32_t* ecx_9
    
    if (&var_2c u>= eax_5 || ecx_7 u> &var_2c)
        if (eax_5 == esi_1[2])
            int32_t* var_40_4 = ecx_7
            sub_66f5c0(esi_1)
        
        ecx_9 = esi_1[1]
        int32_t* var_18_3 = ecx_9
        int32_t* var_14_2 = ecx_9
        var_8_3.b = 4
        
        if (ecx_9 != 0)
            sub_6703f0(ecx_9, &var_2c)
    else
        if (eax_5 == esi_1[2])
            int32_t* var_40_2 = ecx_7
            sub_66f5c0(esi_1)
        
        ecx_9 = esi_1[1]
        int32_t* var_18_2 = ecx_9
        int32_t* var_14_1 = ecx_9
        var_8_3.b = 3
        
        if (ecx_9 != 0)
            sub_6703f0(ecx_9, ((&var_2c - ecx_7) & 0xfffffff0) + *esi_1)
    esi_1[1] = &esi_1[1][4]
    int32_t var_8_4 = 0xffffffff
    sub_670c00(&var_2c)
    
    if (sub_66be90(esi_1[1] - 0x10, arg2) == 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    sub_66c1d0(arg2)
    
    if (arg2[3].b == 0)
        char* ecx_15 = *arg2
        
        if (ecx_15 == arg2[1])
            arg2[2] = 0xffffffff
            break
        
        if (arg2[2] == 0xa)
            arg2[4] += 1
        
        arg2[2] = zx.d(*ecx_15)
        *arg2 = &ecx_15[1]
    else
        arg2[3].b = 0
while (arg2[2] == 0x2c)

if (arg2[2] != 0xffffffff)
    arg2[3].b = 1

int32_t result = sub_66d700(arg2, 0x5d)
fsbase->NtTib.ExceptionList = ExceptionList
return result

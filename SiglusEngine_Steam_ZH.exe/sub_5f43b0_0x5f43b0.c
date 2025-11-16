// 函数: sub_5f43b0
// 地址: 0x5f43b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd060
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char edx = 0
int32_t var_28 = 0
int32_t* var_34
char var_11_1

if (*(arg1 + 0x15e0) == 0)
    var_11_1 = 0
else
    int32_t* ecx = *(arg1 + 0x1568)
    
    if (ecx == 0)
        var_11_1 = 0
    else
        result = sub_54d980(ecx, &var_34, 0)
        edx = 1
        var_11_1 = 1
        
        if (*result == 0)
            var_11_1 = 0

int32_t* var_30

if ((edx & 1) != 0 && var_30 != 0)
    result = &var_30[1]
    bool cond:0_1 = *result != 1
    *result
    *result -= 1
    
    if (not(cond:0_1))
        (*(*var_30 + 4))(eax_2)
        result = &var_30[2]
        bool cond:1_1 = *result != 1
        *result
        *result -= 1
        
        if (not(cond:1_1))
            result = (*(*var_30 + 8))()

if (var_11_1 != 0)
    sub_54d980(*(arg1 + 0x1568), &var_34, 0)
    int32_t var_8_1 = 0
    int32_t* eax_5
    
    if (*(arg1 + 0x268) != 0)
        int32_t ecx_5 = (**(arg1 + 0x15e0))[0x37]
        
        if (ecx_5 s> 0)
            eax_5 = *(arg1 + 0x15e8)
            
            if (eax_5 s> ecx_5)
                *(arg1 + 0x15e8) = mods.dp.d(sx.q(eax_5), ecx_5)
    
    int32_t* esi_2 = var_34
    int32_t ecx_6 = *(arg1 + 0x15e8)
    eax_5.b = *(esi_2 + 0x26)
    char var_20_1 = eax_5.b
    int32_t* eax_9 = **(arg1 + 0x15e0)
    char eax_10
    int32_t ecx_8
    eax_10, ecx_8 = sub_6e3790(eax_9)
    
    if (eax_10 != 0)
        int32_t var_48_1 = ecx_8
        int32_t eax_11 = sub_6e3910(eax_9, ecx_6)
        
        if (var_20_1 != 0 || eax_11 != eax_9[0x49])
            int32_t var_48_2 = 0x2000
            int32_t var_4c_4 = eax_11
            int32_t var_1c
            char eax_13
            int32_t ecx_12
            eax_13, ecx_12 = sub_6f3b20(esi_2, eax_11, &var_1c)
            
            if (eax_13 != 0)
                int32_t var_48_3 = ecx_12
                int32_t var_4c_5 = var_20_1.d
                sub_6e39e0(**(arg1 + 0x15e0), eax_11, eax_9, var_1c, ecx_12)
                int32_t var_48_5 = sub_6f5460(esi_2, &var_1c)
                sub_6f3c40(esi_2)
            
            *(esi_2 + 0x26) = 0
    
    void* edx_4 = *(arg1 + 0x1580)
    sub_628eb0(edx_4 + 4, edx_4 + 0x120, arg1 + 0x12d0, edx_4 + 4)
    int32_t* var_2c = esi_2
    int32_t* var_28_3 = var_30
    
    if (var_30 != 0)
        var_30[1]
        var_30[1] += 1
    
    var_8_1.b = 1
    sub_5b17d0(*(arg1 + 0x1580) + 0xd8, &var_2c)
    var_8_1.b = 0
    
    if (var_30 != 0)
        bool cond:3_1 = var_30[1] != 1
        var_30[1]
        var_30[1] -= 1
        
        if (not(cond:3_1))
            (*(*var_30 + 4))(eax_2)
            bool cond:5_1 = var_30[2] != 1
            var_30[2]
            var_30[2] -= 1
            
            if (not(cond:5_1))
                (*(*var_30 + 8))()
    
    result = *(arg1 + 0x1580)
    int32_t var_8_2 = 0xffffffff
    result[6] = 0
    
    if (var_30 != 0)
        result = &var_30[1]
        bool cond:4_1 = *result != 1
        *result
        *result -= 1
        
        if (not(cond:4_1))
            (*(*var_30 + 4))(eax_2)
            result = &var_30[2]
            struct _EXCEPTION_REGISTRATION_RECORD* ebx_1 = *result
            *result -= 1
            
            if (ebx_1 == 1)
                result = (*(*var_30 + 8))()

fsbase->NtTib.ExceptionList = ExceptionList
return result

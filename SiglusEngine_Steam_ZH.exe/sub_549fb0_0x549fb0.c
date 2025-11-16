// 函数: sub_549fb0
// 地址: 0x549fb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1098
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = *arg2
int32_t eax_3 = *arg4
int32_t result

if (ecx == 0 || ecx == 1 || ecx == 2 || ecx == 3 || ecx == 4 || ecx == 5 || ecx == 6 || ecx == 7)
    int32_t var_40_1 = 0
    int32_t var_34_1 = 0
    int32_t var_38_1 = 0
    
    if (ecx != 0 && ecx != 1 && ecx != 2 && ecx != 3)
        var_34_1 = 0x80000000
        var_38_1 = 0x7fffffff
    
    if (eax_3 != 0)
        if (eax_3 != 1)
            void* eax_11 = arg4[1]
            var_38_1 = *(eax_11 + 0x6fc)
            var_34_1 = *(eax_11 + 0x598)
        
        var_40_1 = *(arg4[1] + 0x434)
    
    void* eax_15 = arg4[1]
    char var_3c_1 = 0
    char var_44_1 = 0
    int32_t edx_4 = *(eax_15 + 0x2d0)
    int32_t edx_5 = *(eax_15 + 0x16c)
    int32_t eax_16 = *(eax_15 + 8)
    
    if (ecx == 1 || ecx == 5)
        var_3c_1 = 1
    else if (ecx == 2 || ecx == 6)
        var_44_1 = 1
        var_3c_1 = 1
    
    int32_t esi_2 = arg4[1]
    int32_t eax_21 = (arg4[2] - esi_2) s/ 0x164 * 0x164
    void* const ecx_17 = *(eax_21 + esi_2 - 0x1c)
    result = *(eax_21 + esi_2 - 8)
    
    if (ecx_17 == *(eax_21 + esi_2 - 0x18))
        ecx_17 = nullptr
    
    if (eax_16 == 0)
        int32_t edx_10
        
        if (result s< 1)
            edx_10 = 0
        else
            edx_10 = *(ecx_17 + 8)
        
        int32_t eax_22
        
        if (result s< 2)
            eax_22 = 0
        else
            eax_22 = *(ecx_17 + 0x16c)
        
        sub_5fbab0(arg3, eax_22, edx_10, edx_5, edx_4, var_40_1, var_34_1, var_38_1, var_3c_1, 
            var_44_1)
    else if (eax_16 == 1)
        int32_t edx_11
        
        if (result s< eax_16)
            edx_11 = 0
        else
            edx_11 = *(ecx_17 + 8)
        
        int32_t eax_23
        
        if (result s< 2)
            eax_23 = 0
        else
            eax_23 = *(ecx_17 + 0x16c)
        
        sub_5fbbe0(arg3, eax_23, edx_11, edx_5, edx_4, var_40_1, var_34_1, var_38_1, var_3c_1, 
            var_44_1)
    else if (eax_16 == 2)
        int32_t esi_3
        
        if (result s< 1)
            esi_3 = 0
        else
            esi_3 = *(ecx_17 + 8)
        
        int32_t edx_12
        
        if (result s< 2)
            edx_12 = 0
        else
            edx_12 = *(ecx_17 + 0x16c)
        
        int32_t eax_24
        
        if (result s< 3)
            eax_24 = 0
        else
            eax_24 = *(ecx_17 + 0x2d0)
        
        sub_5fbd10(arg3, esi_3, edx_5, edx_4, var_40_1, edx_12, eax_24, var_34_1, var_38_1, 
            var_3c_1, var_44_1)
else if (ecx == 8)
    void* esi_1 = arg4[1]
    
    if ((arg4[2] - esi_1) s/ 0x164 s< 1)
        sub_5fbe40(arg3, 0)
    else
        sub_5fbe40(arg3, *(esi_1 + 8))
else if (ecx == 0xa)
    sub_5fbe70(arg3, 0)
else if (ecx == 0xb)
    sub_5fbe70(arg3, 1)
else if (ecx != 9)
    int32_t var_1c_1 = 7
    int32_t var_20_1 = 0
    int16_t var_30 = 0
    sub_52e720(&var_30, 0xad86d4, 0x17)
    int32_t var_8_1 = 0
    sub_684160(data_bac424, 2, &var_30)
    sub_52e8a0(&var_30)
else if (*(arg3 + 0xa0) != 0xffffffff)
    int32_t ecx_8 = *(arg3 + 0xb4) - 1
    int32_t ecx_9 = neg.d(ecx_8)
    sub_677bb0(sbb.d(ecx_9, ecx_9, ecx_8 != 0) + 2)
else
    sub_677bb0(0)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

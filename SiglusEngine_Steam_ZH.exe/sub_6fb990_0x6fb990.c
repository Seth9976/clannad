// 函数: sub_6fb990
// 地址: 0x6fb990
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9ce140
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char edx = 0
int32_t var_30 = 0
char var_31_1
void var_28

if (arg2 == 0)
    var_31_1 = 0
else
    edx = 1
    var_31_1 = 1
    
    if (*sub_6f7ff0(arg2, &var_28) == 0)
        var_31_1 = 0

int32_t* var_24

if ((edx & 1) != 0 && var_24 != 0)
    bool cond:0_1 = var_24[1] != 1
    var_24[1]
    var_24[1] -= 1
    
    if (not(cond:0_1))
        (*(*var_24 + 4))(eax_2)
        bool cond:1_1 = var_24[2] != 1
        var_24[2]
        var_24[2] -= 1
        
        if (not(cond:1_1))
            (*(*var_24 + 8))()

struct _EXCEPTION_REGISTRATION_RECORD** result

if (var_31_1 != 0)
    int32_t* esi_2 = data_4ebe4b0
    int32_t* eax_5 = sub_6f7ff0(arg2, &var_28)
    int32_t var_c_1 = 0
    void* edx_2 = *(arg2 + 0xa4)
    int32_t edx_3
    
    if (edx_2 == 0)
        edx_3 = 0
    else
        edx_3 = *(edx_2 + 0xc)
    
    (*(*esi_2 + 0x190))(esi_2, 0, **eax_5, 0, edx_3)
    int32_t var_c_2 = 0xffffffff
    
    if (var_24 != 0)
        bool cond:2_1 = var_24[1] != 1
        var_24[1]
        var_24[1] -= 1
        
        if (not(cond:2_1))
            (*(*var_24 + 4))(eax_2)
            bool cond:4_1 = var_24[2] != 1
            var_24[2]
            var_24[2] -= 1
            
            if (not(cond:4_1))
                (*(*var_24 + 8))()
    
    int32_t* esi_4 = data_4ebe4b0
    int32_t var_c_3 = 1
    void var_20
    (*(*esi_4 + 0x1a0))(esi_4, **sub_6f8020(arg2, &var_20))
    int32_t var_c_4 = 0xffffffff
    int32_t* var_1c
    
    if (var_1c != 0)
        bool cond:3_1 = var_1c[1] != 1
        var_1c[1]
        var_1c[1] -= 1
        
        if (not(cond:3_1))
            (*(*var_1c + 4))(eax_2)
            int32_t ebx_1 = var_1c[2]
            var_1c[2] -= 1
            
            if (ebx_1 == 1)
                (*(*var_1c + 8))()
    
    void* eax_17 = *(arg2 + 0xa4)
    int32_t* edx_5 = data_4ebe4b0
    int32_t ecx_14
    
    if (eax_17 == 0)
        ecx_14 = 0
    else
        ecx_14 = *(eax_17 + 8)
    
    (*(*edx_5 + 0x164))(edx_5, ecx_14)
    int32_t* var_48_7 = &var_30
    var_30 = 0
    
    if ((*(*arg1 + 0x18))(arg2, arg3, var_48_7).b == 0)
        goto label_6fbb7d
    
    int32_t* ecx_16 = data_4ebe4b0
    int32_t var_4c_5 = *(arg2 + 0xbc)
    int32_t eax_21 = *ecx_16
    int32_t var_54_2 = *(arg2 + 0xb4)
    int32_t var_58_2 = 0
    int32_t var_5c = 4
    int32_t eax_22 = (*(eax_21 + 0x148))(ecx_16, var_5c, var_58_2, var_54_2, arg4, var_4c_5, arg5)
    
    if (eax_22 s< 0)
        int16_t* eax_23
        int32_t edx_6
        eax_23, edx_6 = sub_52e820(&var_5c, u"DrawIndexedPrimitive")
        sub_6f1a40(eax_23, edx_6, eax_22, var_5c)
    label_6fbb7d:
        result.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    if ((*(*arg1 + 0x2c))(arg2, var_30).b == 0)
        goto label_6fbb7d

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result

// 函数: sub_6fbbc0
// 地址: 0x6fbbc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ce170
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0
int32_t var_18 = 0
int32_t var_30 = 0
int32_t var_2c = 0
int32_t var_8_1 = 0
int32_t ebx = 0
int32_t result_1 = 0
int32_t var_24 = 0
int32_t var_20 = 0
var_8_1.b = 1
int32_t i = 0
int32_t i_1 = 0
int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x66666667, *(arg4 + 8) - *(arg4 + 4))
int32_t edx_1 = edx s>> 5

if ((edx_1 u>> 0x1f) + edx_1 s> 0)
    int32_t edx_3
    
    do
        int32_t eax_7 = *(arg4 + 4)
        int32_t ecx_3 = i * 0xa
        
        if (*(eax_7 + (ecx_3 << 3) + 0x4c) != 0)
            int32_t* ecx_4 = &var_34
            
            if (*(eax_7 + (ecx_3 << 3) + 0x4d) == 0)
                ecx_4 = &result_1
            
            sub_59a180(ecx_4, &i_1)
            i = i_1
        
        i += 1
        int32_t eax_8
        int32_t edx_2
        edx_2:eax_8 = muls.dp.d(0x66666667, *(arg4 + 8) - *(arg4 + 4))
        i_1 = i
        edx_3 = edx_2 s>> 5
    while (i s< (edx_3 u>> 0x1f) + edx_3)
    ebx = var_24
    var_18 = var_30

if (data_4ebe71c != 0)
    int32_t* eax_13 = data_4ebe4b0
    data_4ebe71c = 0
    (*(*eax_13 + 0xe4))(eax_13, 0x1b, 0)

int32_t result_2 = result_1
int32_t esi = 0
int32_t ebx_2 = (ebx - result_2) s>> 2

if (ebx_2 s> 0)
    do
        if ((*(*arg1 + 0x3c))(arg2, arg3, arg4, *(result_2 + (esi << 2))) == 0)
        label_6fbd68:
            ebx_2.b = 0
            goto label_6fbd32
        
        result_2 = result_1
        esi += 1
    while (esi s< ebx_2)

if (data_4ebe71c != 1)
    int32_t* eax_17 = data_4ebe4b0
    data_4ebe71c = 1
    (*(*eax_17 + 0xe4))(eax_17, 0x1b, 1)

int32_t esi_1 = 0
int32_t edx_4 = var_34
ebx_2 = (var_18 - edx_4) s>> 2

if (ebx_2 s> 0)
    do
        if ((*(*arg1 + 0x3c))(arg2, arg3, arg4, *(edx_4 + (esi_1 << 2))) == 0)
            goto label_6fbd68
        
        edx_4 = var_34
        esi_1 += 1
    while (esi_1 s< ebx_2)

ebx_2.b = 1
label_6fbd32:
int32_t result = result_1

if (result != 0)
    j__free(result)

int32_t ecx_11 = var_34

if (ecx_11 != 0)
    j__free(ecx_11)

result.b = ebx_2.b
fsbase->NtTib.ExceptionList = ExceptionList
return result

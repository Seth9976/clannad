// 函数: sub_67f040
// 地址: 0x67f040
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c77a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5c3760(*(arg1[3] + 4))
void* eax_4 = arg1[3]
*(eax_4 + 4) = eax_4
int32_t* eax_5 = arg1[3]
*eax_5 = eax_5
void* eax_6 = arg1[3]
*(eax_6 + 8) = eax_6
arg1[4] = 0
int32_t var_1c = 7
int32_t var_20 = 0
int16_t var_30 = 0
int32_t var_18 = 0
int32_t var_8_1 = 0
int32_t i = 0
int32_t eax_7
int32_t edx
edx:eax_7 = muls.dp.d(0x6bca1af3, arg1[1] - *arg1)
int32_t edx_1 = edx s>> 5

if ((edx_1 u>> 0x1f) + edx_1 s> 0)
    int32_t esi_1 = 0
    int32_t edx_3
    
    do
        void** eax_11 = *arg1 + esi_1
        
        if (&var_30 != eax_11)
            sub_52e3c0(&var_30, eax_11, 0, 0xffffffff)
        
        int32_t var_18_1 = *arg1 + esi_1
        int32_t* eax_14
        void* ecx_5
        eax_14, ecx_5 = sub_5c37c0(&var_30)
        int32_t* var_50_2 = eax_14
        void* var_54_1 = &eax_14[4]
        void* var_3c
        sub_5c3870(&arg1[3], &var_3c, ecx_5)
        esi_1 += 0x4c
        i += 1
        int32_t eax_16
        int32_t edx_2
        edx_2:eax_16 = muls.dp.d(0x6bca1af3, arg1[1] - *arg1)
        edx_3 = edx_2 s>> 5
    while (i s< (edx_3 u>> 0x1f) + edx_3)
    
    if (var_1c u>= 8)
        j__free(var_30.d)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

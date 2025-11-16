// 函数: sub_713a40
// 地址: 0x713a40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d1660
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t edx = data_4ebee40
int32_t ecx_2 = (edx - data_4ebee3c) s>> 3
int32_t var_18

if (ecx_2 u> 0x80)
    int32_t var_2c_1 = var_18
    int32_t var_30_1 = ecx_2
    void* esi_1 = edx + ((0x80 - ecx_2) << 3)
    eax_3 = sub_579a70(esi_1, edx)
    data_4ebee40 = esi_1
else if (ecx_2 u< 0x80)
    sub_713c40(0x80 - ecx_2)
    int32_t var_8_1 = 0
    int32_t* ecx_6 = data_4ebee40
    int32_t var_2c_3 = var_18
    sub_6a64b0(ecx_6, 0x80 - ((ecx_6 - data_4ebee3c) s>> 3))
    int32_t ecx_7 = data_4ebee40
    int32_t eax_12 = ecx_7 + ((0x80 - ((ecx_7 - data_4ebee3c) s>> 3)) << 3)
    data_4ebee40 = eax_12
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_12
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3

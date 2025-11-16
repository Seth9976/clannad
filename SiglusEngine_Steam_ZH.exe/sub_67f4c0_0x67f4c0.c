// 函数: sub_67f4c0
// 地址: 0x67f4c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c77d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* var_18 = arg1
int32_t edx = arg1[1]
int32_t ecx_2 = (edx - *arg1) s>> 4

if (ecx_2 u> arg2)
    int32_t var_2c_1 = arg2
    void* esi_3 = ((arg2 - ecx_2) << 4) + edx
    int32_t var_30_1 = ecx_2
    eax_3 = sub_642920(esi_3, edx)
    arg1[1] = esi_3
else if (ecx_2 u< arg2)
    sub_67f6f0(arg1, arg2 - ecx_2)
    int32_t var_8_1 = 0
    void* ecx_7 = arg1[1]
    int32_t var_2c_3 = arg2
    sub_67fc80(ecx_7, arg2 - ((ecx_7 - *arg1) s>> 4))
    int32_t eax_11 = (arg1[1] - *arg1) s>> 4
    arg1[1] += (arg2 - eax_11) << 4
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_11

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3

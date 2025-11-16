// 函数: sub_54d200
// 地址: 0x54d200
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b13a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* var_18 = arg1
int32_t edx = arg1[1]
int32_t ecx_2 = (edx - *arg1) s>> 5

if (ecx_2 u> arg2)
    int32_t var_2c_1 = arg2
    int32_t* esi_3 = ((arg2 - ecx_2) << 5) + edx
    int32_t var_30_1 = ecx_2
    eax_3 = sub_54d680(esi_3, edx)
    arg1[1] = esi_3
else if (ecx_2 u< arg2)
    sub_54d3d0(arg1, arg2 - ecx_2)
    int32_t var_8_1 = 0
    int16_t* ecx_7 = arg1[1]
    int32_t var_2c_3 = arg2
    sub_54d5a0(ecx_7, arg2 - ((ecx_7 - *arg1) s>> 5))
    int32_t eax_11 = (arg1[1] - *arg1) s>> 5
    arg1[1] += (arg2 - eax_11) << 5
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_11

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3

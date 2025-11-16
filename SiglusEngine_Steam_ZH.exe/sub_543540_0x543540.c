// 函数: sub_543540
// 地址: 0x543540
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0db0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t esi = arg1[1]
int32_t result
int32_t edx_2
edx_2:result = muls.dp.d(0x2aaaaaab, esi - *arg1)
int32_t edx_3 = edx_2 s>> 2
int32_t ecx_2 = (edx_3 u>> 0x1f) + edx_3

if (ecx_2 u> 8)
    result = esi + (8 - ecx_2) * 0x18
    arg1[1] = result
else if (ecx_2 u< 8)
    sub_543630(arg1, 8 - ecx_2)
    int32_t var_8_1 = 0
    int32_t* var_2c_2 = arg1
    int32_t eax_6
    int32_t edx_4
    edx_4:eax_6 = muls.dp.d(0x2aaaaaab, arg1[1] - *arg1)
    int32_t edx_5 = edx_4 s>> 2
    sub_5437d0(arg1[1], 8 - ((edx_5 u>> 0x1f) + edx_5))
    esi = arg1[1]
    int32_t eax_10
    int32_t edx_7
    edx_7:eax_10 = muls.dp.d(0x2aaaaaab, esi - *arg1)
    int32_t edx_8 = edx_7 s>> 2
    result = esi + (8 - ((edx_8 u>> 0x1f) + edx_8)) * 0x18
    arg1[1] = result

fsbase->NtTib.ExceptionList = ExceptionList
return result

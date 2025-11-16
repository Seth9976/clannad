// 函数: sub_6695d0
// 地址: 0x6695d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c5ff0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* var_18 = arg1
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x2aaaaaab, arg2[1] - *arg2)
int32_t edx_3 = edx_2 s>> 3
int32_t eax_7
int32_t ecx
eax_7, ecx = sub_6697d0(arg1, (edx_3 u>> 0x1f) + edx_3)

if (eax_7.b != 0)
    int32_t var_8_1 = 0
    int32_t* var_2c_1 = arg2
    int32_t var_30_1 = ecx
    arg1[1] = sub_66d4f0(eax_7, arg2[1], *arg2, *arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1

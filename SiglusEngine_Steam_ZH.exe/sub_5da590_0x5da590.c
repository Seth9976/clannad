// 函数: sub_5da590
// 地址: 0x5da590
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bc360
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t ebx = arg1[1]
int32_t esi_1 = ebx - *arg1
int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x92492493, esi_1)
int32_t esi_4 = esi_1 s/ 0x1c0

if (esi_4 u> arg2)
    void* edi_3 = (arg2 - esi_4) * 0x1c0 + ebx
    void* esi_5 = edi_3
    
    if (edi_3 != ebx)
        do
            eax_3 = sub_563840(esi_5)
            esi_5 += 0x1c0
        while (esi_5 != ebx)
    
    arg1[1] = edi_3
else if (esi_4 u< arg2)
    sub_5da720(arg1, arg2 - esi_4)
    int32_t var_8_1 = 0
    int32_t var_2c_1 = arg2
    sub_5da960(arg1[1], arg2 - (arg1[1] - *arg1) s/ 0x1c0)
    int32_t eax_14 = (arg2 - (arg1[1] - *arg1) s/ 0x1c0) * 0x1c0
    arg1[1] += eax_14
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_14

fsbase->NtTib.ExceptionList = ExceptionList
return eax_3

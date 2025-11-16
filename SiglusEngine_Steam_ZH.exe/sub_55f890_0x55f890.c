// 函数: sub_55f890
// 地址: 0x55f890
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9afe48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = *arg2
void* ecx = *arg4
void* var_44_3

if (result == 0)
    var_44_3 = ecx
    sub_6018e0(arg3, *(arg4[1] + 8))
else if (result == 5)
    void** eax_4 = arg4[1] + 0xc
    int32_t var_44_1 = 7
    int32_t var_48_1 = 0
    int16_t var_58 = 0
    sub_52e3c0(&var_58, eax_4, 0, 0xffffffff)
    sub_601740(arg3, nullptr, var_58)
else if (result == 6)
    void* var_44_2 = ecx
    sub_601610(arg3, *(arg4[1] + 8))
else if (result == 9)
    var_44_3 = ecx
    sub_6018e0(arg3, *(arg4[1] + 8))
else if (result != 7)
    if (result == 8)
        sub_601b60(arg3, 0)
    else if (result == 0xa)
        sub_601b60(arg3, 1)
    else if (result == 0xb)
        sub_677bb0(sub_601c40(arg3))
    else if (result != 1)
        if (result != 2)
            if (result != 3)
                if (result != 4)
                    void* var_44_14 = 0x14
                    int32_t var_1c_1 = 7
                    void* const var_48_10 = &data_ad8f0c
                    int32_t var_20_1 = 0
                    int16_t var_30 = 0
                    sub_52e720(&var_30, var_48_10, var_44_14)
                    int32_t var_8_1 = 0
                    sub_684160(data_bac424, 2, &var_30)
                    sub_52e8a0(&var_30)
                else
                    sub_677bb0(*(arg3 + 0xa4))
            else if (ecx == 0)
                sub_601e10(arg3, ecx, ecx)
            else if (ecx == 1)
                sub_601e10(arg3, nullptr, *(arg4[1] + 8))
        else if (ecx == 0)
            sub_601e10(arg3, 0xff, ecx)
        else if (ecx == 1)
            sub_601e10(arg3, 0xff, *(arg4[1] + 8))
    else if (ecx == 0)
        sub_601e10(arg3, *(arg4[1] + 8), ecx)
    else if (ecx == 1)
        void* eax_10 = arg4[1]
        sub_601e10(arg3, *(eax_10 + 8), *(eax_10 + 0x16c))
else if (ecx == 0)
    sub_601a10(arg3, 0x64)
else if (ecx == 1)
    sub_601a10(arg3, *(arg4[1] + 8))
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

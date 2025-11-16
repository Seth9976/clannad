// 函数: sub_5326e0
// 地址: 0x5326e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9afe19
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg3
int32_t var_14 = 0
arg3[5] = 7
arg3[4] = 0
*arg3 = 0
int32_t var_8_1 = 0
int32_t edi = arg3[4]
void* eax_4 = arg2[4] + arg4[4]
int32_t var_14_1 = 1

if (edi u<= eax_4 && arg3[5] != eax_4 && sub_52e660(arg3, eax_4, 1) != 0)
    bool cond:0_1 = arg3[5] u< 8
    arg3[4] = edi
    int32_t* eax_6
    
    if (cond:0_1)
        eax_6 = arg3
    else
        eax_6 = *arg3
    
    *(eax_6 + (edi << 1)) = 0

sub_532870(arg3, arg2, 0, 0xffffffff)
sub_532870(arg3, arg4, 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3

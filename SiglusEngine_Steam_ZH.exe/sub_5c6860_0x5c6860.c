// 函数: sub_5c6860
// 地址: 0x5c6860
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bb6d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
bool cond:0 = (arg1[0x28] & 0x4000) == 0
int32_t* arg_10
*arg_10 = 0

if (cond:0)
    arg1[0x26] |= 0x20
    
    if ((arg1[0x26].b & 0x40) == 0)
        sub_5c6930(arg1, &arg_10)
else if (arg1[0x19] != 0 && (arg1[0x26].b & 1) == 0)
    arg_10 = nullptr
    int32_t var_8_1 = 0
    int32_t* eax_5 = (*(*arg1 + 0x10))(eax_2)
    (**eax_5)(eax_5, 0xaf24cc, &arg_10)
    int32_t* eax_6 = arg_10
    
    if (eax_6 != 0)
        int32_t* edx_1 = arg1[0x19]
        (*(*edx_1 + 0x2c))(edx_1, 0xfffffffb, 0, eax_6, 0, arg1[1], &arg1[0x2d])
        eax_6 = arg_10
    
    int32_t var_8_2 = 0xffffffff
    
    if (eax_6 != 0)
        (*(*eax_6 + 8))(eax_6)

fsbase->NtTib.ExceptionList = ExceptionList
return 0

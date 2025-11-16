// 函数: sub_4db2e0
// 地址: 0x4db2e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_605548
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
        Concurrency::details::_Micro_queue::_Pop_finalizer::~_Pop_finalizer(arg1, &arg_10)
else if (arg1[0x19] != 0 && (arg1[0x26].b & 1) == 0)
    arg_10 = nullptr
    int32_t var_8_1 = 0
    int32_t* eax_5 = (*(*arg1 + 0x10))(eax_2)
    (**eax_5)(eax_5, 0x61d56c, &arg_10)
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

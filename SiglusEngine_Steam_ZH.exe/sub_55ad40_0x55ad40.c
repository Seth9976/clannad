// 函数: sub_55ad40
// 地址: 0x55ad40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1130
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg4 != arg5)
    int32_t edx = *arg4
    
    if (edx == 1)
        sub_5c3c70(arg3)
    else if (edx == 0)
        Concurrency::details::_StructuredTaskCollection::~_StructuredTaskCollection(arg3, 
            arg6[1] + 0xc)
    else if (edx == 4)
        int32_t edx_1 = *arg6
        
        if (edx_1 == 0)
            sub_677bb0(*(arg3 + 0xbc))
        else if (edx_1 == 1)
            *(arg3 + 0xbc) = *(arg6[1] + 8)
    else if (edx == 5)
        int32_t edx_2 = *arg6
        
        if (edx_2 == 0)
            sub_677bb0(*(arg3 + 0xe8))
        else if (edx_2 == 1)
            *(arg3 + 0xe8) = *(arg6[1] + 8)
    else if (edx == 2)
        sub_557e50(&arg4[1], arg2, arg3 + 0xb8, &arg4[1], arg5, arg6)
    else if (edx != 3)
        void var_48
        int16_t* eax_9 = sub_5483b0(arg3, &var_48)
        int32_t var_8_1 = 0
        void var_30
        int16_t* eax_10 = sub_548cb0(eax_9, 0xad88a4, &var_30, eax_9)
        var_8_1.b = 1
        sub_684160(data_bac424, 2, eax_10)
        sub_52e8a0(&var_30)
        sub_52e8a0(&var_48)
    else
        sub_557e50(&arg4[1], arg2, arg3 + 0xe4, &arg4[1], arg5, arg6)
else
    arg6[5] = arg3

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

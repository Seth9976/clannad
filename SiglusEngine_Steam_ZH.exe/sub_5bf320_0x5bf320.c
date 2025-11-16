// 函数: sub_5bf320
// 地址: 0x5bf320
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bb1f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct boost::any::placeholder::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct boost::any::placeholder::VTable** var_14_1 = arg1
int32_t var_8_1 = 0
int32_t* edi = arg1[2]

if (edi != 0)
    bool cond:1_1 = edi[1] != 1
    edi[1]
    edi[1] -= 1
    
    if (not(cond:1_1))
        (*(*edi + 4))(eax_2)
        int32_t ebx_1 = edi[2]
        edi[2] -= 1
        
        if (ebx_1 == 1)
            (*(*edi + 8))()

*arg1 = &boost::any::placeholder::`vftable'

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1

// 函数: sub_67d400
// 地址: 0x67d400
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c75b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
int32_t var_8_1 = 0
int32_t* edi = arg1[0x10]

if (edi != 0)
    bool cond:0_1 = edi[1] != 1
    result = edi[1]
    edi[1] -= 1
    
    if (not(cond:0_1))
        (*(*edi + 4))(eax_2)
        result = &edi[2]
        struct _EXCEPTION_REGISTRATION_RECORD* ebx_1 = *result
        *result -= 1
        
        if (ebx_1 == 1)
            result = (*(*edi + 8))()

int32_t var_8_2 = 0xffffffff
int32_t ecx_3 = *arg1

if (ecx_3 s>= 0)
    int32_t eax_5 = data_4ebe33c
    *(eax_5 + (ecx_3 << 2)) -= 1
    result = data_4ebe33c
    
    if (result[*arg1] == 0)
        result = sub_59a180(&data_4ebe330, arg1)
    
    *arg1 = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
return result

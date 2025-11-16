// 函数: sub_687130
// 地址: 0x687130
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c80a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1c = nullptr
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_8_1 = 0
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_6b7be0(arg2, &var_1c)
int32_t* esi = var_1c
int32_t ebx

if (result.b == 0)
    ebx.b = 0
else if (var_18 - esi u>= 8)
    int32_t* eax_4 = esi
    
    if (esi == var_18)
        eax_4 = nullptr
    
    int32_t ecx_3
    result, ecx_3 = sub_687200(arg1, eax_4)
    
    if (result.b != 0)
        ebx.b = 1
    else
        void** var_34_2 = arg2
        int32_t var_38_1 = ecx_3
        sub_6332b0(arg1[6], arg1[7])
        arg1[7] = arg1[6]
        ebx.b = 0
else
    ebx.b = 0

if (esi != 0)
    j__free(esi)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result

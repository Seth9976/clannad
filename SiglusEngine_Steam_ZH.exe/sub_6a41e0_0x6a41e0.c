// 函数: sub_6a41e0
// 地址: 0x6a41e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ca0a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
struct _EXCEPTION_REGISTRATION_RECORD** ebx = nullptr
int32_t var_18 = 0

if (arg1 != 0)
    if (arg1 u<= 0x1ffffff)
        eax_3 = sub_745f3f(arg1 << 7)
        ebx = eax_3
        struct _EXCEPTION_REGISTRATION_RECORD** var_18_1 = ebx
    
    if (arg1 u> 0x1ffffff || ebx == 0)
        sub_743132()
        noreturn

int32_t var_8_1 = 0
int32_t var_2c_2 = arg1
sub_571910(eax_3, data_4ebe2a0, data_4ebe29c, ebx)
int32_t var_8_2 = 0xffffffff
int32_t ecx_1 = data_4ebe2a0
void* esi = data_4ebe29c
int32_t eax_8 = (ecx_1 - esi) s>> 7

if (esi != 0)
    if (esi != ecx_1)
        do
            sub_5719b0(esi)
            esi -= 0xffffff80
        while (esi != ecx_1)
        
        esi = data_4ebe29c
    
    j__free(esi)

void* result = &ebx[eax_8 * 0x20]
data_4ebe2a4 = &ebx[arg1 * 0x20]
data_4ebe2a0 = result
data_4ebe29c = ebx
fsbase->NtTib.ExceptionList = ExceptionList
return result

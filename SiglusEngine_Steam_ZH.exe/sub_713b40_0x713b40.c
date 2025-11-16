// 函数: sub_713b40
// 地址: 0x713b40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d1680
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
struct _EXCEPTION_REGISTRATION_RECORD** esi = nullptr
int32_t var_18 = 0

if (arg1 != 0)
    if (arg1 u> 0x1fffffff)
        sub_743132()
        noreturn
    
    eax_3 = sub_745f3f(arg1 << 3)
    esi = eax_3
    struct _EXCEPTION_REGISTRATION_RECORD** var_18_1 = esi
    
    if (esi == 0)
        sub_743132()
        noreturn

int32_t var_8_1 = 0
int32_t var_2c_2 = arg1
sub_579fa0(eax_3, data_4ebee40, data_4ebee3c, esi)
int32_t var_8_2 = 0xffffffff
int32_t edx_1 = data_4ebee40
void* ecx_1 = data_4ebee3c

if (ecx_1 != 0)
    int32_t var_2c_3 = arg1
    void* var_30_1 = ecx_1
    sub_579a70(ecx_1, edx_1)
    j__free(data_4ebee3c)

data_4ebee3c = esi
data_4ebee44 = &esi[arg1 * 2]
void* result = &esi[((edx_1 - ecx_1) s>> 3) * 2]
data_4ebee40 = result
fsbase->NtTib.ExceptionList = ExceptionList
return result

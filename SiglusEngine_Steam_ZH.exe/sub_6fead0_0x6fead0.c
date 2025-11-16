// 函数: sub_6fead0
// 地址: 0x6fead0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ce6de
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 2
int32_t* eax_3 = *arg1
*arg1 = 0

if (eax_3 != 0)
    (*(*eax_3 + 8))(eax_3)

var_8_1.b = 1
int32_t result = sub_6fe940(&arg1[7])
var_8_1.b = 0
void* ecx_2 = arg1[1]

if (ecx_2 != 0)
    int32_t* var_20_2 = arg1
    void* var_24_1 = ecx_2
    sub_6ff380(ecx_2, arg1[2])
    result = j__free(arg1[1])
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0

int32_t var_8_2 = 0xffffffff
int32_t* ecx_3 = *arg1

if (ecx_3 != 0)
    result = (*(*ecx_3 + 8))(ecx_3)

fsbase->NtTib.ExceptionList = ExceptionList
return result

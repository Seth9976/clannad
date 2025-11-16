// 函数: sub_6f65e0
// 地址: 0x6f65e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cd820
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_3c = arg1
int32_t var_8_1 = 0
*arg1 = 0
var_8_1.b = 1
void var_38
(*(*arg2 + 0x30))(arg2, &var_38)
int32_t* eax_4 = arg2
int32_t* edi = eax_4

if (eax_4 != 0)
    (*(*eax_4 + 4))(eax_4)
    eax_4 = arg2

int32_t* ecx_2 = *arg1
*arg1 = edi

if (ecx_2 != 0)
    (*(*ecx_2 + 8))(ecx_2)
    eax_4 = arg2

int32_t var_20
arg1[1] = var_20
int32_t var_1c
arg1[2] = var_1c
arg1[3] = var_20
arg1[4] = var_1c
int32_t var_8_2 = 0xffffffff

if (eax_4 != 0)
    (*(*eax_4 + 8))(eax_4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1

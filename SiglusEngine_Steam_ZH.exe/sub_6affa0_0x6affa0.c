// 函数: sub_6affa0
// 地址: 0x6affa0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9cabc0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = __security_cookie ^ &var_50
int32_t entry___saved_ebx
int32_t __saved_ebx = entry___saved_ebx
int32_t __saved_esi
int32_t eax_4 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_34
sub_52e820(&var_34, arg3 + 0x1c)
int32_t var_c_1 = 0
int16_t var_4c
int32_t ecx_2 = sub_52e820(&var_4c, arg2 + 0x1c)
var_c_1.b = 1
int32_t* eax_8 = &var_34
int32_t var_24
int32_t var_60_2 = var_24
int32_t var_20

if (var_20 u>= 8)
    eax_8 = var_34

int16_t* var_3c
entry___saved_ebx.b = sub_536340(&var_4c, ecx_2, var_3c, eax_8) s< 0
int32_t var_38

if (var_38 u>= 8)
    j__free(var_4c.d)

int32_t var_38_1 = 7
int32_t var_3c_1 = 0
var_4c = 0

if (var_20 u>= 8)
    j__free(var_34)
    int32_t __saved_ebp
    return sub_6b0063(&__saved_ebp, eax_4, arg1, __saved_ebx, var_50) __tailcall

int32_t result
result.b = entry___saved_ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_50)
return result

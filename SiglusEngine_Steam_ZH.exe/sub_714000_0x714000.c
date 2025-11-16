// 函数: sub_714000
// 地址: 0x714000
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d0ff8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_541b40(&var_2c, arg2, 0, 0xffffffff)
int32_t edi = 0
int32_t var_8_1 = 0

if (var_1c u> 0)
    do
        char* edx = &var_2c
        char* esi_1 = &var_2c
        
        if (var_18 u>= 0x10)
            edx = var_2c.d
        
        if (var_18 u>= 0x10)
            esi_1 = var_2c.d
        
        esi_1[edi] = _tolower(sx.d(edx[edi]))
        edi += 1
    while (edi u< var_1c)

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
sub_541b40(arg1, &var_2c, 0, 0xffffffff)

if (var_18 u>= 0x10)
    j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1

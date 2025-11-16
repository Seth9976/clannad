// 函数: sub_613430
// 地址: 0x613430
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bbb20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_bac454
int32_t var_18 = 7
int16_t* var_1c = nullptr
int16_t var_2c = 0
int32_t var_8_1 = 0
int32_t var_44
int16_t* eax_3 = sub_620130(&var_44)
var_8_1.b = 1

if (&var_2c != eax_3)
    sub_52e3c0(&var_2c, eax_3, 0, 0xffffffff)

var_8_1.b = 0
int32_t var_30

if (var_30 u>= 8)
    j__free(var_44)

int32_t eax_5

if (*(esi + 0x1c8c) == 0)
    void* eax_4 = esi + 0x1c74
    int32_t ecx_2 = *(eax_4 + 0x10)
    
    if (*(esi + 0x1c88) u>= 8)
        eax_4 = *eax_4
    
    int32_t var_50_2 = ecx_2
    eax_5 = sub_536340(&var_2c, ecx_2, var_1c, eax_4)

if (*(esi + 0x1c8c) != 0 || eax_5 != 0)
    sub_6c1b50(esi, &var_2c)

int32_t* result = &var_2c

if (esi + 0x1c74 != &var_2c)
    result = sub_52e3c0(esi + 0x1c74, &var_2c, 0, 0xffffffff)

*(esi + 0x1c8c) = 0

if (var_18 u>= 8)
    result = j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

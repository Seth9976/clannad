// 函数: sub_5a5950
// 地址: 0x5a5950
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b99f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, &data_ad7c90, nullptr)
int32_t var_8_1 = 0
sub_6c3180(arg1 + 0x148, &var_2c)
int32_t var_8_2 = 0xffffffff

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t var_18_1 = 7
int32_t var_1c_1 = 0
var_2c = 0
sub_52e720(&var_2c, &data_ad7c90, nullptr)
int32_t var_8_3 = 1
sub_6c3180(arg1 + 0x1d8, &var_2c)
int32_t var_8_4 = 0xffffffff

if (var_18_1 u>= 8)
    j__free(var_2c.d)

int32_t var_18_2 = 7
int32_t var_1c_2 = 0
var_2c = 0
sub_52e720(&var_2c, &data_ad7c90, nullptr)
int32_t var_8_5 = 2
sub_6c3560(arg1 + 0x268, &var_2c)
int32_t var_8_6 = 0xffffffff

if (var_18_2 u>= 8)
    j__free(var_2c.d)

sub_6c26c0(arg1)
*(arg1 + 0x444) = 0
int32_t* esi = *(arg1 + 0x448)
*(arg1 + 0x448) = 0

if (esi != 0)
    bool cond:0_1 = esi[1] != 1
    esi[1]
    esi[1] -= 1
    
    if (not(cond:0_1))
        (*(*esi + 4))(eax_2)
        esi[2].d -= 1
        
        if (esi[2].d == 1)
            (*(*esi + 8))()

HWND result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

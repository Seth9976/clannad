// 函数: sub_668c50
// 地址: 0x668c50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c5f98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
HWND hWnd = *(data_bac4d0 + 0x1dac8)

if (hWnd != 0)
    SendMessageW(hWnd, 0x10, 0, 0)

int32_t var_70_1 = 0x2000
void* var_44
int32_t var_74 = sub_6643e0(&var_44)
int32_t var_8_1 = 0
void var_64

if (sub_6f3b20(*(data_bac454 + 0x1c10), &var_64, &var_64) != 0)
    void* edx_1 = data_bac510
    sub_6291d0(&var_64, *(edx_1 + 0x7c), &var_44, *(edx_1 + 0x80), &var_64, 0)
    sub_6f3c40(*(data_bac454 + 0x1c10))
    (*(*(data_bac4d0 + 0x1dac4) + 0x10))(data_4ebe3ac)
else
    int32_t var_5c
    int16_t* eax_6 = sub_6b9ed0(&var_5c)
    var_8_1.b = 1
    int16_t var_2c
    int16_t* eax_7 = sub_548cb0(eax_6, 0xaf3b14, &var_2c, eax_6)
    var_8_1.b = 2
    sub_684160(data_bac424, 2, eax_7)
    int32_t var_18
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    var_2c = 0
    int32_t var_48
    
    if (var_48 u>= 8)
        j__free(var_5c)

int32_t var_30

if (var_30 u>= 8)
    j__free(var_44)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

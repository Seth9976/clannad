// 函数: sub_6c2800
// 地址: 0x6c2800
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3f20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = 7
int32_t var_60 = 0
void* const var_64 = &data_ad7c90
int32_t var_34 = 0
int16_t var_44 = 0
sub_52e720(&var_44)
int32_t var_8_1 = 0
int32_t var_60_1 = 0xb
int32_t var_18 = 7
wchar16 const* const var_64_1 = u"window_rect"
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c)
var_8_1.b = 1
int32_t X_1
sub_6c2580(arg1, &X_1, &var_2c, &var_44, arg2)

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t var_18_1 = 7
int32_t var_1c_1 = 0
var_2c = 0

if (var_30 u>= 8)
    j__free(var_44.d)

int32_t X = X_1
int32_t var_4c
BOOL result = var_4c - X

if (result s> 0)
    int32_t var_50
    int32_t var_48
    int32_t ecx_4 = var_48 - var_50
    
    if (ecx_4 s> 0)
        HWND hWnd = *(arg1 + 4)
        
        if (hWnd != 0)
            int32_t var_60_4 = 0x14
            int32_t var_64_2 = ecx_4
            int128_t Y
            Y:4.d = result
            Y.d = var_50
            int32_t var_74_1 = 0
            result = SetWindowPos(hWnd, nullptr, X, Y)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

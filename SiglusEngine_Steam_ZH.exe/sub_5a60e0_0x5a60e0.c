// 函数: sub_5a60e0
// 地址: 0x5a60e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b9a90
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx
ebx.b = arg2
int16_t var_30
int16_t* ecx = &var_30
int32_t var_1c = 7
int32_t var_20 = 0
var_30 = 0
void* edi

if (ebx.b == 0)
    sub_52e720(ecx, 0xaf17f0, 4)
    int32_t var_8_4 = 2
    sub_6c1b50(arg1, &var_30)
    int32_t var_8_5 = 0xffffffff
    
    if (var_1c u>= 8)
        j__free(var_30.d)
    
    int32_t var_34_1 = 7
    int32_t var_38_1 = 0
    int16_t var_48 = 0
    sub_52e720(&var_48, 0xaf17fc, 4)
    int32_t var_8_6 = 3
    edi = arg1 + 0xb8
    sub_6c2db0(edi, &var_48)
    
    if (var_34_1 u>= 8)
        j__free(var_48.d)
else
    sub_52e720(ecx, 0xaf17c8, 0xb)
    int32_t var_8_1 = 0
    sub_6c1b50(arg1, &var_30)
    int32_t var_8_2 = 0xffffffff
    
    if (var_1c u>= 8)
        j__free(var_30.d)
    
    int32_t var_1c_1 = 7
    int32_t var_20_1 = 0
    var_30 = 0
    sub_52e720(&var_30, 0xaf17e0, 6)
    int32_t var_8_3 = 1
    edi = arg1 + 0xb8
    sub_6c2db0(edi, &var_30)
    
    if (var_1c_1 u>= 8)
        j__free(var_30.d)

HWND hWnd = *(edi + 4)
char eax_3

if (hWnd != 0)
    eax_3 = SendMessageW(hWnd, 0xf0, 0, 0)
else
    eax_3 = 0

if (ebx.b != (eax_3 & 1))
    HWND hWnd_1 = *(edi + 4)
    
    if (hWnd_1 != 0)
        WPARAM wParam
        wParam.b = ebx.b != 0
        SendMessageW(hWnd_1, 0xf1, wParam, 0)

void* result = data_bac4a0
*(result + 0x1e9) = ebx.b
*(arg1 + 0x42c) = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

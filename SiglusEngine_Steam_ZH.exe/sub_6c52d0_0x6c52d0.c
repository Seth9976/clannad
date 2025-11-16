// 函数: sub_6c52d0
// 地址: 0x6c52d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cc318
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_90 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_58
sub_6c4e40(arg1, &var_58, arg2, arg3)
int32_t var_8_1 = 0
int32_t* ecx = &var_58
int32_t var_44

if (var_44 u>= 8)
    ecx = var_58

int32_t var_48
void* eax_5 = ecx + (var_48 << 1)
int32_t* ecx_1 = &var_58

if (var_44 u>= 8)
    ecx_1 = var_58

int32_t* var_7c = ecx_1
int32_t* var_74
char eax_6
int32_t ecx_3
eax_6, ecx_3 = sub_6af490(eax_5, &var_74, &var_7c, eax_5)
int32_t var_94_2 = ecx_3
int32_t var_30
int16_t* eax_8 = sub_6ad9b0(&var_30)
var_8_1.b = 1

if (&var_58 != eax_8)
    sub_52e3c0(&var_58, eax_8, 0, 0xffffffff)

var_8_1.b = 0
int32_t var_1c

if (var_1c u>= 8)
    j__free(var_30)

int32_t var_94_5 = 7
int32_t var_98_2 = 0
int16_t var_a8 = 0
sub_52e3c0(&var_a8, &var_58, 0, 0xffffffff)
sub_6c5080(arg1, arg2, arg3, var_a8)
*(arg1 + 0x274) = arg4
HWND hWnd = *(arg1 + 4)
*(arg1 + 0x278) = arg5
*(arg1 + 0x270) = 1
*(arg1 + 0x27c) = arg6
int32_t var_38 = 0
int32_t var_34 = 0
int32_t lParam = 0

if (hWnd != 0)
    SendMessageW(hWnd, 0x1038, arg2, &lParam)

int32_t var_5c = 7
void* var_94_7 = nullptr
void* const var_98_4 = &data_ad7c90
int32_t var_60 = 0
int16_t var_70 = 0
var_8_1.b = 2
var_74 = sub_532b80(sub_52e720(&var_70, var_98_4, var_94_7), arg1 + 8, &var_30, 
    &NT3::C_dialog::`vftable'{for `NT3::C_window_base'}.vFunc_2)
var_8_1.b = 3

if (*(arg1 + 0x1bc) != 0)
    var_a8.d = 0
    sub_6bfcd0(arg1 + 0x134, var_74, arg1 + 0x1ac, &var_70, var_38, arg3, 0x10, var_34 - arg3, 
        var_a8.b, 0x400000a2, WS_EX_LEFT, 0, 0, *(arg1 + 4))

if (var_1c u>= 8)
    j__free(var_30)

int32_t var_1c_1 = 7
var_8_1.b = 0
int32_t var_20 = 0
var_30.w = 0

if (var_5c u>= 8)
    j__free(var_70.d)

*(arg1 + 0x1c4) = arg1
*(arg1 + 0x1c8) = arg1 + 0x9c
HWND hWnd_1 = *(arg1 + 0x138)

if (hWnd_1 != 0 && (GetWindowLongW(hWnd_1, 0xfffffff0) & 0x10000000) s<= 0)
    ShowWindow(*(arg1 + 0x138), SW_SHOW)

HWND hWnd_2 = *(arg1 + 0x138)

if (hWnd_2 != 0)
    SendMessageW(hWnd_2, 0x469, *(arg1 + 0xa0), 0)

HWND hWnd_3 = *(arg1 + 0x138)

if (hWnd_3 != 0)
    SendMessageW(hWnd_3, 0x46f, arg4, arg5)

int16_t* ecx_14 = sub_6c4e40(arg1, &var_30, arg2, arg3)
int32_t esi_2 = *(ecx_14 + 0x14)
int16_t* edx_6

if (esi_2 u< 8)
    edx_6 = ecx_14
else
    edx_6 = *ecx_14

void* eax_18 = &edx_6[*(ecx_14 + 0x10)]

if (esi_2 u>= 8)
    ecx_14 = *ecx_14

var_74 = ecx_14
char eax_19
int32_t ecx_16
eax_19, ecx_16 = sub_6af490(eax_18, &var_7c, &var_74, eax_18)

if (var_1c_1 u>= 8)
    ecx_16 = j__free(var_30)

int32_t var_94_19 = ecx_16
var_8_1.b = 4
int32_t result = sub_6c2db0(arg1 + 0x9c, sub_6ad9b0(&var_30))

if (var_1c_1 u>= 8)
    result = j__free(var_30)

if (var_44 u>= 8)
    result = j__free(var_58)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

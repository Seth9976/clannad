// 函数: sub_60c070
// 地址: 0x60c070
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t eax_3 = zx.d(arg2)

if (eax_3 == 2 || eax_3 == 0x3f2)
    EndDialog(*(arg1 + 4), 2)
    BOOL eax_8
    eax_8.b = 0
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return eax_8

if (eax_3 != 0x4e8)
    int32_t eax_6
    eax_6.b = 1
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return eax_6

sub_6b5950(arg1 + 0x248)
int32_t var_c = 7
int32_t var_10 = 0
int16_t var_20 = 0
sub_52e720(&var_20, 0xaf3538, 0x3f)
void** lpCaption = data_bac510 + 0x1c

if (lpCaption[5] u>= 8)
    lpCaption = *lpCaption

int16_t* lpText = &var_20

if (var_c u>= 8)
    lpText = var_20.d

MessageBoxW(data_4ebe3ac, lpText, lpCaption, MB_OK)

if (var_c u>= 8)
    j__free(var_20.d)

HWND hWnd = *(arg1 + 4)
int32_t var_c_1 = 7
int32_t var_10_1 = 0
var_20 = 0
SetActiveWindow(hWnd)
HWND eax_7
eax_7.b = 0
sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_7

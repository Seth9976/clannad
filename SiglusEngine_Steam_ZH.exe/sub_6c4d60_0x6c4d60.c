// 函数: sub_6c4d60
// 地址: 0x6c4d60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cc288
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_88 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = arg4
int32_t var_30
int16_t* eax_4 = sub_6c4e40(arg1, &var_30, arg2, arg3)
int32_t var_8_1 = 0
void** ecx_1

if (esi[5] u< 8)
    ecx_1 = esi
else
    ecx_1 = *esi

int32_t var_8c_1 = esi[4]
LRESULT hWnd
hWnd.b = sub_536340(eax_4, ecx_1, *(eax_4 + 0x10), ecx_1) == 0
char var_31 = hWnd.b
int32_t var_1c

if (var_1c u>= 8)
    j__free(var_30)
    hWnd.b = var_31

if (hWnd.b == 0)
    bool cond:1_1 = esi[5] u< 8
    int32_t lParam = 1
    int32_t var_6c_1 = arg3
    
    if (not(cond:1_1))
        esi = *esi
    
    void** var_60_1 = esi
    hWnd = *(arg1 + 4)
    
    if (hWnd != 0)
        hWnd = SendMessageW(hWnd, 0x1074, arg2, &lParam)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return hWnd

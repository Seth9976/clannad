// 函数: sub_5771d0
// 地址: 0x5771d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Fput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AAVios_base@2@DPBDIIII@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_e0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = arg7
void** hWnd_1 = arg6
LRESULT hWnd_3 = arg3
void** hWnd_2 = hWnd_1
int32_t var_c4 = edx
LRESULT hWnd

if (arg3 != 0)
    hWnd_1 = *(arg1 + 0xbc)
    
    if (hWnd_1 != 0)
        hWnd, hWnd_1 = SendMessageW(hWnd_1, 0x110a, 1, arg3)
        edx = var_c4
    else
        hWnd = 0
else
    hWnd = *(arg1 + 0xbc)
    
    if (hWnd != 0)
        hWnd, hWnd_1 = SendMessageW(hWnd, 0x110a, 4, arg2)
        edx = var_c4

hWnd_3 = hWnd

if (hWnd == 0)
    int32_t var_e4_2 = edx
    int32_t var_e4_3 = var_c4
    hWnd_3 = sub_6c36c0(arg1 + 0xb8, arg2, hWnd_1)
    void** hWnd_4 = hWnd_2
    int32_t var_ec_3 = arg5
    int32_t var_f0_2 = *(arg4 + 0x80)
    void var_170
    __builtin_memcpy(&var_170, arg4, 0x80)
    void var_bc
    void* eax_6 = sub_5732a0(&var_bc)
    int32_t var_8_1 = 0
    sub_577170(sub_578390(arg1 + 0x3680, &hWnd_3), eax_6)
    int32_t var_1c
    int32_t var_30
    
    if (var_1c u>= 8)
        j__free(var_30)
    hWnd = hWnd_3

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return hWnd

// 函数: sub_6c3a10
// 地址: 0x6c3a10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cc1c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_4c = arg1
LRESULT hWnd = *(arg1 + 4)

if (hWnd != 0)
    hWnd = SendMessageW(hWnd, 0x1304, 0, 0)
    arg1 = var_4c

if (arg2 s>= 0 && arg2 s< hWnd)
    int32_t var_44
    int16_t* eax_3 = sub_6c3b60(arg1, &var_44, arg2)
    int32_t var_8_1 = 0
    int32_t* ecx
    
    if (arg3[5] u< 8)
        ecx = arg3
    else
        ecx = *arg3
    
    int32_t var_78_2 = arg3[4]
    int32_t var_8_2 = 0xffffffff
    hWnd.b = sub_536340(eax_3, ecx, *(eax_3 + 0x10), ecx) == 0
    char var_45_1 = hWnd.b
    int32_t var_30
    
    if (var_30 u>= 8)
        j__free(var_44)
        hWnd.b = var_45_1
    
    if (hWnd.b == 0)
        int32_t var_18_1 = 7
        int128_t lParam
        __builtin_memset(&lParam, 0, 0x1c)
        lParam.d = 1
        int32_t var_1c_1 = 0
        int16_t var_2c = 0
        sub_52e3c0(&var_2c, arg3, 0, 0xffffffff)
        int32_t edx_1 = var_18_1
        int16_t* eax_4 = &var_2c
        int16_t* ecx_3 = var_2c.d
        
        if (edx_1 u>= 8)
            eax_4 = ecx_3
        
        lParam:0xc.d = eax_4
        hWnd = *(var_4c + 4)
        
        if (hWnd != 0)
            hWnd = SendMessageW(hWnd, 0x133d, arg2, &lParam)
            edx_1 = var_18_1
            ecx_3 = var_2c.d
        
        if (edx_1 u>= 8)
            hWnd = j__free(ecx_3)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return hWnd

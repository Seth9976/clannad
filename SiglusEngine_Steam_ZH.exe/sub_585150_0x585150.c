// 函数: sub_585150
// 地址: 0x585150
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Init@?$_Mpunct@G@std@@IAEXABV_Locinfo@2@_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
LRESULT hWnd

if (arg3 != 0)
    int32_t temp0_1 = divs.dp.d(0x20, arg2)
    int32_t eax_6
    void* ebx_1
    
    if (arg2 == 0x10)
        ebx_1 = 0xffff
        eax_6 = 0x3e8
    else if (arg2 == 8)
        ebx_1 = 0xff
        eax_6 = 0x3e8
    else if (arg2 == 4)
        ebx_1 = arg2 + 0xb
        eax_6 = 0x3e8
    else if (arg2 != 2)
        int32_t ebx_2
        ebx_2.b = arg2 == 1
        ebx_1 = (ebx_2 << 1) + 0xffffffff
        
        if (arg2 != 0x20)
            eax_6 = 0x3e8
        else
            eax_6 = (*(arg3 + 0xa4) - *(arg3 + 0xa0)) s>> 2
    else
        ebx_1 = arg2 + 1
        eax_6 = 0x3e8
    
    int32_t ecx = *(arg3 + 0xa4)
    int32_t edx_3 = arg4 + eax_6
    int32_t esi_1 = arg4
    int32_t var_30 = edx_3
    int32_t var_34
    int32_t* eax_8 = &var_34
    int32_t ecx_3 = ((ecx - *(arg3 + 0xa0)) s>> 2) * temp0_1
    var_34 = ecx_3
    
    if (ecx_3 s>= edx_3)
        eax_8 = &var_30
    
    int32_t eax_9 = *eax_8
    var_30 = eax_9
    int32_t ecx_5 = eax_9 - esi_1
    LRESULT hWnd_1 = *(arg5 + 4)
    var_34 = ecx_5
    
    if (hWnd_1 != 0)
        hWnd_1 = SendMessageW(hWnd_1, 0x1004, 0, 0)
        ecx_5 = var_34
    
    if (ecx_5 s> hWnd_1)
        int32_t eax_13 = *(data_bac4e0 + 0x30)
        
        if (eax_13 != 0)
            eax_13(*(arg5 + 4), ecx_5, eax_2)
    
    while (esi_1 s< var_30)
        int32_t eax_15
        int32_t edx_4
        edx_4:eax_15 = sx.q(esi_1)
        int32_t ecx_7 = *(arg3 + 0xa0)
        int32_t var_38 = mods.dp.d(edx_4:eax_15, temp0_1)
        int32_t var_60_3 = ecx_7
        int32_t esi_2 = *(ecx_7 + (divs.dp.d(edx_4:eax_15, temp0_1) << 2))
        int32_t var_3c = 1
        int16_t var_2c
        int16_t* eax_17 = sub_6ad9b0(&var_2c)
        int32_t var_8_1 = 0
        int32_t ecx_11 = *(data_bac4e0 + 0x34)
        
        if (ecx_11 != 0)
            ecx_11(*(arg5 + 4), *arg6, 0, eax_17, eax_2)
        
        int32_t var_8_2 = 0xffffffff
        int32_t var_18
        
        if (var_18 u>= 8)
            j__free(var_2c.d)
        
        char ecx_13 = var_38.b * arg2.b
        var_2c = 0
        var_18 = 7
        int32_t var_1c_1 = 0
        var_38 = esi_2 s>> ecx_13 & ebx_1
        sub_57c810(&var_3c, arg5, &var_38, arg6, &var_3c, &var_3c)
        *arg6 += 1
        esi_1 = arg4 + 1
        arg4 = esi_1
    
    hWnd = *(arg5 + 4)
    
    if (hWnd != 0)
        hWnd = SendMessageW(hWnd, 0x1004, 0, 0)
    
    int32_t ecx_15 = var_34
    
    if (hWnd s> ecx_15)
        hWnd = *(data_bac4e0 + 0x30)
        
        if (hWnd != 0)
            hWnd = hWnd(*(arg5 + 4), ecx_15, eax_2)
else
    hWnd = *(arg5 + 4)
    
    if (hWnd != 0)
        hWnd = SendMessageW(hWnd, 0x1009, arg3, arg3)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return hWnd

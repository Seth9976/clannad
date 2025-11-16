// 函数: sub_5992f0
// 地址: 0x5992f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0fb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
HWND hWnd = *(arg1 + 0x26c)

if (hWnd != 0)
    SendMessageW(hWnd, 0x184, 0, 0)

*(arg1 + 0x384) = *(arg1 + 0x380)
int32_t hWnd_1 = *(arg1 + 0x1dc)
int32_t hWnd_2

if (hWnd_1 != 0)
    hWnd_1 = SendMessageW(hWnd_1, 0x188, 0, 0)
    hWnd_2 = hWnd_1
    
    if (hWnd_2 != 0xffffffff)
        goto label_59936a
else
    hWnd_2 = 0
label_59936a:
    int32_t i = 0
    int32_t i_2 = 0
    
    do
        if (i u> 0x3e7)
            hWnd_1.b = 0
        else
            hWnd_1.b = *(*(*(data_bac45c + 0x54) + hWnd_2 * 0x54 + 0x10) + (i << 2)) s> 0
        
        if (hWnd_1.b != 0)
            int32_t i_1 = i
            int32_t var_4c_3 = 7
            int32_t var_50_3 = 0
            int16_t var_60 = 0
            sub_52e720(&var_60, u"#z%02d", 6)
            int16_t var_2c
            int16_t* eax_6 = sub_6ae4c0(&var_2c, var_60)
            int32_t var_8_1 = 0
            int32_t ecx_3 = *(data_bac4e0 + 0xc)
            
            if (ecx_3 != 0)
                ecx_3(*(arg1 + 0x26c), eax_6, eax_2)
            
            int32_t var_8_2 = 0xffffffff
            int32_t var_18
            
            if (var_18 u>= 8)
                j__free(var_2c.d)
            
            var_18 = 7
            var_2c = 0
            int32_t var_1c_1 = 0
            hWnd_1 = sub_59a180(arg1 + 0x380, &i_2)
            i = i_2
        
        i += 1
        i_2 = i
    while (i s< 0x3e8)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return hWnd_1

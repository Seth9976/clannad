// 函数: sub_596f80
// 地址: 0x596f80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0fb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
HWND hWnd = *(arg1 + 0x3f0)

if (hWnd != 0)
    SendMessageW(hWnd, 0x1009, 0, 0)

*(arg1 + 0x8bc) = *(arg1 + 0x8b8)
int32_t ebx = *(*(*(arg1 + 0x8f8) * 0x54 + *(data_bac45c + 0x54) + 4) + 0x80)
int32_t result = *(data_bac4e0 + 0x30)

if (result != 0)
    result = result(*(arg1 + 0x3f0), ebx, eax_2)

int32_t esi = 0

if (ebx s> 0)
    do
        int32_t var_48_3 = *(*(*(arg1 + 0x8f8) * 0x54 + *(data_bac45c + 0x54) + 0x40) + (esi << 2))
        int32_t var_4c_3 = esi
        int32_t var_50_2 = 7
        int32_t var_54_2 = 0
        int16_t var_64 = 0
        sub_52e720(&var_64, u"%05d(%d)", 8)
        int16_t var_2c
        int16_t* eax_11 = sub_6ae4c0(&var_2c, var_64)
        int32_t var_8_1 = 0
        int32_t ecx_4 = *(data_bac4e0 + 0x34)
        
        if (ecx_4 != 0)
            ecx_4(*(arg1 + 0x3f0), esi, 0, eax_11, eax_2)
        
        int32_t var_8_2 = 0xffffffff
        int32_t var_18
        
        if (var_18 u>= 8)
            j__free(var_2c.d)
        
        result = 0
        var_18 = 7
        esi += 1
        int32_t var_1c_1 = 0
        var_2c = 0
    while (esi s< ebx)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

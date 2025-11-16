// 函数: sub_54e390
// 地址: 0x54e390
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b15c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t var_70 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
HWND result = *arg2

if (result == 0)
    void* esi = *(arg4 + 4)
    int32_t ecx_1 = *(esi + 8)
    int32_t edx = *(esi + 0x16c)
    int32_t var_20_1 = *(esi + 0x2d0) + ecx_1
    int32_t var_1c_1 = *(esi + 0x434) + edx
    int32_t var_24_1 = edx
    sub_5b96e0(arg3, *(esi + 0x598), ecx_1.o)
else if (result == 1)
    sub_5b9860(arg3)
else
    int128_t var_80
    
    if (result == 2)
        var_80:0xc.d = *(arg4 + 4) + 0xc
        sub_5b98c0(arg3)
    else if (result == 3)
        void var_30
        var_80:0xc.d = &var_30
        int32_t var_8_1 = 0
        var_80:0xc.d = sub_5b9910(arg3)
        sub_60c680(data_bac49c + 0xc)
        sub_52e8a0(&var_30)
    else if (result == 6)
        var_80:0xc.d = *(arg3 + 0xc0)
        SetFocus()
    else if (result == 7)
        *(arg3 + 0x14c) = 0
    else if (result == 4)
        int32_t ecx_9
        ecx_9.b = *(arg3 + 0x14c) == 1
        sub_677bb0(ecx_9)
    else if (result != 5)
        void var_60
        var_80:0xc.d = &var_60
        int32_t eax_10 = sub_5483b0(arg3)
        var_80:0xc.d = eax_10
        int32_t var_8_2 = 1
        void var_48
        var_80:0xc.d = sub_548cb0(eax_10, 0xad88a4, &var_48)
        var_8_2.b = 2
        var_80:8.d = 2
        sub_684160(data_bac424)
        sub_52e8a0(&var_48)
        sub_52e8a0(&var_60)
    else
        int32_t ecx_10
        ecx_10.b = *(arg3 + 0x14c) == 0xffffffff
        sub_677bb0(ecx_10)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

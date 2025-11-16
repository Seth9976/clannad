// 函数: sub_599f00
// 地址: 0x599f00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b8a42
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_50 = 0
void* var_6c_1

if (*(arg1 + 4) != 0)
    LRESULT hWnd = *(arg1 + 0x1dc)
    int16_t var_48
    int16_t var_30
    int32_t var_1c
    int16_t* ecx_2
    int32_t ebx_1
    
    if (hWnd != 0)
        hWnd = SendMessageW(hWnd, 0x188, 0, 0)
        
        if (hWnd != 0xffffffff)
            goto label_599f6b
        
        void** eax_9 = data_bac510 + 0x84
        var_30 = 0
        var_1c = 7
        int32_t var_20_2 = 0
        sub_52e3c0(&var_30, eax_9, 0, 0xffffffff)
        ecx_2 = &var_30
        int32_t var_8_3 = 0
        ebx_1 = 2
    else
    label_599f6b:
        ecx_2 = sub_698170(data_bac45c, &var_48, hWnd)
        int32_t var_8_1 = 1
        ebx_1 = 4
    
    int32_t var_50_1 = ebx_1
    
    if (arg1 + 0x364 != ecx_2)
        sub_52e3c0(arg1 + 0x364, ecx_2, 0, 0xffffffff)
    
    if ((ebx_1.b & 4) != 0)
        ebx_1 &= 0xfffffffb
        int32_t var_34
        
        if (var_34 u>= 8)
            j__free(var_48.d)
        
        int32_t var_34_1 = 7
        int32_t var_38_1 = 0
        var_48 = 0
    
    int32_t var_8_2 = 0xffffffff
    
    if ((ebx_1.b & 2) != 0)
        if (var_1c u>= 8)
            j__free(var_30.d)
        
        int32_t var_1c_1 = 7
        int32_t var_20_1 = 0
        var_30 = 0
    
    if (*(arg1 + 0x374) == 0)
        void** eax_6 = data_bac510 + 0x84
        
        if (arg1 + 0x364 != eax_6)
            sub_52e3c0(arg1 + 0x364, eax_6, 0, 0xffffffff)
    
    int32_t var_64_5 = 0xffffffff
    int32_t var_68_3 = 0
    var_6c_1 = arg1 + 0x364
else
    int32_t var_64_1 = 0xffffffff
    int32_t var_68_1 = 0
    var_6c_1 = arg1 + 0x364

arg2[5] = 7
arg2[4] = 0
*arg2 = 0
sub_52e3c0(arg2, var_6c_1, 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg2

// 函数: sub_64e880
// 地址: 0x64e880
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3ba4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_788 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** ebx = arg4
void* ecx_36
void var_8e0
int32_t var_610
void var_60c
void var_584
int32_t var_4b8
void var_4b4
void var_42c
int32_t var_360
void var_35c
void var_2d4
int32_t var_208
void var_204
void var_180
void* var_dc
void var_98

if (*(arg3 + 0x1e4) == 0)
    void* var_78c_3 = 0x12
    int32_t var_9c_1 = 7
    void* const var_790_3 = &data_af7428
    int32_t var_a0_1 = 0
    int16_t var_b0 = 0
    sub_52e720(&var_b0, var_790_3, var_78c_3)
    int32_t var_8_2 = 4
    sub_684160(data_bac424, 8, &var_b0)
    
    if (var_9c_1 u>= 8)
        j__free(var_b0.d)
    
    sub_54aed0(&var_208)
    int32_t var_8_3 = 5
    int32_t var_1c_6 = 1
    __builtin_memcpy(&var_98, arg3, 0x80)
    var_208 = 0x12
    int32_t var_78c_6 = 3
    *(&var_98 + (var_1c_6 << 2)) = 0x39
    int32_t var_1c_7 = var_1c_6 + 1
    __builtin_memcpy(&var_204, &var_98, 0x80)
    int32_t var_184_1 = 1
    sub_5beec0(&var_180, var_78c_6)
    *(var_dc + 4) = 0x14
    void* eax_17 = var_dc
    
    if (eax_17 + 0xc != ebx)
        sub_52e3c0(eax_17 + 0xc, ebx, 0, 0xffffffff)
        eax_17 = var_dc
    
    *(eax_17 + 0x168) = 0xa
    *(var_dc + 0x16c) = arg5
    *(var_dc + 0x2cc) = 0xa
    *(var_dc + 0x2d0) = arg6
    sub_54cf80(&var_8e0, &var_208)
    int32_t ecx_23 = sub_6766e0()
    int32_t eax_21 = ebx[4]
    
    if (ebx[5] u>= 8)
        ebx = *ebx
    
    int32_t var_78c_8 = eax_21
    int32_t var_768
    void var_764
    void var_6dc
    
    if (sub_536340(arg2, ecx_23, *(arg2 + 0x10), ebx) == 0)
        sub_54aed0(&var_360)
        var_8_3.b = 0xa
        int32_t var_1c_12 = 1
        __builtin_memcpy(&var_98, arg3, 0x80)
        var_360 = 0x12
        *(&var_98 + (var_1c_12 << 2)) = 0x31
        int32_t var_1c_13 = var_1c_12 + 1
        __builtin_memcpy(&var_35c, &var_98, 0x80)
        sub_54cf80(&var_8e0, &var_360)
        sub_6766e0()
        sub_54aed0(&var_768)
        var_8_3.b = 0xb
        int32_t var_1c_14 = 1
        __builtin_memcpy(&var_98, arg3, 0x80)
        var_768 = 0x12
        *(&var_98 + (var_1c_14 << 2)) = 3
        int32_t var_1c_15 = var_1c_14 + 1
        __builtin_memcpy(&var_764, &var_98, 0x80)
        sub_54cf80(&var_8e0, &var_768)
        sub_6766e0()
        sub_54ae40(&var_6dc)
        ecx_36 = &var_2d4
    else
        sub_54aed0(&var_768)
        var_8_3.b = 6
        int32_t var_1c_8 = 1
        __builtin_memcpy(&var_98, arg3, 0x80)
        var_768 = 0x12
        *(&var_98 + (var_1c_8 << 2)) = 0x31
        int32_t var_1c_9 = var_1c_8 + 1
        __builtin_memcpy(&var_764, &var_98, 0x80)
        sub_54cf80(&var_8e0, &var_768)
        sub_6766e0()
        sub_54aed0(&var_4b8)
        var_8_3.b = 7
        int32_t var_1c_10 = 1
        var_4b8 = 0x12
        __builtin_memcpy(&var_98, arg3, 0x80)
        *(&var_98 + (var_1c_10 << 2)) = 3
        int32_t var_1c_11 = var_1c_10 + 1
        __builtin_memcpy(&var_4b4, &var_98, 0x80)
        sub_54cf80(&var_8e0, &var_4b8)
        sub_6766e0()
        int32_t eax_26
        eax_26.b = *(arg3 + 0x130) == 1
        *(arg3 + 0x33c) = eax_26
        sub_54aed0(&var_610)
        var_8_3.b = 8
        var_610 = 0x1a
        __builtin_memcpy(&var_60c, arg3, 0x80)
        sub_54cf80(&var_8e0, &var_610)
        sub_6766e0()
        sub_54aed0(&var_360)
        var_8_3.b = 9
        var_360 = 0x19
        __builtin_memcpy(&var_35c, arg3, 0x80)
        sub_54cf80(&var_8e0, &var_360)
        sub_6766e0()
        sub_54ae40(&var_2d4)
        sub_54ae40(&var_584)
        sub_54ae40(&var_42c)
        ecx_36 = &var_6dc
else
    sub_54aed0(&var_208)
    int32_t var_8_1 = 0
    int32_t var_1c = 1
    __builtin_memcpy(&var_98, arg3, 0x80)
    var_208 = 0x12
    int32_t var_78c = 3
    *(&var_98 + (var_1c << 2)) = 0x39
    int32_t var_1c_1 = var_1c + 1
    __builtin_memcpy(&var_204, &var_98, 0x80)
    int32_t var_184 = 1
    sub_5beec0(&var_180, var_78c)
    *(var_dc + 4) = 0x14
    void* eax_6 = var_dc
    
    if (eax_6 + 0xc != ebx)
        sub_52e3c0(eax_6 + 0xc, ebx, 0, 0xffffffff)
        eax_6 = var_dc
    
    *(eax_6 + 0x168) = 0xa
    *(var_dc + 0x16c) = arg5
    *(var_dc + 0x2cc) = 0xa
    *(var_dc + 0x2d0) = arg6
    sub_54cf80(&var_8e0, &var_208)
    sub_6766e0()
    sub_54aed0(&var_360)
    var_8_1.b = 1
    int32_t var_1c_2 = 1
    __builtin_memcpy(&var_98, arg3, 0x80)
    var_360 = 0x12
    *(&var_98 + (var_1c_2 << 2)) = 0x3b
    int32_t var_1c_3 = var_1c_2 + 1
    __builtin_memcpy(&var_35c, &var_98, 0x80)
    sub_54cf80(&var_8e0, &var_360)
    sub_6766e0()
    sub_54aed0(&var_610)
    var_8_1.b = 2
    int32_t var_1c_4 = 1
    __builtin_memcpy(&var_98, arg3, 0x80)
    var_610 = 0x12
    *(&var_98 + (var_1c_4 << 2)) = 0x3d
    int32_t var_1c_5 = var_1c_4 + 1
    __builtin_memcpy(&var_60c, &var_98, 0x80)
    sub_54cf80(&var_8e0, &var_610)
    int32_t ecx_10 = sub_6766e0()
    int32_t eax_12 = ebx[4]
    
    if (ebx[5] u>= 8)
        ebx = *ebx
    
    int32_t var_78c_2 = eax_12
    
    if (sub_536340(arg2, ecx_10, *(arg2 + 0x10), ebx) != 0)
        sub_54aed0(&var_4b8)
        var_8_1.b = 3
        var_4b8 = 0x19
        __builtin_memcpy(&var_4b4, arg3, 0x80)
        sub_54cf80(&var_8e0, &var_4b8)
        sub_6766e0()
        sub_54ae40(&var_42c)
    
    sub_54ae40(&var_584)
    ecx_36 = &var_2d4
sub_54ae40(ecx_36)
void var_17c
sub_54ae40(&var_17c)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return 0

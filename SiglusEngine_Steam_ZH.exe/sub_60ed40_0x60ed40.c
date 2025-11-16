// 函数: sub_60ed40
// 地址: 0x60ed40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bea78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_84 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_74 = 0
int32_t var_30 = 7
int32_t var_34 = 0
int16_t var_44 = 0
int32_t var_8_1 = 0
int32_t ebx = 1
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, 0xaf3944, 3)
var_8_1.b = 1
int16_t var_5c
int16_t* eax_8 = sub_60e8c0(&var_2c, arg2, &var_5c, arg4, arg5, arg6, &var_2c)
var_8_1.b = 2

if (&var_44 != eax_8)
    sub_52e3c0(&var_44, eax_8, 0, 0xffffffff)

int32_t var_48

if (var_48 u>= 8)
    j__free(var_5c.d)

int32_t var_48_1 = 7
var_8_1.b = 0
int32_t var_4c = 0
var_5c = 0

if (var_18 u>= 8)
    j__free(var_2c.d)

int16_t* lpFileName = &var_44

if (var_30 u>= 8)
    lpFileName = var_44.d

uint32_t eax_9 = GetFileAttributesW(lpFileName)

if (eax_9 == 0xffffffff || (eax_9.b & 0x10) != 0)
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    ebx = 2
    var_2c = 0
    sub_52e720(&var_2c, 0xaf396c, 3)
    var_8_1.b = 3
    int16_t* eax_11 = sub_60e8c0(&var_2c, arg2, &var_5c, arg4, arg5, arg6, &var_2c)
    var_8_1.b = 4
    
    if (&var_44 != eax_11)
        sub_52e3c0(&var_44, eax_11, 0, 0xffffffff)
    
    if (var_48_1 u>= 8)
        j__free(var_5c.d)
    
    int32_t var_48_2 = 7
    var_8_1.b = 0
    int32_t var_4c_1 = 0
    var_5c = 0
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    int16_t* lpFileName_1 = &var_44
    
    if (var_30 u>= 8)
        lpFileName_1 = var_44.d
    
    uint32_t eax_12 = GetFileAttributesW(lpFileName_1)
    
    if (eax_12 != 0xffffffff && (eax_12.b & 0x10) == 0)
        goto label_60f0e1
    
    ebx = 3
    int32_t var_18_2 = 7
    int32_t var_1c_2 = 0
    var_2c = 0
    sub_52e720(&var_2c, &data_af3974, 3)
    var_8_1.b = 5
    int16_t* eax_14 = sub_60e8c0(&var_2c, arg2, &var_5c, arg4, arg5, arg6, &var_2c)
    var_8_1.b = 6
    
    if (&var_44 != eax_14)
        sub_52e3c0(&var_44, eax_14, 0, 0xffffffff)
    
    if (var_48_2 u>= 8)
        j__free(var_5c.d)
    
    int32_t var_48_3 = 7
    var_8_1.b = 0
    int32_t var_4c_2 = 0
    var_5c = 0
    
    if (var_18_2 u>= 8)
        j__free(var_2c.d)
    
    int16_t* lpFileName_2 = &var_44
    
    if (var_30 u>= 8)
        lpFileName_2 = var_44.d
    
    uint32_t eax_15 = GetFileAttributesW(lpFileName_2)
    
    if (eax_15 != 0xffffffff && (eax_15.b & 0x10) == 0)
        goto label_60f0e1
    
    int32_t var_18_3 = 7
    int32_t var_1c_3 = 0
    ebx = 4
    var_2c = 0
    sub_52e720(&var_2c, 0xaf397c, 3)
    var_8_1.b = 7
    int16_t* eax_17 = sub_60e8c0(&var_2c, arg2, &var_5c, arg4, arg5, arg6, &var_2c)
    var_8_1.b = 8
    
    if (&var_44 != eax_17)
        sub_52e3c0(&var_44, eax_17, 0, 0xffffffff)
    
    if (var_48_3 u>= 8)
        j__free(var_5c.d)
    
    int32_t var_48_4 = 7
    var_8_1.b = 0
    int32_t var_4c_3 = 0
    var_5c = 0
    
    if (var_18_3 u>= 8)
        j__free(var_2c.d)
    
    int16_t* lpFileName_3 = &var_44
    
    if (var_30 u>= 8)
        lpFileName_3 = var_44.d
    
    uint32_t eax_18 = GetFileAttributesW(lpFileName_3)
    
    if (eax_18 != 0xffffffff && (eax_18.b & 0x10) == 0)
        goto label_60f0e1
    
    int32_t var_48_5 = 7
    int32_t var_4c_4 = 0
    ebx = 5
    var_5c = 0
    sub_52e720(&var_5c, 0xaf3984, 3)
    var_8_1.b = 9
    int16_t* eax_20 = sub_60e8c0(&var_5c, arg2, &var_2c, arg4, arg5, arg6, &var_5c)
    var_8_1.b = 0xa
    
    if (&var_44 != eax_20)
        sub_52e3c0(&var_44, eax_20, 0, 0xffffffff)
    
    sub_52e8a0(&var_2c)
    var_8_1.b = 0
    sub_52e8a0(&var_5c)
    
    if (sub_6b4360(&var_44) == 1)
        goto label_60f0e1
    
    sub_52e820(arg3, &data_ad7c90)
    sub_52e8a0(&var_44)
else
label_60f0e1:
    
    if (arg7 != 0)
        *arg7 = ebx
    
    *(arg3 + 0x14) = 7
    *(arg3 + 0x10) = 0
    *arg3 = 0
    sub_52e3c0(arg3, &var_44, 0, 0xffffffff)
    
    if (var_30 u>= 8)
        j__free(var_44.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg3

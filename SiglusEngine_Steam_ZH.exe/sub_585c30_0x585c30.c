// 函数: sub_585c30
// 地址: 0x585c30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b72d2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edx = arg7
int32_t var_6c = 0
int32_t* var_64 = edx
int32_t var_30 = 7
int32_t var_34 = 0
int16_t var_44 = 0
int32_t var_8_1 = 0
int16_t var_2c
int32_t var_18

if (arg3 != 0)
    int16_t* eax_4 = sub_5483b0(arg3, &var_2c)
    var_8_1.b = 1
    
    if (&var_44 != eax_4)
        sub_52e3c0(&var_44, eax_4, 0, 0xffffffff)
    
    var_8_1.b = 0
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    var_18 = 7
    int32_t var_1c_1 = 0
    var_2c = 0
    
    if (arg2 == 0xb && arg4 - 1 u<= 0xf)
        switch (arg4 + &jump_table_585e6c[5]:3)
            case &lookup_table_585e84
                sub_5329d0(&var_44, u".bit1")
            case &lookup_table_585e84[1]
                sub_5329d0(&var_44, u".bit2")
            case &lookup_table_585e84[3]
                sub_5329d0(&var_44, u".bit4")
            case &lookup_table_585e84[7]
                sub_5329d0(&var_44, u".bit8")
            case &lookup_table_585e84[0xf]
                sub_5329d0(&var_44, u".bit16")
    
    edx = var_64

int32_t eax_9 = *(data_bac4e0 + 0x34)

if (eax_9 != 0)
    eax_9(arg5[1], *arg6, *edx, &var_44, eax_2)

*arg8 += 1
uint32_t eax_10 = sub_575a80(arg2)
int32_t result

if (eax_10.b == 0)
    int32_t* var_80_10 = arg8
    result = sub_585900(eax_10, arg2, arg3, arg5, arg6, var_64)
else
    int32_t eax_11
    int32_t ecx_8
    eax_11, ecx_8 = sub_57c370(eax_10, arg2, arg3, arg4)
    int32_t var_5c
    int16_t* ecx_10
    int32_t ebx_1
    
    if (arg3 == 0)
        var_18 = 7
        int32_t var_1c_2 = 0
        var_2c = 0
        sub_52e720(&var_2c, &data_ad7c90, nullptr)
        ecx_10 = &var_2c
        int32_t var_8_2 = 3
        ebx_1 = 2
    else
        int32_t var_80_6 = ecx_8
        ecx_10 = sub_6ad9b0(&var_5c)
        var_8_1.b = 2
        ebx_1 = 1
    
    int32_t var_6c_1 = ebx_1
    result = *(data_bac4e0 + 0x34)
    
    if (result != 0)
        result = result(arg5[1], *arg6, *var_64, ecx_10, eax_2)
    
    if ((ebx_1.b & 2) != 0)
        ebx_1 &= 0xfffffffd
        
        if (var_18 u>= 8)
            j__free(var_2c.d)
        
        result = 0
        int32_t var_18_1 = 7
        int32_t var_1c_3 = 0
        var_2c = 0
    
    int32_t var_48
    
    if ((ebx_1.b & 1) != 0 && var_48 u>= 8)
        result = j__free(var_5c)
    
    *arg8 += 1

if (var_30 u>= 8)
    result = j__free(var_44.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

// 函数: sub_654260
// 地址: 0x654260
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c4423
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t ebx
int32_t var_94 = ebx
int32_t var_9c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* lpFileName_1
sub_652000(&lpFileName_1)
int32_t var_8_1 = 0
int32_t* lpFileName = &lpFileName_1
int32_t var_3c

if (var_3c u>= 8)
    lpFileName = lpFileName_1

uint32_t result = GetFileAttributesW(lpFileName)

if (result == 0xffffffff || (result.b & 0x10) != 0)
    ebx.b = 1
else
    int128_t var_8c
    __builtin_memset(&var_8c, 0, 0x14)
    int64_t var_74_1 = 0
    var_8_1.b = 2
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, &data_af335c, 2)
    var_8_1.b = 3
    int32_t* var_7c
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = sub_6b7a80(&var_7c, &lpFileName_1, &var_2c)
    var_8_1.b = 2
    ebx.b = eax_3.b == 0
    
    if (var_18_1 u>= 8)
        eax_3 = j__free(var_2c.d)
    
    int32_t var_a0_7
    
    if (ebx.b != 0)
        int32_t var_68
        int16_t* eax_4 = sub_6b9ed0(&var_68)
        var_8_1.b = 4
        int16_t* eax_5 = sub_548cb0(eax_4, 0xaf7b40, &var_2c, eax_4)
        var_8_1.b = 5
        sub_684160(data_bac424, 2, eax_5)
        
        if (var_18_1 u>= 8)
            j__free(var_2c.d)
        
        int32_t var_18_2 = 7
        int32_t var_1c_2 = 0
        var_2c = 0
        int32_t var_54
        
        if (var_54 u< 8)
            goto label_6544e5
        
        var_a0_7 = var_68
        goto label_6544dd
    
    int32_t var_38
    sub_6b74a0(eax_3, 0xc, &var_38, var_7c)
    int32_t var_34
    
    if (var_38 != 1 || var_34 s< 2)
        int32_t var_18_4 = 7
        int32_t var_1c_4 = 0
        var_2c = 0
        sub_52e720(&var_2c, 0xaf7b90, 0x2f)
        var_8_1.b = 7
        sub_684160(data_bac424, 2, &var_2c)
        
        if (var_18_4 u< 8)
            goto label_6544e5
        
        var_a0_7 = var_2c.d
    label_6544dd:
        j__free(var_a0_7)
    label_6544e5:
        var_8_1.b = 1
        sub_6b73d0(var_7c)
        ebx.b = 0
    else
        int32_t var_30
        sub_5979b0(&var_8c, var_30)
        char* eax_6 = var_8c.d
        int32_t edx_1 = var_8c:4.d
        char* ecx_8 = eax_6
        
        if (eax_6 == edx_1)
            ecx_8 = nullptr
        
        sub_6b74a0(eax_6, edx_1 - eax_6, ecx_8, var_7c)
        sub_6b7b20(&var_7c)
        sub_6524b0(&var_8c)
        var_8c:0xc.d = 0
        int32_t var_18_3 = 7
        int32_t var_1c_3 = 0
        var_2c = 0
        sub_52e720(&var_2c, 0xaf7b68, 0x10)
        var_8_1.b = 6
        sub_684160(data_bac424, 5, &var_2c)
        var_8_1.b = 2
        sub_52e8a0(&var_2c)
        sub_6579f0(&var_8c, var_38, var_34)
        var_8_1.b = 1
        sub_6b7a50(&var_7c)
        sub_538150(&var_8c)
        ebx.b = 1

if (var_3c u>= 8)
    j__free(lpFileName_1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

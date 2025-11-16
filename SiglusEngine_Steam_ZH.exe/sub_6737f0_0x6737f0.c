// 函数: sub_6737f0
// 地址: 0x6737f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6a41
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_19c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = data_bac458
void* ecx = *(result + 0x144)
int32_t var_18c
int128_t var_30

if (ecx == 0)
    *(result + 0x144) = 1
    int16_t var_2c_1 = 0
    void* eax_3 = 0x11
    
    if (0x5f == ecx.w)
        eax_3 = ecx
    
    void* var_1c_1 = ecx
    int32_t var_18_1 = 7
    sub_52e720(&var_30:4, &data_af94a8, eax_3)
    int32_t var_8_1 = 0
    int32_t var_8_2 = 0xffffffff
    bool eax_4 = sub_626870(&var_30:4, 0) == 0
    
    if (var_18_1 u>= 8)
        j__free(var_2c_1.d)
    
    if (eax_4 == 0)
        void* eax_5 = data_bac458
        *(eax_5 + 0x351) = 1
        *(eax_5 + 0x34c) = 0x1010101
        sub_54aed0(&var_18c)
        int32_t var_8_3 = 1
        goto label_673a68
    
    sub_676760()
    result.b = 1
else if (ecx != 1)
    int32_t eax_16
    
    if (ecx == 2)
        *(result + 0x144) = 3
        int32_t var_18_2 = 7
        int16_t var_2c_2 = 0
        int32_t var_1c_2 = 0
        sub_52e720(&var_30:4, u"___SYSEVE_BLACK", 0xf)
        int32_t var_8_4 = 2
        bool cond:4_1 = sub_626870(&var_30:4, 0) == 0
        sub_52e8a0(&var_30:4)
        
        if (cond:4_1 != 0)
            *(data_bac458 + 0x144) = 0x63
        
        sub_54aed0(&var_18c)
        int32_t var_8_5 = 3
        eax_16 = *(data_bac47c + 0x1c) + 0xbb8
        goto label_673a73
    
    if (ecx == 3)
        *(result + 0x144) = 4
        goto label_673927
    
    if (ecx == 4)
        *(result + 0x144) = 0x63
        sub_54aed0(&var_18c)
        int32_t var_8_6 = 4
    label_673a68:
        eax_16 = *(data_bac47c + 0x1c) + 0x3e8
    label_673a73:
        int32_t var_48_1 = eax_16
        var_18c = 0x14
        char var_4c_1 = 0
        void var_2f4
        sub_54cf80(&var_2f4, &var_18c)
        sub_6766e0()
        void var_100
        sub_54ae40(&var_100)
        result.b = 0
    else if (ecx != 0x63)
        result.b = 0
    else
        *(result + 0x351) = 0
        *(result + 0x34c) = 0
        sub_676760()
        result.b = 1
else
    *(result + 0x144) = 2
    void* var_1b4
    sub_52e820(&var_1b4, &data_af94a8)
    int32_t var_1b0
    ecx = sub_5ea6c0(*(*(data_bac408 + 0xa4) + 0x144), var_1b4, var_1b0)
    *(*(*(data_bac408 + 0xa4) + 0x144) + 0x35c) = 1
label_673927:
    int32_t var_1a0_3 = 0x7fffffff
    int32_t var_1a4_2 = 0
    int32_t var_1a8_1 = 0x80000000
    int32_t var_1ac_1 = 0
    int32_t var_1b0_1 = 1
    var_1b4 = ecx
    char var_1b8_2 = 0
    int32_t var_1bc_1 = 1
    int32_t var_34
    __builtin_memset(&var_34, 0, 0x20)
    sub_6a65f0(0, 0, 0, 0x3e8, 0, nullptr, &var_34, var_1bc_1, var_1b8_2, var_1b4, var_1b0_1, 
        var_1ac_1, var_1a8_1)
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

// 函数: sub_70f320
// 地址: 0x70f320
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d0de0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_98 = 0
char* var_9c = arg2

if ((**arg1)(eax_2) != 0)
    int32_t var_30 = arg1[9]
    void* eax_5 = arg1[0xa]
    void* var_2c_1 = eax_5
    
    if (eax_5 != 0)
        *(eax_5 + 4)
        *(eax_5 + 4) += 1
    
    int32_t var_28_1 = arg1[0xb]
    void* eax_8 = arg1[0xc]
    void* var_24_1 = eax_8
    
    if (eax_8 != 0)
        *(eax_8 + 4)
        *(eax_8 + 4) += 1
    
    int32_t var_20_1 = arg1[0xd]
    void* eax_11 = arg1[0xe]
    void* var_1c_1 = eax_11
    
    if (eax_11 != 0)
        *(eax_11 + 4)
        *(eax_11 + 4) += 1
    
    int32_t var_8_1 = 1
    char var_78
    int32_t* eax_14 = sub_6fdbd0(&arg1[1], "struct ", &var_78, &arg1[1])
    var_8_1.b = 2
    int32_t var_48
    sub_6bdb10(eax_14.b, eax_14, &var_48, "{\n")
    var_8_1.b = 4
    int32_t var_64
    
    if (var_64 u>= 0x10)
        j__free(var_78.d)
    
    int32_t var_64_1 = 0xf
    int32_t i = 0
    int32_t var_68_1 = 0
    var_78 = 0
    
    do
        int32_t var_60
        char* ecx_6 = sub_701a60((&var_30)[i * 2], &var_60)
        int32_t esi_1 = *(ecx_6 + 0x10)
        
        if (*(ecx_6 + 0x14) u>= 0x10)
            ecx_6 = *ecx_6
        
        int32_t eax_16 = 0xb
        
        if (esi_1 u< 0xb)
            eax_16 = esi_1
        
        int32_t eax_17 = sub_6701a0(eax_16, "**/error/**", ecx_6, eax_16)
        bool cond:0_1 = eax_17 == 0
        
        if (eax_17 == 0)
            if (esi_1 u>= 0xb)
                eax_17.b = esi_1 != 0xb
            else
                eax_17 = 0xffffffff
            
            cond:0_1 = eax_17 == 0
        
        eax_17.b = cond:0_1
        var_8_1.b = 4
        eax_17.b = eax_17.b == 0
        int32_t var_4c
        
        if (var_4c u>= 0x10)
            j__free(var_60)
            eax_17.b = eax_17.b
        
        if (eax_17.b != 0)
            int32_t var_90
            int32_t* eax_19 = (**(&var_30)[i * 2])(&var_90)
            var_8_1.b = 6
            var_8_1.b = 7
            sub_6b3810(&var_48, sub_70ce80(eax_19.b, 0xb09a70, &var_60, eax_19), nullptr, 
                0xffffffff)
            
            if (var_4c u>= 0x10)
                j__free(var_60)
            
            var_8_1.b = 4
            var_4c = 0xf
            int32_t var_50_1 = 0
            var_60.b = 0
            int32_t var_7c
            
            if (var_7c u>= 0x10)
                j__free(var_90)
        
        i += 1
    while (i s< 3)
    
    sub_6b3720(&var_48, "};\n\n", 4)
    *(arg2 + 0x14) = 0xf
    *(arg2 + 0x10) = 0
    *arg2 = 0
    int32_t var_34
    int32_t ecx_11 = var_34
    void* var_38
    
    if (ecx_11 u>= 0x10)
        *arg2 = var_48
        var_48 = 0
    else if (var_38 != 0xffffffff)
        _memcpy(arg2, &var_48, var_38 + 1)
        ecx_11 = var_34
    
    *(arg2 + 0x10) = var_38
    *(arg2 + 0x14) = ecx_11
    int32_t var_98_1 = 1
    int32_t var_34_1 = 0xf
    int32_t var_38_1 = 0
    var_48.b = 0
    var_8_1.b = 0
    `eh vector vbase constructor iterator'(&var_30, 8, 3, sub_54b010)
else
    sub_541920(arg2, &data_b0018c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg2

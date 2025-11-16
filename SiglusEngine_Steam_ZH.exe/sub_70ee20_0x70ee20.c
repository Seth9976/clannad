// 函数: sub_70ee20
// 地址: 0x70ee20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d0d4c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_d8 = 0
char* var_dc = arg2

if ((**arg1)(eax_2) != 0)
    int32_t var_70 = arg1[9]
    void* eax_5 = arg1[0xa]
    void* var_6c_1 = eax_5
    
    if (eax_5 != 0)
        *(eax_5 + 4)
        *(eax_5 + 4) += 1
    
    int32_t var_68_1 = arg1[0xb]
    void* eax_8 = arg1[0xc]
    void* var_64_1 = eax_8
    
    if (eax_8 != 0)
        *(eax_8 + 4)
        *(eax_8 + 4) += 1
    
    int32_t var_60_1 = arg1[0xd]
    void* eax_11 = arg1[0xe]
    void* var_5c_1 = eax_11
    
    if (eax_11 != 0)
        *(eax_11 + 4)
        *(eax_11 + 4) += 1
    
    int32_t var_58_1 = arg1[0xf]
    void* eax_14 = arg1[0x10]
    void* var_54_1 = eax_14
    
    if (eax_14 != 0)
        *(eax_14 + 4)
        *(eax_14 + 4) += 1
    
    int32_t var_50_1 = arg1[0x11]
    void* eax_17 = arg1[0x12]
    void* var_4c_1 = eax_17
    
    if (eax_17 != 0)
        *(eax_17 + 4)
        *(eax_17 + 4) += 1
    
    int32_t var_48_1 = arg1[0x13]
    void* eax_20 = arg1[0x14]
    void* var_44_1 = eax_20
    
    if (eax_20 != 0)
        *(eax_20 + 4)
        *(eax_20 + 4) += 1
    
    int32_t var_40_1 = arg1[0x15]
    void* eax_23 = arg1[0x16]
    void* var_3c_1 = eax_23
    
    if (eax_23 != 0)
        *(eax_23 + 4)
        *(eax_23 + 4) += 1
    
    int32_t var_38_1 = arg1[0x17]
    void* eax_26 = arg1[0x18]
    void* var_34_1 = eax_26
    
    if (eax_26 != 0)
        *(eax_26 + 4)
        *(eax_26 + 4) += 1
    
    int32_t var_30_1 = arg1[0x19]
    void* eax_29 = arg1[0x1a]
    void* var_2c_1 = eax_29
    
    if (eax_29 != 0)
        *(eax_29 + 4)
        *(eax_29 + 4) += 1
    
    int32_t var_28_1 = arg1[0x1b]
    void* eax_32 = arg1[0x1c]
    void* var_24_1 = eax_32
    
    if (eax_32 != 0)
        *(eax_32 + 4)
        *(eax_32 + 4) += 1
    
    int32_t var_20_1 = arg1[0x1d]
    void* eax_35 = arg1[0x1e]
    void* var_1c_1 = eax_35
    
    if (eax_35 != 0)
        *(eax_35 + 4)
        *(eax_35 + 4) += 1
    
    int32_t var_8_1 = 1
    char var_b8
    int32_t* eax_38 = sub_6fdbd0(&arg1[1], "struct ", &var_b8, &arg1[1])
    var_8_1.b = 2
    int32_t var_88
    sub_6bdb10(eax_38.b, eax_38, &var_88, "{\n")
    var_8_1.b = 4
    int32_t var_a4
    
    if (var_a4 u>= 0x10)
        j__free(var_b8.d)
    
    int32_t var_a4_1 = 0xf
    int32_t i = 0
    int32_t var_a8_1 = 0
    var_b8 = 0
    
    do
        int32_t var_a0
        char* ecx_14 = sub_701a60((&var_70)[i * 2], &var_a0)
        int32_t esi_1 = *(ecx_14 + 0x10)
        
        if (*(ecx_14 + 0x14) u>= 0x10)
            ecx_14 = *ecx_14
        
        int32_t eax_40 = 0xb
        
        if (esi_1 u< 0xb)
            eax_40 = esi_1
        
        int32_t eax_41 = sub_6701a0(eax_40, "**/error/**", ecx_14, eax_40)
        bool cond:0_1 = eax_41 == 0
        
        if (eax_41 == 0)
            if (esi_1 u>= 0xb)
                eax_41.b = esi_1 != 0xb
            else
                eax_41 = 0xffffffff
            
            cond:0_1 = eax_41 == 0
        
        eax_41.b = cond:0_1
        var_8_1.b = 4
        eax_41.b = eax_41.b == 0
        int32_t var_8c
        
        if (var_8c u>= 0x10)
            j__free(var_a0)
            eax_41.b = eax_41.b
        
        if (eax_41.b != 0)
            int32_t var_d0
            int32_t* eax_43 = (**(&var_70)[i * 2])(&var_d0)
            var_8_1.b = 6
            var_8_1.b = 7
            sub_6b3810(&var_88, sub_70ce80(eax_43.b, 0xb09a70, &var_a0, eax_43), nullptr, 
                0xffffffff)
            
            if (var_8c u>= 0x10)
                j__free(var_a0)
            
            var_8_1.b = 4
            var_8c = 0xf
            int32_t var_90_1 = 0
            var_a0.b = 0
            int32_t var_bc
            
            if (var_bc u>= 0x10)
                j__free(var_d0)
        
        i += 1
    while (i s< 0xb)
    
    sub_6b3720(&var_88, "};\n\n", 4)
    *(arg2 + 0x14) = 0xf
    *(arg2 + 0x10) = 0
    *arg2 = 0
    int32_t var_74
    int32_t ecx_19 = var_74
    void* var_78
    
    if (ecx_19 u>= 0x10)
        *arg2 = var_88
        var_88 = 0
    else if (var_78 != 0xffffffff)
        _memcpy(arg2, &var_88, var_78 + 1)
        ecx_19 = var_74
    
    *(arg2 + 0x10) = var_78
    *(arg2 + 0x14) = ecx_19
    int32_t var_d8_1 = 1
    int32_t var_74_1 = 0xf
    int32_t var_78_1 = 0
    var_88.b = 0
    var_8_1.b = 0
    `eh vector vbase constructor iterator'(&var_70, 8, 0xb, sub_54b010)
else
    sub_541920(arg2, &data_b0018c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg2

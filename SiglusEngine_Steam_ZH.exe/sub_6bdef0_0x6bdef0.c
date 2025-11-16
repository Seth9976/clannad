// 函数: sub_6bdef0
// 地址: 0x6bdef0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cbcbb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_a4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
int32_t var_8_1 = 0
int32_t* ebx

if (sub_6b7d10(arg1, &var_2c) != 0)
    int32_t var_78_1 = 7
    int32_t var_7c_1 = 0
    int16_t var_8c = 0
    var_8_1.b = 1
    int16_t* esi_1 = &var_2c
    int32_t edx_1 = var_18
    int16_t* edi_1 = var_2c.d
    
    if (edx_1 u>= 8)
        esi_1 = edi_1
    
    int16_t* edi_2 = edi_1
    
    while (true)
        int16_t* ecx_2 = &var_2c
        
        if (edx_1 u>= 8)
            ecx_2 = edi_2
        
        if (esi_1 == &ecx_2[var_1c])
            break
        
        uint32_t eax_6 = zx.d(*esi_1)
        
        if (eax_6 != 0xa && eax_6 != 9)
            sub_55d330(&var_8c, 1, eax_6.w)
            edx_1 = var_18
            edi_2 = var_2c.d
        
        esi_1 = &esi_1[1]
    
    sub_52e3c0(&var_2c, &var_8c, 0, 0xffffffff)
    int16_t* ecx_5 = &var_2c
    
    if (var_18 u>= 8)
        ecx_5 = var_2c.d
    
    int16_t* var_94 = ecx_5
    int16_t* ecx_6 = &var_2c
    
    if (var_18 u>= 8)
        ecx_6 = var_2c.d
    
    int32_t var_60_1 = 7
    int32_t var_64_1 = 0
    int128_t var_5c
    __builtin_memset(&var_5c, 0, 0x1a)
    int32_t var_30_1 = 7
    int16_t var_74 = 0
    int32_t var_34_1 = 0
    var_8_1.b = 2
    int16_t var_44
    
    if (sub_6be580(&var_94, &ecx_6[var_1c], &var_74) != 0)
        if (arg2 != &var_74)
            sub_52e3c0(arg2, &var_74, 0, 0xffffffff)
        
        sub_6bf270(&arg2[6], &var_5c)
        sub_6bf420(&arg2[9], &var_5c:0xc)
        
        if (&arg2[0xc] != &var_44)
            sub_52e3c0(&arg2[0xc], &var_44, 0, 0xffffffff)
        
        ebx.b = 1
    else
        ebx.b = 0
    
    if (var_30_1 u>= 8)
        j__free(var_44.d)
    
    int32_t* esi_2 = var_5c:0xc.d
    int32_t var_30_2 = 7
    int32_t var_34_2 = 0
    var_44 = 0
    
    if (esi_2 != 0)
        int32_t var_4c
        
        if (esi_2 != var_4c)
            do
                sub_6ba6b0(esi_2)
                esi_2 = &esi_2[0x12]
            while (esi_2 != var_4c)
            
            esi_2 = var_5c:0xc.d
        
        j__free(esi_2)
        var_5c:0xc.d = 0
        int32_t var_4c_1 = 0
        int32_t var_48_1 = 0
    
    void* ecx_13 = var_5c.d
    
    if (ecx_13 != 0)
        int32_t ecx
        int32_t var_a8_7 = ecx
        void* var_ac_2 = ecx_13
        sub_66b250(ecx_13, var_5c:4.d)
        j__free(var_5c.d)
        var_5c.d = 0
        var_5c:4.d = 0
        var_5c:8.d = 0
    
    if (var_60_1 u>= 8)
        j__free(var_74.d)
    
    int32_t var_60_2 = 7
    int32_t var_64_2 = 0
    var_74 = 0
    
    if (var_78_1 u>= 8)
        j__free(var_8c.d)
else
    ebx.b = 0

if (var_18 u>= 8)
    j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return ebx.b

// 函数: sub_64f280
// 地址: 0x64f280
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3c30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_374 = eax_2
char result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg3 != 0)
    if (*(arg3 + 0x1d8) != 0)
        void** eax_4 = data_bac458 + 0x2fc
        bool cond:0_1 = eax_4[5] u< 8
        eax_4[4] = 0
        
        if (not(cond:0_1))
            eax_4 = *eax_4
        
        *eax_4 = nullptr
        sub_5d9490(arg3)
    
    void* edi_1 = arg3 + 0x1928
    sub_5e0b10(edi_1)
    sub_5d90a0(arg3)
    
    for (void** i = *arg2; i != arg2[1]; i = &i[8])
        int32_t var_18_1 = 7
        int32_t var_1c_1 = 0
        int16_t var_2c = 0
        sub_52e3c0(&var_2c, i, 0, 0xffffffff)
        int32_t var_8_1 = 0
        sub_64dcd0(&var_2c)
        int32_t ecx_5 = i[7]
        int32_t edx = i[6]
        void** var_380_2 = &var_2c
        
        if (*(arg3 + 0x19a4) != *(arg3 + 0x19a8))
            sub_5e0b60(edi_1, var_380_2, edx, ecx_5)
            void* edi_3 = *(arg3 + 0x1e0) * 0x1c0 + *(arg3 + 0x228)
            *(edi_3 + 0x170) = 0
            *(edi_3 + 0x174) = 0
            *(edi_3 + 0x178) = 0
            sub_5de520(edi_3)
            *(edi_3 + 0x1a5) = 1
            edi_1 = arg3 + 0x1928
        else
            sub_5e0b60(edi_1, var_380_2, edx, ecx_5)
        
        int32_t var_8_2 = 0xffffffff
        
        if (var_18_1 u>= 8)
            j__free(var_2c.d)
    
    sub_5d9120(arg3)
    *(arg3 + 0x19a0) = arg6
    void* eax_9 = data_bac458
    int32_t var_208_1 = arg5
    int32_t var_20c = arg4
    *(eax_9 + 0x344) = arg5
    *(eax_9 + 0x340) = arg4
    sub_5da520(arg3 + 0x1ec, &var_20c)
    sub_620fd0()
    void* edx_2 = data_bac4a0
    
    if (*(edx_2 + 0xd1) == 0)
        char* ecx_11 = data_bac498
        
        if (ecx_11[1] != 0)
            void* eax_12
            
            if (*(edx_2 + 0x104) == 0 && *(data_bac458 + 0x354) == 0)
                eax_12.b = *(data_bac4e4 + 0x19a)
            
            if (*(edx_2 + 0x104) != 0 || *(data_bac458 + 0x354) != 0 || eax_12.b != 0)
                *ecx_11 = 1
                char eax_13 = sub_660000()
                
                if (eax_13 == 0)
                    *ecx_11 = eax_13
    
    *(arg3 + 0x1d5) = 1
    void* var_364
    void var_2d8
    int32_t var_204
    void var_200
    void var_178
    void var_ac
    
    if (arg7 != 0)
        sub_54aed0(&var_204)
        int32_t var_8_3 = 1
        int32_t var_30_1 = 1
        var_204 = 0x12
        __builtin_memcpy(&var_ac, arg3, 0x80)
        *(&var_ac + (var_30_1 << 2)) = 2
        int32_t var_30_2 = var_30_1 + 1
        __builtin_memcpy(&var_200, &var_ac, 0x80)
        int32_t var_378_5 = sub_54cf80(&var_364, &var_204)
        var_8_3.b = 2
        sub_6767a0(data_bac458 + 0x158)
        int32_t ecx_18 = sub_62f9b0(data_bac458, &var_364)
        
        if (*(var_364 + 0xad9a68) != 0)
            int32_t var_378_7 = ecx_18
            sub_696dc0()
        
        sub_54ae40(&var_2d8)
        sub_54ae40(&var_178)
    
    int32_t* ecx_21 = &var_204
    int32_t ecx_23
    
    if (*(arg3 + 0x130) != 1)
        sub_54aed0(ecx_21)
        int32_t var_8_5 = 5
        int32_t var_30_5 = 1
        var_204 = 0x12
        __builtin_memcpy(&var_ac, arg3, 0x80)
        *(&var_ac + (var_30_5 << 2)) = 3
        int32_t var_30_6 = var_30_5 + 1
        __builtin_memcpy(&var_200, &var_ac, 0x80)
        ecx_23 = sub_54cf80(&var_364, &var_204)
        var_8_5.b = 6
    else
        sub_54aed0(ecx_21)
        int32_t var_8_4 = 3
        int32_t var_30_3 = 1
        var_204 = 0x12
        __builtin_memcpy(&var_ac, arg3, 0x80)
        *(&var_ac + (var_30_3 << 2)) = 0x37
        int32_t var_30_4 = var_30_3 + 1
        __builtin_memcpy(&var_200, &var_ac, 0x80)
        ecx_23 = sub_54cf80(&var_364, &var_204)
        var_8_4.b = 4
    
    int32_t var_378_10 = ecx_23
    sub_6767a0(data_bac458 + 0x158)
    int32_t ecx_28 = sub_62f9b0(data_bac458, &var_364)
    
    if (*(var_364 + 0xad9a68) != 0)
        int32_t var_378_12 = ecx_28
        sub_696dc0()
    
    sub_54ae40(&var_2d8)
    sub_54ae40(&var_178)
    sub_54aed0(&var_204)
    int32_t var_8_6 = 7
    var_204 = 0xe
    __builtin_memcpy(&var_200, arg3, 0x80)
    int32_t var_378_14 = sub_54cf80(&var_364, &var_204)
    var_8_6.b = 8
    sub_6767a0(data_bac458 + 0x158)
    int32_t ecx_37 = sub_62f9b0(data_bac458, &var_364)
    
    if (*(var_364 + 0xad9a68) != 0)
        int32_t var_378_16 = ecx_37
        sub_696dc0()
    
    sub_54ae40(&var_2d8)
    result = sub_54ae40(&var_178)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

// 函数: sub_6e31a0
// 地址: 0x6e31a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cd108
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[0x3f] += 1
int32_t result

if (arg2 s< 0)
    int32_t var_50_1 = 0
    int32_t var_4c_1 = 0
    int32_t var_4c_2 = 7
    int32_t var_50_2 = 0
    int16_t var_60 = 0
    sub_52e720(&var_60, 0xb057e4, 0x18)
    int32_t var_8_1 = 1
    
    if (arg1 != &var_60)
        sub_52e3c0(arg1, &var_60, 0, 0xffffffff)
    
    int32_t var_8_2 = 0xffffffff
    
    if (var_4c_2 u>= 8)
        j__free(var_60.d)
    
    int32_t var_4c_3 = 7
    var_60 = 0
    result = 0xffffffff
    int32_t var_50_3 = 0
else if (arg2 s< arg1[0x46])
    void* edi_1 = arg1[0x4a] + arg2 * 0x1c
    int32_t eax_5 = *(edi_1 + 8)
    
    if (eax_5 s> 0)
        int128_t var_fc
        __builtin_memset(&var_fc, 0, 0x1c)
        int32_t* eax_6 = sub_6e4ac0(&var_fc, eax_5)
        
        if (eax_6 != 0)
            int32_t edx_1 = arg1[0x53]
            void* edi_4
            
            if (edx_1 == 0)
                void* eax_13
                int32_t* edx_2
                edx_2:eax_13 = sx.q(arg1[0x45] + *(edi_1 + 0xc))
                edi_4 = sub_6b74a0(sub_6b7820(eax_13, FILE_BEGIN, arg1[0x40], eax_13, edx_2), 
                    *(edi_1 + 8), eax_6, arg1[0x40])
            else
                int32_t edi_3 = arg1[0x51] - arg1[0x50]
                void* ecx_11 = *(edi_1 + 0xc)
                
                if (ecx_11 s>= edi_3)
                    edi_4 = nullptr
                    sub_748840(eax_6, ecx_11 + edx_1, edi_4, eax_2)
                else
                    void* eax_8 = *(edi_1 + 8)
                    edi_4 = edi_3 - ecx_11
                    
                    if (eax_8 s>= edi_4)
                        sub_748840(eax_6, ecx_11 + edx_1, edi_4, eax_2)
                    else
                        edi_4 = eax_8
                        sub_748840(eax_6, ecx_11 + edx_1, edi_4, eax_2)
            
            if (*(edi_1 + 8) == edi_4)
                void var_10c
                
                if (sub_6e4b50(&var_fc, edi_4) s>= 0)
                    if (sub_6e4cb0(&var_fc, &var_10c) s>= 0)
                        int128_t* var_11c_13 = &var_fc
                        
                        if (sub_6e4e20(&arg1[0x54], &var_10c) s>= 0)
                            sub_6e4a80(var_11c_13)
                            result.b = *(edi_1 + 4) != 0
                        else
                            sub_6e4a80(var_11c_13)
                            int32_t var_b0_1 = 0
                            int32_t var_ac_1 = 0
                            int32_t var_ac_2 = 7
                            int32_t var_b0_2 = 0
                            int16_t var_c0 = 0
                            sub_52e720(&var_c0, 0xb058c0, 0x14)
                            int32_t var_8_15 = 0xf
                            
                            if (arg1 != &var_c0)
                                sub_52e3c0(arg1, &var_c0, 0, 0xffffffff)
                            
                            int32_t var_8_16 = 0xffffffff
                            sub_52e8a0(&var_c0)
                            result = 0xfffffff8
                    else
                        sub_6e4a80(&var_fc)
                        int32_t var_c8_1 = 0
                        int32_t var_c4_1 = 0
                        int32_t var_c4_2 = 7
                        int32_t var_c8_2 = 0
                        int16_t var_d8 = 0
                        sub_52e720(&var_d8, 0xb058ec, 0x12)
                        int32_t var_8_13 = 0xd
                        
                        if (arg1 != &var_d8)
                            sub_52e3c0(arg1, &var_d8, 0, 0xffffffff)
                        
                        int32_t var_8_14 = 0xffffffff
                        sub_52e8a0(&var_d8)
                        result = 0xfffffff9
                else
                    sub_6e4a80(&var_fc)
                    int32_t var_98_1 = 0
                    int32_t var_94_1 = 0
                    int32_t var_94_2 = 7
                    int32_t var_98_2 = 0
                    int16_t var_a8 = 0
                    sub_52e720(&var_a8, 0xb05868, 0x12)
                    int32_t var_8_11 = 0xb
                    
                    if (arg1 != &var_a8)
                        sub_52e3c0(arg1, &var_a8, 0, 0xffffffff)
                    
                    int32_t var_8_12 = 0xffffffff
                    sub_52e8a0(&var_a8)
                    result = 0xfffffffa
            else
                sub_6e4a80(&var_fc)
                int32_t var_80_1 = 0
                int32_t var_7c_1 = 0
                int32_t var_7c_2 = 7
                int32_t var_80_2 = 0
                int16_t var_90 = 0
                sub_52e720(&var_90, 0xb05890, 0x17)
                int32_t var_8_9 = 9
                
                if (arg1 != &var_90)
                    sub_52e3c0(arg1, &var_90, 0, 0xffffffff)
                
                int32_t var_8_10 = 0xffffffff
                sub_52e8a0(&var_90)
                result = 0xfffffffb
        else
            int32_t* var_68_1 = eax_6
            int32_t* var_64_1 = eax_6
            int32_t var_64_2 = 7
            int32_t* var_68_2 = eax_6
            int16_t var_78 = eax_6.w
            sub_52e720(&var_78, 0xb05818, 0x14)
            int32_t var_8_7 = 7
            
            if (arg1 != &var_78)
                sub_52e3c0(arg1, &var_78, 0, 0xffffffff)
            
            int32_t var_8_8 = 0xffffffff
            sub_52e8a0(&var_78)
            result = 0xfffffffc
    else
        int32_t var_20_1 = 0
        int32_t var_1c_1 = 0
        int32_t var_1c_2 = 7
        int32_t var_20_2 = 0
        int16_t var_30 = 0
        sub_52e720(&var_30, 0xb05844, 0x10)
        int32_t var_8_5 = 5
        
        if (arg1 != &var_30)
            sub_52e3c0(arg1, &var_30, 0, 0xffffffff)
        
        int32_t var_8_6 = 0xffffffff
        
        if (var_1c_2 u>= 8)
            j__free(var_30.d)
        
        int32_t var_1c_3 = 7
        var_30 = 0
        result = 0xfffffffd
        int32_t var_20_3 = 0
else
    int32_t var_38_1 = 0
    int32_t var_34_1 = 0
    int32_t var_34_2 = 7
    int32_t var_38_2 = 0
    int16_t var_48 = 0
    sub_52e720(&var_48, 0xb057b0, 0x18)
    int32_t var_8_3 = 3
    
    if (arg1 != &var_48)
        sub_52e3c0(arg1, &var_48, 0, 0xffffffff)
    
    int32_t var_8_4 = 0xffffffff
    
    if (var_34_2 u>= 8)
        j__free(var_48.d)
    
    int32_t var_34_3 = 7
    var_48 = 0
    result = 0xfffffffe
    int32_t var_38_3 = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

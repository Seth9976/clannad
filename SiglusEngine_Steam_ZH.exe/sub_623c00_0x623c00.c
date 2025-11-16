// 函数: sub_623c00
// 地址: 0x623c00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bfec9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_fc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x4a5b8) != 0)
    void* esi_1 = data_bac4a0
    void* edx_1 = data_bac484
    void* edi_1 = data_bac498
    
    if (*(esi_1 + 0xcc) == 0)
        result.b = *(edx_1 + 0x138)
        
        if (result.b == 0)
            result.b = *(edi_1 + 2)
            result.b = result.b == 0
        else
            result.b = 0
    else
        result.b = 0
    
    void* ecx = data_bac4c8
    
    if (*(ecx + 0x2404) == 1)
        if (result.b == 0)
        label_623c93:
            
            if (*(ecx + 0x2404) == 1)
                *(ecx + 0x2404) = 0
                *(ecx + 0x240c) = 0
                result = sub_65fc50()
                edx_1 = data_bac484
                esi_1 = data_bac4a0
                edi_1 = data_bac498
        else
            result = data_bac458
            
            if (*(result + 0x3fe) == 0)
                goto label_623c93
    
    if (*(esi_1 + 0xcc) == 0)
        result.b = *(edx_1 + 0x138)
        
        if (result.b == 0)
            result.b = *(edi_1 + 2)
            ecx.b = result.b == 0
        else
            ecx.b = 0
    else
        ecx.b = 0
    
    if (sub_635790(result, 0x72, ecx.b, 0, 2) != 0)
        sub_65fbd0()
        esi_1 = data_bac4a0
    
    if (*(arg1 + 0x4a7a1) != 0)
        void* eax_4 = sub_634fb0()
        
        if (sub_635790(eax_4, 0x31, eax_4.b, 0, 1) != 0)
            *(esi_1 + 0x1ea) = 1
    
    void* eax_6 = sub_634fb0()
    
    if (sub_635790(eax_6, 0x77, eax_6.b, 0, 2) != 0)
        sub_60e290()
    
    void* eax_8 = sub_634fb0()
    
    if (sub_635790(eax_8, 0x4f, eax_8.b, 0, 2) != 0)
        sub_65ef70(1)
    
    void* eax_10 = sub_634fb0()
    
    if (sub_635790(eax_10, 0x4b, eax_10.b, 0, 2) != 0)
        sub_65f1a0()
    
    void* eax_12 = sub_634fb0()
    
    if (sub_635790(eax_12, 0x50, eax_12.b, 0, 2).b != 0)
        int32_t var_18_1 = 7
        int32_t var_1c_1 = 0
        int16_t var_2c = 0
        int32_t var_8_1 = 0
        sub_5329d0(&var_2c, &data_af4370)
        sub_5329d0(&var_2c, &data_af43b4)
        sub_532870(&var_2c, data_bac510 + 0x1c, 0, 0xffffffff)
        void* eax_15 = data_bac458
        void var_74
        
        if (*(eax_15 + 0x2f4) != 0)
            var_8_1.b = 1
            sub_532870(&var_2c, sub_548cb0(eax_15 + 0x2e4, 0xaf4300, &var_74, eax_15 + 0x2e4), 0, 
                0xffffffff)
            var_8_1.b = 0
            sub_52e8a0(&var_74)
        
        SYSTEMTIME systemTime
        GetLocalTime(&systemTime)
        void var_8c
        int16_t* eax_18 = sub_6b2fd0(&var_8c)
        var_8_1.b = 2
        void var_5c
        int16_t* eax_19 = sub_548cb0(eax_18, 0xaf2fb4, &var_5c, eax_18)
        var_8_1.b = 3
        var_8_1.b = 4
        sub_532870(&var_2c, sub_532b80(eax_19, eax_19, &var_74, &data_af18c0), 0, 0xffffffff)
        sub_52e8a0(&var_74)
        sub_52e8a0(&var_5c)
        var_8_1.b = 0
        sub_52e8a0(&var_8c)
        int16_t* ecx_18 = &var_2c
        void* eax_21
        eax_21.b = *(data_bac484 + 0x138)
        void var_118
        void var_d4
        void var_bc
        void var_a4
        int32_t var_7c
        int32_t var_4c
        void var_44
        
        if (eax_21.b == 0)
            sub_5329d0(ecx_18, &data_ad90c0)
            void* ecx_44 = data_bac45c
            int32_t eax_35 = *(ecx_44 + 0x64)
            
            if (eax_35 s>= 0)
                var_8_1.b = 0x10
                int32_t var_100_34 = sub_698170(ecx_44, &var_74, eax_35)
                *(data_bac45c + 0x68)
                int16_t* eax_37 = sub_6ad9b0(&var_bc)
                var_8_1.b = 0x11
                int16_t* eax_38 = sub_532b80(eax_37, &var_74, &var_d4, u".ss (")
                var_8_1.b = 0x12
                int16_t* eax_39 = sub_5327a0(eax_38, eax_38, &var_a4, eax_37)
                var_8_1.b = 0x13
                var_8_1.b = 0x14
                sub_532870(&var_2c, sub_532b80(eax_39, eax_39, &var_44, &data_af43d4), 0, 
                    0xffffffff)
                sub_52e8a0(&var_44)
                sub_52e8a0(&var_a4)
                sub_52e8a0(&var_d4)
                sub_52e8a0(&var_bc)
                var_8_1.b = 0
                sub_52e8a0(&var_74)
            
            void* eax_41 = sub_64da40()
            
            if (eax_41 != 0)
                int32_t eax_42 = *(eax_41 + 0x1f8)
                
                if (eax_42 s>= 0)
                    int32_t var_100_39 = eax_42
                    sub_52e820(&var_118, u"KOE(%09d)")
                    var_8_1.b = 0x15
                    sub_532870(&var_2c, sub_6ae4c0(&var_44, var_118), 0, 0xffffffff)
                    var_8_1.b = 0
                    sub_52e8a0(&var_44)
                
                sub_5d8400(eax_41, &var_8c)
                var_8_1.b = 0x16
                
                if (var_7c != 0)
                    int16_t* eax_45 = sub_548cb0(&var_8c, 0xaf43f4, &var_a4, &var_8c)
                    var_8_1.b = 0x17
                    var_8_1.b = 0x18
                    sub_532870(&var_2c, sub_532b80(eax_45, eax_45, &var_44, &data_af43ec), 0, 
                        0xffffffff)
                    sub_52e8a0(&var_44)
                    var_8_1.b = 0x16
                    sub_52e8a0(&var_a4)
                
                int16_t* eax_47 = sub_5d8dd0(eax_41, &var_5c)
                var_8_1.b = 0x19
                
                if (var_4c != 0)
                    var_8_1.b = 0x1a
                    sub_532870(&var_2c, sub_532b80(eax_47, &var_5c, &var_44, &data_ad90c0), 0, 
                        0xffffffff)
                    sub_52e8a0(&var_44)
                
                sub_52e8a0(&var_5c)
                var_8_1.b = 0
                sub_52e8a0(&var_8c)
        else
            sub_5329d0(ecx_18, &data_af43b8)
            int32_t eax_22 = sub_5d3bb0()
            
            if (eax_22 s>= 0)
                sub_698170(data_bac45c, &var_74, eax_22)
                var_8_1.b = 5
                int32_t eax_23
                int32_t ecx_20
                eax_23, ecx_20 = sub_5d3bf0()
                int32_t var_100_18 = ecx_20
                int16_t* eax_24 = sub_6ad9b0(&var_44)
                var_8_1.b = 6
                int16_t* eax_25 = sub_532b80(eax_24, &var_74, &var_a4, u".ss (")
                var_8_1.b = 7
                int16_t* eax_26 = sub_5327a0(eax_25, eax_25, &var_d4, eax_24)
                var_8_1.b = 8
                var_8_1.b = 9
                sub_532870(&var_2c, sub_532b80(eax_26, eax_26, &var_bc, &data_af43d4), 0, 
                    0xffffffff)
                sub_52e8a0(&var_bc)
                sub_52e8a0(&var_d4)
                sub_52e8a0(&var_a4)
                sub_52e8a0(&var_44)
                var_8_1.b = 0
                sub_52e8a0(&var_74)
            
            int32_t eax_28 = sub_5d3a60()
            
            if (eax_28 s>= 0)
                int32_t var_100_23 = eax_28
                sub_52e820(&var_118, u"KOE(%09d)")
                var_8_1.b = 0xa
                sub_532870(&var_2c, sub_6ae4c0(&var_44, var_118), 0, 0xffffffff)
                var_8_1.b = 0
                sub_52e8a0(&var_44)
            
            sub_5d3ab0(&var_5c)
            var_8_1.b = 0xb
            
            if (var_4c != 0)
                int16_t* eax_31 = sub_548cb0(&var_5c, 0xaf43f4, &var_a4, &var_5c)
                var_8_1.b = 0xc
                var_8_1.b = 0xd
                sub_532870(&var_2c, sub_532b80(eax_31, eax_31, &var_44, &data_af43ec), 0, 
                    0xffffffff)
                sub_52e8a0(&var_44)
                var_8_1.b = 0xb
                sub_52e8a0(&var_a4)
            
            int16_t* eax_33 = sub_5d3b30(&var_8c)
            var_8_1.b = 0xe
            
            if (var_7c != 0)
                var_8_1.b = 0xf
                sub_532870(&var_2c, sub_532b80(eax_33, &var_8c, &var_44, &data_ad90c0), 0, 
                    0xffffffff)
                sub_52e8a0(&var_44)
            
            sub_52e8a0(&var_8c)
            var_8_1.b = 0
            sub_52e8a0(&var_5c)
        sub_5329d0(&var_2c, &data_ad90c0)
        sub_6b5950(&var_2c)
        sub_52e8a0(&var_2c)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

// 函数: sub_6b9690
// 地址: 0x6b9690
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cb6cb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_19c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_184 = 0
*(arg1 + 0x14) = 7
*(arg1 + 0x10) = 0
int16_t* var_18c = arg1
*arg1 = 0
int32_t var_8_1 = 0
int32_t var_184_1 = 1
void* esi = *fsbase->ThreadLocalStoragePointer

if (*(esi + 4) == 0)
    int32_t* eax_4 = sub_745f3f(0xc)
    
    if (eax_4 == 0)
        eax_4 = nullptr
    else
        *eax_4 = 0
        eax_4[1] = 0
        eax_4[2] = 0
    
    *(esi + 4) = eax_4

int32_t* eax_5 = *(esi + 4)
void* i = eax_5[1]

if (i != *eax_5)
    int32_t* edi_1 = i - 0x34
    int32_t* var_180_1 = edi_1
    
    do
        void** eax_6 = &edi_1[7]
        int32_t var_5c
        int32_t var_48
        int16_t var_44
        int32_t var_30
        
        if (edi_1[0xb] != 0)
            if (*(arg1 + 0x10) != 0)
                sub_532910(arg1, &data_ad90c0, 1)
                eax_6 = &edi_1[7]
            
            void** eax_7 = sub_548cb0(eax_6, 0xb02dc4, &var_5c, eax_6)
            int32_t var_8_2 = 1
            var_8_2.b = 2
            sub_532870(arg1, sub_532b80(eax_7, eax_7, &var_44, 0xb02d60), 0, 0xffffffff)
            
            if (var_30 u>= 8)
                j__free(var_44.d)
            
            var_30 = 7
            int32_t var_34_1 = 0
            var_44 = 0
            
            if (var_48 u>= 8)
                j__free(var_5c)
        
        int32_t var_18_1 = 7
        int32_t var_1c_1 = 0
        int16_t var_2c = 0
        int32_t var_8_3 = 3
        int32_t var_1a0_13
        
        switch (edi_1[-1] - 1)
            case 0
                int32_t var_14c
                int16_t* eax_11 = sub_6b8680(&var_14c, *edi_1)
                var_8_3.b = 4
                
                if (&var_2c != eax_11)
                    sub_52e3c0(&var_2c, eax_11, 0, 0xffffffff)
                
                var_8_3.b = 3
                int32_t var_138
                
                if (var_138 u>= 8)
                    j__free(var_14c)
                
                goto label_6b9a3f
            case 1
                int32_t var_164
                int16_t* eax_12 = sub_6b8820(&var_164, *edi_1)
                var_8_3.b = 5
                
                if (&var_2c != eax_12)
                    sub_52e3c0(&var_2c, eax_12, 0, 0xffffffff)
                
                var_8_3.b = 3
                int32_t var_150
                
                if (var_150 u>= 8)
                    j__free(var_164)
                
                goto label_6b9a3f
            case 2
                int32_t var_17c
                int16_t* eax_13 = sub_6b8980(&var_17c, *edi_1)
                var_8_3.b = 6
                int16_t var_74
                int16_t* eax_14 = sub_6ada50(eax_13, *var_180_1, &var_74, 0x10)
                var_8_3.b = 7
                int16_t var_bc
                int16_t* eax_15 = sub_548cb0(eax_14, u"hr = ", &var_bc, eax_14)
                var_8_3.b = 8
                int16_t var_104
                int16_t* eax_16 = sub_532b80(eax_15, eax_15, &var_104, 0xaf04bc)
                var_8_3.b = 9
                int16_t var_ec
                int16_t* eax_17 = sub_5327a0(eax_16, eax_16, &var_ec, eax_13)
                var_8_3.b = 0xa
                int16_t* eax_18 = sub_532b80(eax_17, eax_17, &var_44, &data_ad90a0)
                var_8_3.b = 0xb
                
                if (&var_2c != eax_18)
                    sub_52e3c0(&var_2c, eax_18, 0, 0xffffffff)
                
                if (var_30 u>= 8)
                    j__free(var_44.d)
                
                var_30 = 7
                int32_t var_34_2 = 0
                var_44 = 0
                int32_t var_d8
                
                if (var_d8 u>= 8)
                    j__free(var_ec.d)
                
                var_d8 = 7
                int32_t var_dc_1 = 0
                var_ec = 0
                int32_t var_f0
                
                if (var_f0 u>= 8)
                    j__free(var_104.d)
                
                var_f0 = 7
                int32_t var_f4_1 = 0
                var_104 = 0
                int32_t var_a8
                
                if (var_a8 u>= 8)
                    j__free(var_bc.d)
                
                var_a8 = 7
                int32_t var_ac_1 = 0
                var_bc = 0
                int32_t var_60
                
                if (var_60 u>= 8)
                    j__free(var_74.d)
                
                var_8_3.b = 3
                var_60 = 7
                int32_t var_64_1 = 0
                var_74 = 0
                int32_t var_168
                
                if (var_168 u< 8)
                    goto label_6b9a39
                
                var_1a0_13 = var_17c
            label_6b9a31:
                j__free(var_1a0_13)
            label_6b9a39:
                edi_1 = var_180_1
                goto label_6b9a3f
            case 3
                int32_t var_134
                int16_t* eax_21 = sub_6b8b00(&var_134, *edi_1)
                var_8_3.b = 0xc
                int16_t* eax_22 = sub_6ada50(eax_21, *var_180_1, &var_5c, 0x10)
                var_8_3.b = 0xd
                int16_t var_d4
                int16_t* eax_23 = sub_548cb0(eax_22, u"hr = ", &var_d4, eax_22)
                var_8_3.b = 0xe
                int16_t var_11c
                int16_t* eax_24 = sub_532b80(eax_23, eax_23, &var_11c, 0xaf04bc)
                var_8_3.b = 0xf
                int16_t var_8c
                int16_t* eax_25 = sub_5327a0(eax_24, eax_24, &var_8c, eax_21)
                var_8_3.b = 0x10
                int16_t var_a4
                int16_t* eax_26 = sub_532b80(eax_25, eax_25, &var_a4, &data_ad90a0)
                var_8_3.b = 0x11
                
                if (&var_2c != eax_26)
                    sub_52e3c0(&var_2c, eax_26, 0, 0xffffffff)
                
                int32_t var_90
                
                if (var_90 u>= 8)
                    j__free(var_a4.d)
                
                var_90 = 7
                int32_t var_94_1 = 0
                var_a4 = 0
                int32_t var_78
                
                if (var_78 u>= 8)
                    j__free(var_8c.d)
                
                var_78 = 7
                int32_t var_7c_1 = 0
                var_8c = 0
                int32_t var_108
                
                if (var_108 u>= 8)
                    j__free(var_11c.d)
                
                var_108 = 7
                int32_t var_10c_1 = 0
                var_11c = 0
                int32_t var_c0
                
                if (var_c0 u>= 8)
                    j__free(var_d4.d)
                
                var_c0 = 7
                int32_t var_c4_1 = 0
                var_d4 = 0
                
                if (var_48 u>= 8)
                    j__free(var_5c)
                
                var_8_3.b = 3
                var_48 = 7
                int32_t var_4c_1 = 0
                var_5c.w = 0
                int32_t var_120
                
                if (var_120 u< 8)
                    goto label_6b9a39
                
                var_1a0_13 = var_134
                goto label_6b9a31
            case 4
                if (&var_2c != &edi_1[1])
                    sub_52e3c0(&var_2c, &edi_1[1], 0, 0xffffffff)
                label_6b9a3f:
                    
                    if (var_1c_1 != 0)
                        if (*(arg1 + 0x10) != 0)
                            sub_532910(arg1, &data_ad90c0, 1)
                        
                        sub_532870(arg1, &var_2c, 0, 0xffffffff)
        
        var_8_3.b = 0
        
        if (var_18_1 u>= 8)
            j__free(var_2c.d)
        
        i -= 0x38
        edi_1 -= 0x38
        var_180_1 = edi_1
    while (i != **(esi + 4))

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1

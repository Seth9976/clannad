// 函数: sub_54f010
// 地址: 0x54f010
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b17db
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_2a0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_284 = arg4
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg3 == 0)
    result.b = 1
else if (arg4 != arg5)
    int32_t ecx = *arg6
    int32_t var_2b8
    char var_2b0_4
    char var_2ac_13
    bool var_2a8_14
    char var_2a4_29
    int32_t var_280
    void var_30
    int32_t edx_18
    int32_t* edi_3
    
    switch (&(*arg4)->Handler + 1)
        case nullptr
            void* ecx_1 = *(arg3 + 0x9c)
            
            if (*(ecx_1 + 0x80) != 0x529)
                result.b = 1
            else
                result = sub_54eeb0(&var_284[1], arg2, ecx_1 - 4, &var_284[1], arg5, arg6)
        case 5
            int32_t eax_6 = 0xfffffffe
            int32_t edx_2 = 0xfffffffe
            
            if (ecx == 1)
                eax_6 = *(arg6[1] + 8)
            else if (ecx == 2)
                edx_2 = *(arg6[1] + 0x16c)
                eax_6 = *(arg6[1] + 8)
            
            sub_5d68d0(arg3, eax_6, edx_2, 1)
            result.b = 1
        case 6
            sub_5d8310(arg3)
            sub_54aed0(&var_280)
            int32_t var_8_5 = 4
        label_54f1ca:
            var_280 = 0x16
            void var_27c
            __builtin_memcpy(&var_27c, arg3, 0x80)
            void var_3f8
            sub_54cf80(&var_3f8, &var_280)
            sub_6766e0()
            void var_1f4
            sub_54ae40(&var_1f4)
            result.b = 1
        case 7, 0x12
            int32_t* edx
            edx.b = 1
            sub_64fa70(arg3, edx.b)
            result.b = 1
        case 8
            sub_64f920(arg3)
            result.b = 1
        case 9
            int32_t var_4c_1 = 7
            int32_t var_50_1 = 0
            int16_t var_60 = 0
            int32_t var_8_7 = 7
            
            if (ecx == 0)
                int32_t var_2a4_11 = ecx
                *(arg6[1] + 8)
                void var_f8
                int16_t* eax_16 = sub_6ad9b0(&var_f8)
                var_8_7.b = 8
                
                if (&var_60 != eax_16)
                    sub_52e3c0(&var_60, eax_16, 0, 0xffffffff)
                
                var_8_7.b = 7
                sub_52e8a0(&var_f8)
            else if (ecx == 1)
                void** eax_18 = arg6[1] + 0xc
                
                if (&var_60 != eax_18)
                    sub_52e3c0(&var_60, eax_18, 0, 0xffffffff)
            
            void* eax_19 = data_bac45c
            *(eax_19 + 0x60) += 4
            sub_64e3e0(sub_536170(&var_2b8, &var_60), *(eax_19 + 0x64), arg3, 
                *(*(eax_19 + 0x60) - 4), 1, var_2b8)
            sub_52e8a0(&var_60)
            result.b = 1
        case 0xa, 0x37, 0x38, 0x39
            void* ecx_69 = nullptr
            int32_t var_24 = 0
            void* var_20_1 = nullptr
            int32_t var_1c_1 = 0
            int32_t var_8_11 = 0xe
            int32_t var_b4_1 = 7
            int32_t var_b8_1 = 0
            int16_t var_c8 = 0
            var_8_11.b = 0xf
            int32_t edx_13 = 0
            void* i = arg6[1]
            int32_t var_b0_1 = 0
            
            if (i != arg6[2])
                int32_t ebx_1 = 0
                
                do
                    int32_t eax_35 = *(i + 4)
                    
                    if (eax_35 == 0x14)
                        ebx_1 += 1
                        sub_54d200(&var_24, ebx_1)
                        ecx_69 = var_20_1
                        
                        if (ecx_69 - 0x20 != i + 0xc)
                            sub_52e3c0(ecx_69 - 0x20, i + 0xc, 0, 0xffffffff)
                            ecx_69 = var_20_1
                        
                        *(ecx_69 - 8) = 1
                        edx_13 = 0
                        *(ecx_69 - 4) = 0xffffffff
                    else if (eax_35 == 0xa)
                        if (edx_13 == 1)
                            *(ecx_69 - 8) = *(i + 8)
                        else if (edx_13 == 2)
                            *(ecx_69 - 4) = *(i + 8)
                    
                    i += 0x164
                    edx_13 += 1
                while (i != arg6[2])
            
            void* eax_42 = data_bac45c
            *(eax_42 + 0x60) += 4
            int32_t eax_46 = *var_284 - 5
            
            if (eax_46 u<= 0x2f)
                uint32_t eax_47 = zx.d(lookup_table_54ff24[eax_46])
                
                switch (eax_47)
                    case 0
                        sub_64f280(eax_47, &var_24, arg3, *(eax_42 + 0x64), 
                            *(*(eax_42 + 0x60) - 4), 0, 1)
                    case 1
                        sub_64f280(eax_47, &var_24, arg3, *(eax_42 + 0x64), 
                            *(*(eax_42 + 0x60) - 4), 0, 0)
                    case 2
                        sub_64f280(eax_47, &var_24, arg3, *(eax_42 + 0x64), 
                            *(*(eax_42 + 0x60) - 4), 1, 1)
                    case 3
                        sub_64f280(eax_47, &var_24, arg3, *(eax_42 + 0x64), 
                            *(*(eax_42 + 0x60) - 4), 1, 0)
            
            sub_52e8a0(&var_c8)
            sub_54d040(&var_24)
            result.b = 1
        case 0xb
            sub_64ef80(arg3)
            result.b = 1
        case 0xc
            if (ecx == 0)
                sub_5d88f0(arg3)
            else if (ecx == 1)
                sub_5d88a0(arg3, *(arg6[1] + 8))
            
            result.b = 1
        case 0xd
            if (ecx == 0)
                sub_5d8990(arg3)
            else if (ecx == 1)
                sub_5d8940(arg3, *(arg6[1] + 8))
            
            result.b = 1
        case 0xe
            edi_3 = nullptr
            var_284.b = 0
            edx_18 = 0xffffffff
            
            if (ecx == 0)
                edi_3 = *(arg6[1] + 8)
            else if (ecx == 1)
                edx_18 = *(arg6[1] + 0x16c)
                edi_3 = *(arg6[1] + 8)
            
            for (void* i_1 = arg6[2]; i_1 u< arg6[3]; i_1 += 0x164)
                if (*i_1 == 0)
                    var_284.b = *(i_1 + 8) != 0
            
            var_2a4_29 = 0
            var_2a8_14 = var_284.b
            var_2ac_13 = 0
            var_2b0_4 = 0
        label_54f868:
            void* ecx_90 = data_bac45c
            *(ecx_90 + 0x60) += 4
            void* eax_58 = *(ecx_90 + 0x60)
            int32_t var_2b4_1 = *(eax_58 - 4)
            var_2b8 = *(ecx_90 + 0x64)
            sub_64dbb0(eax_58, edi_3, arg3, edx_18, var_2b8, var_2b4_1, var_2b0_4, var_2ac_13, 
                var_2a8_14, var_2a4_29)
            result.b = 1
        case 0xf
            if (ecx == 0)
                sub_677bb0(*(arg3 + 0x128))
            else if (ecx == 1)
                *(arg3 + 0x128) = *(arg6[1] + 8)
            
            result.b = 1
        case 0x10
            if (ecx == 0)
                sub_677bb0(*(arg3 + 0x12c))
            else if (ecx == 1)
                *(arg3 + 0x12c) = *(arg6[1] + 8)
            
            result.b = 1
        case 0x11
            if (ecx != 0)
                sub_536170(&var_30, arg6[1] + 0xc)
                int32_t var_8_10 = 0xd
                int16_t* eax_33
                int32_t edx_12
                eax_33, edx_12 = sub_536170(&var_2b8, &var_30)
                sub_64f030(eax_33, edx_12, arg3, var_2b8)
                sub_52e8a0(&var_30)
            else
                sub_64f0a0(arg3)
            
            result.b = 1
        case 0x13
            result.b = *(arg3 + 0x1d6)
            
            if (result.b != 0)
                sub_5d9690(arg3)
                sub_5d8380(arg3)
            
            result.b = 1
        case 0x14
            sub_5d8310(arg3)
            sub_54aed0(&var_280)
            int32_t var_8_6 = 5
            goto label_54f1ca
        case 0x15
            sub_5d8310(arg3)
            result.b = 1
        case 0x16
            sub_64efc0(arg3)
            result.b = 1
        case 0x17
            sub_64fd10(arg3)
            result.b = 1
        case 0x18
            sub_64fdf0(arg3)
            result.b = 1
        case 0x19
            sub_64ff70(arg3)
            result.b = 1
        case 0x1a
            int32_t edi_4 = 0
            int32_t var_34_1 = 7
            int32_t var_38_1 = 0
            int16_t var_48 = 0
            int32_t var_8_12 = 0x10
            void** eax_64
            
            if (ecx == 0)
                eax_64 = arg6[1] + 0xc
            label_54f91f:
                
                if (&var_48 != eax_64)
                    sub_52e3c0(&var_48, eax_64, 0, 0xffffffff)
            else if (ecx == 1)
                void* eax_65 = arg6[1]
                edi_4 = *(eax_65 + 8)
                eax_64 = eax_65 + 0x170
                goto label_54f91f
            sub_5e4570(arg3 + 0x234, edi_4, &var_48)
            sub_52e8a0(&var_48)
            result.b = 1
        case 0x1b
            sub_5e44e0(arg3 + 0x234)
            result.b = 1
        case 0x1f
            edi_3 = nullptr
            edx_18 = 0xffffffff
            
            if (ecx == 0)
                edi_3 = *(arg6[1] + 8)
            else if (ecx == 1)
                edx_18 = *(arg6[1] + 0x16c)
                edi_3 = *(arg6[1] + 8)
            
            var_2a4_29 = 0
            var_2a8_14 = false
            var_2ac_13 = 0
            var_2b0_4 = 1
            goto label_54f868
        case 0x20
            edi_3 = nullptr
            edx_18 = 0xffffffff
            
            if (ecx == 0)
                edi_3 = *(arg6[1] + 8)
            else if (ecx == 1)
                edx_18 = *(arg6[1] + 0x16c)
                edi_3 = *(arg6[1] + 8)
            
            var_2a4_29 = 1
            var_2a8_14 = false
            var_2ac_13 = 1
            var_2b0_4 = 1
            goto label_54f868
        case 0x21
            sub_5d8780(arg3)
            result.b = 1
        case 0x22
            sub_5d8f10(arg3)
            result.b = 1
        case 0x23
            sub_553f50(&var_284[1], arg2, arg3 + 0x808, &var_284[1], arg5, arg6)
            result.b = 1
        case 0x24
            *(data_bac458 + 0x377) = 1
            result.b = 1
        case 0x25
            sub_553f50(&var_284[1], arg2, arg3 + 0x490, &var_284[1], arg5, arg6)
            result.b = 1
        case 0x26
            sub_677bb0(*(*(arg3 + 0xa0) * 0xfc + data_bac510 + 0xa2ecb4))
            result.b = 1
        case 0x27
            *(arg3 + 0x1c4) = *(arg6[1] + 8)
            result.b = 1
        case 0x28
            *(arg3 + 0x1cc) = *(arg6[1] + 8)
            result.b = 1
        case 0x29
            sub_677bb0(*(*(arg3 + 0xa0) * 0xfc + data_bac510 + sub_a2ecb0))
            result.b = 1
        case 0x2a
            *(arg3 + 0x1c0) = *(arg6[1] + 8)
            result.b = 1
        case 0x2b
            sub_677bb0(*(arg3 + 0x1c8))
            result.b = 1
        case 0x2c
            sub_677bb0(*(*(arg3 + 0xa0) * 0xfc + data_bac510 + 0xa2ecbc))
            result.b = 1
        case 0x2d
            sub_677bb0(*(*(arg3 + 0xa0) * 0xfc + data_bac510 + 0xa2ecb8))
            result.b = 1
        case 0x2e
            *(arg3 + 0x1c0) = *(*(arg3 + 0xa0) * 0xfc + data_bac510 + sub_a2ecb0)
            result.b = 1
        case 0x2f
            *(arg3 + 0x1c4) = *(*(arg3 + 0xa0) * 0xfc + data_bac510 + 0xa2ecb4)
            result.b = 1
        case 0x30
            *(arg3 + 0x1c8) = *(*(arg3 + 0xa0) * 0xfc + data_bac510 + 0xa2ecb8)
            result.b = 1
        case 0x31
            *(arg3 + 0x1cc) = *(*(arg3 + 0xa0) * 0xfc + data_bac510 + 0xa2ecbc)
            result.b = 1
        case 0x32
            *(arg3 + 0x1c8) = *(arg6[1] + 8)
            result.b = 1
        case 0x33
            sub_677bb0(*(arg3 + 0x1cc))
            result.b = 1
        case 0x34
            sub_677bb0(*(arg3 + 0x1c4))
            result.b = 1
        case 0x35
            sub_677bb0(*(arg3 + 0x1c0))
            result.b = 1
        case 0x36
            sub_64dab0(arg3)
            result.b = 1
        case 0x3a
            sub_553f50(&var_284[1], arg2, arg3 + 0x64c, &var_284[1], arg5, arg6)
            result.b = 1
        case 0x3b
            sub_6501c0(arg3)
            result.b = 1
        case 0x3c
            sub_64f9e0(arg3)
            result.b = 1
        case 0x3d
            sub_5d86f0(arg3)
            result.b = 1
        case 0x3e
            int32_t var_7c_1 = 7
            int32_t var_80_1 = 0
            int16_t var_90 = 0
            int32_t var_8_8 = 9
            
            if (ecx == 0)
                int32_t var_2a4_14 = ecx
                *(arg6[1] + 8)
                void var_128
                int16_t* eax_22 = sub_6ad9b0(&var_128)
                var_8_8.b = 0xa
                
                if (&var_90 != eax_22)
                    sub_52e3c0(&var_90, eax_22, 0, 0xffffffff)
                
                var_8_8.b = 9
                sub_52e8a0(&var_128)
            else if (ecx == 1)
                void** eax_24 = arg6[1] + 0xc
                
                if (&var_90 != eax_24)
                    sub_52e3c0(&var_90, eax_24, 0, 0xffffffff)
            
            void* eax_25 = arg6[1]
            sub_64e3e0(sub_536170(&var_2b8, &var_90), *(eax_25 + 0x16c), arg3, *(eax_25 + 0x2d0), 
                0, var_2b8)
            sub_52e8a0(&var_90)
            result.b = 1
        case 0x3f
            result = *(arg6[1] + 8)
            *(arg3 + 0x1e4) = 1
            *(arg3 + 0x1e8) = result
            result.b = 1
        case 0x40
            void* eax_13 = data_bac4a0
            int32_t var_2a4_10 = ecx
            *(eax_13 + 0x105) = 0
            *(eax_13 + 0x114) = 0
            *(arg3 + 0x1dc) = *(*(arg3 + 0x228) + 0x188)
            sub_5d9030(arg3)
            result.b = 1
        case 0x41
            *(arg3 + 0x1e4) = 0
            *(arg3 + 0x1e8) = 0
            result.b = 1
        case 0x42
            sub_5d9700(arg3)
            result.b = 1
        case 0x44
            int32_t var_64_1 = 7
            int32_t var_68_1 = 0
            int16_t var_78 = 0
            int32_t var_8_9 = 0xb
            
            if (ecx == 0)
                int32_t var_2a4_17 = ecx
                *(arg6[1] + 8)
                void var_110
                int16_t* eax_27 = sub_6ad9b0(&var_110)
                var_8_9.b = 0xc
                
                if (&var_78 != eax_27)
                    sub_52e3c0(&var_78, eax_27, 0, 0xffffffff)
                
                var_8_9.b = 0xb
                sub_52e8a0(&var_110)
            else if (ecx == 1)
                void** eax_29 = arg6[1] + 0xc
                
                if (&var_78 != eax_29)
                    sub_52e3c0(&var_78, eax_29, 0, 0xffffffff)
            
            int16_t* eax_30
            int32_t edx_11
            eax_30, edx_11 = sub_536170(&var_2b8, &var_78)
            sub_64e060(eax_30, edx_11, arg3, var_2b8)
            sub_52e8a0(&var_78)
            result.b = 1
        case 0x45
            *(arg3 + 0x20c) = 0xffffffff
            result.b = 1
        case 0x46
            int32_t ecx_26
            ecx_26.b = *(arg3 + 0x1d6) != 0
            sub_677bb0(ecx_26)
            result.b = 1
        case 0x47
            int32_t edx_23 = *(arg3 + 0xa0) * 0xfc
            int32_t ecx_105 = data_bac510
            *(arg3 + 0x138) = *(edx_23 + ecx_105 + 0xa2ebcc)
            *(arg3 + 0x13c) = *(edx_23 + ecx_105 + &data_a2ebd0)
            result.b = 1
        case 0x48
            int32_t edx_24 = *(arg3 + 0xa0) * 0xfc
            int32_t ecx_106 = data_bac510
            *(arg3 + 0x140) = *(edx_24 + ecx_106 + 0xa2ebd4)
            *(arg3 + 0x144) = *(edx_24 + ecx_106 + 0xa2ebd8)
            result.b = 1
        case 0x49
            void* eax_76 = arg6[1]
            result = *(eax_76 + 0x16c)
            *(arg3 + 0x138) = *(eax_76 + 8)
            *(arg3 + 0x13c) = result
            result.b = 1
        case 0x4a
            void* eax_77 = arg6[1]
            result = *(eax_77 + 0x16c)
            *(arg3 + 0x140) = *(eax_77 + 8)
            *(arg3 + 0x144) = result
            result.b = 1
        case 0x4b
            int32_t var_288_1 = *(arg3 + 0x13c)
            sub_677bb0(*(arg3 + 0x138))
            result.b = 1
        case 0x4c
            int32_t var_28c_1 = *(arg3 + 0x138)
            sub_677bb0(*(arg3 + 0x13c))
            result.b = 1
        case 0x4d
            int32_t var_288_2 = *(arg3 + 0x144)
            sub_677bb0(*(arg3 + 0x140))
            result.b = 1
        case 0x4e
            int32_t var_28c_2 = *(arg3 + 0x140)
            sub_677bb0(*(arg3 + 0x144))
            result.b = 1
        case 0x4f
            sub_5d9790(arg3)
            result.b = 1
        case 0x50
            void* eax_78 = arg6[1]
            sub_5d9810(arg3, *(eax_78 + 8), *(eax_78 + 0x16c))
            result.b = 1
        case 0x51
            int32_t var_28c_3 = *(arg3 + 0x160)
            sub_677bb0(*(arg3 + 0x164))
            result.b = 1
        case 0x52
            int32_t var_288_3 = *(arg3 + 0x164)
            sub_677bb0(*(arg3 + 0x160))
            result.b = 1
        case 0x53
            sub_536170(&var_30, arg6[1] + 0xc)
            int32_t var_8_1 = 0
            sub_5e3ee0(arg3 + 0x234, &var_30)
            sub_52e8a0(&var_30)
            result.b = 1
        case 0x54
            sub_5e3e20(arg3 + 0x234)
            result.b = 1
        case 0x55
            sub_54ee50(arg3, &var_30)
            int32_t var_8_2 = 1
        label_54f143:
            sub_60c680(data_bac49c + 0xc, &var_30)
            sub_52e8a0(&var_30)
            result.b = 1
        case 0x56
            sub_536170(&var_30, arg6[1] + 0xc)
            int32_t var_8_3 = 2
            sub_5e4210(arg3 + 0x234, &var_30)
            sub_52e8a0(&var_30)
            result.b = 1
        case 0x57
            sub_5e4150(arg3 + 0x234)
            result.b = 1
        case 0x58
            sub_54ee80(arg3, &var_30)
            int32_t var_8_4 = 3
            goto label_54f143
        case 0x59
            if (ecx == 0)
                sub_5d8840(arg3)
            else if (ecx == 1)
                void* eax_48 = arg6[1]
                sub_5d87e0(arg3, *(eax_48 + 8), *(eax_48 + 0x16c))
            
            result.b = 1
        case 0x5a
            int16_t* eax_55
            int32_t edx_17
            eax_55, edx_17 = sub_536170(&var_2b8, arg6[1] + 0xc)
            sub_64e060(eax_55, edx_17, arg3, var_2b8)
            result.b = 1
        case 0x5b
            if (ecx == 0)
                sub_5d8d10(arg3)
            else if (ecx == 1)
                sub_5d8c90(arg3, *(arg6[1] + 8), 0, 0, 0)
            else
                void* eax_52
                
                if (ecx == 2)
                    eax_52 = arg6[1]
                    sub_5d8c90(arg3, *(eax_52 + 8), *(eax_52 + 0x16c), 0, 0)
                else if (ecx == 3)
                    eax_52 = arg6[1]
                    sub_5d8c90(arg3, *(eax_52 + 8), *(eax_52 + 0x16c), *(eax_52 + 0x2d0), 
                        *(eax_52 + 0x434))
            
            result.b = 1
        default
            int32_t var_e0
            int16_t* eax_97 = sub_5483b0(arg3, &var_e0)
            int32_t var_8_13 = 0x11
            int16_t var_a8
            int16_t* eax_98 = sub_548cb0(eax_97, 0xad88a4, &var_a8, eax_97)
            var_8_13.b = 0x12
            sub_684160(data_bac424, 2, eax_98)
            int32_t var_94
            
            if (var_94 u>= 8)
                j__free(var_a8.d)
            
            int32_t var_94_1 = 7
            int32_t var_98_1 = 0
            var_a8 = 0
            int32_t var_cc
            
            if (var_cc u>= 8)
                j__free(var_e0)
            
            result.b = 1
else
    arg6[5] = arg3
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

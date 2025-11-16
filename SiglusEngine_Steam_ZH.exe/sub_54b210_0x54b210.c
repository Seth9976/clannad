// 函数: sub_54b210
// 地址: 0x54b210
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b1305
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD* var_314
int32_t eax_2 = __security_cookie ^ &var_314
int32_t __saved_edi
int32_t var_324 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = *arg4
int16_t var_2f0

if (arg3 != arg2)
    int32_t* ecx_2 = *arg3
    int32_t var_304
    int32_t* var_300
    int32_t var_228
    int32_t var_178
    void* eax_67
    int32_t* ecx_51
    
    switch (ecx_2)
        case nullptr
            sub_6b2a80(result, data_bac510 + 0x1c, arg4[1] + 0xc, MB_OK)
        case 1
            sub_6508f0(data_bac504 + 0x10)
        case 2
            *(data_bac4a0 + 0x1e4) = 0
            sub_676610(2)
            sub_676610(0x2c)
            void* edx_25 = data_bac504
            
            if (*(edx_25 + 0x98) != *(edx_25 + 0x9c))
                if (*(data_bac510 + 0x10bc0) == 0)
                    sub_65e4c0()
                else
                    sub_676610(0x2b)
                    sub_6613d0(2)
        case 3
            if (result == 0)
                arg2.b = 0
                ecx_2.b = 0
                sub_660fd0(result, arg2.b, ecx_2.b, 1, result.b)
            else if (result == 1)
                sub_65fcb0(sub_6980b0(data_bac45c, arg4[1] + 0xc), 0)
            else if (result == 2)
                sub_65fcb0(sub_6980b0(data_bac45c, arg4[1] + 0xc), *(arg4[1] + 0x16c))
        case 4
            if (result == 0)
                sub_65d460(arg4[1] + 0xc, 0)
            else if (result == 1)
                void* edx_28 = arg4[1]
                sub_65d460(edx_28 + 0xc, *(edx_28 + 0x16c))
        case 5
            int32_t* var_328_49 = ecx_2
            sub_674cf0(result, arg4[1], result, arg4[2])
        case 6
            sub_676610(2)
        case 7, 0x17, 0x32, 0x33
            int32_t* var_328_62 = arg4
            int32_t* var_32c_51 = ecx_2
            sub_569930(result, arg3, ecx_2)
        case 8
            if (result == 0)
                __builtin_memcpy(data_bac458 + 0x164, arg4[1] + 0x24, 0x80)
            else if (result == 1)
                void* eax_66 = arg4[1]
                int32_t edi_6 = data_bac458 + 0x164
                int32_t var_1ac_1 = 4
                var_228 = 0x26
                int32_t var_224_1 = 3
                int32_t var_220_1 = 0xffffffff
                char* var_21c_1 = *(eax_66 + 8)
                __builtin_memcpy(edi_6, &var_228, 0x80)
        case 9
            var_314 = 1
            int32_t* var_32c_54 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_34 = &var_314
            void* eax_70 = sub_64da40()
            sub_54f010(eax_70, &var_314, eax_70, var_330_34, var_32c_54, arg4)
        case 0xa
            var_314 = 2
            int32_t* var_32c_57 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_37 = &var_314
            void* eax_73 = sub_64da40()
            sub_54f010(eax_73, &var_314, eax_73, var_330_37, var_32c_57, arg4)
        case 0xb
            var_314 = 3
            int32_t* var_32c_63 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_43 = &var_314
            void* eax_79 = sub_64da40()
            sub_54f010(eax_79, &var_314, eax_79, var_330_43, var_32c_63, arg4)
        case 0xc
            var_314 = 4
            int32_t* var_32c_65 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_45 = &var_314
            void* eax_81 = sub_64da40()
            sub_54f010(eax_81, &var_314, eax_81, var_330_45, var_32c_65, arg4)
        case 0xd
            var_314 = 0x13
            int32_t* var_32c_73 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_53 = &var_314
            void* eax_89 = sub_64da40()
            sub_54f010(eax_89, &var_314, eax_89, var_330_53, var_32c_73, arg4)
        case 0xe
            var_314 = 0x14
            int32_t* var_32c_74 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_54 = &var_314
            void* eax_90 = sub_64da40()
            sub_54f010(eax_90, &var_314, eax_90, var_330_54, var_32c_74, arg4)
        case 0xf
            var_314 = 6
            int32_t* var_32c_68 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_48 = &var_314
            void* eax_84 = sub_64da40()
            sub_54f010(eax_84, &var_314, eax_84, var_330_48, var_32c_68, arg4)
        case 0x10
            var_314 = 7
            int32_t* var_32c_77 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_57 = &var_314
            void* eax_93 = sub_64da40()
            sub_54f010(eax_93, &var_314, eax_93, var_330_57, var_32c_77, arg4)
        case 0x11
            var_314 = 8
            int32_t* var_32c_78 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_58 = &var_314
            void* eax_94 = sub_64da40()
            sub_54f010(eax_94, &var_314, eax_94, var_330_58, var_32c_78, arg4)
        case 0x12
            var_314 = 9
            int32_t* var_32c_83 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_63 = &var_314
            void* eax_99 = sub_64da40()
            sub_54f010(eax_99, &var_314, eax_99, var_330_63, var_32c_83, arg4)
        case 0x13
            var_314 = 5
            int32_t* var_32c_94 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_70 = &var_314
            void* eax_115 = sub_64da60()
            sub_54f010(eax_115, &var_314, eax_115, var_330_70, var_32c_94, arg4)
        case 0x14
            ecx_51 = data_bac468 + 0x3bc
            
            if (&arg3[1] == arg2)
                arg4[5] = ecx_51
            else
                int32_t* var_328_36 = arg4
                sub_55fac0(result, &arg3[1], ecx_51)
        case 0x15
            var_314 = 0x12
            int32_t* var_32c_72 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_52 = &var_314
            void* eax_88 = sub_64da40()
            sub_54f010(eax_88, &var_314, eax_88, var_330_52, var_32c_72, arg4)
        case 0x16
            var_314 = nullptr
            int32_t* var_32c_53 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_33 = &var_314
            void* eax_69 = sub_64da40()
            sub_54f010(eax_69, &var_314, eax_69, var_330_33, var_32c_53, arg4)
        case 0x18
            sub_54dd20(ecx_2, &arg3[1])
        case 0x19
            sub_557680(&arg3[1], 0x20, data_bac418, arg3, &arg3[1], arg2, arg4)
        case 0x1a
            sub_557680(&arg3[1], 0x20, data_bac418 + 0xb8, arg3, &arg3[1], arg2, arg4)
        case 0x1b
            sub_557680(&arg3[1], 0x20, data_bac418 + 0x170, arg3, &arg3[1], arg2, arg4)
        case 0x1c
            sub_557680(&arg3[1], 0x20, data_bac418 + 0x228, arg3, &arg3[1], arg2, arg4)
        case 0x1d
            sub_557680(&arg3[1], 0x20, data_bac418 + 0x2e0, arg3, &arg3[1], arg2, arg4)
        case 0x1e
            sub_557680(&arg3[1], 0x20, data_bac418 + 0x398, arg3, &arg3[1], arg2, arg4)
        case 0x1f
            sub_557680(&arg3[1], 0x20, data_bac418 + 0x508, arg3, &arg3[1], arg2, arg4)
        case 0x20
            sub_557680(&arg3[1], 0x20, data_bac418 + 0x5c0, arg3, &arg3[1], arg2, arg4)
        case 0x21
            sub_6a6910(data_bac450)
        case 0x22
            sub_558300(&arg3[1], arg2, data_bac418 + 0x678, &arg3[1], arg2, arg4)
        case 0x23
            sub_558300(&arg3[1], arg2, data_bac418 + 0x730, &arg3[1], arg2, arg4)
        case 0x24
            sub_677bb0(1)
            sub_658680()
            void* eax_55 = data_bac49c
            *(eax_55 + 4) -= 1
            sub_677bb0(0)
        case 0x25
            sub_560cb0(&arg3[1], arg3, *(data_bac408 + 0xa4), &arg3[1], arg2, arg4)
        case 0x26
            void* eax_23 = data_bac408
            sub_560cb0(eax_23, arg3, *(eax_23 + 0xa4) + 0x8ec, &arg3[1], arg2, arg4)
        case 0x27
            int32_t* var_328_26 = arg4
            int32_t* var_32c_25 = ecx_2
            sub_559070(result, &arg3[1], ecx_2)
        case 0x28
            sub_55a030(&arg3[1], arg2, data_bac414, &arg3[1], arg2, arg4)
        case 0x29
            var_314 = 0x15
            int32_t* var_32c_91 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_67 = &var_314
            void* eax_109 = sub_64da40()
            sub_54f010(eax_109, &var_314, eax_109, var_330_67, var_32c_91, arg4)
        case 0x2a
            if (&arg3[1] != arg2)
                sub_55e210(&arg3[1], arg4)
            else
                arg4[5] = data_bac468
        case 0x2b
            ecx_51 = data_bac468 + 0x194
            
            if (&arg3[1] != arg2)
                sub_55ebb0(result, &arg3[1], ecx_51, arg4)
            else
                arg4[5] = ecx_51
        case 0x2c
            sub_55ec90(&arg3[1], arg2, data_bac468 + 0x24c, &arg3[1], arg2, arg4)
        case 0x2d
            ecx_51 = data_bac468 + 0x304
            
            if (&arg3[1] == arg2)
                arg4[5] = ecx_51
            else
                sub_55f890(result, &arg3[1], ecx_51, arg4)
        case 0x2e
            int32_t* var_328_37 = arg4
            int32_t* var_32c_33 = ecx_2
            sub_54db40(result, &arg3[1], ecx_2)
        case 0x2f
            var_314 = 0x56
            int32_t* var_32c_67 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_47 = &var_314
            void* eax_83 = sub_64da40()
            sub_54f010(eax_83, &var_314, eax_83, var_330_47, var_32c_67, arg4)
        case 0x30
            if (arg3[1] == 1)
                sub_676ae0(arg4[1] + 0xc)
        case 0x31
            sub_560ba0(&arg3[1], arg3, data_bac408, &arg3[1], arg2, arg4)
        case 0x34
            sub_55fcb0(&arg3[1], arg2, arg4)
        case 0x35
            sub_55a440(&arg3[1], arg2, data_bac40c, &arg3[1], arg2, arg4)
        case 0x36
            sub_54aed0(&var_178)
            int32_t var_c_2 = 1
        label_54b5dd:
            void* eax_30 = arg4[1]
            var_178 = 0x14
            int32_t var_34_1 = *(eax_30 + 8) + *(data_bac47c + 0x1c)
            void var_47c
            sub_54cf80(&var_47c, &var_178)
            sub_6766e0()
            void var_ec
            sub_54ae40(&var_ec)
        case 0x37
            sub_54aed0(&var_178)
            int32_t var_c_3 = 2
            char var_38_1 = 1
            goto label_54b5dd
        case 0x38
            var_314 = 0xd
            int32_t* var_32c_58 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_38 = &var_314
            void* eax_74 = sub_64da40()
            sub_54f010(eax_74, &var_314, eax_74, var_330_38, var_32c_58, arg4)
        case 0x39
            var_314 = 0xe
            int32_t* var_32c_59 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_39 = &var_314
            void* eax_75 = sub_64da40()
            sub_54f010(eax_75, &var_314, eax_75, var_330_39, var_32c_59, arg4)
        case 0x3a
            var_314 = 0xf
            int32_t* var_32c_55 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_35 = &var_314
            void* eax_71 = sub_64da40()
            sub_54f010(eax_71, &var_314, eax_71, var_330_35, var_32c_55, arg4)
        case 0x3b
            var_314 = 0x10
            int32_t* var_32c_56 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_36 = &var_314
            void* eax_72 = sub_64da40()
            sub_54f010(eax_72, &var_314, eax_72, var_330_36, var_32c_56, arg4)
        case 0x3c, 0x68
            nop
        case 0x3d
            var_314 = 0xc
            int32_t* var_32c_66 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_46 = &var_314
            void* eax_82 = sub_64da40()
            sub_54f010(eax_82, &var_314, eax_82, var_330_46, var_32c_66, arg4)
        case 0x3e
            var_314 = 0x11
            int32_t* var_32c_69 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_49 = &var_314
            void* eax_85 = sub_64da40()
            sub_54f010(eax_85, &var_314, eax_85, var_330_49, var_32c_69, arg4)
        case 0x3f
            int32_t* var_328_39 = arg4
            sub_565630(ecx_2)
        case 0x40
            int32_t* var_328_38 = arg4
            int32_t* var_32c_34 = ecx_2
            sub_55d580(result, &arg3[1], ecx_2)
        case 0x41
            sub_548610(&arg3[1], arg3, data_bac41c, &arg3[1], arg2, arg4)
        case 0x44
            if (result == 0)
                int32_t* var_328_99 = ecx_2
                sub_6defc0(*(data_bac468 + 0x178), 0x64)
            else if (result == 1)
                sub_600d00(data_bac468 + 0xd8, *(arg4[1] + 8))
        case 0x45
            sub_677bb0(sub_600e10(data_bac468 + 0xd8))
        case 0x46
            int32_t* var_328_22 = arg4
            sub_548fb0(&arg3[1], arg3, ecx_2, &arg3[1], arg2)
        case 0x47
            if (result == 0)
                __builtin_memcpy(data_bac458 + 0x1e4, arg4[1] + 0x24, 0x80)
            else if (result == 1)
                void* eax_68 = arg4[1]
                int32_t edi_10 = data_bac458 + 0x1e4
                int32_t var_1ac_2 = 4
                var_228 = 0x26
                int32_t var_224_2 = 3
                int32_t var_220_2 = 0xffffffff
                char* var_21c_2 = *(eax_68 + 8)
                __builtin_memcpy(edi_10, &var_228, 0x80)
        case 0x48
            var_314 = 0x16
            int32_t* var_32c_90 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_66 = &var_314
            void* eax_108 = sub_64da40()
            sub_54f010(eax_108, &var_314, eax_108, var_330_66, var_32c_90, arg4)
        case 0x49
            void* eax_25 = data_bac408
            sub_560cb0(eax_25, arg3, *(eax_25 + 0xa4) + 0x11d8, &arg3[1], arg2, arg4)
        case 0x4a
            void** edx_33 = arg4[1] + 0xc
            int32_t* ecx_78 = data_bac458 + 0x2e4
            
            if (ecx_78 != edx_33)
                sub_52e3c0(ecx_78, edx_33, 0, 0xffffffff)
        case 0x4b
            sub_60c680(data_bac49c + 0xc, data_bac458 + 0x2e4)
        case 0x4c, 0x4d, 0x7e, 0x80
            void* edx_83 = nullptr
            var_2f0.d = 0
            void* var_2ec_1 = nullptr
            int32_t var_2e8_1 = 0
            int32_t var_c_9 = 9
            char var_308
            var_308.d = 0
            var_300 = nullptr
            int32_t var_234_1 = 7
            int32_t var_238_1 = 0
            int16_t var_248_1 = 0
            var_c_9.b = 0xa
            int32_t ecx_160 = 0
            void* ebx_3 = arg4[1]
            int32_t var_230_1 = 0
            
            if (*(ebx_3 + 4) == 0xa)
                int32_t eax_119 = *(ebx_3 + 8)
                ebx_3 += 0x164
                var_308.d = eax_119
            
            if (ebx_3 != arg4[2])
                void* ebx_4 = ebx_3 + 4
                int32_t edi_12 = 0
                
                do
                    int32_t eax_120 = *ebx_4
                    
                    if (eax_120 == 0x14)
                        edi_12 += 1
                        sub_54d200(&var_2f0, edi_12)
                        edx_83 = var_2ec_1
                        int32_t* eax_121 = edx_83 - 0x20
                        var_304 = eax_121
                        
                        if (eax_121 != ebx_4 + 8)
                            sub_52e3c0(eax_121, ebx_4 + 8, 0, 0xffffffff)
                            eax_121 = var_304
                            edx_83 = var_2ec_1
                        
                        eax_121[6] = 1
                        ecx_160 = 0
                        eax_121[7] = 0xffffffff
                    else if (eax_120 == 0xa)
                        if (ecx_160 == 1)
                            *(edx_83 - 8) = *(ebx_4 + 4)
                        else if (ecx_160 == 2)
                            *(edx_83 - 4) = *(ebx_4 + 4)
                    
                    ebx_4 += 0x164
                    ecx_160 += 1
                while (ebx_4 - 4 != arg4[2])
            
            var_304.b = 0
            int32_t var_2c4_1 = 7
            int32_t var_2c8_1 = 0
            int16_t var_2d8 = 0
            var_c_9.b = 0xb
            int32_t* i = arg4[2]
            void** var_30c_2 = nullptr
            
            for (; i u< arg4[3]; i = &i[0x59])
                switch (*i - 1)
                    case 0
                        var_304.b = i[2] != 0
                    case 1
                        if (&var_2d8 != &i[3])
                            sub_52e3c0(&var_2d8, &i[3], 0, 0xffffffff)
                    case 2
                        var_30c_2 = i[2]
                    case 3
                        var_300 = i[2]
            
            int32_t eax_132 = *arg3
            
            if (eax_132 != 0x4c)
                var_314.b = 1
            
            if (eax_132 == 0x4c || eax_132 == 0x7e)
                var_314.b = 0
            
            void* ecx_166 = data_bac45c
            int32_t var_260
            sub_698170(ecx_166, &var_260, *(ecx_166 + 0x64))
            var_c_9.b = 0xc
            int32_t eax_134 = *arg3
            int32_t* ebx_6 = *(data_bac408 + 0xa4) + 0xdb8
            
            if (eax_134 == 0x4c || eax_134 == 0x4d)
                void* eax_136 = data_bac45c
                *(eax_136 + 0x60) += 4
                sub_64f820(
                    sub_64f710(&var_2f0, var_308.d, ebx_6, &var_2f0, var_314.b, var_304.b, 
                        &var_2d8, var_30c_2), 
                    *(eax_136 + 0x64), ebx_6, *(*(eax_136 + 0x60) - 4), var_300)
            else if (eax_134 == 0x7e || eax_134 == 0x80)
                int32_t var_264_1 = 7
                void* var_328_115 = nullptr
                void* const var_32c_101 = &data_ad7c90
                int32_t var_268_1 = 0
                int16_t var_278 = 0
                sub_52e720(&var_278, var_32c_101, var_328_115)
                var_c_9.b = 0xd
                sub_64f710(&var_2f0, var_308.d, ebx_6, &var_2f0, var_314.b, 0, &var_278, nullptr)
                sub_52e8a0(&var_278)
            
            int32_t var_24c
            
            if (var_24c u>= 8)
                j__free(var_260)
            
            if (var_2c4_1 u>= 8)
                j__free(var_2d8.d)
            
            int32_t var_2c4_2 = 7
            int32_t var_2c8_2 = 0
            var_2d8 = 0
            sub_54d040(&var_2f0)
        case 0x4e
            int32_t* var_328_28 = arg4
            sub_559990(&arg3[1], arg3, ecx_2, &arg3[1], arg2)
        case 0x4f
            sub_55a5d0(&arg3[1], arg2, data_bac410, &arg3[1], arg2, arg4)
        case 0x50
            if (data_bac510[0x10bc0] != 0)
                sub_6613d0(3)
        case 0x51
            if (*(data_bac4a0 + 0x1b4) s<= 3)
                sub_661420()
        case 0x52
            if (&arg3[1] != arg2)
                sub_55eb20()
            else
                arg4[5] = data_bac468 + 0xd8
        case 0x53
            ecx_51 = sub_65d2d0()
            
            if (&arg3[1] == arg2)
                arg4[5] = ecx_51
            else
                sub_5484e0(&arg3[1], &arg3[1], arg3, arg2, arg4)
        case 0x54
            var_314 = 0x31
            int32_t* var_32c_61 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_41 = &var_314
            void* eax_77 = sub_64da40()
            sub_54f010(eax_77, &var_314, eax_77, var_330_41, var_32c_61, arg4)
        case 0x55
            sub_600d30(0, 0)
        case 0x56
            sub_54da30(ecx_2, &arg3[1])
        case 0x57, 0x58, 0x59
            int32_t* var_328_45 = arg4
            sub_54e720(result, arg2, data_bac468 + 0xd8, arg3, ecx_2)
        case 0x5a
            var_314 = 0x1a
            int32_t* var_32c_84 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_64 = &var_314
            void* eax_100 = sub_64da40()
            sub_54f010(eax_100, &var_314, eax_100, var_330_64, var_32c_84, arg4)
        case 0x5b
            var_314 = 0x1b
            int32_t* var_32c_85 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_65 = &var_314
            void* eax_101 = sub_64da40()
            sub_54f010(eax_101, &var_314, eax_101, var_330_65, var_32c_85, arg4)
        case 0x5c
            int32_t* var_328_40 = arg4
            int32_t* var_32c_36 = ecx_2
            sub_564670(result, &arg3[1], ecx_2)
        case 0x5d
            var_314 = 0x1d
            int32_t* var_32c_80 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_60 = &var_314
            void* eax_96 = sub_64da40()
            sub_54f010(eax_96, &var_314, eax_96, var_330_60, var_32c_80, arg4)
        case 0x5e
            var_314 = 0x1c
            int32_t* var_32c_71 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_51 = &var_314
            void* eax_87 = sub_64da40()
            sub_54f010(eax_87, &var_314, eax_87, var_330_51, var_32c_71, arg4)
        case 0x5f
            var_314 = 0x1f
            int32_t* var_32c_79 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_59 = &var_314
            void* eax_95 = sub_64da40()
            sub_54f010(eax_95, &var_314, eax_95, var_330_59, var_32c_79, arg4)
        case 0x60
            *(data_bac4a0 + 0x198) = 0
            sub_676610(2)
        case 0x61
            sub_54e1c0(&arg3[1], arg2, arg4)
        case 0x62
            int32_t* var_328_41 = arg4
            sub_5483f0(&arg3[1], arg3, ecx_2, &arg3[1], arg2)
        case 0x63
            sub_600d30(1, 1)
        case 0x64
            var_314 = 0x32
            int32_t* var_32c_96 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_72 = &var_314
            void* eax_117 = sub_64da40()
            sub_54f010(eax_117, &var_314, eax_117, var_330_72, var_32c_96, arg4)
        case 0x65
            var_314 = 0x33
            int32_t* var_32c_95 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_71 = &var_314
            void* eax_116 = sub_64da60()
            sub_54f010(eax_116, &var_314, eax_116, var_330_71, var_32c_95, arg4)
        case 0x66
            var_314 = 0x34
            int32_t* var_32c_97 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_73 = &var_314
            void* eax_118 = sub_64da40()
            sub_54f010(eax_118, &var_314, eax_118, var_330_73, var_32c_97, arg4)
        case 0x67
            int32_t* var_328_63 = arg4
            sub_569c90(ecx_2)
        case 0x69
            sub_559cf0(&arg3[1], arg2, arg4)
        case 0x6a
            sub_558300(&arg3[1], arg2, data_bac418 + 0xac8, &arg3[1], arg2, arg4)
        case 0x6b
            sub_558300(&arg3[1], arg2, data_bac418 + 0xa10, &arg3[1], arg2, arg4)
        case 0x6c
            sub_5bdbe0(&var_228, arg4[1] + 0xc)
            sub_677cd0(&var_228)
        case 0x6d
            int32_t ecx_100
            ecx_100.b = *data_bac450 s>= 0
            sub_677bb0(ecx_100)
        case 0x6e
            void* edx_35 = data_bac504
            int32_t ecx_84
            ecx_84.b = *(edx_35 + 0xbc) != *(edx_35 + 0xc0)
            sub_677bb0(ecx_84)
        case 0x6f
            sub_65ef30()
        case 0x70
            void* edx_34 = data_bac504
            int32_t ecx_81
            ecx_81.b = *(edx_34 + 0x98) != *(edx_34 + 0x9c)
            sub_677bb0(ecx_81)
        case 0x71
            sub_650760()
        case 0x72
            int32_t var_2ac_1 = 7
            int32_t var_2b0_1 = 0
            int16_t var_2c0 = 0
            int32_t edi_11 = 0
            int32_t var_c_8 = 8
            
            if (result == 0)
                goto label_54c693
            
            if (result == 1)
                edi_11 = *(arg4[1] + 0x16c)
            label_54c693:
                void** eax_114 = arg4[1] + 0xc
                
                if (&var_2c0 != eax_114)
                    sub_52e3c0(&var_2c0, eax_114, 0, 0xffffffff)
            
            sub_5d2c00(&var_2c0, edi_11, 0)
            sub_52e8a0(&var_2c0)
        case 0x73
            var_314 = 0x36
            int32_t* var_32c_75 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_55 = &var_314
            void* eax_91 = sub_64da40()
            sub_54f010(eax_91, &var_314, eax_91, var_330_55, var_32c_75, arg4)
        case 0x74
            eax_67 = sub_64da40()
        label_54be7a:
            
            if (eax_67 != 0)
                sub_677bb0(*(eax_67 + 0xa0))
            else
                sub_677bb0(0xffffffff)
        case 0x75
            eax_67 = sub_64da60()
            goto label_54be7a
        case 0x76
            sub_5d2cb0()
        case 0x77
            var_314 = 0x38
            int32_t* var_32c_70 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_50 = &var_314
            void* eax_86 = sub_64da40()
            sub_54f010(eax_86, &var_314, eax_86, var_330_50, var_32c_70, arg4)
        case 0x78
            var_314 = 0x3a
            int32_t* var_32c_81 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_61 = &var_314
            void* eax_97 = sub_64da40()
            sub_54f010(eax_97, &var_314, eax_97, var_330_61, var_32c_81, arg4)
        case 0x79
            var_314 = 0x3b
            int32_t* var_32c_62 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_42 = &var_314
            void* eax_78 = sub_64da40()
            sub_54f010(eax_78, &var_314, eax_78, var_330_42, var_32c_62, arg4)
        case 0x7a
            var_314 = 0x3c
            int32_t* var_32c_82 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_62 = &var_314
            void* eax_98 = sub_64da40()
            sub_54f010(eax_98, &var_314, eax_98, var_330_62, var_32c_82, arg4)
        case 0x7b
            sub_559bd0(&arg3[1], arg4)
        case 0x7c
            int32_t* var_328_29 = arg4
            sub_55a940(result, &arg3[1], ecx_2, arg2)
        case 0x7d
            var_314 = 0x40
            int32_t* var_32c_60 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_40 = &var_314
            void* eax_76 = sub_64da40()
            sub_54f010(eax_76, &var_314, eax_76, var_330_40, var_32c_60, arg4)
        case 0x7f
            void* edx_87 = data_bac45c
            int32_t var_328_121 = 0
            *(edx_87 + 0x60) += 4
            void* eax_141 = data_bac408
            sub_64f820(eax_141, *(edx_87 + 0x64), *(eax_141 + 0xa4) + 0xdb8, 
                *(*(edx_87 + 0x60) - 4), var_328_121)
        case 0x82
            void* i_1 = arg4[2]
            int32_t edi_1 = 0x7fffffff
            int32_t edx_38 = arg4[3]
            ecx_2.b = 1
            char var_30d_1 = 1
            int32_t ebx_1 = 0x7fffffff
            
            for (; i_1 u< edx_38; i_1 += 0x164)
                int32_t ecx_95 = *i_1
                
                if (ecx_95 == 0)
                    edi_1 = *(i_1 + 8)
                    ecx_2.b = var_30d_1
                else if (ecx_95 == 1)
                    ebx_1 = *(i_1 + 8)
                    ecx_2.b = var_30d_1
                else if (ecx_95 != 2)
                    ecx_2.b = var_30d_1
                else
                    ecx_2.b = *(i_1 + 8) != ecx_95 - 2
                    var_30d_1 = ecx_2.b
            
            sub_661500(i_1, edx_38, ecx_2.b, edi_1, ebx_1)
        case 0x83
            void* ecx_68 = data_bac45c
            int32_t edx_31 = *(ecx_68 + 0x64)
            void* ecx_71
            
            if (edx_31 s< 0 || edx_31 s>= *(*(ecx_68 + 0x10) + 0x50))
                int32_t var_27c_1 = 7
                void* var_328_52 = nullptr
                void* const var_32c_45 = &data_ad7c90
                int32_t var_280_1 = 0
                int16_t var_290 = 0
                sub_52e720(&var_290, var_32c_45, var_328_52)
                int32_t var_c_5 = 5
                sub_60c680(data_bac49c + 0xc, &var_290)
                ecx_71 = &var_290
            else
                void var_1a8
                int16_t* eax_52 = sub_698170(ecx_68, &var_1a8, edx_31)
                int32_t var_c_4 = 4
                sub_60c680(data_bac49c + 0xc, eax_52)
                ecx_71 = &var_1a8
            
            sub_52e8a0(ecx_71)
        case 0x84
            if (result == 0)
                void var_190
                int16_t* eax_144 = sub_6869a0(&var_190)
                int32_t var_c_10 = 0xe
                sub_60c680(data_bac49c + 0xc, eax_144)
                sub_52e8a0(&var_190)
            else if (result == 1)
                sub_686820(arg4[1] + 0xc)
        case 0x85
            if (result == 0)
                sub_677bb0(*(data_bac44c + 0x44))
            else if (result == 1)
                *(data_bac44c + 0x44) = *(arg4[1] + 8)
        case 0x86
            if (result == 0)
                sub_677bb0(*(data_bac44c + 0x48))
            else if (result == 1)
                *(data_bac44c + 0x48) = *(arg4[1] + 8)
        case 0x87
            int32_t* var_328_30 = arg4
            sub_55ab90(&arg3[1], arg3, ecx_2, &arg3[1], arg2)
        case 0x88
            sub_661540()
        case 0x89
            sub_557680(&arg3[1], 0x20, data_bac418 + 0x450, arg3, &arg3[1], arg2, arg4)
        case 0x8a
            sub_65daf0(*(arg4[1] + 8))
        case 0x8b
            sub_677bb0(*(data_bac460 + 0xb8))
        case 0x8c
            int32_t ecx_179 = *(arg4[1] + 8)
            
            if (ecx_179 s>= 1 && ecx_179 s< *(data_bac460 + 0xb8))
                sub_5b5860(ecx_179)
        case 0x8d
            sub_5b5860(1)
        case 0x8e
            if (result == 0)
                sub_677bb0(*(data_bac44c + 0x1c))
            else if (result == 1)
                *(data_bac44c + 0x1c) = *(arg4[1] + 8)
        case 0x8f
            sub_557e50(&arg3[1], arg3, data_bac44c + 0x18, &arg3[1], arg2, arg4)
        case 0x90
            void* eax_63 = data_bac510
            int32_t edi_2 = 0x7fffffff
            int32_t edx_39 = arg4[3]
            int32_t ebx_2 = 0x7fffffff
            bool var_308_1 = true
            struct _EXCEPTION_REGISTRATION_RECORD* ecx_96 = *(eax_63 + 0x7c)
            int32_t var_30c_1 = *(eax_63 + 0x80)
            void* i_2 = arg4[2]
            var_314 = ecx_96
            
            for (; i_2 u< edx_39; i_2 += 0x164)
                int32_t ecx_97 = *i_2
                
                if (ecx_97 u> 4)
                    ecx_96 = var_314
                else
                    switch (ecx_97)
                        case 0
                            edi_2 = *(i_2 + 8)
                            ecx_96 = var_314
                        case 1
                            ebx_2 = *(i_2 + 8)
                            ecx_96 = var_314
                        case 2
                            var_308_1 = *(i_2 + 8) != 0
                            ecx_96 = var_314
                        case 3
                            ecx_96 = *(i_2 + 8)
                            var_314 = ecx_96
                        case 4
                            var_30c_1 = *(i_2 + 8)
                            ecx_96 = var_314
            
            sub_661590(i_2, var_30c_1, ecx_96, var_308_1, edi_2, ebx_2)
        case 0x91
            if (&arg3[1] != arg2)
                __vcasan::OnAsanReport(&arg3[1], arg4)
            else
                arg4[5] = data_bac484
        case 0x95
            void* ecx_85 = data_bac504
            sub_64e7b0(ecx_85 + 0xf4, ecx_85 + 0x10)
        case 0x96
            sub_6508f0(data_bac504 + 0xf4)
            sub_650820()
        case 0x97
            var_314 = 0x54
            int32_t* var_32c_76 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_56 = &var_314
            void* eax_92 = sub_64da40()
            sub_54f010(eax_92, &var_314, eax_92, var_330_56, var_32c_76, arg4)
        case 0x98
            if (result == 0)
                sub_600fe0(data_bac468 + 0xd8, *(arg4[1] + 8), result)
            else if (result == 1)
                void* eax_102 = arg4[1]
                sub_600fe0(data_bac468 + 0xd8, *(eax_102 + 8), *(eax_102 + 0x16c))
        case 0x99
            if (result == 0)
                sub_600fe0(data_bac468 + 0xd8, 0xff, result)
            else if (result == 1)
                sub_600fe0(data_bac468 + 0xd8, 0xff, *(arg4[1] + 8))
        case 0x9a
            if (result == 0)
                sub_600fe0(data_bac468 + 0xd8, result, result)
            else if (result == 1)
                sub_600fe0(data_bac468 + 0xd8, nullptr, *(arg4[1] + 8))
        case 0x9b
            sub_677bb0(*(data_bac468 + 0x18c))
        case 0x9c
            var_314 = 0x55
            int32_t* var_32c_64 = &var_304
            struct _EXCEPTION_REGISTRATION_RECORD** var_330_44 = &var_314
            void* eax_80 = sub_64da40()
            sub_54f010(eax_80, &var_314, eax_80, var_330_44, var_32c_64, arg4)
        case 0x9e
            sub_677bb0(*(data_bac45c + 0x68))
        case 0x9f
            sub_677bb0(*(data_bac468 + 0x184))
        case 0xa0
            sub_677bb0(*(data_bac468 + 0x188))
        case 0xa1
            sub_677bb0(zx.d(*(data_bac468 + 0x190)))
        case 0xa2
            sub_60c680(data_bac49c + 0xc, data_bac4a0 + 0x200)
        case 0xa3
            result = data_bac510
            
            if (result[0x10bc0] != 0)
                sub_6281e0(result, arg4[1] + 0xc, &var_300, 0, 0)
                int32_t var_c_6 = 6
                int32_t* ecx_90 = var_300
                
                if (ecx_90 != 0 && ((ecx_90[1] - *ecx_90) & 0xfffffff8) s> 0)
                    void var_2f8
                    int32_t* eax_62 = sub_54d980(ecx_90, &var_2f8, 0)
                    var_c_6.b = 7
                    sub_54d190(data_bac454 + 0x1c00, eax_62)
                    var_c_6.b = 6
                    sub_54b010(&var_2f8)
                
                int32_t var_c_7 = 0xffffffff
                sub_54b010(&var_300)
        case 0xa4
            sub_661480()
        case 0xa5
            sub_6614b0()
        case 0xa6
            int32_t* var_328_44 = arg4
            int32_t* var_32c_40 = ecx_2
            sub_564590(result, &arg3[1], ecx_2)
        default
            uint32_t eax_153 = zx.d((ecx_2 s>> 0x18).b)
            
            if (eax_153 == 0x7f)
                sub_675200(&arg3[1], arg3, zx.d(ecx_2.w), &arg3[1], arg2, arg4)
            else if (eax_153 != 0x7e)
                void* var_328_131 = 0x18
                int32_t var_294_1 = 7
                void* const var_32c_108 = &data_ad8760
                int32_t var_298_1 = 0
                int16_t var_2a8 = 0
                sub_52e720(&var_2a8, var_32c_108, var_328_131)
                int32_t var_c_11 = 0xf
                sub_684160(data_bac424, 2, &var_2a8)
                sub_52e8a0(&var_2a8)
            else
                int32_t* var_328_130 = arg4
                void* var_330
                sub_675130(eax_153, arg2, zx.d(ecx_2.w), var_330)
else
    void* var_328_1 = 0x12
    int32_t var_2dc_1 = 7
    void* const var_32c_1 = &data_ad8738
    int32_t var_2e0_1 = 0
    var_2f0 = 0
    sub_52e720(&var_2f0, var_32c_1, var_328_1)
    int32_t var_c_1 = 0
    sub_684160(data_bac424, 2, &var_2f0)
    
    if (var_2dc_1 u>= 8)
        j__free(var_2f0.d)
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_314)
return result

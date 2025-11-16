// 函数: sub_565630
// 地址: 0x565630
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b3600
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t* edx
ecx, edx = __chkstk(0x151c)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t edi
int32_t var_1c = edi
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
enum MESSAGEBOX_RESULT result = *edx
int32_t var_1504
char var_14f8
int32_t var_14f4
void var_14f0
int32_t var_14ec
int32_t var_14e8
int32_t var_14e4
int32_t var_14e0
int32_t var_14dc
int32_t var_14d8
int32_t var_14d4
int32_t var_14d0
int16_t var_14cc
void var_14ca
int16_t var_12cc
int16_t var_10cc
void var_10ca
int16_t var_ecc
void var_eca
int16_t var_ccc
void var_cca
int16_t var_acc
void var_aca
int32_t var_6cc[0xe2]
void var_2c4
void var_244
void var_164
void var_11c
int16_t var_44
void var_38
int32_t var_34
char* var_2c
char* ecx_5
int32_t ecx_143
int32_t ecx_444
int32_t ecx_447

if (result u> 0x14b)
    int32_t var_17c
    sub_52e820(&var_17c, &data_ad9124)
    int32_t var_8_18 = 0x15
    sub_684160(data_bac424, 2, &var_17c)
    int32_t var_168
    
    if (var_168 u>= 8)
        j__free(var_17c)
else
    switch (result)
        case 0
            sub_65ffa0()
        case IDOK
            int32_t var_24_23 = ecx
            edx.b = 0
            ecx.b = 0
            sub_6603b0(ecx.b, edx.b)
        case IDCANCEL
            ecx.b = 0
            sub_6605b0(ecx)
        case IDABORT
            sub_661290()
        case IDRETRY
            result = *(*&arg1[1] + 8)
            
            if (result == 0)
                sub_616090()
            else if (result == IDOK)
                sub_616180()
        case IDIGNORE
            sub_65fd10()
        case IDYES
            *(data_bac458 + 0x34c) = 0
        case IDNO
            *(data_bac458 + 0x34c) = 1
        case IDCLOSE
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac4e4 + 0x197) = ecx.b
        case IDHELP
            int32_t ecx_370
            ecx_370.b = *data_bac4e4 == 1
            sub_677bb0(ecx_370)
        case IDTRYAGAIN
            int32_t ecx_479
            ecx_479.b = *(data_bac4e4 + 0x19b) != 0
            sub_677bb0(ecx_479)
        case IDCONTINUE
            int32_t eax_3 = *arg1
            
            if (eax_3 == 0)
                *(data_bac458 + 0x37b) = 0
            else if (eax_3 == 1)
                int32_t ecx_2 = *(*&arg1[1] + 8)
                
                if (ecx_2 s>= 0)
                    void* edx_2 = data_bac458
                    
                    if (ecx_2 s< *(edx_2 + 0x318) - *(edx_2 + 0x314))
                        *(ecx_2 + *(edx_2 + 0x314)) = 0
        case 0xc
            int32_t eax_6 = *arg1
            
            if (eax_6 == 0)
                *(data_bac458 + 0x37b) = 1
            else if (eax_6 == 1)
                int32_t ecx_3 = *(*&arg1[1] + 8)
                
                if (ecx_3 s>= 0)
                    void* edx_3 = data_bac458
                    
                    if (ecx_3 s< *(edx_3 + 0x318) - *(edx_3 + 0x314))
                        *(ecx_3 + *(edx_3 + 0x314)) = 1
        case 0xd
            int32_t eax_254 = *(*&arg1[1] + 8)
            sub_616120(eax_254, eax_254)
        case 0xe
            void* ecx_468 = *&arg1[1]
            int32_t edx_95 = *(ecx_468 + 8)
            
            if (edx_95 s>= 0)
                void* esi_27 = data_bac4e4
                
                if (edx_95 s< *(esi_27 + 0x180) - *(esi_27 + 0x17c))
                    ecx_468.b = *(ecx_468 + 0x16c) != 0
                    *(edx_95 + *(esi_27 + 0x17c)) = ecx_468.b
        case 0xf
            char* esi_28 = *(*&arg1[1] + 8)
            
            if (esi_28 s>= 0)
                void* ecx_469 = data_bac4e4
                
                if (esi_28 s< *(ecx_469 + 0x180) - *(ecx_469 + 0x17c))
                    result.b = *(data_bac510 + esi_28 * 0x1c + 0x104a1)
                    *&esi_28[*(ecx_469 + 0x17c)] = result.b
        case 0x10
            sub_677bb0(*(data_bac4e4 + 8))
        case 0x11
            char* edx_98 = *(*&arg1[1] + 8)
            
            if (edx_98 s< 0)
                sub_677bb0(0)
            else
                void* ecx_471 = data_bac4e4
                
                if (edx_98 s>= *(ecx_471 + 0x180) - *(ecx_471 + 0x17c))
                    sub_677bb0(0)
                else
                    int32_t ecx_472
                    ecx_472.b = *&edx_98[*(ecx_471 + 0x17c)] != 0
                    sub_677bb0(ecx_472)
        case 0x12
            void* ecx_106 = *&arg1[1]
            result.b = *(ecx_106 + 0x2d0) != 0
            uint32_t eax_143 = zx.d(result.b)
            edx.b = *(ecx_106 + 0x16c) != 0
            int32_t ecx_108
            ecx_108.b = sub_660820(eax_143, edx.b, *(ecx_106 + 8), eax_143.b) != 0
            sub_677bb0(ecx_108)
        case 0x13
            int32_t ecx_333
            ecx_333.b = sub_655c60(*(*&arg1[1] + 8)) != 0
            sub_677bb0(ecx_333)
        case 0x14
            void* ecx_109 = *&arg1[1]
            result.b = *(ecx_109 + 0x434) != 0
            int32_t* eax_146 = *(ecx_109 + 0x2d0) != 0
            edx.b = *(ecx_109 + 0x16c) != 0
            sub_6609a0(eax_146, edx.b, *(ecx_109 + 8), eax_146.b, result.b)
        case 0x15
            int32_t ecx_375 = *(*&arg1[1] + 8)
            
            if (ecx_375 s>= 0)
                if (ecx_375 s> 0xff)
                    ecx_375 = 0xff
                
                *(data_bac4e4 + 0x6c) = ecx_375
            else
                *(data_bac4e4 + 0x6c) = 0
        case 0x16
            void* ecx_328 = *&arg1[1]
            int32_t ecx_330
            ecx_330.b = sub_6560f0(*(ecx_328 + 8), *(ecx_328 + 0x16c)) != 0
            sub_677bb0(ecx_330)
        case 0x17
            void* ecx_32 = *&arg1[1]
            int32_t edx_7 = *(ecx_32 + 8)
            
            if (edx_7 u<= 3)
                *(data_bac498 + (edx_7 << 3) + 0x34) = *(ecx_32 + 0x16c)
        case 0x18
            *(data_bac4e4 + 0x6c) = *(data_bac510 + 0xbb80)
        case 0x19
            sub_677bb0(*(data_bac4e4 + 0x6c))
        case 0x1a
            int32_t ecx_376 = *(*&arg1[1] + 8)
            
            if (ecx_376 s>= 0)
                if (ecx_376 s> 0xff)
                    ecx_376 = 0xff
                
                *(data_bac4e4 + 0x70) = ecx_376
            else
                *(data_bac4e4 + 0x70) = 0
        case 0x1b
            *(data_bac4e4 + 0x70) = *(data_bac510 + 0xbb84)
        case 0x1c
            sub_677bb0(*(data_bac4e4 + 0x70))
        case 0x1d
            int32_t ecx_377 = *(*&arg1[1] + 8)
            
            if (ecx_377 s>= 0)
                if (ecx_377 s> 0xff)
                    ecx_377 = 0xff
                
                *(data_bac4e4 + 0x74) = ecx_377
            else
                *(data_bac4e4 + 0x74) = 0
        case 0x1e
            *(data_bac4e4 + 0x74) = *(data_bac510 + 0xbb88)
        case 0x1f
            sub_677bb0(*(data_bac4e4 + 0x74))
        case 0x20
            int32_t ecx_378 = *(*&arg1[1] + 8)
            
            if (ecx_378 s>= 0)
                if (ecx_378 s> 0xff)
                    ecx_378 = 0xff
                
                *(data_bac4e4 + 0x78) = ecx_378
            else
                *(data_bac4e4 + 0x78) = 0
        case 0x21
            *(data_bac4e4 + 0x78) = *(data_bac510 + 0xbb8c)
        case 0x22
            sub_677bb0(*(data_bac4e4 + 0x78))
        case 0x23
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac4e4 + 0xed) = ecx.b
        case 0x24
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac4e4 + 0xee) = ecx.b
        case 0x25
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac4e4 + 0xef) = ecx.b
        case 0x26
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac4e4 + 0xf0) = ecx.b
        case 0x27
            int32_t ecx_374 = *(*&arg1[1] + 8)
            
            if (ecx_374 s>= 0)
                if (ecx_374 s> 0xff)
                    ecx_374 = 0xff
                
                *(data_bac4e4 + 0x68) = ecx_374
            else
                *(data_bac4e4 + 0x68) = 0
        case 0x28
            *(data_bac4e4 + 0x68) = *(data_bac510 + 0xbb7c)
        case 0x29
            sub_677bb0(*(data_bac4e4 + 0x68))
        case 0x2a
            int32_t ecx_405
            ecx_405.b = *(data_bac4e4 + 0xed) != 0
            sub_677bb0(ecx_405)
        case 0x2b
            int32_t ecx_406
            ecx_406.b = *(data_bac4e4 + 0xee) != 0
            sub_677bb0(ecx_406)
        case 0x2c
            int32_t ecx_407
            ecx_407.b = *(data_bac4e4 + 0xef) != 0
            sub_677bb0(ecx_407)
        case 0x2d
            int32_t ecx_408
            ecx_408.b = *(data_bac4e4 + 0xf0) != 0
            sub_677bb0(ecx_408)
        case 0x2e
            int32_t ecx_439 = *(*&arg1[1] + 8)
            
            if (ecx_439 s>= 0)
                if (ecx_439 s> 0x64)
                    ecx_439 = 0x64
                
                *(data_bac4e4 + 0x13c) = ecx_439
            else
                *(data_bac4e4 + 0x13c) = 0
        case 0x2f
            *(data_bac4e4 + 0x13c) = *(data_bac510 + 0xbbcc)
        case 0x30
            sub_677bb0(*(data_bac4e4 + 0x13c))
        case 0x31
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac4e4 + 0x140) = ecx.b
        case 0x32
            int32_t ecx_443
            ecx_443.b = *(data_bac4e4 + 0x140) != 0
            sub_677bb0(ecx_443)
        case 0x33
            ecx_444 = *(*&arg1[1] + 8)
            
            if (ecx_444 s>= 0)
            label_56854c:
                
                if (ecx_444 s> 0x1f4)
                    ecx_444 = 0x1f4
                
                *(data_bac4e4 + 0x144) = ecx_444
            else
                *(data_bac4e4 + 0x144) = 0
        case 0x34
            ecx_444 = *(data_bac510 + 0xbbd4)
            
            if (ecx_444 s>= 0)
                goto label_56854c
            
            *(data_bac4e4 + 0x144) = 0
        case 0x35
            sub_677bb0(*(data_bac4e4 + 0x144))
        case 0x36
            ecx_447 = *(*&arg1[1] + 8)
            
            if (ecx_447 s>= 0)
            label_5685b9:
                
                if (ecx_447 s> 0x1388)
                    ecx_447 = 0x1388
                
                *(data_bac4e4 + 0x148) = ecx_447
            else
                *(data_bac4e4 + 0x148) = 0
        case 0x37
            ecx_447 = *(data_bac510 + 0xbbd8)
            
            if (ecx_447 s>= 0)
                goto label_5685b9
            
            *(data_bac4e4 + 0x148) = 0
        case 0x38
            sub_677bb0(*(data_bac4e4 + 0x148))
        case 0x39
            int32_t ecx_34 = *(*&arg1[1] + 8)
            
            if (ecx_34 u> 3)
                sub_677bb0(0)
            else
                sub_677bb0(*(data_bac498 + (ecx_34 << 3) + 0x34))
        case 0x3a
            result = *&arg1[1]
            int32_t edx_8 = *(result + 8)
            
            if (edx_8 u<= 3)
                ecx.b = *(result + 0x16c) != 0
                *(data_bac498 + (edx_8 << 3) + 0x31) = ecx.b
        case 0x3b
            int32_t ecx_36 = *(*&arg1[1] + 8)
            
            if (ecx_36 u> 3)
                sub_677bb0(0)
            else
                int32_t eax_48
                eax_48.b = *(data_bac498 + (ecx_36 << 3) + 0x31)
                int32_t ecx_37
                ecx_37.b = eax_48.b != 0
                sub_677bb0(ecx_37)
        case 0x3c
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac4e4 + 0xec) = ecx.b
        case 0x3d
            int32_t ecx_404
            ecx_404.b = *(data_bac4e4 + 0xec) != 0
            sub_677bb0(ecx_404)
        case 0x3e
            result = *&arg1[1]
            int32_t edx_9 = *(result + 8)
            
            if (edx_9 u<= 3)
                ecx.b = *(result + 0x16c) != 0
                *(data_bac498 + (edx_9 << 3) + 0x30) = ecx.b
        case 0x3f
            int32_t ecx_38 = *(*&arg1[1] + 8)
            
            if (ecx_38 u> 3)
                sub_677bb0(0)
            else
                int32_t eax_49
                eax_49.b = *(data_bac498 + (ecx_38 << 3) + 0x30)
                int32_t ecx_39
                ecx_39.b = eax_49.b != 0
                sub_677bb0(ecx_39)
        case 0x40
            int32_t ecx_42
            ecx_42.b = sub_6613a0(*(*&arg1[1] + 8)) != 0
            sub_677bb0(ecx_42)
        case 0x41
            int32_t ecx_344
            ecx_344.b = sub_655c60(*(*&arg1[1] + 8) + *(data_bac510 + 0x10b88)) != 0
            sub_677bb0(ecx_344)
        case 0x42
            void* ecx_338 = *&arg1[1]
            int32_t eax_234 = *(data_bac510 + 0x10b88)
            int32_t ecx_341
            ecx_341.b = sub_6560f0(*(ecx_338 + 8) + eax_234, *(ecx_338 + 0x16c) + eax_234) != 0
            sub_677bb0(ecx_341)
        case 0x43
            void* ecx_325 = *&arg1[1]
            int32_t ecx_327
            ecx_327.b = sub_655e60(*(ecx_325 + 8), *(ecx_325 + 0x16c)) != 0
            sub_677bb0(ecx_327)
        case 0x44
            sub_677bb0(*(data_bac510 + 0x10b88))
        case 0x45
            ecx_143.b = sub_650ff0(*(*&arg1[1] + 8)) == 1
            sub_677bb0(ecx_143)
        case 0x46
            int32_t var_24_31 = 0x1228
            var_14f4 = 0
            char var_28_16 = 0
            var_2c = &var_14f0
            _memset(var_2c, var_28_16, var_24_31)
            sub_650f50(*(*&arg1[1] + 8), &var_14f4)
            sub_677bb0(var_14ec)
        case 0x47
            int32_t var_24_32 = 0x1228
            var_14f4 = 0
            char var_28_17 = 0
            var_2c = &var_14f0
            _memset(var_2c, var_28_17, var_24_32)
            sub_650f50(*(*&arg1[1] + 8), &var_14f4)
            sub_677bb0(var_14e8)
        case 0x48
            int32_t var_24_33 = 0x1228
            var_14f4 = 0
            char var_28_18 = 0
            var_2c = &var_14f0
            _memset(var_2c, var_28_18, var_24_33)
            sub_650f50(*(*&arg1[1] + 8), &var_14f4)
            sub_677bb0(var_14e4)
        case 0x49
            int32_t var_24_34 = 0x1228
            var_14f4 = 0
            char var_28_19 = 0
            var_2c = &var_14f0
            _memset(var_2c, var_28_19, var_24_34)
            sub_650f50(*(*&arg1[1] + 8), &var_14f4)
            sub_677bb0(var_14e0)
        case 0x4a
            int32_t var_24_35 = 0x1228
            var_14f4 = 0
            char var_28_20 = 0
            var_2c = &var_14f0
            _memset(var_2c, var_28_20, var_24_35)
            sub_650f50(*(*&arg1[1] + 8), &var_14f4)
            sub_677bb0(var_14dc)
        case 0x4b
            int32_t var_24_36 = 0x1228
            var_14f4 = 0
            char var_28_21 = 0
            var_2c = &var_14f0
            _memset(var_2c, var_28_21, var_24_36)
            sub_650f50(*(*&arg1[1] + 8), &var_14f4)
            sub_677bb0(var_14d8)
        case 0x4c
            int32_t var_24_37 = 0x1228
            var_14f4 = 0
            char var_28_22 = 0
            var_2c = &var_14f0
            _memset(var_2c, var_28_22, var_24_37)
            sub_650f50(*(*&arg1[1] + 8), &var_14f4)
            sub_677bb0(var_14d4)
        case 0x4d
            int32_t var_24_38 = 0x1228
            var_14f4 = 0
            char var_28_23 = 0
            var_2c = &var_14f0
            _memset(var_2c, var_28_23, var_24_38)
            sub_650f50(*(*&arg1[1] + 8), &var_14f4)
            sub_677bb0(var_14d0)
        case 0x4e
            int32_t var_24_39 = 0x1228
            var_14f4 = 0
            char var_28_24 = 0
            var_2c = &var_14f0
            _memset(var_2c, var_28_24, var_24_39)
            sub_650f50(*(*&arg1[1] + 8), &var_14f4)
            int32_t var_c0_1 = 7
            int32_t var_c4_1 = 0
            int16_t var_d4 = 0
            int32_t ecx_170
            
            if (var_10cc != 0)
                int16_t* ecx_171 = &var_10cc
                int16_t i
                
                do
                    i = *ecx_171
                    ecx_171 = &ecx_171[1]
                while (i != 0)
                ecx_170 = (ecx_171 - &var_10ca) s>> 1
            else
                ecx_170 = 0
            
            sub_52e720(&var_d4, &var_10cc, ecx_170)
            int32_t var_8_1 = 0
            sub_60c680(data_bac49c + 0xc, &var_d4)
            sub_52e8a0(&var_d4)
        case 0x4f
            int32_t eax_157 = *arg1
            
            if (eax_157 == 0)
                sub_677bb0(sub_651030())
            else if (eax_157 != 1)
                sub_677bb0(0xffffffff)
            else
                void* ecx_132 = *&arg1[1]
                *(ecx_132 + 0x16c)
                *(ecx_132 + 8)
                sub_677bb0(sub_651040())
        case 0x50
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac4e4 + 0x19b) = ecx.b
        case 0x51
            int32_t ecx_483
            ecx_483.b = *(data_bac4e4 + 0x197) != 0
            sub_677bb0(ecx_483)
        case 0x52
            int32_t ecx_455 = *(*&arg1[1] + 8)
            
            if (ecx_455 s>= 0)
                if (ecx_455 s> 0xff)
                    ecx_455 = 0xff
                
                *(data_bac4e4 + 0x117) = ecx_455.b
            else
                *(data_bac4e4 + 0x117) = 0
        case 0x53
            ecx.b = *(data_bac510 + 0xbba3)
            *(data_bac4e4 + 0x117) = ecx.b
        case 0x54
            sub_677bb0(zx.d(*(data_bac4e4 + 0x117)))
        case 0x55
            int32_t ecx_456 = *(*&arg1[1] + 8)
            
            if (ecx_456 s>= 0)
                if (ecx_456 s> 0xff)
                    ecx_456 = 0xff
                
                *(data_bac4e4 + 0x116) = ecx_456.b
            else
                *(data_bac4e4 + 0x116) = 0
        case 0x56
            int32_t ecx_457 = *(*&arg1[1] + 8)
            
            if (ecx_457 s>= 0)
                if (ecx_457 s> 0xff)
                    ecx_457 = 0xff
                
                *(data_bac4e4 + 0x115) = ecx_457.b
            else
                *(data_bac4e4 + 0x115) = 0
        case 0x57
            int32_t ecx_458 = *(*&arg1[1] + 8)
            
            if (ecx_458 s>= 0)
                if (ecx_458 s> 0xff)
                    ecx_458 = 0xff
                
                *(data_bac4e4 + 0x118) = ecx_458.b
            else
                *(data_bac4e4 + 0x118) = 0
        case 0x58
            ecx.b = *(data_bac510 + 0xbba2)
            *(data_bac4e4 + 0x116) = ecx.b
        case 0x59
            ecx.b = *(data_bac510 + 0xbba1)
            *(data_bac4e4 + 0x115) = ecx.b
        case 0x5a
            ecx.b = *(data_bac510 + 0xbba4)
            *(data_bac4e4 + 0x118) = ecx.b
        case 0x5b
            sub_677bb0(zx.d(*(data_bac4e4 + 0x116)))
        case 0x5c
            sub_677bb0(zx.d(*(data_bac4e4 + 0x115)))
        case 0x5d
            sub_677bb0(zx.d(*(data_bac4e4 + 0x118)))
        case 0x5e
            int32_t ecx_411 = *(*&arg1[1] + 8)
            
            if (ecx_411 s>= 0)
                if (ecx_411 s> 0xff)
                    ecx_411 = 0xff
                
                *(data_bac4e4 + 0x110) = ecx_411
            else
                *(data_bac4e4 + 0x110) = 0
        case 0x5f
            *(data_bac4e4 + 0x110) = *(data_bac510 + 0xbb9c)
        case 0x60
            sub_677bb0(*(data_bac4e4 + 0x110))
        case 0x61
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac4e4 + 0x114) = ecx.b
        case 0x62
            int32_t ecx_415
            ecx_415.b = *(data_bac4e4 + 0x114) != 0
            sub_677bb0(ecx_415)
        case 0x63
            result = data_bac510
            int32_t ecx_369 = *(result + 0xbb58)
            
            if (ecx_369 == 0)
                sub_616120(*(result + 0xbb5c), *(result + 0xbb60))
            else if (ecx_369 == 1)
                sub_616180()
        case 0x64
            result = data_bac510
            sub_616120(*(result + 0xbb5c), *(result + 0xbb60))
        case 0x65
            ecx.b = *(data_bac510 + 0xbb94)
            *(data_bac4e4 + 0xec) = ecx.b
        case 0x66
            ecx.b = *(data_bac510 + 0xbb95)
            *(data_bac4e4 + 0xed) = ecx.b
        case 0x67
            ecx.b = *(data_bac510 + 0xbb96)
            *(data_bac4e4 + 0xee) = ecx.b
        case 0x68
            ecx.b = *(data_bac510 + 0xbb97)
            *(data_bac4e4 + 0xef) = ecx.b
        case 0x69
            ecx.b = *(data_bac510 + 0xbb98)
            *(data_bac4e4 + 0xf0) = ecx.b
        case 0x6a
            ecx.b = *(data_bac510 + 0xbba0)
            *(data_bac4e4 + 0x114) = ecx.b
        case 0x6b
            ecx.b = *(data_bac510 + 0xbbd0)
            *(data_bac4e4 + 0x140) = ecx.b
        case 0x6c
            ecx.b = *(data_bac510 + 0x10988)
            *(data_bac4e4 + 0x19b) = ecx.b
        case 0x6d
            ecx.b = *(data_bac510 + 0x108f9)
            *(data_bac4e4 + 0x197) = ecx.b
        case 0x6e
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac4e4 + 0x194) = ecx.b
        case 0x6f
            ecx.b = *(data_bac510 + 0x108a5)
            *(data_bac4e4 + 0x194) = ecx.b
        case 0x70
            int32_t ecx_480
            ecx_480.b = *(data_bac4e4 + 0x194) != 0
            sub_677bb0(ecx_480)
        case 0x71
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac4e4 + 0x195) = ecx.b
        case 0x72
            ecx.b = *(data_bac510 + 0x108c1)
            *(data_bac4e4 + 0x195) = ecx.b
        case 0x73
            int32_t ecx_481
            ecx_481.b = *(data_bac4e4 + 0x195) != 0
            sub_677bb0(ecx_481)
        case 0x74
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac4e4 + 0x196) = ecx.b
        case 0x75
            ecx.b = *(data_bac510 + 0x108dd)
            *(data_bac4e4 + 0x196) = ecx.b
        case 0x76
            int32_t ecx_482
            ecx_482.b = *(data_bac4e4 + 0x196) != 0
            sub_677bb0(ecx_482)
        case 0x77
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac4e4 + 0x198) = ecx.b
        case 0x78
            ecx.b = *(data_bac510 + 0x10915)
            *(data_bac4e4 + 0x198) = ecx.b
        case 0x79
            int32_t ecx_484
            ecx_484.b = *(data_bac4e4 + 0x198) != 0
            sub_677bb0(ecx_484)
        case 0x7a
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac4e4 + 0x199) = ecx.b
        case 0x7b
            ecx.b = *(data_bac510 + 0x10931)
            *(data_bac4e4 + 0x199) = ecx.b
        case 0x7c
            int32_t ecx_485
            ecx_485.b = *(data_bac4e4 + 0x199) != 0
            sub_677bb0(ecx_485)
        case 0x7d
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac4e4 + 0x19a) = ecx.b
        case 0x7e
            ecx.b = *(data_bac510 + 0x1094d)
            *(data_bac4e4 + 0x19a) = ecx.b
        case 0x7f
            int32_t ecx_486
            ecx_486.b = *(data_bac4e4 + 0x19a) != 0
            sub_677bb0(ecx_486)
        case 0x80
            void* ecx_334 = *&arg1[1]
            int32_t eax_231 = *(data_bac510 + 0x10b88)
            int32_t ecx_337
            ecx_337.b = sub_655e60(*(ecx_334 + 8) + eax_231, *(ecx_334 + 0x16c) + eax_231) != 0
            sub_677bb0(ecx_337)
        case 0x81
            int32_t var_24_42 = 0x1228
            var_14f4 = 0
            char var_28_26 = 0
            var_2c = &var_14f0
            _memset(var_2c, var_28_26, var_24_42)
            sub_650f50(*(*&arg1[1] + 8), &var_14f4)
            int32_t var_d8_1 = 7
            int32_t var_dc_1 = 0
            int16_t var_ec = 0
            int32_t ecx_179
            
            if (var_ecc != 0)
                int16_t* ecx_180 = &var_ecc
                int16_t i_1
                
                do
                    i_1 = *ecx_180
                    ecx_180 = &ecx_180[1]
                while (i_1 != 0)
                ecx_179 = (ecx_180 - &var_eca) s>> 1
            else
                ecx_179 = 0
            
            sub_52e720(&var_ec, &var_ecc, ecx_179)
            int32_t var_8_2 = 1
            sub_60c680(data_bac49c + 0xc, &var_ec)
            sub_52e8a0(&var_ec)
        case 0x82
            int32_t var_24_77 = 0x1228
            var_14f4 = 0
            char var_28_52 = 0
            var_2c = &var_14f0
            _memset(var_2c, var_28_52, var_24_77)
            sub_650f50(*(*&arg1[1] + 8) + *(data_bac510 + 0x10b88), &var_14f4)
            int32_t var_78_1 = 7
            int32_t var_7c_1 = 0
            int16_t var_8c = 0
            int32_t ecx_270
            
            if (var_ecc != 0)
                int16_t* ecx_271 = &var_ecc
                int16_t i_2
                
                do
                    i_2 = *ecx_271
                    ecx_271 = &ecx_271[1]
                while (i_2 != 0)
                ecx_270 = (ecx_271 - &var_eca) s>> 1
            else
                ecx_270 = 0
            
            sub_52e720(&var_8c, &var_ecc, ecx_270)
            int32_t var_8_8 = 7
            sub_60c680(data_bac49c + 0xc, &var_8c)
            sub_52e8a0(&var_8c)
        case 0x83
            int32_t var_24_48 = 0x1228
            var_14f4 = 0
            char var_28_30 = 0
            var_2c = &var_14f0
            _memset(var_2c, var_28_30, var_24_48)
            sub_650f50(*(*&arg1[1] + 8), &var_14f4)
            int32_t var_30_6 = 7
            var_34 = 0
            var_44 = 0
            int32_t ecx_197
            
            if (var_acc != 0)
                int16_t* ecx_198 = &var_acc
                int16_t i_3
                
                do
                    i_3 = *ecx_198
                    ecx_198 = &ecx_198[1]
                while (i_3 != 0)
                ecx_197 = (ecx_198 - &var_aca) s>> 1
            else
                ecx_197 = 0
            
            sub_52e720(&var_44, &var_acc, ecx_197)
            int32_t var_8_4 = 3
            sub_60c680(data_bac49c + 0xc, &var_44)
            sub_52e8a0(&var_44)
        case 0x84
            int32_t var_24_83 = 0x1228
            var_14f4 = 0
            char var_28_56 = 0
            var_2c = &var_14f0
            _memset(var_2c, var_28_56, var_24_83)
            sub_650f50(*(*&arg1[1] + 8) + *(data_bac510 + 0x10b88), &var_14f4)
            int32_t var_a8_1 = 7
            int32_t var_ac_1 = 0
            int16_t var_bc = 0
            int32_t ecx_288
            
            if (var_acc != 0)
                int16_t* ecx_289 = &var_acc
                int16_t i_4
                
                do
                    i_4 = *ecx_289
                    ecx_289 = &ecx_289[1]
                while (i_4 != 0)
                ecx_288 = (ecx_289 - &var_aca) s>> 1
            else
                ecx_288 = 0
            
            sub_52e720(&var_bc, &var_acc, ecx_288)
            int32_t var_8_10 = 9
            sub_60c680(data_bac49c + 0xc, &var_bc)
            sub_52e8a0(&var_bc)
        case 0x85
            *(data_bac458 + 0x37c) = 0
        case 0x86
            *(data_bac458 + 0x37c) = 1
        case 0x87
            (*(*(data_bac4d0 + 0x15468) + 0x10))(data_4ebe3ac)
        case 0x88
            (*(*(data_bac4d0 + 0x18ca4) + 0x10))(data_4ebe3ac)
        case 0x89
            (*(*(data_bac4d0 + 0x176dc) + 0x10))(data_4ebe3ac)
        case 0x8a
            (*(*(data_bac4d0 + 0x12504) + 0x10))(data_4ebe3ac)
        case 0x8b
            (*(*(data_bac4d0 + 0x16a2c) + 0x10))(data_4ebe3ac)
        case 0x8c
            (*(*(data_bac4d0 + 0x193b0) + 0x10))(data_4ebe3ac)
        case 0x8d
            (*(*(data_bac4d0 + 0x1bda4) + 0x10))(data_4ebe3ac)
        case 0x8e
            (*(*(data_bac4d0 + 0x14c40) + 0x10))(data_4ebe3ac)
        case 0x8f
            void* ecx_420 = *&arg1[1]
            int32_t edx_85 = *(ecx_420 + 8)
            
            if (edx_85 s>= 0)
                void* esi_21 = data_bac4e4
                
                if (edx_85 s< (*(esi_21 + 0x164) - *(esi_21 + 0x160)) s>> 3)
                    ecx_420.b = *(ecx_420 + 0x16c) != 0
                    *(*(esi_21 + 0x160) + (edx_85 << 3)) = ecx_420.b
        case 0x90
            int32_t edx_86 = *(*&arg1[1] + 8)
            
            if (edx_86 s>= 0)
                void* ecx_421 = data_bac4e4
                
                if (edx_86 s< (*(ecx_421 + 0x164) - *(ecx_421 + 0x160)) s>> 3)
                    void* esi_22 = data_bac510
                    
                    if (edx_86 s< *(esi_22 + 0x103f0))
                        result.b = *(esi_22 + edx_86 * 0x48 + 0xbc24)
                        *(*(ecx_421 + 0x160) + (edx_86 << 3)) = result.b
        case 0x91
            int32_t edx_87 = *(*&arg1[1] + 8)
            
            if (edx_87 s< 0)
                sub_677bb0(0)
            else
                void* ecx_423 = data_bac4e4
                
                if (edx_87 s>= (*(ecx_423 + 0x164) - *(ecx_423 + 0x160)) s>> 3
                        || edx_87 s>= *(data_bac510 + 0x103f0))
                    sub_677bb0(0)
                else
                    int32_t ecx_424
                    ecx_424.b = *(*(ecx_423 + 0x160) + (edx_87 << 3)) != 0
                    sub_677bb0(ecx_424)
        case 0x92
            (*(*(data_bac4d0 + 0x187bc) + 0x10))(data_4ebe3ac)
        case 0x93
            (*(*(data_bac4d0 + 0x18380) + 0x10))(data_4ebe3ac)
        case 0x94
            int32_t ecx_416 = *(*&arg1[1] + 8)
            
            if (ecx_416 != 0 && ecx_416 != 1 && ecx_416 != 2)
                ecx_416 = 0
            
            *(data_bac4e4 + 0x15c) = ecx_416
        case 0x95
            *(data_bac4e4 + 0x15c) = *(data_bac510 + 0xbbec)
        case 0x96
            sub_677bb0(*(data_bac4e4 + 0x15c))
        case 0x97
            (*(*(data_bac4d0 + 0x19b4c) + 0x10))(data_4ebe3ac)
        case 0x98
            int32_t ecx_435 = *(*&arg1[1] + 8)
            
            if (ecx_435 s>= 0x64)
                if (ecx_435 s> 0x12c)
                    ecx_435 = 0x12c
                
                *(data_bac4e4 + 0x158) = ecx_435
            else
                *(data_bac4e4 + 0x158) = 0x64
        case 0x99
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac4e4 + 0x154) = ecx.b
        case 0x9a
            ecx.b = *(data_bac510 + 0xbbe4)
            *(data_bac4e4 + 0x154) = ecx.b
        case 0x9b
            sub_677bb0(zx.d(*(data_bac4e4 + 0x154)))
        case 0x9c
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac4e4 + 0x155) = ecx.b
        case 0x9d
            ecx.b = *(data_bac510 + 0xbbe5)
            *(data_bac4e4 + 0x155) = ecx.b
        case 0x9e
            sub_677bb0(zx.d(*(data_bac4e4 + 0x155)))
        case 0x9f
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac4e4 + 0x156) = ecx.b
        case 0xa0
            ecx.b = *(data_bac510 + 0xbbe6)
            *(data_bac4e4 + 0x156) = ecx.b
        case 0xa1
            sub_677bb0(zx.d(*(data_bac4e4 + 0x156)))
        case 0xa2
            *(data_bac4e4 + 0x158) = *(data_bac510 + 0xbbe8)
        case 0xa3
            sub_677bb0(*(data_bac4e4 + 0x158))
        case 0xa4
            void* esi_29 = *&arg1[1]
            int32_t edx_99 = *(esi_29 + 8)
            
            if (edx_99 s>= 0)
                void* ecx_473 = data_bac4e4
                
                if (edx_99 s< (*(ecx_473 + 0x18c) - *(ecx_473 + 0x188)) s>> 2)
                    *(*(ecx_473 + 0x188) + (edx_99 << 2)) = *(esi_29 + 0x16c)
        case 0xa5
            int32_t esi_30 = *(*&arg1[1] + 8)
            
            if (esi_30 s>= 0)
                void* edx_100 = data_bac4e4
                
                if (esi_30 s< (*(edx_100 + 0x18c) - *(edx_100 + 0x188)) s>> 2)
                    *(*(edx_100 + 0x188) + (esi_30 << 2)) = *(esi_30 * 0xe4 + data_bac510 + 0x10530)
        case 0xa6
            int32_t edx_102 = *(*&arg1[1] + 8)
            
            if (edx_102 s< 0)
                sub_677bb0(0)
            else
                void* ecx_476 = data_bac4e4
                
                if (edx_102 s>= (*(ecx_476 + 0x18c) - *(ecx_476 + 0x188)) s>> 2)
                    sub_677bb0(0)
                else
                    sub_677bb0(*(*(ecx_476 + 0x188) + (edx_102 << 2)))
        case 0xa7
            (*(*(data_bac4d0 + 0x1c65c) + 0x10))(data_4ebe3ac)
        case 0xa8
            sub_677bb0(*(data_bac510 + 0x10b8c))
        case 0xa9
            ecx_143.b = sub_650ff0(*(*&arg1[1] + 8) + *(data_bac510 + 0x10b88)) == 1
            sub_677bb0(ecx_143)
        case 0xaa
            int32_t eax_160 = *arg1
            
            if (eax_160 == 0)
                data_bac504
                sub_677bb0(sub_6a54a0(edi))
            else if (eax_160 != 1)
                sub_677bb0(0xffffffff)
            else
                void* ecx_138 = *&arg1[1]
                *(ecx_138 + 0x16c)
                *(ecx_138 + 8)
                sub_677bb0(sub_651140())
        case 0xab
            int32_t var_24_66 = 0x1228
            var_14f4 = 0
            char var_28_42 = 0
            var_2c = &var_14f0
            _memset(var_2c, var_28_42, var_24_66)
            sub_650f50(*(*&arg1[1] + 8) + *(data_bac510 + 0x10b88), &var_14f4)
            sub_677bb0(var_14ec)
        case 0xac
            int32_t var_24_67 = 0x1228
            var_14f4 = 0
            char var_28_43 = 0
            var_2c = &var_14f0
            _memset(var_2c, var_28_43, var_24_67)
            sub_650f50(*(*&arg1[1] + 8) + *(data_bac510 + 0x10b88), &var_14f4)
            sub_677bb0(var_14e8)
        case 0xad
            int32_t var_24_68 = 0x1228
            var_14f4 = 0
            char var_28_44 = 0
            var_2c = &var_14f0
            _memset(var_2c, var_28_44, var_24_68)
            sub_650f50(*(*&arg1[1] + 8) + *(data_bac510 + 0x10b88), &var_14f4)
            sub_677bb0(var_14e4)
        case 0xae
            int32_t var_24_69 = 0x1228
            var_14f4 = 0
            char var_28_45 = 0
            var_2c = &var_14f0
            _memset(var_2c, var_28_45, var_24_69)
            sub_650f50(*(*&arg1[1] + 8) + *(data_bac510 + 0x10b88), &var_14f4)
            sub_677bb0(var_14e0)
        case 0xaf
            int32_t var_24_70 = 0x1228
            var_14f4 = 0
            char var_28_46 = 0
            var_2c = &var_14f0
            _memset(var_2c, var_28_46, var_24_70)
            sub_650f50(*(*&arg1[1] + 8) + *(data_bac510 + 0x10b88), &var_14f4)
            sub_677bb0(var_14dc)
        case 0xb0
            int32_t var_24_71 = 0x1228
            var_14f4 = 0
            char var_28_47 = 0
            var_2c = &var_14f0
            _memset(var_2c, var_28_47, var_24_71)
            sub_650f50(*(*&arg1[1] + 8) + *(data_bac510 + 0x10b88), &var_14f4)
            sub_677bb0(var_14d8)
        case 0xb1
            int32_t var_24_72 = 0x1228
            var_14f4 = 0
            char var_28_48 = 0
            var_2c = &var_14f0
            _memset(var_2c, var_28_48, var_24_72)
            sub_650f50(*(*&arg1[1] + 8) + *(data_bac510 + 0x10b88), &var_14f4)
            sub_677bb0(var_14d4)
        case 0xb2
            int32_t var_24_73 = 0x1228
            var_14f4 = 0
            char var_28_49 = 0
            var_2c = &var_14f0
            _memset(var_2c, var_28_49, var_24_73)
            sub_650f50(*(*&arg1[1] + 8) + *(data_bac510 + 0x10b88), &var_14f4)
            sub_677bb0(var_14d0)
        case 0xb3
            int32_t var_24_74 = 0x1228
            var_14f4 = 0
            char var_28_50 = 0
            var_2c = &var_14f0
            _memset(var_2c, var_28_50, var_24_74)
            sub_650f50(*(*&arg1[1] + 8) + *(data_bac510 + 0x10b88), &var_14f4)
            int32_t var_120_1 = 7
            int32_t var_124_1 = 0
            int16_t var_134 = 0
            int32_t ecx_261
            
            if (var_10cc != 0)
                int16_t* ecx_262 = &var_10cc
                int16_t i_5
                
                do
                    i_5 = *ecx_262
                    ecx_262 = &ecx_262[1]
                while (i_5 != 0)
                ecx_261 = (ecx_262 - &var_10ca) s>> 1
            else
                ecx_261 = 0
            
            sub_52e720(&var_134, &var_10cc, ecx_261)
            int32_t var_8_7 = 6
            sub_60c680(data_bac49c + 0xc, &var_134)
            sub_52e8a0(&var_134)
        case 0xb4
            int32_t var_24_51 = 0x1228
            var_14f4 = 0
            char var_28_32 = 0
            var_2c = &var_14f0
            _memset(var_2c, var_28_32, var_24_51)
            
            if (sub_650f50(*(*&arg1[1] + 8), &var_14f4).b != 0)
                int32_t var_24_52 = 0x200
                char var_28_33 = 0
                var_2c = &var_acc
                _memset(var_2c, var_28_33, var_24_52)
                void** eax_165 = *&arg1[1] + 0x170
                
                if (*&eax_165[5] u>= 8)
                    eax_165 = *eax_165
                
                int32_t var_24_53 = 0xff
                void** var_28_34 = eax_165
                var_2c = 0x100
                int16_t* var_30_7 = &var_acc
                _wcsncpy_s()
                sub_650f00(*(*&arg1[1] + 8), &var_14f4)
        case 0xb5
            int32_t var_24_86 = 0x1228
            var_14f4 = 0
            char var_28_58 = 0
            var_2c = &var_14f0
            _memset(var_2c, var_28_58, var_24_86)
            
            if (sub_650f50(*(*&arg1[1] + 8) + *(data_bac510 + 0x10b88), &var_14f4).b != 0)
                int32_t var_24_87 = 0x200
                char var_28_59 = 0
                var_2c = &var_acc
                _memset(var_2c, var_28_59, var_24_87)
                void** eax_204 = *&arg1[1] + 0x170
                
                if (*&eax_204[5] u>= 8)
                    eax_204 = *eax_204
                
                int32_t var_24_88 = 0xff
                void** var_28_60 = eax_204
                var_2c = 0x100
                int16_t* var_30_8 = &var_acc
                _wcsncpy_s()
                sub_650f00(*(*&arg1[1] + 8) + *(data_bac510 + 0x10b88), &var_14f4)
        case 0xb6
            void* eax_170 = *&arg1[1]
            char var_24_57 = 1
            int32_t edi_18 = *(eax_170 + 0x434)
            int32_t esi_15 = *(eax_170 + 8)
            var_1504 = *(eax_170 + 0x2d0)
            
            if (edi_18 s> 0x100)
                edi_18 = 0x100
            
            *(eax_170 + 0x204)
            result = sub_54b180(var_24_57)
            
            if (result != 0)
                void* ebx_17 = result - 4
                
                if (ebx_17 != 0)
                    int32_t var_24_58 = 0x1228
                    var_14f4 = 0
                    char var_28_37 = 0
                    var_2c = &var_14f0
                    _memset(var_2c, var_28_37, var_24_58)
                    
                    if (sub_650f50(esi_15, &var_14f4).b != 0)
                        int32_t esi_16 = 0
                        
                        if (edi_18 s> 0)
                            do
                                *&(*&var_6cc)[esi_16] = sub_557650(ebx_17, var_1504 + esi_16)
                                esi_16 += 1
                            while (esi_16 s< edi_18)
                        
                        sub_650f00(esi_15, &var_14f4)
        case 0xb7
            void* eax_166 = *&arg1[1]
            char var_24_54 = 1
            int32_t edi_16 = *(eax_166 + 0x434)
            int32_t esi_13 = *(eax_166 + 8)
            var_1504 = *(eax_166 + 0x2d0)
            
            if (edi_16 s> 0x100)
                edi_16 = 0x100
            
            *(eax_166 + 0x204)
            result = sub_54b180(var_24_54)
            
            if (result != 0)
                void* ebx_16 = result - 4
                
                if (ebx_16 != 0)
                    int32_t var_24_55 = 0x1228
                    var_14f4 = 0
                    char var_28_35 = 0
                    var_2c = &var_14f0
                    _memset(var_2c, var_28_35, var_24_55)
                    
                    if (sub_650f50(esi_13, &var_14f4).b != 0)
                        int32_t esi_14 = 0
                        
                        if (edi_16 s> 0)
                            do
                                sub_557630(ebx_16, var_1504 + esi_14, *&(*&var_6cc)[esi_14])
                                esi_14 += 1
                            while (esi_14 s< edi_16)
        case 0xb8
            void* ecx_299 = *&arg1[1]
            char var_24_89 = 1
            int32_t edi_19 = *(ecx_299 + 0x434)
            var_1504 = *(data_bac510 + 0x10b88) + *(ecx_299 + 8)
            int32_t eax_210 = *(ecx_299 + 0x2d0)
            
            if (edi_19 s> 0x100)
                edi_19 = 0x100
            
            *(ecx_299 + 0x204)
            result = sub_54b180(var_24_89)
            
            if (result != 0)
                void* ebx_19 = result - 4
                
                if (ebx_19 != 0)
                    int32_t var_24_90 = 0x1228
                    var_14f4 = 0
                    char var_28_61 = 0
                    var_2c = &var_14f0
                    _memset(var_2c, var_28_61, var_24_90)
                    
                    if (sub_650f50(var_1504, &var_14f4).b != 0)
                        int32_t esi_18 = 0
                        
                        if (edi_19 s> 0)
                            do
                                sub_557630(ebx_19, eax_210 + esi_18, *&(*&var_6cc)[esi_18])
                                esi_18 += 1
                            while (esi_18 s< edi_19)
        case 0xb9
            void* ecx_303 = *&arg1[1]
            char var_24_92 = 1
            int32_t edx_70 = *(ecx_303 + 8) + *(data_bac510 + 0x10b88)
            int32_t edi_20 = *(ecx_303 + 0x434)
            var_1504 = *(ecx_303 + 0x2d0)
            
            if (edi_20 s> 0x100)
                edi_20 = 0x100
            
            *(ecx_303 + 0x204)
            result = sub_54b180(var_24_92)
            
            if (result != 0)
                void* ebx_20 = result - 4
                
                if (ebx_20 != 0)
                    int32_t var_24_93 = 0x1228
                    var_14f4 = 0
                    char var_28_63 = 0
                    var_2c = &var_14f0
                    _memset(var_2c, var_28_63, var_24_93)
                    
                    if (sub_650f50(edx_70, &var_14f4).b != 0)
                        int32_t esi_20 = 0
                        
                        if (edi_20 s> 0)
                            do
                                *&(*&var_6cc)[esi_20] = sub_557650(ebx_20, var_1504 + esi_20)
                                esi_20 += 1
                            while (esi_20 s< edi_20)
                        
                        sub_650f00(edx_70, &var_14f4)
        case 0xba
            void* ecx_425 = *&arg1[1]
            int32_t edx_88 = *(ecx_425 + 8)
            
            if (edx_88 s>= 0)
                void* esi_23 = data_bac4e4
                
                if (edx_88 s< (*(esi_23 + 0x164) - *(esi_23 + 0x160)) s>> 3)
                    int32_t ecx_426 = *(ecx_425 + 0x16c)
                    
                    if (ecx_426 s>= 0)
                        if (ecx_426 s> 0xff)
                            ecx_426 = 0xff
                        
                        *(*(esi_23 + 0x160) + (edx_88 << 3) + 4) = ecx_426
                    else
                        *(*(esi_23 + 0x160) + (edx_88 << 3) + 4) = 0
        case 0xbb
            int32_t edx_89 = *(*&arg1[1] + 8)
            
            if (edx_89 s>= 0)
                void* ecx_427 = data_bac4e4
                
                if (edx_89 s< (*(ecx_427 + 0x164) - *(ecx_427 + 0x160)) s>> 3)
                    void* esi_24 = data_bac510
                    
                    if (edx_89 s< *(esi_24 + 0x103f0))
                        *(*(ecx_427 + 0x160) + (edx_89 << 3) + 4) =
                            *(esi_24 + edx_89 * 0x48 + 0xbc28)
        case 0xbc
            int32_t edx_90 = *(*&arg1[1] + 8)
            
            if (edx_90 s< 0)
                sub_677bb0(0)
            else
                void* ecx_429 = data_bac4e4
                
                if (edx_90 s>= (*(ecx_429 + 0x164) - *(ecx_429 + 0x160)) s>> 3
                        || edx_90 s>= *(data_bac510 + 0x103f0))
                    sub_677bb0(0)
                else
                    sub_677bb0(*(*(ecx_429 + 0x160) + (edx_90 << 3) + 4))
        case 0xbd
            void* ecx_463 = *&arg1[1]
            int32_t edx_91 = *(ecx_463 + 8)
            
            if (edx_91 s>= 0)
                void* esi_25 = data_bac4e4
                
                if (edx_91 s< *(esi_25 + 0x174) - *(esi_25 + 0x170))
                    ecx_463.b = *(ecx_463 + 0x16c) != 0
                    *(edx_91 + *(esi_25 + 0x170)) = ecx_463.b
        case 0xbe
            char* esi_26 = *(*&arg1[1] + 8)
            
            if (esi_26 s>= 0)
                void* ecx_464 = data_bac4e4
                
                if (esi_26 s< *(ecx_464 + 0x174) - *(ecx_464 + 0x170))
                    result.b = *(data_bac510 + esi_26 * 0x1c + 0x104a1)
                    *&esi_26[*(ecx_464 + 0x170)] = result.b
        case 0xbf
            char* edx_94 = *(*&arg1[1] + 8)
            
            if (edx_94 s< 0)
                sub_677bb0(0)
            else
                void* ecx_466 = data_bac4e4
                
                if (edx_94 s>= *(ecx_466 + 0x174) - *(ecx_466 + 0x170))
                    sub_677bb0(0)
                else
                    int32_t ecx_467
                    ecx_467.b = *&edx_94[*(ecx_466 + 0x170)] != 0
                    sub_677bb0(ecx_467)
        case 0xc0
            sub_6600d0()
        case 0xc1
            sub_660120()
        case 0xc2
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac498 + 0xf) = ecx.b
        case 0xc3
            int32_t ecx_43
            ecx_43.b = *(data_bac498 + 0xf) != 0
            sub_677bb0(ecx_43)
        case 0xc4
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac498 + 0xe) = ecx.b
        case 0xc5
            int32_t ecx_44
            ecx_44.b = *(data_bac498 + 0xe) != 0
            sub_677bb0(ecx_44)
        case 0xc6
            int32_t ecx_45
            ecx_45.b = sub_660170() != 0
            sub_677bb0(ecx_45)
        case 0xc7
            void* eax_81 = *&arg1[1]
            var_14f8.d = eax_81 + 0x5b4
            *(eax_81 + 0xa0)
            void* eax_84 = sub_54b180(1)
            void* var_14fc_1
            
            if (eax_84 == 0)
                var_14fc_1 = nullptr
            else
                var_14fc_1 = eax_84 - 4
            
            *(eax_81 + 0x204)
            void* eax_88 = sub_54b180(1)
            void* var_1518_1
            
            if (eax_88 == 0)
                var_1518_1 = nullptr
            else
                var_1518_1 = eax_88 - 4
            
            *(eax_81 + 0x368)
            void* eax_92 = sub_54b180(1)
            void* var_1510_1
            
            if (eax_92 == 0)
                var_1510_1 = nullptr
            else
                var_1510_1 = eax_92 - 4
            
            *(eax_81 + 0x4cc)
            void* eax_96 = sub_54b180(1)
            void* var_150c_1
            
            if (eax_96 == 0)
                var_150c_1 = nullptr
            else
                var_150c_1 = eax_96 - 4
            
            *(var_14f8.d + 0x7c)
            void* eax_100 = sub_54b180(1)
            void* var_1508_1
            
            if (eax_100 == 0)
                var_1508_1 = nullptr
            else
                var_1508_1 = eax_100 - 4
            
            void* edx_16 = var_14f8.d
            int32_t var_24_13 = 0
            int32_t var_28_3 = 0x3e8
            int32_t eax_103 = *(eax_81 + 0x188 + (*(eax_81 + 0x204) << 2) - 4)
            int32_t eax_105 = *(eax_81 + 0x2ec + (*(eax_81 + 0x368) << 2) - 4)
            int32_t eax_107 = *(eax_81 + 0x450 + (*(eax_81 + 0x4cc) << 2) - 4)
            var_1504 = *(edx_16 + (*(edx_16 + 0x7c) << 2) - 4)
            void* eax_110 = data_bac47c
            var_2c = *(eax_110 + 0xc)
            int32_t ebx_2 = *(eax_110 + 8)
            int32_t var_30_1 = ebx_2
            int32_t eax_111
            char* edx_17
            eax_111, edx_17 = __alldiv()
            int32_t var_24_14 = 0
            int32_t var_28_4 = 0x3c
            var_2c = edx_17
            int32_t var_30_2 = eax_111
            int32_t eax_112
            char* edx_18
            eax_112, edx_18 = __alldiv()
            int32_t var_24_15 = 0
            int32_t var_28_5 = 0x3c
            var_2c = edx_18
            int32_t var_30_3 = eax_112
            var_14f8.d = eax_111 - eax_112 * 0x3c
            int32_t eax_113
            char* edx_19
            eax_113, edx_19 = __alldiv()
            int32_t var_24_16 = 0
            int32_t var_28_6 = 0x18
            var_2c = edx_19
            int32_t var_30_4 = eax_113
            int32_t eax_114 = __alldiv()
            sub_557630(var_14fc_1, *(eax_81 + 0x24 + (*(eax_81 + 0xa0) << 2) - 4), eax_114)
            sub_557630(var_1518_1, eax_103, eax_113 - eax_114 * 0x18)
            sub_557630(var_1510_1, eax_105, eax_112 - eax_113 * 0x3c)
            sub_557630(var_150c_1, eax_107, var_14f8.d)
            sub_557630(var_1508_1, var_1504, ebx_2 - eax_111 * 0x3e8)
        case 0xc8
            ecx.b = *(*&arg1[1] + 8) != 0
            sub_65ffe0(ecx.b)
        case 0xc9
            int32_t ecx_4
            ecx_4.b = *data_bac498 != 0
            sub_677bb0(ecx_4)
        case 0xca
            ecx_5 = data_bac498
            void* eax_11
            eax_11.b = *(*&arg1[1] + 8) != 0
            *&ecx_5[5] = eax_11.b
        label_5657d0:
            result = sub_660000()
            
            if (result.b == 0)
                *ecx_5 = result.b
        case 0xcb
            int32_t ecx_6
            ecx_6.b = *(data_bac498 + 5) != 0
            sub_677bb0(ecx_6)
        case 0xcc
            ecx_5 = data_bac498
            void* eax_13
            eax_13.b = *(*&arg1[1] + 8) != 0
            *&ecx_5[4] = eax_13.b
            goto label_5657d0
        case 0xcd
            int32_t ecx_7
            ecx_7.b = *(data_bac498 + 4) != 0
            sub_677bb0(ecx_7)
        case 0xce
            int32_t ecx_8
            ecx_8.b = sub_660000() != 0
            sub_677bb0(ecx_8)
        case 0xcf
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac498 + 1) = ecx.b
        case 0xd0
            int32_t ecx_9
            ecx_9.b = *(data_bac498 + 1) != 0
            sub_677bb0(ecx_9)
        case 0xd1
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac498 + 9) = ecx.b
        case 0xd2
            int32_t ecx_10
            ecx_10.b = *(data_bac498 + 9) != 0
            sub_677bb0(ecx_10)
        case 0xd3
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac498 + 8) = ecx.b
        case 0xd4
            int32_t ecx_11
            ecx_11.b = *(data_bac498 + 8) != 0
            sub_677bb0(ecx_11)
        case 0xd5
            int32_t ecx_12
            ecx_12.b = sub_660060() != 0
            sub_677bb0(ecx_12)
        case 0xd6
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac4e4 + 0x141) = ecx.b
        case 0xd7
            int32_t ecx_13
            ecx_13.b = *(data_bac4e4 + 0x141) != 0
            sub_677bb0(ecx_13)
        case 0xd8
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac498 + 0xb) = ecx.b
        case 0xd9
            int32_t ecx_14
            ecx_14.b = *(data_bac498 + 0xb) != 0
            sub_677bb0(ecx_14)
        case 0xda
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac498 + 0xa) = ecx.b
        case 0xdb
            int32_t ecx_15
            ecx_15.b = *(data_bac498 + 0xa) != 0
            sub_677bb0(ecx_15)
        case 0xdc
            int32_t ecx_16
            ecx_16.b = sub_660080() != 0
            sub_677bb0(ecx_16)
        case 0xdd
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac498 + 2) = ecx.b
        case 0xde
            int32_t ecx_17
            ecx_17.b = *(data_bac498 + 2) != 0
            sub_677bb0(ecx_17)
        case 0xdf
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac498 + 0xd) = ecx.b
        case 0xe0
            int32_t ecx_18
            ecx_18.b = *(data_bac498 + 0xd) != 0
            sub_677bb0(ecx_18)
        case 0xe1
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac498 + 0xc) = ecx.b
        case 0xe2
            int32_t ecx_19
            ecx_19.b = *(data_bac498 + 0xc) != 0
            sub_677bb0(ecx_19)
        case 0xe3
            int32_t ecx_20
            ecx_20.b = sub_6600a0() != 0
            sub_677bb0(ecx_20)
        case 0xe4
            void* ecx_47 = *&arg1[1]
            result.b = *(ecx_47 + 0x2d0) != 0
            uint32_t eax_57 = zx.d(result.b)
            edx.b = *(ecx_47 + 0x16c) != 0
            ecx_47.b = *(ecx_47 + 8) != 0
            sub_660f30(eax_57, edx.b, ecx_47.b, eax_57.b)
        case 0xe5
            void* eax_118 = *&arg1[1]
            int32_t var_24_22 = 0
            int32_t var_28_12 = 0x3e8
            int32_t eax_120
            int32_t edx_21
            edx_21:eax_120 = sx.q(*(eax_118 + 8))
            int32_t ecx_87 = eax_120 * 2
            int32_t ebx_7 = eax_120 + ecx_87
            int32_t ebx_8 = ebx_7 << 3
            int32_t eax_122
            int32_t edx_22
            edx_22:eax_122 = sx.q(*(eax_118 + 0x16c))
            int32_t ebx_9 = ebx_8 + eax_122
            int32_t eax_124
            int32_t edx_23
            edx_23:eax_124 = sx.q(*(eax_118 + 0x2d0))
            var_1504 = adc.d(
                adc.d(edx_21, edx_21 << 1 | eax_120 u>> 0xffffffe1, eax_120 + ecx_87 u< eax_120)
                    << 3 | ebx_7 u>> 0xffffffe3, 
                edx_22, ebx_8 + eax_122 u< ebx_8)
            int32_t edi_9 = ebx_9 << 4
            int32_t edi_10 = edi_9 - ebx_9
            int32_t edi_11 = edi_10 << 2
            int32_t edi_12 = edi_11 + eax_124
            int32_t ebx_14 = adc.d(
                sbb.d(var_1504 << 4 | ebx_9 u>> 0xffffffe4, var_1504, edi_9 u< ebx_9) << 2
                    | edi_10 u>> 0xffffffe2, 
                edx_23, edi_11 + eax_124 u< edi_11)
            int32_t esi_7 = edi_12 << 4
            int32_t esi_8 = esi_7 - edi_12
            int32_t esi_9 = esi_8 << 2
            int32_t eax_126
            int32_t edx_24
            edx_24:eax_126 = sx.q(*(eax_118 + 0x434))
            var_2c = adc.d(
                sbb.d(ebx_14 << 4 | edi_12 u>> 0xffffffe4, ebx_14, esi_7 u< edi_12) << 2
                    | esi_8 u>> 0xffffffe2, 
                edx_24, esi_9 + eax_126 u< esi_9)
            int32_t var_30_5 = esi_9 + eax_126
            int32_t eax_127
            int32_t edx_25
            eax_127, edx_25 = __allmul()
            void* ecx_94 = data_bac47c
            int32_t edx_26
            edx_26:result = sx.q(*(eax_118 + 0x598))
            *(ecx_94 + 8) = eax_127 + result
            *(ecx_94 + 0xc) = adc.d(edx_25, edx_26, eax_127 + result u< eax_127)
        case 0xe6
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac498 + 0x15) = ecx.b
        case 0xe7
            int32_t ecx_48
            ecx_48.b = *(data_bac498 + 0x15) != 0
            sub_677bb0(ecx_48)
        case 0xe8
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac498 + 0x14) = ecx.b
        case 0xe9
            int32_t ecx_49
            ecx_49.b = *(data_bac498 + 0x14) != 0
            sub_677bb0(ecx_49)
        case 0xea
            int32_t ecx_50
            ecx_50.b = sub_660fa0() != 0
            sub_677bb0(ecx_50)
        case 0xeb
            int32_t* i_6 = *&arg1[2]
            bool var_14f8_1 = false
            
            for (; i_6 u< *&arg1[3]; i_6 = &i_6[0x59])
                if (*i_6 == 0)
                    var_14f8_1 = *&i_6[2] != 0
            
            void* ecx_52 = *&arg1[1]
            i_6.b = *(ecx_52 + 0x2d0) != 0
            uint32_t eax_63 = zx.d(i_6.b)
            edx.b = *(ecx_52 + 0x16c) != 0
            ecx_52.b = *(ecx_52 + 8) != 0
            sub_660fd0(eax_63, edx.b, ecx_52.b, eax_63.b, var_14f8_1)
        case 0xec
            int32_t var_24_1 = ecx
            sub_674e70(result, *&arg1[1], *arg1, *&arg1[2])
        case 0xed
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac498 + 0x1d) = ecx.b
        case 0xee
            int32_t ecx_53
            ecx_53.b = *(data_bac498 + 0x1d) != 0
            sub_677bb0(ecx_53)
        case 0xef
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac498 + 0x1c) = ecx.b
        case 0xf0
            int32_t ecx_54
            ecx_54.b = *(data_bac498 + 0x1c) != 0
            sub_677bb0(ecx_54)
        case 0xf1
            void* eax_68 = data_bac498
            
            if (*(eax_68 + 0x1d) == 0 || *(eax_68 + 0x1c) == 0)
                sub_677bb0(0)
            else
                sub_677bb0(1)
        case 0xf2
            if (*arg1 != 1)
                void* eax_70 = *&arg1[1]
                ecx.b = *(eax_70 + 8) != 0
                sub_661130(eax_70, edx, ecx, 0)
            else
                void* ecx_55 = *&arg1[1]
                result.b = *(ecx_55 + 0x2d0) != 0
                uint32_t eax_69 = zx.d(result.b)
                ecx_55.b = *(ecx_55 + 8) != 0
                sub_661130(eax_69, edx, ecx_55, eax_69.b)
        case 0xf3
            int32_t ecx_487
            ecx_487.b = *(data_bac434 + 0xe) != 0
            sub_677bb0(ecx_487)
        case 0xf4
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac498 + 0x1f) = ecx.b
        case 0xf5
            int32_t ecx_56
            ecx_56.b = *(data_bac498 + 0x1f) != 0
            sub_677bb0(ecx_56)
        case 0xf6
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac498 + 0x1e) = ecx.b
        case 0xf7
            int32_t ecx_57
            ecx_57.b = *(data_bac498 + 0x1e) != 0
            sub_677bb0(ecx_57)
        case 0xf8
            void* eax_75 = data_bac498
            
            if (*(eax_75 + 0x1f) == 0 || *(eax_75 + 0x1e) == 0)
                sub_677bb0(0)
            else
                sub_677bb0(1)
        case 0xf9
            void* ecx_101 = *&arg1[1]
            result.b = *(ecx_101 + 0x2d0) != 0
            uint32_t eax_139 = zx.d(result.b)
            edx.b = *(ecx_101 + 0x16c) != 0
            int32_t ecx_103
            ecx_103.b = sub_660620(eax_139, edx.b, *(ecx_101 + 8), eax_139.b) != 0
            sub_677bb0(ecx_103)
        case 0xfa
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac434 + 0xe) = ecx.b
        case 0xfb
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac498 + 0x11) = ecx.b
        case 0xfc
            int32_t ecx_95
            ecx_95.b = *(data_bac498 + 0x11) != 0
            sub_677bb0(ecx_95)
        case 0xfd
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac498 + 0x10) = ecx.b
        case 0xfe
            int32_t ecx_96
            ecx_96.b = *(data_bac498 + 0x10) != 0
            sub_677bb0(ecx_96)
        case 0xff
            int32_t ecx_97
            ecx_97.b = sub_660410() != 0
            sub_677bb0(ecx_97)
        case 0x100
            void* ecx_104 = *&arg1[1]
            result.b = *(ecx_104 + 0x434) != 0
            int32_t* eax_142 = *(ecx_104 + 0x2d0) != 0
            edx.b = *(ecx_104 + 0x16c) != 0
            sub_660750(eax_142, edx.b, *(ecx_104 + 8), eax_142.b, result.b)
        case 0x101
            *(data_bac434 + 0xe) = 0
        case 0x102
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac498 + 0x13) = ecx.b
        case 0x103
            int32_t ecx_98
            ecx_98.b = *(data_bac498 + 0x13) != 0
            sub_677bb0(ecx_98)
        case 0x104
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac498 + 0x12) = ecx.b
        case 0x105
            int32_t ecx_99
            ecx_99.b = *(data_bac498 + 0x12) != 0
            sub_677bb0(ecx_99)
        case 0x106
            int32_t ecx_100
            ecx_100.b = sub_660600() != 0
            sub_677bb0(ecx_100)
        case 0x107
            int32_t ecx_379 = *(*&arg1[1] + 8)
            
            if (ecx_379 s>= 0)
                if (ecx_379 s> 0xff)
                    ecx_379 = 0xff
                
                *(data_bac4e4 + 0x7c) = ecx_379
            else
                *(data_bac4e4 + 0x7c) = 0
        case 0x108
            *(data_bac4e4 + 0x7c) = *(data_bac510 + 0xbb90)
        case 0x109
            sub_677bb0(*(data_bac4e4 + 0x7c))
        case 0x10a
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac4e4 + 0xf1) = ecx.b
        case 0x10b
            ecx.b = *(data_bac510 + 0xbb99)
            *(data_bac4e4 + 0xf1) = ecx.b
        case 0x10c
            int32_t ecx_409
            ecx_409.b = *(data_bac4e4 + 0xf1) != 0
            sub_677bb0(ecx_409)
        case 0x10d
            void* ecx_112 = *&arg1[1]
            result.b = *(ecx_112 + 0x2d0) != 0
            uint32_t eax_149 = zx.d(result.b)
            edx.b = *(ecx_112 + 0x16c) != 0
            ecx_112.b = *(ecx_112 + 8) != 0
            sub_660c20(eax_149, edx.b, ecx_112.b, eax_149.b)
        case 0x10e
            int32_t eax_225 = data_bac510
            int32_t ecx_324
            ecx_324.b =
                sub_650ff0(*(*&arg1[1] + 8) + *(eax_225 + 0x10b8c) + *(eax_225 + 0x10b88)) != 0
            sub_677bb0(ecx_324)
        case 0x10f
            void* eax_147 = *&arg1[1]
            edx.b = *(eax_147 + 0x16c) != 0
            ecx.b = *(eax_147 + 8) != 0
            int32_t ecx_111
            ecx_111.b = sub_660ad0(ecx.b, edx.b) != 0
            sub_677bb0(ecx_111)
        case 0x110
            int32_t ecx_115
            ecx_115.b = sub_65ea60(*(*&arg1[1] + 8)) != 0
            sub_677bb0(ecx_115)
        case 0x111
            void* ecx_116 = *&arg1[1]
            result.b = *(ecx_116 + 0x434) != 0
            uint32_t var_24_29 = zx.d(result.b)
            uint32_t eax_151
            eax_151.b = *(ecx_116 + 0x2d0) != 0
            uint32_t eax_152 = zx.d(eax_151.b)
            edx.b = *(ecx_116 + 0x16c) != 0
            int32_t ecx_118
            ecx_118.b = sub_660cf0(eax_152, edx.b, (*(ecx_116 + 8)).b, eax_152.b) != 0
            sub_677bb0(ecx_118)
        case 0x112
            void* ecx_121 = *&arg1[1]
            sub_650e30(*(ecx_121 + 8), *(ecx_121 + 0x16c))
            sub_677bb0(1)
        case 0x113
            int32_t ecx_125
            ecx_125.b = sub_650eb0(*(*&arg1[1] + 8)) != 0
            sub_677bb0(ecx_125)
        case 0x114
            sub_650cf0(*(*&arg1[1] + 8))
            sub_677bb0(1)
        case 0x115
            void* ecx_380 = *&arg1[1]
            int32_t edx_82 = *(ecx_380 + 8)
            
            if (edx_82 s>= 0 && edx_82 s< 0x20)
                int32_t ecx_381 = *(ecx_380 + 0x16c)
                
                if (ecx_381 s>= 0)
                    if (ecx_381 s> 0xff)
                        ecx_381 = 0xff
                    
                    *(data_bac4e4 + (edx_82 << 2) + 0x6c) = ecx_381
                else
                    *(data_bac4e4 + (edx_82 << 2) + 0x6c) = 0
        case 0x116
            int32_t ecx_388 = *(*&arg1[1] + 8)
            
            if (ecx_388 s>= 0 && ecx_388 s< 0x20)
                *(data_bac4e4 + (ecx_388 << 2) + 0x6c) = 0xff
        case 0x117
            int32_t eax_283 = *(*&arg1[1] + 8)
            
            if (eax_283 s< 0 || eax_283 s>= 0x20)
                sub_677bb0(0xff)
            else
                sub_677bb0(*(data_bac4e4 + (eax_283 << 2) + 0x6c))
        case 0x118
            result = *&arg1[1]
            int32_t edx_83 = *(result + 8)
            
            if (edx_83 s>= 0 && edx_83 s< 0x20)
                ecx.b = *(result + 0x16c) != 0
                *(edx_83 + data_bac4e4 + 0xed) = ecx.b
        case 0x119
            int32_t ecx_389 = *(*&arg1[1] + 8)
            
            if (ecx_389 s>= 0 && ecx_389 s< 0x20)
                *(ecx_389 + data_bac4e4 + 0xed) = 1
        case 0x11a
            int32_t edx_84 = *(*&arg1[1] + 8)
            
            if (edx_84 s< 0 || edx_84 s>= 0x20)
                sub_677bb0(1)
            else
                int32_t ecx_410
                ecx_410.b = *(edx_84 + data_bac4e4 + 0xed) != 0
                sub_677bb0(ecx_410)
        case 0x11b
            sub_536260(data_bac4e4 + 0x11c, *&arg1[1] + 0xc)
            sub_675f90(0)
        case 0x11c
            sub_677c00(data_bac4e4 + 0x11c)
        case 0x11d
            sub_536170(&var_2c, *&arg1[1] + 0xc)
            int32_t var_8_13 = 0xc
            int32_t edx_103 = sub_53a2e0(&var_38, &var_2c)
            void** eax_409 = data_bac420
            sub_53a190(eax_409, edx_103, &var_1504, *eax_409, *&eax_409[1], var_38)
            
            if (var_1504 != *(data_bac420 + 4))
                sub_677bb0(1)
                sub_52e8a0(&var_2c)
            else
                sub_677bb0(0)
                sub_52e8a0(&var_2c)
        case 0x11e
            void* eax_416 = *&arg1[1]
            sub_619040(*(eax_416 + 8), *(eax_416 + 0x16c))
        case 0x11f
            sub_619540()
        case 0x120
            sub_661200()
        case 0x121
            sub_677bb0(*(data_bac458 + 0x338))
        case 0x122
            void* ecx_537 = *&arg1[1]
            sub_6615f0(ecx_537 + 0x2d4, *(ecx_537 + 0x16c), *(ecx_537 + 8), ecx_537 + 0x2d4)
        case 0x123
            sub_677bb0(*(data_bac458 + 0x33c))
        case 0x124
            int32_t ecx_58
            ecx_58.b = *(data_bac458 + 0x338) s>= 0
            sub_677bb0(ecx_58)
        case 0x125
            result = data_bac458
            *(result + 0x33c) = 0xffffffff
            *(result + 0x338) = 0xffffffff
        case 0x126
            sub_60c680(data_bac49c + 0xc, data_bac4d4 + 0x40)
        case 0x127
            sub_60c680(data_bac49c + 0xc, data_bac4d4 + 0x58)
        case 0x128
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac4e4 + 0x134) = ecx.b
        case 0x129
            *(data_bac4e4 + 0x138) = *(*&arg1[1] + 8)
        case 0x12a
            ecx.b = *(data_bac510 + 0xbbc4)
            *(data_bac4e4 + 0x134) = ecx.b
        case 0x12b
            *(data_bac4e4 + 0x138) = *(data_bac510 + 0xbbc8)
        case 0x12c
            result = *&arg1[1]
            int32_t edx_4 = *(result + 8)
            
            if (edx_4 u<= 3)
                ecx.b = *(result + 0x16c) != 0
                *(edx_4 * 3 + data_bac498 + 0x24) = ecx.b
        case 0x12d
            int32_t ecx_23
            ecx_23.b = sub_6612e0(*(*&arg1[1] + 8)) != 0
            sub_677bb0(ecx_23)
        case 0x12e
            result = *&arg1[1]
            int32_t edx_5 = *(result + 8)
            
            if (edx_5 u<= 3)
                ecx.b = *(result + 0x16c) != 0
                *(edx_5 * 3 + data_bac498 + 0x23) = ecx.b
        case 0x12f
            int32_t ecx_24 = *(*&arg1[1] + 8)
            
            if (ecx_24 u> 3)
                sub_677bb0(0)
            else
                int32_t eax_42
                eax_42.b = *(ecx_24 * 3 + data_bac498 + 0x23)
                int32_t ecx_25
                ecx_25.b = eax_42.b != 0
                sub_677bb0(ecx_25)
        case 0x130
            result = *&arg1[1]
            int32_t edx_6 = *(result + 8)
            
            if (edx_6 u<= 3)
                ecx.b = *(result + 0x16c) != 0
                *(edx_6 * 3 + data_bac498 + 0x22) = ecx.b
        case 0x131
            int32_t ecx_28
            ecx_28.b = sub_661300(*(*&arg1[1] + 8)) != 0
            sub_677bb0(ecx_28)
        case 0x132
            int32_t ecx_31
            ecx_31.b = sub_661320(*(*&arg1[1] + 8)) != 0
            sub_677bb0(ecx_31)
        case 0x133
            int32_t ecx_502
            ecx_502.b = *(data_bac4e4 + 0x134) != 0
            sub_677bb0(ecx_502)
        case 0x134
            sub_677bb0(*(data_bac4e4 + 0x138))
        case 0x135
            int32_t eax_256 = *(*&arg1[1] + 8)
            int32_t ecx_373
            ecx_373.b = sub_616e90(eax_256, eax_256) != 0
            sub_677bb0(ecx_373)
        case 0x136
            int32_t ecx_126 = *&arg1[1]
            void* edi_15 = data_bac4a0
            int64_t xmm0_1 = *(edi_15 + 0x1f0)
            result.b = *(ecx_126 + 0x2d0) != 0
            edx.b = *(ecx_126 + 0x16c) != 0
            ecx_126.b = *(ecx_126 + 8) != 0
            var_2c = *(edi_15 + 0x1f8)
            char* eax_156
            eax_156.w = *(edi_15 + 0x1fc)
            sub_660d90(eax_156, edx.b, ecx_126.b, xmm0_1, var_2c, eax_156.w, result.b)
        case 0x137
            ecx.b = *(*&arg1[1] + 8) != 0
            *(data_bac4e4 + 0x14c) = ecx.b
        case 0x138
            ecx.b = *(data_bac510 + 0xbbdc)
            *(data_bac4e4 + 0x14c) = ecx.b
        case 0x139
            int32_t ecx_450
            ecx_450.b = *(data_bac4e4 + 0x14c) != 0
            sub_677bb0(ecx_450)
        case 0x13a
            int32_t* esi_31 = nullptr
            bool var_14fd_1 = false
            int32_t* var_14fc_2 = nullptr
            int32_t edi_22 = 0
            int32_t var_1510_2 = 0
            var_14f8.d = 0
            int32_t var_150c_2 = 0
            int32_t var_1c8_1 = 0
            int32_t var_248_1 = 0
            sub_536170(&var_11c, *&arg1[1] + 0xc)
            int32_t var_8_15 = 0xe
            sub_536170(&var_164, *&arg1[1] + 0x170)
            var_8_15.b = 0xf
            sub_52e820(&var_2c, &data_ad9104)
            var_8_15.b = 0x10
            int32_t* i_7 = *&arg1[2]
            int32_t* i_14 = i_7
            
            while (i_7 u< *&arg1[3])
                int32_t ecx_514 = *i_7
                
                if (ecx_514 u> 7)
                    esi_31 = var_14fc_2
                    edi_22 = var_14f8.d
                else
                    switch (ecx_514)
                        case 0
                            var_14fd_1 = *&i_7[2] != 0
                            esi_31 = var_14fc_2
                            edi_22 = var_14f8.d
                        case 1
                            sub_536260(&var_2c, &i_7[3])
                            i_7 = i_14
                            esi_31 = var_14fc_2
                            edi_22 = var_14f8.d
                        case 2
                            __builtin_memcpy(&var_244, &i_7[9], 0x80)
                            esi_31 = var_14fc_2
                            edi_22 = var_14f8.d
                        case 3
                            esi_31 = *&i_7[2]
                            var_14fc_2 = esi_31
                            edi_22 = var_14f8.d
                        case 4
                            edi_22 = *&i_7[2]
                            esi_31 = var_14fc_2
                            var_14f8.d = edi_22
                        case 5
                            __builtin_memcpy(&var_2c4, &i_7[9], 0x80)
                            esi_31 = var_14fc_2
                            edi_22 = var_14f8.d
                        case 6
                            var_1510_2 = *&i_7[2]
                            esi_31 = var_14fc_2
                            edi_22 = var_14f8.d
                        case 7
                            var_150c_2 = *&i_7[2]
                            esi_31 = var_14fc_2
                            edi_22 = var_14f8.d
                
                i_7 = &i_7[0x59]
                i_14 = i_7
            
            sub_536170(&var_38, &var_164)
            var_44.d = &var_2c4
            int32_t ecx_520
            ecx_520.b = sub_661660(&var_2c, var_14fd_1, &var_11c, &var_2c, &var_244, esi_31, 
                edi_22, var_44, var_1510_2, var_150c_2, var_38, var_34) != 0
            sub_677bb0(ecx_520)
            sub_52e8a0(&var_2c)
            sub_52e8a0(&var_164)
            sub_52e8a0(&var_11c)
        case 0x13b
            uint32_t esi_34 = 0
            bool var_14fd_2 = false
            var_14f8.d = 0
            int32_t edi_23 = 0
            int32_t var_1510_3 = 0
            int32_t var_14fc_3 = 0
            int32_t var_150c_3 = 0
            int32_t var_248_2 = 0
            int32_t var_1c8_2 = 0
            sub_536170(&var_164, *&arg1[1] + 0xc)
            int32_t var_8_16 = 0x11
            sub_536170(&var_11c, *&arg1[1] + 0x170)
            var_8_16.b = 0x12
            sub_52e820(&var_2c, &data_ad9114)
            var_8_16.b = 0x13
            int32_t* i_8 = *&arg1[2]
            int32_t* i_15 = i_8
            
            while (i_8 u< *&arg1[3])
                int32_t ecx_527 = *i_8
                
                if (ecx_527 u> 7)
                    esi_34 = var_14f8.d
                    edi_23 = var_14fc_3
                else
                    switch (ecx_527)
                        case 0
                            var_14fd_2 = *&i_8[2] != 0
                            esi_34 = var_14f8.d
                            edi_23 = var_14fc_3
                        case 1
                            sub_536260(&var_2c, &i_8[3])
                            i_8 = i_15
                            esi_34 = var_14f8.d
                            edi_23 = var_14fc_3
                        case 2
                            __builtin_memcpy(&var_2c4, &i_8[9], 0x80)
                            esi_34 = var_14f8.d
                            edi_23 = var_14fc_3
                        case 3
                            esi_34 = *&i_8[2]
                            var_14f8.d = esi_34
                            edi_23 = var_14fc_3
                        case 4
                            edi_23 = *&i_8[2]
                            esi_34 = var_14f8.d
                            var_14fc_3 = edi_23
                        case 5
                            __builtin_memcpy(&var_244, &i_8[9], 0x80)
                            esi_34 = var_14f8.d
                            edi_23 = var_14fc_3
                        case 6
                            var_1510_3 = *&i_8[2]
                            esi_34 = var_14f8.d
                            edi_23 = var_14fc_3
                        case 7
                            var_150c_3 = *&i_8[2]
                            esi_34 = var_14f8.d
                            edi_23 = var_14fc_3
                
                i_8 = &i_8[0x59]
                i_15 = i_8
            
            sub_536170(&var_38, &var_11c)
            int32_t var_3c_6 = var_150c_3
            var_44.d = &var_244
            int32_t ecx_533
            ecx_533.b = sub_6620c0(&var_2c, var_14fd_2, &var_164, &var_2c, &var_2c4, esi_34, 
                edi_23, var_44, var_1510_3) != 0
            sub_677bb0(ecx_533)
            sub_52e8a0(&var_2c)
            sub_52e8a0(&var_11c)
            sub_52e8a0(&var_164)
        case 0x13c
            void var_1ac
            sub_52e820(&var_1ac, &data_ad7c90)
            int32_t var_8_14 = 0xd
            void* ecx_508 = *&arg1[1]
            sub_6615f0(&var_1ac, *(ecx_508 + 0x16c), *(ecx_508 + 8), &var_1ac)
            sub_52e8a0(&var_1ac)
        case 0x13d
            *(data_bac4e4 + 0x150) = *(*&arg1[1] + 8)
        case 0x13e
            *(data_bac4e4 + 0x150) = *(data_bac510 + 0xbbe0)
        case 0x13f
            sub_677bb0(*(data_bac4e4 + 0x150))
        case 0x140
            int32_t var_24_60 = 0x1228
            var_14f4 = 0
            char var_28_38 = 0
            var_2c = &var_14f0
            _memset(var_2c, var_28_38, var_24_60)
            sub_650f50(*(*&arg1[1] + 8), &var_14f4)
            int32_t var_48_1 = 7
            int32_t var_4c_1 = 0
            int16_t var_5c = 0
            int32_t ecx_218
            
            if (var_14cc != 0)
                int16_t* ecx_219 = &var_14cc
                int16_t i_9
                
                do
                    i_9 = *ecx_219
                    ecx_219 = &ecx_219[1]
                while (i_9 != 0)
                ecx_218 = (ecx_219 - &var_14ca) s>> 1
            else
                ecx_218 = 0
            
            sub_52e720(&var_5c, &var_14cc, ecx_218)
            int32_t var_8_5 = 4
            sub_60c680(data_bac49c + 0xc, &var_5c)
            sub_52e8a0(&var_5c)
        case 0x141
            int32_t var_24_63 = 0x1228
            var_14f4 = 0
            char var_28_40 = 0
            var_2c = &var_14f0
            _memset(var_2c, var_28_40, var_24_63)
            sub_650f50(*(*&arg1[1] + 8), &var_14f4)
            int32_t var_60_1 = 7
            int32_t var_64_1 = 0
            int16_t var_74 = 0
            int32_t ecx_227
            
            if (var_12cc != 0)
                int16_t* ecx_228 = &var_12cc
                int16_t i_10
                
                do
                    i_10 = *ecx_228
                    ecx_228 = &ecx_228[1]
                while (i_10 != 0)
                void var_12ca
                ecx_227 = (ecx_228 - &var_12ca) s>> 1
            else
                ecx_227 = 0
            
            sub_52e720(&var_74, &var_12cc, ecx_227)
            int32_t var_8_6 = 5
            sub_60c680(data_bac49c + 0xc, &var_74)
            sub_52e8a0(&var_74)
        case 0x142
            int32_t var_24_95 = 0x1228
            var_14f4 = 0
            char var_28_64 = 0
            var_2c = &var_14f0
            _memset(var_2c, var_28_64, var_24_95)
            sub_650f50(*(*&arg1[1] + 8) + *(data_bac510 + 0x10b88), &var_14f4)
            int32_t var_90_1 = 7
            int32_t var_94_1 = 0
            int16_t var_a4 = 0
            int32_t ecx_310
            
            if (var_14cc != 0)
                int16_t* ecx_311 = &var_14cc
                int16_t i_11
                
                do
                    i_11 = *ecx_311
                    ecx_311 = &ecx_311[1]
                while (i_11 != 0)
                ecx_310 = (ecx_311 - &var_14ca) s>> 1
            else
                ecx_310 = 0
            
            sub_52e720(&var_a4, &var_14cc, ecx_310)
            int32_t var_8_11 = 0xa
            sub_677c00(&var_a4)
            sub_52e8a0(&var_a4)
        case 0x143
            int32_t var_24_97 = 0x1228
            var_14f4 = 0
            char var_28_66 = 0
            var_2c = &var_14f0
            _memset(var_2c, var_28_66, var_24_97)
            sub_650f50(*(*&arg1[1] + 8) + *(data_bac510 + 0x10b88), &var_14f4)
            void var_1c4
            sub_52e820(&var_1c4, &var_12cc)
            int32_t var_8_12 = 0xb
            sub_677c00(&var_1c4)
            sub_52e8a0(&var_1c4)
        case 0x144
            int32_t var_24_45 = 0x1228
            var_14f4 = 0
            char var_28_28 = 0
            var_2c = &var_14f0
            _memset(var_2c, var_28_28, var_24_45)
            sub_650f50(*(*&arg1[1] + 8), &var_14f4)
            int32_t var_f0_1 = 7
            int32_t var_f4_1 = 0
            int16_t var_104 = 0
            int32_t ecx_188
            
            if (var_ccc != 0)
                int16_t* ecx_189 = &var_ccc
                int16_t i_12
                
                do
                    i_12 = *ecx_189
                    ecx_189 = &ecx_189[1]
                while (i_12 != 0)
                ecx_188 = (ecx_189 - &var_cca) s>> 1
            else
                ecx_188 = 0
            
            sub_52e720(&var_104, &var_ccc, ecx_188)
            int32_t var_8_3 = 2
            sub_60c680(data_bac49c + 0xc, &var_104)
            sub_52e8a0(&var_104)
        case 0x145
            int32_t var_24_80 = 0x1228
            var_14f4 = 0
            char var_28_54 = 0
            var_2c = &var_14f0
            _memset(var_2c, var_28_54, var_24_80)
            sub_650f50(*(*&arg1[1] + 8) + *(data_bac510 + 0x10b88), &var_14f4)
            int32_t var_138_1 = 7
            int32_t var_13c_1 = 0
            int16_t var_14c = 0
            int32_t ecx_279
            
            if (var_ccc != 0)
                int16_t* ecx_280 = &var_ccc
                int16_t i_13
                
                do
                    i_13 = *ecx_280
                    ecx_280 = &ecx_280[1]
                while (i_13 != 0)
                ecx_279 = (ecx_280 - &var_cca) s>> 1
            else
                ecx_279 = 0
            
            sub_52e720(&var_14c, &var_ccc, ecx_279)
            int32_t var_8_9 = 8
            sub_60c680(data_bac49c + 0xc, &var_14c)
            sub_52e8a0(&var_14c)
        case 0x146
            sub_536260(data_bac4e4 + 0x11c, data_bac510 + 0xbba8)
            sub_675f90(0)
        case 0x147
            sub_668c50()
        case 0x148
            void** eax_434 = *&arg1[1] + 0xc
            int32_t* ecx_540 = data_bac4a0 + 0x22c
            
            if (*arg1 != 0)
                sub_536260(ecx_540, eax_434)
                *(data_bac4a0 + 0x244) = *(*&arg1[1] + 0x16c)
            else
                sub_536260(ecx_540, eax_434)
                *(data_bac4a0 + 0x244) = 0
        case 0x149
            int32_t ecx_46
            ecx_46.b = *(data_bac484 + 0x138) != 0
            sub_677bb0(ecx_46)
        case 0x14a
            int32_t ecx_542 = *(*&arg1[1] + 8)
            
            if (ecx_542 s< 0)
                sub_677bb0(0)
            else
                void* eax_437 = data_bac510
                
                if (ecx_542 s>= *(eax_437 + 0x217c))
                    sub_677bb0(0)
                else
                    sub_677bb0(*(eax_437 + (ecx_542 << 2) + 0x2180))
        case 0x14b
            int32_t eax_439 = *(*&arg1[1] + 8)
            void* ecx_544
            
            if (eax_439 s>= 0)
                ecx_544 = data_bac510
            
            if (eax_439 s< 0 || eax_439 s>= *(ecx_544 + 0x217c))
                void var_194
                sub_52e820(&var_194, &data_ad7c90)
                int32_t var_8_17 = 0x14
                sub_677c00(&var_194)
                sub_52e8a0(&var_194)
            else
                sub_677c00(ecx_544 + eax_439 * 0x18 + 0x2584)
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
int32_t entry_ebx
sub_745f2b(entry_ebx ^ &__saved_ebp)
return result

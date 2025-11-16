// 函数: sub_59df60
// 地址: 0x59df60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b91cb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_11c
int32_t eax_2 = __security_cookie ^ &var_11c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_110 = 0

if (*(arg1 + 4) != 0)
    int32_t* var_104 = nullptr
    int32_t var_100_1 = 0
    int32_t var_fc_1 = 0
    int32_t var_c_1 = 0
    void* ebx_1 = data_bac468
    int32_t eax_5
    int32_t edx_1
    edx_1:eax_5 = muls.dp.d(0x2f149903, *(ebx_1 + 0x3b0) - *(ebx_1 + 0x3ac))
    int32_t ecx_3 = *(ebx_1 + 0x2f4) - *(ebx_1 + 0x2f0)
    int32_t edx_2 = edx_1 s>> 6
    int32_t eax_6
    int32_t edx_3
    edx_3:eax_6 = muls.dp.d(0xdd67c8a7, ecx_3)
    int32_t edx_5 = (edx_3 + ecx_3) s>> 9
    int32_t eax_7
    int32_t edx_6
    edx_6:eax_7 = muls.dp.d(0x2f149903, *(ebx_1 + 0xcc) - *(ebx_1 + 0xc8))
    int32_t edx_7 = edx_6 s>> 6
    int32_t eax_8
    int32_t edx_8
    edx_8:eax_8 = muls.dp.d(0x2f149903, *(ebx_1 + 0x17c) - *(ebx_1 + 0x178))
    int32_t edx_9 = edx_8 s>> 6
    int32_t eax_9
    int32_t edx_10
    edx_10:eax_9 = muls.dp.d(0x2f149903, *(ebx_1 + 0x240) - *(ebx_1 + 0x23c))
    int32_t edx_11 = edx_10 s>> 6
    sub_59fa50(&var_104, 
        (edx_11 u>> 0x1f) + 1 + (edx_9 u>> 0x1f) + (edx_7 u>> 0x1f) + (edx_5 u>> 0x1f)
            + (edx_2 u>> 0x1f) + edx_2 + edx_5 + edx_7 + edx_9 + edx_11)
    void* ecx_11 = data_bac468
    int32_t i = 0
    int32_t i_4 = 0
    int32_t eax_14
    int32_t edx_14
    edx_14:eax_14 = muls.dp.d(0x2f149903, *(ecx_11 + 0xcc) - *(ecx_11 + 0xc8))
    int32_t edx_15 = edx_14 s>> 6
    int16_t var_ac
    
    if ((edx_15 u>> 0x1f) + edx_15 s> 0)
        int32_t ebx_2 = 0
        int32_t var_118_1 = 0
        void* esi_10 = &var_104[2]
        int32_t edx_30
        
        do
            *(esi_10 - 8) = 0
            *(esi_10 - 4) = i
            int32_t edx_19
            
            if (i s>= 0)
                int32_t eax_18
                int32_t edx_18
                edx_18:eax_18 = muls.dp.d(0x2f149903, *(ecx_11 + 0xcc) - *(ecx_11 + 0xc8))
                edx_19 = edx_18 s>> 6
            
            void* edx_21
            
            if (i s< 0 || (edx_19 u>> 0x1f) + edx_19 s<= i)
                edx_21 = nullptr
            else
                edx_21 = *(ecx_11 + 0xc8) + ebx_2
            
            int16_t* eax_22
            int32_t edx_23
            eax_22, edx_23 = sub_676860(&var_ac, *(edx_21 + 0x12c))
            var_c_1.b = 1
            
            if (esi_10 != eax_22)
                sub_52e3c0(esi_10, eax_22, 0, 0xffffffff)
            
            var_c_1.b = 0
            int32_t var_98
            
            if (var_98 u>= 8)
                j__free(var_ac.d)
            
            ecx_11 = data_bac468
            var_98 = 7
            int32_t var_9c_1 = 0
            var_ac = 0
            *(esi_10 + 0x18) = *(ecx_11 + 0xb8)
            int32_t eax_23
            eax_23.b = *(ecx_11 + 0xc5)
            *(esi_10 + 0x2c) = eax_23.b
            *(esi_10 + 0x1c) = *(ecx_11 + 0xbc)
            
            if (i s>= 0)
                int32_t eax_25
                int32_t edx_26
                edx_26:eax_25 = muls.dp.d(0x2f149903, *(ecx_11 + 0xcc) - *(ecx_11 + 0xc8))
                edx_23 = edx_26 s>> 6
            
            int32_t* ebx_4
            
            if (i s< 0 || (edx_23 u>> 0x1f) + edx_23 s<= i)
                ebx_4 = nullptr
            else
                ebx_4 = *(ecx_11 + 0xc8) + var_118_1
            
            HANDLE eax_29 = *ebx_4
            
            if (eax_29 != 0)
                WaitForSingleObject(eax_29, 0xffffffff)
                ecx_11 = data_bac468
            
            edx_23.b = ebx_4[0xe].b
            char var_119_1 = edx_23.b
            
            if (eax_29 != 0)
                ReleaseSemaphore(eax_29, 1, nullptr)
                ecx_11 = data_bac468
                edx_23.b = var_119_1
            
            int32_t eax_30
            
            if (edx_23.b != 0)
                HANDLE eax_31 = *ebx_4
                
                if (eax_31 != 0)
                    WaitForSingleObject(eax_31, 0xffffffff)
                    ecx_11 = data_bac468
                
                ebx_4.b = ebx_4[0x13].b
                
                if (eax_31 != 0)
                    ReleaseSemaphore(eax_31, 1, nullptr)
                    ecx_11 = data_bac468
                
                int32_t eax_32
                eax_32.b = ebx_4.b != 0
                eax_30 = eax_32 + 1
            else
                eax_30 = 0
            
            *(esi_10 + 0x20) = eax_30
            *(esi_10 + 0x24) = 0
            *(esi_10 + 0x28) = 0
            *(esi_10 + 0x2d) = 0
            
            if (eax_30 == 1)
                eax_30.b = *(ecx_11 + 0xc4)
                
                if (eax_30.b != 0)
                    *(esi_10 + 0x28) = 1
            
            i += 1
            esi_10 += 0x38
            int32_t eax_33
            int32_t edx_29
            edx_29:eax_33 = muls.dp.d(0x2f149903, *(ecx_11 + 0xcc) - *(ecx_11 + 0xc8))
            ebx_2 = var_118_1 + 0x15c
            edx_30 = edx_29 s>> 6
            var_118_1 = ebx_2
        while (i s< (edx_30 u>> 0x1f) + edx_30)
        i_4 = i
    
    int32_t ebx_6 = var_110
    int32_t eax_37
    int32_t edx_33
    edx_33:eax_37 = muls.dp.d(0x2f149903, *(ecx_11 + 0x17c) - *(ecx_11 + 0x178))
    int32_t i_1 = 0
    int32_t edx_34 = edx_33 s>> 6
    int16_t var_14c
    int16_t var_dc
    int32_t var_c8
    int16_t var_c4
    int32_t var_b0
    
    if ((edx_34 u>> 0x1f) + edx_34 s> 0)
        int32_t var_118_2 = 0
        void* esi_13 = &var_104[2 + i * 0xe]
        int32_t edx_51
        
        do
            *(esi_13 - 8) = 1
            *(esi_13 - 4) = i_1
            int32_t edx_40
            
            if (i_1 s>= 0)
                int32_t eax_42
                int32_t edx_39
                edx_39:eax_42 = muls.dp.d(0x2f149903, *(ecx_11 + 0x17c) - *(ecx_11 + 0x178))
                edx_40 = edx_39 s>> 6
            
            void* eax_47
            
            if (i_1 s< 0 || (edx_40 u>> 0x1f) + edx_40 s<= i_1)
                eax_47 = nullptr
            else
                eax_47 = *(ecx_11 + 0x178) + var_118_2
            
            int32_t ecx_14 = *(eax_47 + 0x130)
            int16_t* eax_48
            
            if (ecx_14 != 0xffffffff)
                int32_t var_130_9 = ecx_14 s% 0x2710
                int32_t var_134_7 = ecx_14 s/ 0x2710
                int32_t var_138_4 = 7
                int32_t var_13c_1 = 0
                var_14c = 0
                sub_52e720(&var_14c, u"%04d %05d", 9)
                eax_48 = sub_6ae4c0(&var_dc, var_14c)
                int32_t var_c_2 = 3
                ebx_6 |= 2
            else
                var_b0 = 7
                void* var_130_8 = nullptr
                void* const var_134_6 = &data_ad7c90
                int32_t var_b4_1 = 0
                var_c4 = 0
                sub_52e720(&var_c4, var_134_6, var_130_8)
                eax_48 = &var_c4
                var_c_1.b = 2
                ebx_6 |= 1
            
            var_110 = ebx_6
            
            if (esi_13 != eax_48)
                sub_52e3c0(esi_13, eax_48, 0, 0xffffffff)
            
            if ((ebx_6.b & 2) != 0)
                ebx_6 &= 0xfffffffd
                var_110 = ebx_6
                
                if (var_c8 u>= 8)
                    j__free(var_dc.d)
                
                var_c8 = 7
                int32_t var_cc_1 = 0
                var_dc = 0
            
            var_c_1 = 0
            
            if ((ebx_6.b & 1) != 0)
                ebx_6 &= 0xfffffffe
                var_110 = ebx_6
                
                if (var_b0 u>= 8)
                    j__free(var_c4.d)
                
                var_b0 = 7
                int32_t var_b4_2 = 0
                var_c4 = 0
            
            void* edx_45 = data_bac468
            *(esi_13 + 0x18) = *(edx_45 + 0x18c)
            *(esi_13 + 0x2c) = 0
            *(esi_13 + 0x1c) = 0
            int32_t edx_47
            
            if (i_1 s>= 0)
                int32_t eax_52
                int32_t edx_46
                edx_46:eax_52 = muls.dp.d(0x2f149903, *(edx_45 + 0x17c) - *(edx_45 + 0x178))
                edx_47 = edx_46 s>> 6
            
            int32_t* ecx_25
            
            if (i_1 s< 0 || (edx_47 u>> 0x1f) + edx_47 s<= i_1)
                ecx_25 = nullptr
            else
                ecx_25 = *(data_bac468 + 0x178) + var_118_2
            
            void* eax_56 = sub_59d600(ecx_25)
            ecx_11 = data_bac468
            i += 1
            i_1 += 1
            *(esi_13 + 0x20) = eax_56
            var_118_2 += 0x15c
            *(esi_13 + 0x24) = 0
            *(esi_13 + 0x28) = 0
            *(esi_13 + 0x2d) = 0
            esi_13 += 0x38
            int32_t eax_57
            int32_t edx_50
            edx_50:eax_57 = muls.dp.d(0x2f149903, *(ecx_11 + 0x17c) - *(ecx_11 + 0x178))
            edx_51 = edx_50 s>> 6
        while (i_1 s< (edx_51 u>> 0x1f) + edx_51)
        i_4 = i
    
    int32_t eax_61
    int32_t edx_54
    edx_54:eax_61 = muls.dp.d(0x2f149903, *(ecx_11 + 0x240) - *(ecx_11 + 0x23c))
    int32_t edx_55 = edx_54 s>> 6
    
    if ((edx_55 u>> 0x1f) + edx_55 s> 0)
        int32_t var_118_3 = 0
        int32_t i_2 = 0
        void* esi_16 = &var_104[2 + i * 0xe]
        int32_t edx_68
        
        do
            *(esi_16 - 8) = 2
            *(esi_16 - 4) = i_2
            int32_t edx_61
            
            if (i_2 s>= 0)
                int32_t eax_65
                int32_t edx_60
                edx_60:eax_65 = muls.dp.d(0x2f149903, *(ecx_11 + 0x240) - *(ecx_11 + 0x23c))
                edx_61 = edx_60 s>> 6
            
            void* ecx_27
            
            if (i_2 s< 0 || (edx_61 u>> 0x1f) + edx_61 s<= i_2)
                ecx_27 = nullptr
            else
                ecx_27 = *(ecx_11 + 0x23c) + var_118_3
            
            void** eax_69 = sub_59d6b0(ecx_27, &var_dc)
            var_c_1.b = 4
            
            if (esi_16 != eax_69)
                sub_52e3c0(esi_16, eax_69, 0, 0xffffffff)
            
            var_c_1.b = 0
            
            if (var_c8 u>= 8)
                j__free(var_dc.d)
            
            void* edx_62 = data_bac468
            var_c8 = 7
            int32_t var_cc_2 = 0
            var_dc = 0
            *(esi_16 + 0x18) = *(edx_62 + 0x238)
            *(esi_16 + 0x2c) = 0
            *(esi_16 + 0x1c) = 0
            int32_t edx_64
            
            if (i_2 s>= 0)
                int32_t eax_71
                int32_t edx_63
                edx_63:eax_71 = muls.dp.d(0x2f149903, *(edx_62 + 0x240) - *(edx_62 + 0x23c))
                edx_64 = edx_63 s>> 6
            
            int32_t* ecx_33
            
            if (i_2 s< 0 || (edx_64 u>> 0x1f) + edx_64 s<= i_2)
                ecx_33 = nullptr
            else
                ecx_33 = *(data_bac468 + 0x23c) + var_118_3
            
            void* eax_75 = sub_59d600(ecx_33)
            ecx_11 = data_bac468
            i_2 += 1
            *(esi_16 + 0x20) = eax_75
            i += 1
            var_118_3 += 0x15c
            *(esi_16 + 0x24) = 0
            *(esi_16 + 0x28) = 0
            *(esi_16 + 0x2d) = 0
            esi_16 += 0x38
            int32_t eax_76
            int32_t edx_67
            edx_67:eax_76 = muls.dp.d(0x2f149903, *(ecx_11 + 0x240) - *(ecx_11 + 0x23c))
            edx_68 = edx_67 s>> 6
        while (i_2 s< (edx_68 u>> 0x1f) + edx_68)
        ebx_6 = var_110
        i_4 = i
    
    int32_t eax_83 = (*(ecx_11 + 0x2f4) - *(ecx_11 + 0x2f0)) s/ 0x250
    int32_t var_f4
    int32_t var_e0
    int16_t var_64
    int32_t var_50
    
    if (eax_83 s> 0)
        int32_t edx_72 = 0
        int32_t var_114_1 = 0
        i_4 = i + eax_83
        void* esi_21 = &var_104[i * 0xe + 2]
        int32_t ebx_7 = 0
        
        do
            void* edi_12 = *(ecx_11 + 0x2f0) + edx_72
            *(esi_21 - 8) = 3
            int32_t* var_130_16 = &var_f4
            *(esi_21 - 4) = ebx_7
            int16_t* eax_86
            eax_86.b = *(sub_54edd0(edi_12, var_130_16) + 0x10) != 0
            char var_119_2 = eax_86.b
            
            if (var_e0 u>= 8)
                j__free(var_f4)
                eax_86.b = var_119_2
            
            int16_t* var_130_18 = &var_f4
            
            if (eax_86.b != 0)
                int16_t* eax_87 = sub_54edd0(edi_12, var_130_18)
                var_c_1.b = 5
                
                if (esi_21 != eax_87)
                    sub_52e3c0(esi_21, eax_87, 0, 0xffffffff)
                
                goto label_59e768
            
            int16_t* eax_88
            int32_t ecx_37
            eax_88, ecx_37 = sub_54ee10(edi_12, var_130_18)
            eax_88.b = *(eax_88 + 0x10) != 0
            char var_119_3 = eax_88.b
            
            if (var_e0 u>= 8)
                eax_88, ecx_37 = j__free(var_f4)
                eax_88.b = var_119_3
            
            if (eax_88.b != 0)
                int16_t* eax_89 = sub_54ee10(edi_12, &var_f4)
                var_c_1.b = 6
                int16_t* eax_90 = sub_548cb0(eax_89, u"bgm; ", &var_dc, eax_89)
                var_c_1.b = 7
                
                if (esi_21 != eax_90)
                    sub_52e3c0(esi_21, eax_90, 0, 0xffffffff)
                
                if (var_c8 u>= 8)
                    j__free(var_dc.d)
                
                var_c8 = 7
                int32_t var_cc_3 = 0
                var_dc = 0
                goto label_59e9aa
            
            int32_t eax_91 = *(edi_12 + 0xd0)
            
            if (eax_91 s>= 0)
                int32_t ecx_41 = *(edi_12 + 0xdc)
                
                if (ecx_41 s>= 0)
                    int32_t var_130_25 = ecx_41
                    int32_t var_134_12 = eax_91
                    int32_t var_138_9 = 7
                    int32_t var_13c_2 = 0
                    var_14c = 0
                    sub_52e720(&var_14c, u"KOE(%09d,%03d)", 0xe)
                    void** eax_92 = sub_6ae4c0(&var_f4, var_14c)
                    var_c_1.b = 8
                    
                    if (esi_21 == eax_92)
                        goto label_59e768
                    
                    sub_52e3c0(esi_21, eax_92, 0, 0xffffffff)
                    var_c_1.b = 0
                    goto label_59e9b1
                
                int32_t var_130_27 = eax_91
                var_14c.d = 9
                int32_t var_134_14 = 7
                int32_t var_138_11 = 0
                int16_t var_148 = 0
                sub_52e720(&var_148, u"KOE(%09d)", var_14c)
                var_14c.d = &var_f4
                void** eax_93 = sub_6ae4c0(var_14c, var_148)
                var_c_1.b = 9
                
                if (esi_21 != eax_93)
                    sub_52e3c0(esi_21, eax_93, 0, 0xffffffff)
                    var_c_1.b = 0
                    goto label_59e9b1
                
            label_59e768:
                var_c_1.b = 0
            label_59e9b1:
                
                if (var_e0 u>= 8)
                    j__free(var_f4)
            else if (*(edi_12 + 0xd4) s>= 0)
                int32_t var_130_29 = ecx_37
                void** eax_94 = sub_6ad9b0(&var_f4)
                var_c_1.b = 0xa
                void** eax_95 = sub_548cb0(eax_94, u"se; ", &var_64, eax_94)
                var_c_1.b = 0xb
                void** eax_96 = sub_532b80(eax_95, eax_95, &var_dc, &data_af10a0)
                var_c_1.b = 0xc
                
                if (esi_21 != eax_96)
                    sub_52e3c0(esi_21, eax_96, 0, 0xffffffff)
                
                if (var_c8 u>= 8)
                    j__free(var_dc.d)
                
                var_c8 = 7
                int32_t var_cc_4 = 0
                var_dc = 0
                
                if (var_50 u>= 8)
                    j__free(var_64.d)
                
                var_50 = 7
                int32_t var_54_1 = 0
                var_64 = 0
            label_59e9aa:
                var_c_1.b = 0
                goto label_59e9b1
            
            *(esi_21 + 0x18) = *(edi_12 + 0xe0)
            *(esi_21 + 0x2c) = 0
            *(esi_21 + 0x1c) = 0
            *(esi_21 + 0x20) = sub_59d600(edi_12 + 0xf4)
            *(esi_21 + 0x24) = 0
            *(esi_21 + 0x28) = 0
            void* eax_98
            eax_98.b = *(edi_12 + 0xed)
            *(esi_21 + 0x2d) = eax_98.b
            eax_98.b = *(edi_12 + 0xee)
            *(esi_21 + 0x2e) = eax_98.b
            int32_t eax_99 = *(esi_21 + 0x20)
            
            if (eax_99 == 1 || eax_99 == 3)
                eax_99.b = *(edi_12 + 0xec)
                
                if (eax_99.b != 0)
                    *(esi_21 + 0x28) = 1
            
            ebx_7 += 1
            ecx_11 = data_bac468
            edx_72 = var_114_1 + 0x250
            esi_21 += 0x38
            var_114_1 = edx_72
        while (ebx_7 s< eax_83)
        
        ebx_6 = var_110
    
    int32_t i_3 = 0
    int32_t eax_100
    int32_t edx_78
    edx_78:eax_100 = muls.dp.d(0x2f149903, *(ecx_11 + 0x3b0) - *(ecx_11 + 0x3ac))
    int32_t edx_79 = edx_78 s>> 6
    int32_t var_108
    int16_t var_94
    int16_t var_7c
    
    if ((edx_79 u>> 0x1f) + edx_79 s> 0)
        int32_t var_114_2 = 0
        void* esi_24 = &var_104[2 + i_4 * 0xe]
        int32_t edx_118
        
        do
            int32_t edx_86
            
            if (i_3 s>= 0)
                int32_t eax_104
                int32_t edx_85
                edx_85:eax_104 = muls.dp.d(0x2f149903, *(ecx_11 + 0x3b0) - *(ecx_11 + 0x3ac))
                edx_86 = edx_85 s>> 6
            
            void* eax_109
            
            if (i_3 s< 0 || (edx_86 u>> 0x1f) + edx_86 s<= i_3)
                eax_109 = nullptr
            else
                eax_109 = *(ecx_11 + 0x3ac) + var_114_2
            
            var_108 = *(eax_109 + 0x128)
            int32_t edx_90
            
            if (i_3 s>= 0)
                int32_t eax_111
                int32_t edx_89
                edx_89:eax_111 = muls.dp.d(0x2f149903, *(ecx_11 + 0x3b0) - *(ecx_11 + 0x3ac))
                edx_90 = edx_89 s>> 6
            
            void* eax_116
            
            if (i_3 s< 0 || (edx_90 u>> 0x1f) + edx_90 s<= i_3)
                eax_116 = nullptr
            else
                eax_116 = *(ecx_11 + 0x3ac) + var_114_2
            
            int32_t eax_117 = *(eax_116 + 0x130)
            int32_t edx_94
            
            if (i_3 s>= 0)
                int32_t eax_118
                int32_t edx_93
                edx_93:eax_118 = muls.dp.d(0x2f149903, *(ecx_11 + 0x3b0) - *(ecx_11 + 0x3ac))
                edx_94 = edx_93 s>> 6
            
            void* eax_123
            
            if (i_3 s< 0 || (edx_94 u>> 0x1f) + edx_94 s<= i_3)
                eax_123 = nullptr
            else
                eax_123 = *(ecx_11 + 0x3ac) + var_114_2
            
            int32_t edx_95 = *(eax_123 + 0x14c)
            int32_t eax_124 = var_108
            *(esi_24 - 8) = 4
            *(esi_24 - 4) = i_3
            
            if (eax_124 u<= 3)
                switch (eax_124)
                    case 0
                        int32_t edx_99
                        
                        if (i_3 s>= 0)
                            int32_t eax_125
                            int32_t edx_98
                            edx_98:eax_125 =
                                muls.dp.d(0x2f149903, *(ecx_11 + 0x3b0) - *(ecx_11 + 0x3ac))
                            edx_99 = edx_98 s>> 6
                        
                        void* edx_101
                        
                        if (i_3 s< 0 || (edx_99 u>> 0x1f) + edx_99 s<= i_3)
                            edx_101 = nullptr
                        else
                            edx_101 = *(ecx_11 + 0x3ac) + var_114_2
                        
                        void** eax_129 = sub_676860(&var_7c, *(edx_101 + 0x12c))
                        var_c_1.b = 0xd
                        
                        if (esi_24 != eax_129)
                            sub_52e3c0(esi_24, eax_129, 0, 0xffffffff)
                        
                        var_c_1.b = 0
                        int32_t var_68
                        
                        if (var_68 u>= 8)
                            j__free(var_7c.d)
                        
                        var_68 = 7
                        int32_t var_6c_1 = 0
                        var_7c = 0
                    case 1
                        void** eax_130
                        
                        if (eax_117 != 0xffffffff)
                            int32_t var_130_39 = eax_117 s% 0x2710
                            int32_t var_134_18 = eax_117 s/ 0x2710
                            sub_52e820(&var_14c, u"%04d %05d")
                            eax_130 = sub_6ae4c0(&var_94, var_14c)
                            int32_t var_c_3 = 0xf
                            ebx_6 |= 8
                        else
                            sub_52e820(&var_64, &data_ad7c90)
                            eax_130 = &var_64
                            var_c_1.b = 0xe
                            ebx_6 |= 4
                        
                        int32_t var_110_1 = ebx_6
                        
                        if (esi_24 != eax_130)
                            sub_52e3c0(esi_24, eax_130, 0, 0xffffffff)
                        
                        if ((ebx_6.b & 8) != 0)
                            ebx_6 &= 0xfffffff7
                            int32_t var_110_2 = ebx_6
                            int32_t var_80
                            
                            if (var_80 u>= 8)
                                j__free(var_94.d)
                            
                            var_80 = 7
                            int32_t var_84_1 = 0
                            var_94 = 0
                        
                        var_c_1 = 0
                        
                        if ((ebx_6.b & 4) != 0)
                            ebx_6 &= 0xfffffffb
                            int32_t var_110_3 = ebx_6
                            
                            if (var_50 u>= 8)
                                j__free(var_64.d)
                            
                            var_50 = 7
                            int32_t var_54_2 = 0
                            var_64 = 0
                    case 2
                        int32_t edx_110
                        
                        if (i_3 s>= 0)
                            int32_t eax_133
                            int32_t edx_109
                            edx_109:eax_133 =
                                muls.dp.d(0x2f149903, *(ecx_11 + 0x3b0) - *(ecx_11 + 0x3ac))
                            edx_110 = edx_109 s>> 6
                        
                        void* ecx_61
                        
                        if (i_3 s< 0 || (edx_110 u>> 0x1f) + edx_110 s<= i_3)
                            ecx_61 = nullptr
                        else
                            ecx_61 = *(ecx_11 + 0x3ac) + var_114_2
                        
                        void** eax_137 = sub_59d6b0(ecx_61, &var_f4)
                        var_c_1.b = 0x10
                        
                        if (esi_24 != eax_137)
                            sub_52e3c0(esi_24, eax_137, 0, 0xffffffff)
                        
                        var_c_1.b = 0
                        
                        if (var_e0 u>= 8)
                            j__free(var_f4)
                        
                        var_e0 = 7
                        int32_t var_e4_1 = 0
                        var_f4.w = 0
                    case 3
                        void* ecx_63
                        
                        if (edx_95 s>= 0)
                            ecx_63 = data_bac510
                        
                        void** eax_141
                        
                        if (edx_95 s< 0 || edx_95 s>= *(ecx_63 + 0xa4df68))
                            sub_52e820(&var_dc, &data_ad7c90)
                            eax_141 = &var_dc
                            int32_t var_c_4 = 0x12
                            ebx_6 |= 0x20
                        else
                            var_b0 = 7
                            int32_t var_b4_3 = 0
                            void* var_130_46 = 0xffffffff
                            int32_t var_134_21 = 0
                            var_c4 = 0
                            sub_52e3c0(&var_c4, ecx_63 + ((edx_95 * 3 + 0x1498ed) << 3), 
                                var_134_21, var_130_46)
                            eax_141 = &var_c4
                            var_c_1.b = 0x11
                            ebx_6 |= 0x10
                        
                        int32_t var_110_4 = ebx_6
                        
                        if (esi_24 != eax_141)
                            sub_52e3c0(esi_24, eax_141, 0, 0xffffffff)
                        
                        if ((ebx_6.b & 0x20) != 0)
                            ebx_6 &= 0xffffffdf
                            int32_t var_110_5 = ebx_6
                            
                            if (var_c8 u>= 8)
                                j__free(var_dc.d)
                            
                            var_c8 = 7
                            int32_t var_cc_5 = 0
                            var_dc = 0
                        
                        var_c_1 = 0
                        
                        if ((ebx_6.b & 0x10) != 0)
                            ebx_6 &= 0xffffffef
                            int32_t var_110_6 = ebx_6
                            
                            if (var_b0 u>= 8)
                                j__free(var_c4.d)
                            
                            var_b0 = 7
                            int32_t var_b4_4 = 0
                            var_c4 = 0
                
                ecx_11 = data_bac468
            
            *(esi_24 + 0x18) = *(ecx_11 + 0x3a8)
            *(esi_24 + 0x2c) = 0
            *(esi_24 + 0x1c) = 0
            int32_t edx_114
            
            if (i_3 s>= 0)
                int32_t eax_143
                int32_t edx_113
                edx_113:eax_143 = muls.dp.d(0x2f149903, *(ecx_11 + 0x3b0) - *(ecx_11 + 0x3ac))
                edx_114 = edx_113 s>> 6
            
            int32_t* ecx_68
            
            if (i_3 s< 0 || (edx_114 u>> 0x1f) + edx_114 s<= i_3)
                ecx_68 = nullptr
            else
                ecx_68 = *(ecx_11 + 0x3ac) + var_114_2
            
            int32_t eax_147 = sub_55e1a0(ecx_68)
            ecx_11 = data_bac468
            i_3 += 1
            *(esi_24 + 0x20) = eax_147
            var_114_2 += 0x15c
            i_4 += 1
            *(esi_24 + 0x24) = 0
            *(esi_24 + 0x28) = 0
            *(esi_24 + 0x2d) = 0
            esi_24 += 0x38
            int32_t eax_148
            int32_t edx_117
            edx_117:eax_148 = muls.dp.d(0x2f149903, *(ecx_11 + 0x3b0) - *(ecx_11 + 0x3ac))
            edx_118 = edx_117 s>> 6
        while (i_3 s< (edx_118 u>> 0x1f) + edx_118)
    
    int32_t* edi_13 = var_104
    void* esi_25 = &edi_13[i_4 * 0xe]
    *esi_25 = 5
    int16_t* var_130_51 = &var_f4
    *(esi_25 + 4) = 0
    int16_t* eax_154 = sub_57a7c0(ecx_11 + 0x3bc, var_130_51)
    var_c_1.b = 0x13
    
    if (esi_25 + 8 != eax_154)
        sub_52e3c0(esi_25 + 8, eax_154, 0, 0xffffffff)
    
    var_c_1.b = 0
    
    if (var_e0 u>= 8)
        j__free(var_f4)
    
    void* ecx_71 = data_bac468
    *(esi_25 + 0x20) = 0xff
    *(esi_25 + 0x34) = 0
    int32_t var_e0_1 = 7
    int32_t var_e4_2 = 0
    var_f4.w = 0
    *(esi_25 + 0x24) = 0
    
    if (sub_5cb350(ecx_71 + 0x3bc) == 2)
        *(esi_25 + 0x28) = 1
    else
        *(esi_25 + 0x28) = 0
    
    int32_t* eax_158
    
    if (*(data_bac468 + 0x45c) == 1)
        eax_158 = data_4ebe290
    
    int32_t eax_159
    
    if (*(data_bac468 + 0x45c) != 1 || eax_158 == 0)
        eax_159 = 0xffffffff
    else
        (*(*eax_158 + 0x2c))(eax_158, &var_108)
        eax_159 = var_108
    
    *(esi_25 + 0x2c) = eax_159
    *(esi_25 + 0x30) = 0
    *(esi_25 + 0x35) = 0
    
    if (*(arg1 + 0xb8) != 0)
        goto label_59f09b
    
    int32_t edi_16 = (var_100_1 - edi_13) s/ 0x38
    int32_t var_118_4 = edi_16
    
    if (edi_16 != (*(arg1 + 0x418) - *(arg1 + 0x414)) s/ 0x38)
        edi_13 = var_104
    label_59f09b:
        int32_t eax_167 = *(data_bac4e0 + 0x30)
        edi_16 = (var_100_1 - edi_13) s/ 0x38
        var_118_4 = edi_16
        
        if (eax_167 != 0)
            eax_167(*(arg1 + 0xe4), edi_16, eax_4)
    
    int32_t esi_28 = 0
    
    if (edi_16 s> 0)
        int32_t* edi_19 = nullptr
        int32_t* var_10c_6 = nullptr
        
        do
            int32_t edx_131
            
            if (*(arg1 + 0xb8) == 0)
                int32_t ecx_79 = *(arg1 + 0x418) - *(arg1 + 0x414)
                int32_t eax_168
                int32_t edx_129
                edx_129:eax_168 = muls.dp.d(0x92492493, ecx_79)
                edx_131 = (edx_129 + ecx_79) s>> 5
            
            char var_119_4
            
            if (*(arg1 + 0xb8) != 0 || esi_28 s>= (edx_131 u>> 0x1f) + edx_131)
                var_119_4 = 1
            label_59f130:
                int32_t var_38_1 = 7
                int32_t var_3c_1 = 0
                int16_t var_4c = 0
                var_c_1.b = 0x14
                int32_t eax_175 = *(var_104 + edi_19)
                
                if (eax_175 u<= 5)
                    int16_t* ecx_83
                    
                    switch (eax_175)
                        case 0
                            void var_34
                            sub_52e820(&var_34, &data_ad74e4)
                            var_c_1.b = 0x15
                            sub_52e3c0(&var_4c, &var_34, 0, 0xffffffff)
                            ecx_83 = &var_34
                        case 1
                            <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
                                &var_f4, &data_af10b0)
                            var_c_1.b = 0x16
                            sub_536260(&var_4c, &var_f4)
                            ecx_83 = &var_f4
                        case 2
                            <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
                                &var_94, "Nl(uP")
                            var_c_1.b = 0x17
                            sub_536260(&var_4c, &var_94)
                            ecx_83 = &var_94
                        case 3
                            <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
                                &var_7c, &data_af10c4)
                            var_c_1.b = 0x18
                            sub_536260(&var_4c, &var_7c)
                            ecx_83 = &var_7c
                        case 4
                            <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
                                &var_ac, &data_af10d0)
                            var_c_1.b = 0x19
                            sub_536260(&var_4c, &var_ac)
                            ecx_83 = &var_ac
                        case 5
                            <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
                                &var_dc, &data_af10d8)
                            var_c_1.b = 0x1a
                            sub_536260(&var_4c, &var_dc)
                            ecx_83 = &var_dc
                    
                    var_c_1.b = 0x14
                    sub_52e8a0(ecx_83)
                
                sub_56af20(arg1 + 0xe0, esi_28, 0, &var_4c)
                var_c_1.b = 0
                sub_52e8a0(&var_4c)
                
                if (var_119_4 != 0)
                    goto label_59f312
                
                goto label_59f2f9
            
            var_119_4 = 0
            
            if (*(var_104 + edi_19) != *(edi_19 + *(arg1 + 0x414)))
                goto label_59f130
            
        label_59f2f9:
            void* edi_20 = sub_59fb70(&var_104, esi_28)
            void* eax_177 = sub_59fb70(arg1 + 0x414, esi_28)
            
            if (*(edi_20 + 4) != *(eax_177 + 4))
            label_59f312:
                edi_20 = sub_59fb70(&var_104, esi_28)
                void** var_130_72 = &var_104
                *(edi_20 + 4)
                var_c_1.b = 0x1b
                sub_56af20(arg1 + 0xe0, esi_28, 1, sub_6ad9b0(&var_f4))
                var_c_1.b = 0
                sub_52e8a0(&var_f4)
                
                if (var_119_4 != 0)
                    goto label_59f37b
                
                goto label_59f365
            
        label_59f365:
            int32_t ecx_106
            
            if (sub_535c40(edi_20 + 8, sub_59fb70(arg1 + 0x414, esi_28) + 8) != 0)
            label_59f37b:
                ecx_106 = sub_56af20(arg1 + 0xe0, esi_28, 2, edi_20 + 8)
                
                if (var_119_4 != 0)
                    goto label_59f39b
                
                goto label_59f38e
            
        label_59f38e:
            void* eax_183 = sub_59fb70(arg1 + 0x414, esi_28)
            ecx_106 = *(edi_20 + 0x20)
            
            if (ecx_106 != *(eax_183 + 0x20))
            label_59f39b:
                *(edi_20 + 0x20)
                int32_t var_130_77 = ecx_106
                var_c_1.b = 0x1c
                sub_56af20(arg1 + 0xe0, esi_28, 3, sub_6ad9b0(&var_f4))
                var_c_1.b = 0
                sub_52e8a0(&var_f4)
                
                if (var_119_4 != 0)
                    goto label_59f3f7
                
                goto label_59f3e1
            
        label_59f3e1:
            void* eax_185 = sub_59fb70(arg1 + 0x414, esi_28)
            void* ecx_111
            ecx_111.b = *(edi_20 + 0x34)
            int32_t ecx_115
            
            if (ecx_111.b != *(eax_185 + 0x34))
            label_59f3f7:
                void* const eax_186 = &data_aeef48
                
                if (*(edi_20 + 0x34) == 0)
                    eax_186 = &data_ad7c90
                
                <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
                    &var_f4, eax_186)
                var_c_1.b = 0x1d
                sub_56af20(arg1 + 0xe0, esi_28, 4, &var_f4)
                var_c_1.b = 0
                ecx_115 = sub_52e8a0(&var_f4)
                
                if (var_119_4 != 0)
                    goto label_59f450
                
                goto label_59f443
            
        label_59f443:
            void* eax_187 = sub_59fb70(arg1 + 0x414, esi_28)
            ecx_115 = *(edi_20 + 0x24)
            
            if (ecx_115 != *(eax_187 + 0x24))
            label_59f450:
                *(edi_20 + 0x24)
                int32_t var_130_83 = ecx_115
                var_c_1.b = 0x1e
                sub_56af20(arg1 + 0xe0, esi_28, 5, sub_6ad9b0(&var_f4))
                var_c_1.b = 0
                sub_52e8a0(&var_f4)
                
                if (var_119_4 != 0)
                    goto label_59f4ab
                
                goto label_59f496
            
        label_59f496:
            void* eax_189 = sub_59fb70(arg1 + 0x414, esi_28)
            
            if (*(edi_20 + 0x28) != *(eax_189 + 0x28))
            label_59f4ab:
                sub_53a2c0(&var_dc)
                var_c_1.b = 0x1f
                int32_t eax_190 = *(edi_20 + 0x28)
                
                if (eax_190 u<= 3)
                    int16_t* ecx_125
                    
                    switch (eax_190)
                        case 0
                            <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
                                &var_f4, &data_ad7c90)
                            var_c_1.b = 0x20
                            sub_536260(&var_dc, &var_f4)
                            ecx_125 = &var_f4
                        case 1
                            <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
                                &var_94, &data_af10e0)
                            var_c_1.b = 0x21
                            sub_536260(&var_dc, &var_94)
                            ecx_125 = &var_94
                        case 2
                            <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
                                &var_7c, &data_af10e8)
                            var_c_1.b = 0x22
                            sub_536260(&var_dc, &var_7c)
                            ecx_125 = &var_7c
                        case 3
                            <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
                                &var_ac, &data_af10fc)
                            var_c_1.b = 0x23
                            sub_536260(&var_dc, &var_ac)
                            ecx_125 = &var_ac
                    
                    var_c_1.b = 0x1f
                    sub_52e8a0(ecx_125)
                
                sub_56af20(arg1 + 0xe0, esi_28, 6, &var_dc)
                var_c_1.b = 0
                sub_52e8a0(&var_dc)
                
                if (var_119_4 != 0)
                    goto label_59f5e3
                
                goto label_59f5ce
            
        label_59f5ce:
            void* eax_191 = sub_59fb70(arg1 + 0x414, esi_28)
            
            if (*(edi_20 + 0x30) != *(eax_191 + 0x30))
            label_59f5e3:
                sub_53a2c0(&var_dc)
                var_c_1.b = 0x24
                int32_t eax_192 = *(edi_20 + 0x30)
                
                if (eax_192 u<= 3)
                    int16_t* ecx_139
                    
                    switch (eax_192)
                        case 0
                            <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
                                &var_f4, &data_ad7c90)
                            var_c_1.b = 0x25
                            sub_536260(&var_dc, &var_f4)
                            ecx_139 = &var_f4
                        case 1
                            <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
                                &var_94, &data_af1108)
                            var_c_1.b = 0x26
                            sub_536260(&var_dc, &var_94)
                            ecx_139 = &var_94
                        case 2
                            <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
                                &var_7c, &data_af1110)
                            var_c_1.b = 0x27
                            sub_536260(&var_dc, &var_7c)
                            ecx_139 = &var_7c
                        case 3
                            <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
                                &var_ac, &data_af1120)
                            var_c_1.b = 0x28
                            sub_536260(&var_dc, &var_ac)
                            ecx_139 = &var_ac
                    
                    var_c_1.b = 0x24
                    sub_52e8a0(ecx_139)
                
                sub_56af20(arg1 + 0xe0, esi_28, 8, &var_dc)
                var_c_1.b = 0
                sub_52e8a0(&var_dc)
                
                if (var_119_4 != 0)
                    goto label_59f729
                
                goto label_59f706
            
        label_59f706:
            void* eax_193 = sub_59fb70(arg1 + 0x414, esi_28)
            void* ecx_148
            ecx_148.b = *(edi_20 + 0x35)
            
            if (ecx_148.b != *(eax_193 + 0x35))
            label_59f729:
                var_c_1.b = 0x29
                sub_56af20(arg1 + 0xe0, esi_28, 9, sub_6ad930(&var_f4, *(edi_20 + 0x35)))
                var_c_1.b = 0
                sub_52e8a0(&var_f4)
                
                if (var_119_4 != 0)
                    goto label_59f778
                
                goto label_59f755
            
        label_59f755:
            void* eax_195 = sub_59fb70(arg1 + 0x414, esi_28)
            void* ecx_152
            ecx_152.b = *(edi_20 + 0x36)
            
            if (ecx_152.b != *(eax_195 + 0x36))
            label_59f778:
                var_c_1.b = 0x2a
                sub_56af20(arg1 + 0xe0, esi_28, 0xa, sub_6ad930(&var_f4, *(edi_20 + 0x36)))
                var_c_1.b = 0
                sub_52e8a0(&var_f4)
            
            esi_28 += 1
            edi_19 = &var_10c_6[0xe]
            var_10c_6 = edi_19
        while (esi_28 s< var_118_4)
    
    <lambda_61f7764e5b8087545c74b0c2f4f68b12>::<lambda_61f7764e5b8087545c74b0c2f4f68b12>(
        arg1 + 0x414, &var_104)
    *(arg1 + 0xb8) = 0
    result = sub_59f840(&var_104)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_11c)
return result

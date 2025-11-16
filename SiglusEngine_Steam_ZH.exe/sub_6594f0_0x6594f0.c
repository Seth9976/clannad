// 函数: sub_6594f0
// 地址: 0x6594f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c4ae0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = data_bac504
void* result

if (*(edi + 0x98) != *(edi + 0x9c))
    *(edi + 0xa4) = 0
    void* var_44
    sub_5c3740(&var_44)
    int32_t var_8_1 = 0
    *(edi + 0xa4) += 4
    int32_t eax_3 = *(edi + 0x98)
    
    if (eax_3 == *(edi + 0x9c))
        eax_3 = 0
    
    int32_t* eax_4 = *(eax_3 + *(edi + 0xa4) - 4)
    *(edi + 0xa4) += 4
    int32_t ecx_3 = *(edi + 0xa4)
    int32_t* var_50 = eax_4
    int32_t eax_5 = *(edi + 0x98)
    
    if (eax_5 == *(edi + 0x9c))
        eax_5 = 0
    
    int32_t* i_1 = *(eax_5 + ecx_3 - 4)
    int32_t eax_7 = sub_6980b0(edi + 0x4af9c, &var_44)
    int32_t var_30
    int16_t var_2c
    int32_t var_18
    
    if (eax_7 != 0xffffffff)
        *(edi + 0x4b004) = var_50
        *(edi + 0x4b000) = eax_7
        int32_t var_8_2 = 0xffffffff
        *(edi + 0x4affc) = *(*(edi + 0x4aff0) + eax_7 * 0x54 + 8) + i_1
        
        if (var_30 u>= 8)
            j__free(var_44)
        
        sub_676460(edi + 0x4ab00, edi + 0x98)
        sub_65b030(edi + 0x98, edi + 0x4ac58)
        int32_t eax_14 = *(edi + 0x98)
        
        if (eax_14 == *(edi + 0x9c))
            eax_14 = 0
        
        __builtin_memcpy(edi + 0x4ac64, *(edi + 0xa4) + eax_14, 0x80)
        *(edi + 0xa4) -= 0xffffff80
        int32_t eax_15 = *(edi + 0x98)
        
        if (eax_15 == *(edi + 0x9c))
            eax_15 = 0
        
        __builtin_memcpy(edi + 0x4ace4, *(edi + 0xa4) + eax_15, 0x80)
        *(edi + 0xa4) -= 0xffffff80
        int32_t eax_16 = *(edi + 0x98)
        
        if (eax_16 == *(edi + 0x9c))
            eax_16 = 0
        
        __builtin_memcpy(edi + 0x4ad64, *(edi + 0xa4) + eax_16, 0x80)
        *(edi + 0xa4) -= 0xffffff80
        int16_t* eax_17 = sub_5b0600(edi + 0x98, &var_2c)
        int32_t var_8_3 = 2
        
        if (edi + 0x4ade4 != eax_17)
            sub_52e3c0(edi + 0x4ade4, eax_17, 0, 0xffffffff)
        
        int32_t var_8_4 = 0xffffffff
        
        if (var_18 u>= 8)
            j__free(var_2c.d)
        
        void** eax_18 = sub_5b0600(edi + 0x98, &var_2c)
        int32_t var_8_5 = 3
        
        if (edi + 0x4adfc != eax_18)
            sub_52e3c0(edi + 0x4adfc, eax_18, 0, 0xffffffff)
        
        int32_t var_8_6 = 0xffffffff
        
        if (var_18 u>= 8)
            j__free(var_2c.d)
        
        int32_t* edx_3 = *(edi + 0x4ae14)
        
        if (edx_3 == *(edi + 0x4ae18))
            edx_3 = nullptr
        
        void* esi_10 = *(edi + 0x4ae18) - *(edi + 0x4ae14)
        
        if (esi_10 s> 0)
            int32_t ecx_15 = *(edi + 0x98)
            
            if (ecx_15 == *(edi + 0x9c))
                ecx_15 = 0
            
            sub_748840(edx_3, *(edi + 0xa4) + ecx_15, esi_10, eax_2)
            *(edi + 0xa4) += esi_10
        
        void** eax_21 = sub_5b0600(edi + 0x98, &var_2c)
        int32_t var_8_7 = 4
        
        if (edi + 0x4ae20 != eax_21)
            sub_52e3c0(edi + 0x4ae20, eax_21, 0, 0xffffffff)
        
        int32_t var_8_8 = 0xffffffff
        
        if (var_18 u>= 8)
            j__free(var_2c.d)
        
        int32_t eax_22 = *(edi + 0x98)
        
        if (eax_22 == *(edi + 0x9c))
            eax_22 = 0
        
        __builtin_memcpy(edi + 0x4ae38, *(edi + 0xa4) + eax_22, 0x164)
        *(edi + 0xa4) += 0x164
        int32_t* ecx_18 = *(edi + 0x98)
        void* edi_6 = edi
        
        if (ecx_18 == *(edi + 0x9c))
            ecx_18 = nullptr
        
        *(edi_6 + 0x4b00c) = *(ecx_18 + *(edi + 0xa4))
        *(edi + 0xa4) += 4
        sub_677b70(*(edi_6 + 0x4b00c))
        int32_t esi_15 = *(edi_6 + 0x4b00c) << 2
        
        if (esi_15 s> 0)
            int32_t ecx_20 = *(edi + 0x98)
            
            if (ecx_20 == *(edi + 0x9c))
                ecx_20 = 0
            
            sub_748840(*(edi_6 + 0x4b008), *(edi + 0xa4) + ecx_20, esi_15, eax_2)
            *(edi + 0xa4) += esi_15
        
        *(edi + 0xa4) += 4
        int32_t eax_27 = *(edi + 0x98)
        
        if (eax_27 == *(edi + 0x9c))
            eax_27 = 0
        
        sub_55c750(edi_6 + 0x4b014, *(eax_27 + *(edi + 0xa4) - 4))
        int32_t eax_28
        int32_t edx_4
        edx_4:eax_28 = muls.dp.d(0x2aaaaaab, *(edi_6 + 0x4b018) - *(edi_6 + 0x4b014))
        var_50 = nullptr
        int32_t edx_5 = edx_4 s>> 2
        
        if ((edx_5 u>> 0x1f) + edx_5 s> 0)
            int32_t* i_3 = nullptr
            i_1 = nullptr
            void* ecx_28
            int32_t* esi_19
            
            do
                void* esi_18 = *(edi_6 + 0x4b014) + i_3
                int16_t* eax_32 = sub_5b0600(edi + 0x98, &var_2c)
                int32_t var_8_9 = 5
                
                if (esi_18 != eax_32)
                    sub_52e3c0(esi_18, eax_32, 0, 0xffffffff)
                
                int32_t var_8_10 = 0xffffffff
                
                if (var_18 u>= 8)
                    j__free(var_2c.d)
                
                ecx_28 = *(edi_6 + 0x4b018) - *(edi_6 + 0x4b014)
                esi_19 = var_50
                i_1 = &i_1[6]
                var_50 = esi_19 + 1
                i_3 = i_1
            while (esi_19 + 1 s< ecx_28 s/ 0x18)
            edi_6 = edi
        
        *(edi + 0xa4) += 4
        int32_t eax_37 = *(edi + 0x98)
        
        if (eax_37 == *(edi + 0x9c))
            eax_37 = 0
        
        sub_55c6f0(edi_6 + 0x4b020, *(eax_37 + *(edi + 0xa4) - 4))
        int32_t* edx_8 = *(edi_6 + 0x4b020)
        
        if (edx_8 == *(edi_6 + 0x4b024))
            edx_8 = nullptr
        
        void* eax_40 = (*(edi_6 + 0x4b024) - *(edi_6 + 0x4b020)) & 0xfffffffc
        void* var_4c = eax_40
        
        if (eax_40 s> 0)
            int32_t ecx_31 = *(edi + 0x98)
            
            if (ecx_31 == *(edi + 0x9c))
                ecx_31 = 0
            
            sub_748840(edx_8, *(edi + 0xa4) + ecx_31, eax_40, eax_2)
            *(edi + 0xa4) += var_4c
        
        int32_t* ecx_32 = *(edi + 0x98)
        
        if (ecx_32 == *(edi + 0x9c))
            ecx_32 = nullptr
        
        *(edi_6 + 0x4b040) = *(ecx_32 + *(edi + 0xa4))
        *(edi + 0xa4) += 4
        int32_t* ecx_33 = *(edi + 0x98)
        
        if (ecx_33 == *(edi + 0x9c))
            ecx_33 = nullptr
        
        *(edi_6 + 0x4b04c) = *(ecx_33 + *(edi + 0xa4))
        *(edi + 0xa4) += 4
        int32_t* ecx_34 = *(edi + 0x98)
        
        if (ecx_34 == *(edi + 0x9c))
            ecx_34 = nullptr
        
        *(edi_6 + 0x4b058) = *(ecx_34 + *(edi + 0xa4))
        *(edi + 0xa4) += 4
        int32_t eax_50 = *(edi + 0x98)
        
        if (eax_50 == *(edi + 0x9c))
            eax_50 = 0
        
        int128_t* ecx_36 = *(edi + 0xa4) + eax_50
        *(edi_6 + 0x4aab4) = *ecx_36
        *(edi_6 + 0x4aac4) = ecx_36[1]
        *(edi_6 + 0x4aad4) = ecx_36[2]
        *(edi_6 + 0x4aae4) = ecx_36[3]
        *(edi_6 + 0x4aaf4) = ecx_36[4].q
        *(edi_6 + 0x4aafc) = *(ecx_36 + 0x48)
        *(edi + 0xa4) += 0x4c
        sub_686710(edi_6 + 0x4b2f4, edi + 0x98)
        sub_5bd7a0(edi_6 + 0x556b8, edi + 0x98)
        sub_5bea80(edi_6 + 0x5623c, edi + 0x98)
        *(edi + 0xa4) += 4
        int32_t eax_52 = *(edi + 0x98)
        
        if (eax_52 == *(edi + 0x9c))
            eax_52 = 0
        
        int32_t i_4 = *(*(edi + 0xa4) + eax_52 - 4)
        
        if (i_4 s> 0)
            int32_t i
            
            do
                sub_5c3740(&var_2c)
                int32_t var_8_11 = 6
                int32_t eax_53 = sub_6980b0(data_bac45c, &var_2c)
                
                if (eax_53 != 0xffffffff)
                    sub_5bea80(eax_53 * 0xb8 + *(edi_6 + 0x56398), edi + 0x98)
                else
                    int16_t* eax_54 = sub_532b80(eax_53, &var_2c, &var_44, &data_af80c4)
                    var_8_11.b = 7
                    sub_684160(data_bac424, 9, eax_54)
                    
                    if (var_30 u>= 8)
                        j__free(var_44)
                    
                    *(edi + 0xa4) += 4
                    int32_t eax_55 = *(edi + 0x98)
                    
                    if (eax_55 == *(edi + 0x9c))
                        eax_55 = 0
                    
                    *(edi + 0xa4) = *(*(edi + 0xa4) + eax_55 - 4)
                
                int32_t var_8_12 = 0xffffffff
                
                if (var_18 u>= 8)
                    j__free(var_2c.d)
                
                i = i_4
                i_4 -= 1
            while (i != 1)
        
        sub_65a780(edi_6 + 0x56464, edi + 0x98)
        sub_5bfa10(edi_6 + 0x5651c, edi + 0x98)
        sub_5f15d0(edi_6 + 0x567e8, edi + 0x98)
        sub_65a950(edi_6 + 0x56920, edi + 0x98)
        sub_65ab30(edi_6 + 0x569d8, edi + 0x98)
        void* esi_21 = *(edi_6 + 0x56b34)
        sub_60a000(esi_21 + 0x25c, edi + 0x98)
        sub_5e4720(esi_21 + 0xa0, edi + 0x98)
        sub_60a250(esi_21 + 0x394, edi + 0x98)
        sub_5ae140(esi_21 + 0x4cc, edi + 0x98)
        sub_609db0(esi_21 + 0x6c4, edi + 0x98)
        sub_5fd130(esi_21 + 0x77c, edi + 0x98)
        sub_5fce70(esi_21 + 0x834, edi + 0x98)
        void* esi_23 = *(edi_6 + 0x56b34) + 0x8ec
        sub_60a000(esi_23 + 0x25c, edi + 0x98)
        sub_5e4720(esi_23 + 0xa0, edi + 0x98)
        sub_60a250(esi_23 + 0x394, edi + 0x98)
        sub_5ae140(esi_23 + 0x4cc, edi + 0x98)
        sub_609db0(esi_23 + 0x6c4, edi + 0x98)
        sub_5fd130(esi_23 + 0x77c, edi + 0x98)
        sub_5fce70(esi_23 + 0x834, edi + 0x98)
        sub_5fd130(edi_6 + 0x61ffc, edi + 0x98)
        int32_t ecx_68 = *(edi + 0x98)
        
        if (ecx_68 == *(edi + 0x9c))
            ecx_68 = 0
        
        *(edi_6 + 0x620b4) = *(*(edi + 0xa4) + ecx_68)
        *(edi + 0xa4) += 0x10
        sub_5fce70(edi_6 + 0x620c4, edi + 0x98)
        sub_5fe060(edi_6 + 0x6217c, edi + 0x98)
        sub_65ad00(edi_6 + 0x62634, edi + 0x98)
        sub_65aed0(edi_6 + 0x626ec, edi + 0x98)
        *(edi + 0xa4) += 4
        int32_t eax_58 = *(edi + 0x98)
        
        if (eax_58 == *(edi + 0x9c))
            eax_58 = 0
        
        int32_t eax_59 = *(eax_58 + *(edi + 0xa4) - 4)
        *(edi_6 + 0x6285c) = eax_59
        sub_5b6840(edi_6 + 0x627a4, eax_59)
        (*(*(edi_6 + 0x627a4) + 0xc))(edi + 0x98, 0, *(edi_6 + 0x6285c))
        sub_5ce170(edi_6 + 0x56b64, edi + 0x98)
        *(edi + 0xa4) += 4
        int32_t eax_61 = *(edi + 0x98)
        
        if (eax_61 == *(edi + 0x9c))
            eax_61 = 0
        
        void* eax_62 = *(eax_61 + *(edi + 0xa4) - 4)
        var_4c = eax_62
        sub_5979b0(edi_6 + 0x17c, eax_62)
        int32_t* edx_10 = *(edi_6 + 0x17c)
        void* esi_24 = var_4c
        
        if (edx_10 == *(edi_6 + 0x180))
            edx_10 = nullptr
        
        if (esi_24 s> 0)
            int32_t ecx_79 = *(edi + 0x98)
            
            if (ecx_79 == *(edi + 0x9c))
                ecx_79 = 0
            
            sub_748840(edx_10, *(edi + 0xa4) + ecx_79, esi_24, eax_2)
            *(edi + 0xa4) += esi_24
        
        *(edi + 0xa4) += 4
        int32_t eax_65 = *(edi + 0x98)
        int32_t ecx_80 = *(edi + 0xa4)
        
        if (eax_65 == *(edi + 0x9c))
            eax_65 = 0
        
        var_4c = edi_6 + 0x19c
        sub_630e80(edi_6 + 0x19c, *(eax_65 + ecx_80 - 4))
        i_1 = nullptr
        int32_t eax_66
        int32_t edx_11
        edx_11:eax_66 = muls.dp.d(0x30c30c31, *(edi_6 + 0x1a0) - *(edi_6 + 0x19c))
        int32_t edx_12 = edx_11 s>> 5
        
        if ((edx_12 u>> 0x1f) + edx_12 s> 0)
            void* edi_8 = var_4c
            void* esi_26 = nullptr
            var_50 = nullptr
            int32_t ecx_88
            
            do
                void* esi_27 = esi_26 + *edi_8
                *(edi + 0xa4) += 4
                int32_t eax_70 = *(edi + 0x98)
                
                if (eax_70 == *(edi + 0x9c))
                    eax_70 = 0
                
                void* eax_71 = *(eax_70 + *(edi + 0xa4) - 4)
                var_4c = eax_71
                sub_5979b0(esi_27 + 0x88, eax_71)
                int32_t* edx_13 = *(esi_27 + 0x88)
                void* esi_28 = var_4c
                
                if (edx_13 == *(esi_27 + 0x8c))
                    edx_13 = nullptr
                
                if (esi_28 s> 0)
                    int32_t ecx_86 = *(edi + 0x98)
                    
                    if (ecx_86 == *(edi + 0x9c))
                        ecx_86 = 0
                    
                    sub_748840(edx_13, *(edi + 0xa4) + ecx_86, esi_28, eax_2)
                    *(edi + 0xa4) += esi_28
                
                ecx_88 = *(edi_8 + 4) - *edi_8
                int32_t* esi_29 = var_50
                i_1 += 1
                esi_26 = &esi_29[0x2a]
                var_50 = esi_26
            while (i_1 s< ecx_88 s/ 0xa8)
            edi_6 = edi
        
        *(edi + 0xa4) += 4
        int32_t eax_78 = *(edi + 0x98)
        int32_t ecx_89 = *(edi + 0xa4)
        
        if (eax_78 == *(edi + 0x9c))
            eax_78 = 0
        
        var_50 = edi_6 + 0xbc
        sub_65a590(edi_6 + 0xbc, *(ecx_89 + eax_78 - 4))
        i_1 = nullptr
        
        if ((*(edi_6 + 0xc0) - *(edi_6 + 0xbc)) s/ 0xe s> 0)
            int32_t edi_9 = 0
            
            do
                int32_t eax_83 = *(edi + 0x98)
                edi_9 += 0xe
                int32_t edx_19 = *(edi_6 + 0xbc)
                
                if (eax_83 == *(edi + 0x9c))
                    eax_83 = 0
                
                int64_t* ecx_94 = *(edi + 0xa4) + eax_83
                i_1 += 1
                *(edx_19 + edi_9 - 0xe) = *ecx_94
                *(edx_19 + edi_9 - 6) = ecx_94[1].d
                int32_t eax_84
                eax_84.w = *(ecx_94 + 0xc)
                *(edx_19 + edi_9 - 2) = eax_84.w
                *(edi + 0xa4) += 0xe
            while (i_1 s< (*(edi_6 + 0xc0) - *(edi_6 + 0xbc)) s/ 0xe)
            
            edi_6 = edi
        
        uint32_t esi_31 = *(edi_6 + 0xc0)
        void* ecx_97 = *(edi_6 + 0xbc)
        var_4c.b = 0
        int32_t eax_92 = (esi_31 - ecx_97) s/ 0xe
        sub_65c1f0(eax_92, esi_31, ecx_97, eax_92, var_4c)
        void* ebx_1 = edi
        int32_t* ecx_98 = var_50
        void* eax_93 = ebx_1 + 0xc8
        int16_t* edi_12 = *ecx_98
        int32_t* i_2 = **eax_93
        i_1 = i_2
        
        if (edi_12 == *(ebx_1 + 0xc0))
        label_659fd2:
            sub_5d47e0(eax_93, &var_4c, i_2, *eax_93)
        else
            int32_t* ecx_99 = ecx_98
            
            while (i_2 != *eax_93)
                int16_t eax_94 = i_2[4].w
                int16_t edx_27 = *edi_12
                
                if (edx_27 u< eax_94)
                label_659f67:
                    void* eax_103 = *(ebx_1 + 0xc0)
                    void* ecx_103 = &edi_12[7]
                    var_4c = eax_103
                    
                    if (ecx_103 != eax_103)
                        int16_t* edx_35 = edi_12
                        
                        do
                            edx_35 = &edx_35[7]
                            *(edx_35 - 0xe) = *ecx_103
                            *(edx_35 - 6) = *(ecx_103 + 8)
                            int32_t eax_104
                            eax_104.w = *(ecx_103 + 0xc)
                            ecx_103 += 0xe
                            edx_35[-1] = eax_104.w
                        while (ecx_103 != eax_103)
                        
                        ebx_1 = edi
                    
                    *(ebx_1 + 0xc0) -= 0xe
                    ecx_99 = ebx_1 + 0xbc
                else
                    if (edx_27 u<= eax_94)
                        int16_t eax_95 = edi_12[1]
                        int16_t edx_28 = *(i_2 + 0x12)
                        
                        if (eax_95 u< edx_28)
                            goto label_659f67
                        
                        if (eax_95 u<= edx_28)
                            int16_t eax_96 = edi_12[2]
                            int16_t edx_29 = i_2[5].w
                            
                            if (eax_96 u< edx_29)
                                goto label_659f67
                            
                            if (eax_96 u<= edx_29)
                                int16_t eax_97 = edi_12[3]
                                int16_t edx_30 = *(i_2 + 0x16)
                                
                                if (eax_97 u< edx_30)
                                    goto label_659f67
                                
                                if (eax_97 u<= edx_30)
                                    int16_t eax_98 = edi_12[4]
                                    int16_t edx_31 = i_2[6].w
                                    
                                    if (eax_98 u< edx_31)
                                        goto label_659f67
                                    
                                    if (eax_98 u<= edx_31)
                                        int16_t eax_99 = edi_12[5]
                                        int16_t edx_32 = *(i_2 + 0x1a)
                                        
                                        if (eax_99 u< edx_32
                                                || (eax_99 u<= edx_32 && edi_12[6] u< i_2[7].w))
                                            goto label_659f67
                    
                    if (sub_5cd6f0(&i_2[4], edi_12) == 0)
                        edi_12 = &edi_12[7]
                        sub_563d80(&i_1)
                        i_2 = i_1
                        ecx_99 = ebx_1 + 0xbc
                    else
                        ecx_99 = ebx_1 + 0xbc
                        i_2 = *sub_5d4bb0(ebx_1 + 0xc8, &var_50, i_2)
                        i_1 = i_2
                
                eax_93 = ebx_1 + 0xc8
                
                if (edi_12 == *(ebx_1 + 0xc0))
                    eax_93 = ebx_1 + 0xc8
                    goto label_659fd2
            
            int32_t eax_106 = *ecx_99
            int64_t* edx_36 = *(ebx_1 + 0xc0)
            
            if (edi_12 == eax_106 && edx_36 == ecx_99[1])
                ecx_99[1] = eax_106
            else if (edi_12 != edx_36)
                int32_t esi_33 = ecx_99[1]
                
                while (edx_36 != esi_33)
                    *edi_12 = *edx_36
                    *(edi_12 + 8) = edx_36[1].d
                    int32_t eax_107
                    eax_107.w = *(edx_36 + 0xc)
                    edx_36 += 0xe
                    edi_12[6] = eax_107.w
                    edi_12 = &edi_12[7]
                
                ecx_99[1] = edi_12
        
        sub_65a260(ebx_1)
        bool cond:30_1 = *(ebx_1 + 0x7c) u< 8
        void* eax_105 = ebx_1 + 0x68
        *(eax_105 + 0x10) = 0
        
        if (not(cond:30_1))
            eax_105 = *eax_105
        
        *eax_105 = 0
        
        if (ebx_1 + 0x80 != ebx_1 + 0x4adfc)
            sub_52e3c0(ebx_1 + 0x80, ebx_1 + 0x4adfc, 0, 0xffffffff)
        
        result.b = 1
    else
        sub_676610(0)
        int16_t* eax_8 = sub_532b80(0, &var_44, &var_2c, &data_af80c4)
        var_8_1.b = 1
        void* ebx
        ebx.b = sub_684160(data_bac424, 9, eax_8)
        
        if (var_18 u>= 8)
            j__free(var_2c.d)
        
        int32_t var_18_1 = 7
        int32_t var_1c_1 = 0
        var_2c = 0
        
        if (var_30 u>= 8)
            j__free(var_44)
        
        result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result

// 函数: sub_4acd11
// 地址: 0x4acd11
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_58 = edi
int32_t i_6 = 0
int32_t var_8 = 0
sub_4a3f75(arg1)
sub_4a39e3(arg1)
int32_t var_24 = 0xffffffff
int32_t var_14 = 0xffffffff
int32_t var_1c = 0

if (*(arg1 + 0xc) u> 0)
    while (true)
        int32_t* esi_1 = *(*(arg1 + 0x18) + (var_1c << 2))
        int32_t eax_2 = *esi_1
        int32_t edx_2 = eax_2 & 0xfff00000
        
        if (edx_2 != 0)
            int32_t* i_16 = *(arg1 + 8)
            int32_t* i_13 = i_16
            
            if (edx_2 != 0x11000000)
                i_16 = eax_2 & 0xf0000000
                
                if (i_16 == 0x10000000)
                    int32_t var_c_1 = 0
                    int32_t i = 0
                    
                    if (esi_1[3] u> 0)
                        do
                            void** ecx_3 = i << 2
                            void* edx_4 = *(ecx_3 + esi_1[4])
                            int32_t eax_5 = *(arg1 + 0x14)
                            int32_t* ebx_5 = *(*(eax_5 + (*(ecx_3 + esi_1[2]) << 2)) + 0x30)
                            int32_t ecx_7 = *esi_1 & 0xfff00000
                            
                            if (ecx_7 == 0x10000000 || ecx_7 == 0x10100000)
                                int32_t* ecx_8 = *(eax_5 + (edx_4 << 2))
                                int32_t* edx_5 = *(eax_5 + (ebx_5 << 2))
                                int32_t ecx_9 = *ecx_8
                                void* eax_8 = (*edx_5 | ecx_9) & 0xe000000
                                
                                if ((&data_2000000 & eax_8) != 0)
                                    eax_8 = &data_2000000
                                else if ((&data_4000000 & eax_8) != 0)
                                    eax_8 = &data_4000000
                                else if ((0x8000000 & eax_8) != 0)
                                    eax_8 = 0x8000000
                                
                                if (eax_8 != (ecx_9 & 0xe000000))
                                    *ecx_8 = (ecx_9 & 0xf1ffffff) | eax_8
                                    var_8 = 1
                                
                                int32_t ecx_12 = *edx_5
                                
                                if (eax_8 != (ecx_12 & 0xe000000)
                                        && (*(*(*(arg1 + 0x10) + (edx_5[1] << 2)) + 4) & 2) != 0
                                        && edx_5[0x17] == 1)
                                    *edx_5 = (ecx_12 & 0xf1ffffff) | eax_8
                                    var_8 = 1
                            
                            sub_4a69fb(arg1, esi_1, edx_4, ebx_5)
                            int32_t eax_9 = *(arg1 + 0x14)
                            i_16 = eax_9 + (edx_4 << 2)
                            int32_t edx_7 = *(*i_16 + 0x30)
                            
                            if (edx_7 == edx_4)
                                var_c_1 += 1
                            else if (*(*(eax_9 + (edx_7 << 2)) + 0x30) == 0xffffffff)
                                i_16 = *(*i_16 + 0x30)
                                *(*(eax_9 + (i_16 << 2)) + 0x30) = i_16
                            
                            i += 1
                        while (i u< esi_1[3])
                    
                    int32_t eax_12 = esi_1[3]
                    
                    if (var_c_1 != eax_12)
                        i_16 = nullptr
                        int32_t* i_23 = nullptr
                        int32_t i_1 = 0
                        
                        if (eax_12 u> 0)
                            do
                                int32_t edx_9 = esi_1[4]
                                int32_t eax_14 = *(edx_9 + (i_1 << 2))
                                int32_t ecx_21 = *(arg1 + 0x14)
                                
                                if (*(*(ecx_21 + (eax_14 << 2)) + 0x30) != eax_14)
                                    void* eax_16 = *(ecx_21 + (eax_14 << 2))
                                    void* ecx_24 = *(ecx_21 + (*(eax_16 + 0x30) << 2))
                                    
                                    if ((*(*(*(arg1 + 0x10) + (*(ecx_24 + 4) << 2)) + 4) & 2) != 0
                                            && *(ecx_24 + 0x60) == 0)
                                        *(ecx_24 + 0x60) = *(eax_16 + 0x60)
                                        *(ecx_24 + 0x64) = *(
                                            *(*(arg1 + 0x14) + (*(esi_1[4] + (i_1 << 2)) << 2))
                                            + 0x64)
                                else
                                    int32_t ecx_23 = i_23 << 2
                                    i_23 += 1
                                    *(ecx_23 + edx_9) = eax_14
                                    int32_t eax_15 = esi_1[2]
                                    *(ecx_23 + eax_15) = *(eax_15 + (i_1 << 2))
                                
                                i_1 += 1
                            while (i_1 u< esi_1[3])
                            
                            i_16 = i_23
                        
                        int32_t eax_26
                        
                        if (eax_12 u<= 0 || i_16 == 0)
                            eax_26 = 0
                        else
                            eax_26 = ((*esi_1 ^ i_16) & 0xfffff) ^ *esi_1
                        
                        esi_1[1] = i_16
                        esi_1[3] = i_16
                        var_8 = 1
                        *esi_1 = eax_26
                else
                    int32_t result
                    int16_t top
                    
                    if (i_16 == 0x20000000)
                        int32_t var_18_1 = 0
                        int32_t i_2 = 0
                        
                        if (esi_1[3] u> 0)
                            do
                                int32_t ecx_25 = esi_1[2]
                                int32_t edx_18 = i_2 << 2
                                int32_t ebx_14 = *(edx_18 + esi_1[4])
                                int32_t eax_28 = *(arg1 + 0x14)
                                int32_t edx_21 = *(*(eax_28 + (*(edx_18 + ecx_25) << 2)) + 0x30)
                                int32_t edx_24 =
                                    *(*(eax_28 + (*(ecx_25 + ((esi_1[3] + i_2) << 2)) << 2)) + 0x30)
                                int32_t ecx_29 = *esi_1 & 0xfff00000
                                
                                if (ecx_29 == 0x20000000 || ecx_29 == 0x20100000)
                                    int32_t* ecx_32 = *(eax_28 + (edx_21 << 2))
                                    int32_t* eax_29 = *(eax_28 + (edx_24 << 2))
                                    int32_t edx_25 = *ecx_32
                                    void* ecx_35 = (*eax_29 | edx_25) & 0xe000000
                                    
                                    if ((0x8000000 & ecx_35) != 0)
                                        ecx_35 = 0x8000000
                                    else if ((&data_4000000 & ecx_35) != 0)
                                        ecx_35 = &data_4000000
                                    else if ((&data_2000000 & ecx_35) != 0)
                                        ecx_35 = &data_2000000
                                    
                                    void* ecx_36 = ecx_35 | (**(eax_28 + (ebx_14 << 2)) & 0xe000000)
                                    
                                    if ((&data_2000000 & ecx_36) != 0)
                                        ecx_36 = &data_2000000
                                    else if ((&data_4000000 & ecx_36) != 0)
                                        ecx_36 = &data_4000000
                                    else if ((0x8000000 & ecx_36) != 0)
                                        ecx_36 = 0x8000000
                                    
                                    if (ecx_36 != (edx_25 & 0xe000000)
                                            && (*(*(*(arg1 + 0x10) + (ecx_32[1] << 2)) + 4) & 2)
                                            != 0 && ecx_32[0x17] == 1)
                                        *ecx_32 = (edx_25 & 0xf1ffffff) | ecx_36
                                        var_8 = 1
                                    
                                    int32_t edx_28 = *eax_29
                                    
                                    if (ecx_36 != (edx_28 & 0xe000000)
                                            && (*(*(*(arg1 + 0x10) + (eax_29[1] << 2)) + 4) & 2)
                                            != 0 && eax_29[0x17] == 1)
                                        *eax_29 = (edx_28 & 0xf1ffffff) | ecx_36
                                        var_8 = 1
                                
                                result = sub_4a712c(arg1, esi_1, ebx_14, edx_21, edx_24)
                                top -= 1
                                unimplemented  {call 0x4a712c}
                                
                                if (result s< 0)
                                    return result
                                
                                int32_t eax_34 = *(arg1 + 0x14)
                                i_16 = eax_34 + (ebx_14 << 2)
                                int32_t edx_36 = *(*i_16 + 0x30)
                                
                                if (edx_36 == ebx_14)
                                    var_18_1 += 1
                                else if (*(*(eax_34 + (edx_36 << 2)) + 0x30) == 0xffffffff)
                                    i_16 = *(*i_16 + 0x30)
                                    *(*(eax_34 + (i_16 << 2)) + 0x30) = i_16
                                
                                i_2 += 1
                            while (i_2 u< esi_1[3])
                        
                        int32_t eax_41 = esi_1[3]
                        
                        if (var_18_1 != eax_41)
                            if (var_18_1 == 0)
                                i_16 = 1
                                int32_t var_20_2 = 1
                                
                                if (eax_41 u<= 1)
                                label_4ad16b:
                                    int32_t i_3 = 0
                                    
                                    if (esi_1[3] u> 0)
                                        do
                                            int32_t eax_38 = *(arg1 + 0x14)
                                            i_16 = *(eax_38 + (*(esi_1[4] + (i_3 << 2)) << 2))
                                            void* eax_39 = *(eax_38 + (i_16[0xc] << 2))
                                            
                                            if ((*(*(*(arg1 + 0x10) + (*(eax_39 + 4) << 2)) + 4)
                                                    & 2) != 0 && *(eax_39 + 0x60) == 0)
                                                *(eax_39 + 0x60) = i_16[0x18]
                                                i_16 = *(*(*(arg1 + 0x14)
                                                    + (*(esi_1[4] + (i_3 << 2)) << 2)) + 0x64)
                                                *(eax_39 + 0x64) = i_16
                                            
                                            i_3 += 1
                                        while (i_3 u< esi_1[3])
                                    
                                    goto label_4ad7d2
                                
                                int32_t* ecx_39 = esi_1[4]
                                int32_t eax_37 = *(arg1 + 0x14)
                                i_16 = &ecx_39[1]
                                
                                while (*(*(eax_37 + (*(*(eax_37 + (*ecx_39 << 2)) + 0x30) << 2))
                                        + 4) == *
                                        (*(eax_37 + (*(*(eax_37 + (*i_16 << 2)) + 0x30) << 2)) + 4))
                                    var_20_2 += 1
                                    i_16 = &i_16[1]
                                    
                                    if (var_20_2 u>= esi_1[3])
                                        goto label_4ad16b
                                
                                eax_41 = esi_1[3]
                                
                                if (eax_41 == 0)
                                    goto label_4ad16b
                            
                            int32_t i_4 = 0
                            
                            if (eax_41 u> 0)
                                do
                                    i_16 = *(esi_1[4] + (i_4 << 2))
                                    int32_t eax_43 = *(arg1 + 0x14)
                                    int32_t* edx_49 = *(eax_43 + (i_16 << 2))
                                    
                                    if (edx_49[0xc] != i_16)
                                        int32_t ebx_31 = *edx_49
                                        int32_t eax_47 =
                                            (**(eax_43 + (edx_49[0xc] << 2)) & 0xf1ffffff) | ebx_31
                                        
                                        if (ebx_31 != eax_47)
                                            *edx_49 = eax_47
                                            var_8 = 1
                                        
                                        *(*(*(arg1 + 0x14) + (i_16 << 2)) + 0x30) = i_16
                                    
                                    i_4 += 1
                                while (i_4 u< esi_1[3])
                            
                            for (int32_t* i_5 = i_13; i_5 u< *(arg1 + 8); i_5 += 1)
                                i_16 = *(*(arg1 + 0x14) + (i_5 << 2))
                                
                                if (i_16 != 0)
                                    i_16 = sub_46e265(i_16, 1)
                            
                            *(arg1 + 8) = i_13
                    else if (i_16 == 0x30000000)
                        int32_t var_18_2 = 0
                        int32_t i_14 = 0
                        
                        if (esi_1[3] u> 0)
                            do
                                int32_t eax_54 = *(esi_1[4] + (i_6 << 2))
                                int32_t ecx_47 = esi_1[2]
                                int32_t eax_55 = *(arg1 + 0x14)
                                int32_t edx_54 = *(*(eax_55 + (*(ecx_47 + (i_6 << 2)) << 2)) + 0x30)
                                int32_t edx_55 = esi_1[3]
                                int32_t ebx_35 =
                                    *(*(eax_55 + (*(ecx_47 + ((i_6 + edx_55) << 2)) << 2)) + 0x30)
                                int32_t edx_57 = *(
                                    *(eax_55 + (*(ecx_47 + ((i_14 + (edx_55 << 1)) << 2)) << 2))
                                    + 0x30)
                                
                                if ((*esi_1 & 0xfff00000) == 0x30000000)
                                    int32_t* ecx_55 = *(eax_55 + (ebx_35 << 2))
                                    int32_t* eax_56 = *(eax_55 + (edx_57 << 2))
                                    int32_t edx_58 = *ecx_55
                                    void* ecx_58 = (*eax_56 | edx_58) & 0xe000000
                                    
                                    if ((0x8000000 & ecx_58) != 0)
                                        ecx_58 = 0x8000000
                                    else if ((&data_4000000 & ecx_58) != 0)
                                        ecx_58 = &data_4000000
                                    else if ((&data_2000000 & ecx_58) != 0)
                                        ecx_58 = &data_2000000
                                    
                                    void* ecx_59 = ecx_58 | (**(eax_55 + (eax_54 << 2)) & 0xe000000)
                                    
                                    if ((&data_2000000 & ecx_59) != 0)
                                        ecx_59 = &data_2000000
                                    else if ((&data_4000000 & ecx_59) != 0)
                                        ecx_59 = &data_4000000
                                    else if ((0x8000000 & ecx_59) != 0)
                                        ecx_59 = 0x8000000
                                    
                                    if (ecx_59 != (edx_58 & 0xe000000)
                                            && (*(*(*(arg1 + 0x10) + (ecx_55[1] << 2)) + 4) & 2)
                                            != 0 && ecx_55[0x17] == 1)
                                        *ecx_55 = (edx_58 & 0xf1ffffff) | ecx_59
                                        var_8 = 1
                                    
                                    int32_t edx_61 = *eax_56
                                    
                                    if (ecx_59 != (edx_61 & 0xe000000)
                                            && (*(*(*(arg1 + 0x10) + (eax_56[1] << 2)) + 4) & 2)
                                            != 0 && eax_56[0x17] == 1)
                                        *eax_56 = (edx_61 & 0xf1ffffff) | ecx_59
                                        var_8 = 1
                                
                                result = sub_4a80a9(arg1, esi_1, eax_54, edx_54, ebx_35, edx_57)
                                
                                if (result s< 0)
                                    return result
                                
                                int32_t eax_61 = *(arg1 + 0x14)
                                i_16 = eax_61 + (eax_54 << 2)
                                int32_t edx_69 = *(*i_16 + 0x30)
                                
                                if (edx_69 == eax_54)
                                    var_18_2 += 1
                                else if (*(*(eax_61 + (edx_69 << 2)) + 0x30) == 0xffffffff)
                                    i_16 = *(*i_16 + 0x30)
                                    *(*(eax_61 + (i_16 << 2)) + 0x30) = i_16
                                
                                i_6 = i_14 + 1
                                i_14 = i_6
                            while (i_6 u< esi_1[3])
                        
                        int32_t eax_67 = esi_1[3]
                        
                        if (var_18_2 != eax_67)
                            if (var_18_2 == 0)
                                i_16 = 1
                                int32_t var_20_4 = 1
                                
                                if (eax_67 u<= 1)
                                label_4ad444:
                                    int32_t i_7 = 0
                                    
                                    if (esi_1[3] u> 0)
                                        do
                                            int32_t eax_64 = *(arg1 + 0x14)
                                            i_16 = *(eax_64 + (*(esi_1[4] + (i_7 << 2)) << 2))
                                            void* eax_65 = *(eax_64 + (i_16[0xc] << 2))
                                            
                                            if ((*(*(*(arg1 + 0x10) + (*(eax_65 + 4) << 2)) + 4)
                                                    & 2) != 0 && *(eax_65 + 0x60) == 0)
                                                *(eax_65 + 0x60) = i_16[0x18]
                                                i_16 = *(*(*(arg1 + 0x14)
                                                    + (*(esi_1[4] + (i_7 << 2)) << 2)) + 0x64)
                                                *(eax_65 + 0x64) = i_16
                                            
                                            i_7 += 1
                                        while (i_7 u< esi_1[3])
                                    
                                    goto label_4ad7d2
                                
                                int32_t* ecx_62 = esi_1[4]
                                int32_t eax_63 = *(arg1 + 0x14)
                                i_16 = &ecx_62[1]
                                
                                while (*(*(eax_63 + (*(*(eax_63 + (*ecx_62 << 2)) + 0x30) << 2))
                                        + 4) == *
                                        (*(eax_63 + (*(*(eax_63 + (*i_16 << 2)) + 0x30) << 2)) + 4))
                                    var_20_4 += 1
                                    i_16 = &i_16[1]
                                    
                                    if (var_20_4 u>= esi_1[3])
                                        goto label_4ad444
                                
                                eax_67 = esi_1[3]
                                
                                if (eax_67 == 0)
                                    goto label_4ad444
                            
                            int32_t i_8 = 0
                            
                            if (eax_67 u> 0)
                                do
                                    i_16 = *(esi_1[4] + (i_8 << 2))
                                    int32_t eax_69 = *(arg1 + 0x14)
                                    int32_t* edx_82 = *(eax_69 + (i_16 << 2))
                                    
                                    if (edx_82[0xc] != i_16)
                                        int32_t ebx_54 = *edx_82
                                        int32_t eax_73 =
                                            (**(eax_69 + (edx_82[0xc] << 2)) & 0xf1ffffff) | ebx_54
                                        
                                        if (ebx_54 != eax_73)
                                            *edx_82 = eax_73
                                            var_8 = 1
                                        
                                        *(*(*(arg1 + 0x14) + (i_16 << 2)) + 0x30) = i_16
                                    
                                    i_8 += 1
                                while (i_8 u< esi_1[3])
                            
                            int32_t* i_15 = i_13
                            int32_t* i_9 = i_15
                            
                            if (i_15 u< *(arg1 + 8))
                                do
                                    i_16 = *(*(arg1 + 0x14) + (i_9 << 2))
                                    
                                    if (i_16 != 0)
                                        i_16 = sub_46e265(i_16, 1)
                                        i_15 = i_13
                                    
                                    i_9 += 1
                                while (i_9 u< *(arg1 + 8))
                            
                            *(arg1 + 8) = i_15
                    else if (edx_2 == 0x50000000)
                        result = sub_4a045d(arg1, esi_1, 1)
                        top -= 1
                        unimplemented  {call 0x4a045d}
                        
                        if (result s< 0)
                            return result
                        
                        if (result != 1)
                            var_8 = 1
                        
                        i_16 = esi_1[4]
                        int32_t edx_85 = *i_16
                        int32_t eax_77 = *(arg1 + 0x14)
                        
                        if (*(*(eax_77 + (edx_85 << 2)) + 0x30) != edx_85)
                            i_16 = *(eax_77 + (edx_85 << 2))
                            void* eax_78 = *(eax_77 + (i_16[0xc] << 2))
                            
                            if ((*(*(*(arg1 + 0x10) + (*(eax_78 + 4) << 2)) + 4) & 2) != 0
                                    && *(eax_78 + 0x60) == 0)
                                *(eax_78 + 0x60) = i_16[0x18]
                                i_16 = *(*(*(arg1 + 0x14) + (*esi_1[4] << 2)) + 0x64)
                                *(eax_78 + 0x64) = i_16
                            
                            esi_1[1] = 0
                            esi_1[3] = 0
                            *esi_1 = 0
                    else if (eax_2 == 0x50100004)
                        i_16 = *(arg1 + 0x14)
                        int32_t var_44_1 = 0xffffffff
                        int32_t var_48_1 = 0xffffffff
                        int32_t var_40_1 = 1
                        int32_t var_4c = 1
                        int32_t* eax_79 = esi_1[2]
                        void* ebx_57 = i_16[*eax_79]
                        void* eax_81 = i_16[eax_79[3]]
                        void* edx_92 = i_16[eax_79[1]]
                        int32_t edx_93 = *(arg1 + 0x10)
                        
                        if ((*(*(edx_93 + (*(ebx_57 + 4) << 2)) + 5) & 1) != 0
                                && *(ebx_57 + 8) == 0xffffffff)
                            unimplemented  {fld st0, qword [ebx+0x20]}
                            long double temp0_1 = fconvert.t(0.0)
                            unimplemented  {fcomp st0, qword [0xb0d6b8]} f- temp0_1
                            bool c0_1 = unimplemented  {fcomp st0, qword [0xb0d6b8]} f< temp0_1
                            bool c2_1 = is_unordered.t(
                                unimplemented  {fcomp st0, qword [0xb0d6b8]}, temp0_1)
                            bool c3_1 = unimplemented  {fcomp st0, qword [0xb0d6b8]} f== temp0_1
                            unimplemented  {fcomp st0, qword [0xb0d6b8]}
                            void* eax_83
                            eax_83.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa
                                | (c3_1 ? 1 : 0) << 0xe | (top & 7) << 0xb
                            
                            if ((eax_83:1.b & 0x41) == 0)
                                var_48_1 = 2
                                
                                if ((*(*(edx_93 + (*(edx_92 + 4) << 2)) + 5) & 1) == 0
                                        || *(edx_92 + 8) != 0xffffffff)
                                    goto label_4ad6c0
                                
                                unimplemented  {fld st0, qword [eax+0x20]}
                                long double temp1_1 = fconvert.t(0.0)
                                unimplemented  {fcomp st0, qword [0xb0d6b8]} f- temp1_1
                                bool c0_2 = unimplemented  {fcomp st0, qword [0xb0d6b8]} f< temp1_1
                                bool c2_2 = is_unordered.t(
                                    unimplemented  {fcomp st0, qword [0xb0d6b8]}, temp1_1)
                                bool c3_2 = unimplemented  {fcomp st0, qword [0xb0d6b8]} f== temp1_1
                                unimplemented  {fcomp st0, qword [0xb0d6b8]}
                                void* eax_87
                                eax_87.w = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa
                                    | (c3_2 ? 1 : 0) << 0xe | (top & 7) << 0xb
                                
                                if ((eax_87:1.b & 0x41) != 0)
                                    goto label_4ad69a
                                
                                if ((*(*(edx_93 + (*(eax_81 + 4) << 2)) + 5) & 1) == 0
                                        || *(eax_81 + 8) != 0xffffffff)
                                    goto label_4ad6c0
                                
                                unimplemented  {fld st0, qword [edx+0x20]}
                                unimplemented  {fld st0, qword [0xb0d6b8]}
                                unimplemented  {fucompp } f- unimplemented  {fucompp }
                                bool c0_3 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                                bool c2_3 = is_unordered.t(unimplemented  {fucompp }, 
                                    unimplemented  {fucompp })
                                bool c3_3 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                                unimplemented  {fucompp }
                                unimplemented  {fucompp }
                                void* eax_91
                                eax_91.w = (c0_3 ? 1 : 0) << 8 | (c2_3 ? 1 : 0) << 0xa
                                    | (c3_3 ? 1 : 0) << 0xe | (top & 7) << 0xb
                                bool p_1 = unimplemented  {test ah, 0x44}
                                
                                if (p_1)
                                    unimplemented  {fld st0, qword [edx+0x20]}
                                    unimplemented  {fld st0, qword [0xb0d850]}
                                    unimplemented  {fucompp } f- unimplemented  {fucompp }
                                    bool c0_4 =
                                        unimplemented  {fucompp } f< unimplemented  {fucompp }
                                    bool c2_4 = is_unordered.t(unimplemented  {fucompp }, 
                                        unimplemented  {fucompp })
                                    bool c3_4 =
                                        unimplemented  {fucompp } f== unimplemented  {fucompp }
                                    unimplemented  {fucompp }
                                    unimplemented  {fucompp }
                                    eax_91.w = (c0_4 ? 1 : 0) << 8 | (c2_4 ? 1 : 0) << 0xa
                                        | (c3_4 ? 1 : 0) << 0xe | (top & 7) << 0xb
                                    bool p_2 = unimplemented  {test ah, 0x44}
                                    
                                    if (p_2)
                                        goto label_4ad6c0
                                    
                                    int32_t var_44_3 = 3
                                    goto label_4ad6da
                                
                                int32_t var_44_2 = 1
                                goto label_4ad6da
                            
                            int32_t var_48_2 = 0
                        label_4ad69a:
                            int32_t var_44_4 = 0
                        label_4ad6da:
                            
                            for (int32_t* i_10 = nullptr; i_10 u< 0x10; i_10 = &i_10[1])
                                int32_t eax_98 = *(&var_4c + i_10)
                                
                                if (eax_98 == 0)
                                    if (var_14 == 0xffffffff)
                                        int32_t* i_21 = i_16
                                        unimplemented  {fldz }
                                        int32_t* i_18 = i_16
                                        i_18.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                                        unimplemented  {fstp qword [esp], st0}
                                        int32_t eax_110 =
                                            sub_49f544(arg1, *(arg1 + 0x78), 0, 0, i_18)
                                        var_14 = eax_110
                                        *(*(*(arg1 + 0x14) + (eax_110 << 2)) + 0x30) = eax_110
                                    
                                    *(*(*(arg1 + 0x14) + (*(i_10 + esi_1[4]) << 2)) + 0x30) = var_14
                                else if (eax_98 == 1)
                                    if (var_24 == 0xffffffff)
                                        int32_t* i_20 = i_16
                                        unimplemented  {fld1 }
                                        int32_t* i_17 = i_16
                                        i_17.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                                        unimplemented  {fstp qword [esp], st0}
                                        int32_t eax_106 =
                                            sub_49f544(arg1, *(arg1 + 0x78), 0, 0, i_17)
                                        var_24 = eax_106
                                        *(*(*(arg1 + 0x14) + (eax_106 << 2)) + 0x30) = eax_106
                                    
                                    *(*(*(arg1 + 0x14) + (*(i_10 + esi_1[4]) << 2)) + 0x30) = var_24
                                else if (eax_98 == 2)
                                    *(*(*(arg1 + 0x14) + (*(i_10 + esi_1[4]) << 2)) + 0x30) =
                                        *esi_1[2]
                                else if (eax_98 == 3)
                                    *(*(*(arg1 + 0x14) + (*(i_10 + esi_1[4]) << 2)) + 0x30) =
                                        *(esi_1[2] + 4)
                                
                                int32_t eax_113 = *(arg1 + 0x14)
                                void* ecx_91 = *(eax_113 + (*(i_10 + esi_1[4]) << 2))
                                void* eax_114 = *(eax_113 + (*(ecx_91 + 0x30) << 2))
                                i_16 = *(*(arg1 + 0x10) + (*(eax_114 + 4) << 2))
                                
                                if ((i_16[1].b & 2) != 0 && *(eax_114 + 0x60) == 0)
                                    *(eax_114 + 0x60) = *(ecx_91 + 0x60)
                                    i_16 = *(*(*(arg1 + 0x14) + (*(i_10 + esi_1[4]) << 2)) + 0x64)
                                    *(eax_114 + 0x64) = i_16
                            
                            goto label_4ad7d2
                        
                        if (*(i_16[*(esi_1[4] + 4)] + 0x5c) != 0)
                            goto label_4ad6c0
                        
                        var_48_1 = 0
                    label_4ad6c0:
                        
                        if (*(i_16[*(esi_1[4] + 8)] + 0x5c) == 0)
                            var_44_1 = 0
                        
                        if (var_48_1 != 0xffffffff && var_44_1 != 0xffffffff)
                            goto label_4ad6da
            else
                int32_t edx_3 = 0
                
                if (esi_1[1] u> 0)
                    int32_t eax_3 = *(arg1 + 0x14)
                    i_16 = esi_1[2]
                    
                    while ((**(eax_3 + (*(*(eax_3 + (*i_16 << 2)) + 0x30) << 2)) & 4) != 0)
                        edx_3 += 1
                        i_16 = &i_16[1]
                        
                        if (edx_3 u>= esi_1[1])
                            break
                
                if (edx_3 == esi_1[1])
                label_4ad7d2:
                    esi_1[1] = 0
                    esi_1[3] = 0
                    var_8 = 1
                    *esi_1 = 0
            
            int32_t eax_115 = esi_1[3]
            
            if (eax_115 != 0)
                int32_t i_11 = 0
                
                if (eax_115 u> 0)
                    i_16 = esi_1[4]
                    
                    do
                        int32_t* eax_117 = *(*(arg1 + 0x14) + (*i_16 << 2))
                        char edx_98 = (*eax_117).b
                        
                        if ((edx_98 & 0x40) != 0)
                            break
                        
                        if ((*(*(*(arg1 + 0x10) + (eax_117[1] << 2)) + 4) & 0x11028) != 0)
                            break
                        
                        if ((edx_98 & 4) == 0)
                            break
                        
                        if ((edx_98 & 8) == 0)
                            break
                        
                        i_11 += 1
                        i_16 = &i_16[1]
                    while (i_11 u< esi_1[3])
                
                if (i_11 == esi_1[3])
                    int32_t eax_122 = var_14
                    
                    if (eax_122 == 0xffffffff)
                        int32_t* i_22 = i_16
                        unimplemented  {fldz }
                        int32_t* i_19 = i_16
                        i_19.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                        unimplemented  {fstp qword [esp], st0}
                        eax_122 = sub_49f544(arg1, *(arg1 + 0x78), 0, 0, i_19)
                        var_14 = eax_122
                        *(*(*(arg1 + 0x14) + (eax_122 << 2)) + 0x30) = eax_122
                    
                    int32_t i_12 = 0
                    
                    if (esi_1[3] u> 0)
                        do
                            void* edx_102 = *(*(arg1 + 0x14) + (*(esi_1[4] + (i_12 << 2)) << 2))
                            i_12 += 1
                            *(edx_102 + 0x30) = eax_122
                        while (i_12 u< esi_1[3])
                    
                    *esi_1 = 0
                    esi_1[1] = 0
                    esi_1[3] = 0
                    var_8 = 1
        
        var_1c += 1
        
        if (var_1c u>= *(arg1 + 0xc))
            break
        
        i_6 = 0
    
    if (var_8 != 0)
        sub_4a3f8e(arg1)
        return 0

return 1

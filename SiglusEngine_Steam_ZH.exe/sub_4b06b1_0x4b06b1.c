// 函数: sub_4b06b1
// 地址: 0x4b06b1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0

if ((*(arg1 + 0xcc) & 4) != 0)
    return 1

int32_t edi
int32_t var_c8_1 = edi
int32_t var_68_1 = 0

if (*(arg1 + 4) u> 0)
    do
        void* ecx_1 = *(*(arg1 + 0x10) + (i << 2))
        i += 1
        *(ecx_1 + 0x10) = 0
    while (i u< *(arg1 + 4))

int32_t i_1 = 0

if (*(arg1 + 8) u> 0)
    do
        void* edi_1 = *(*(arg1 + 0x14) + (i_1 << 2))
        int32_t eax_2 = *(edi_1 + 4)
        
        if (*(arg1 + 0x74) != eax_2)
            void* eax_3 = *(*(arg1 + 0x10) + (eax_2 << 2))
            int16_t ecx_3 = (*(eax_3 + 4)).w
            
            if ((ecx_3.b & 2) != 0 && (ecx_3:1.b & 4) == 0)
                int32_t ecx_4 = *(edi_1 + 0xc) + 1
                
                if (*(eax_3 + 0x10) u< ecx_4)
                    *(eax_3 + 0x10) = ecx_4
        
        i_1 += 1
    while (i_1 u< *(arg1 + 8))

int32_t eax_4 = 0

if (*(arg1 + 4) u> 0)
    int32_t* ecx_5 = *(arg1 + 0x10)
    int32_t i_13 = *(arg1 + 4)
    int32_t i_2
    
    do
        eax_4 += *(*ecx_5 + 0x10)
        ecx_5 = &ecx_5[1]
        i_2 = i_13
        i_13 -= 1
    while (i_2 != 1)

int32_t esi_3 = eax_4 << 2
int32_t eax_5 = sub_745f3f(esi_3)
int32_t result

if (eax_5 == 0)
label_4b1546:
    result = 0x8007000e
else
    __builtin_memset(__builtin_memset(eax_5, 0, esi_3 u>> 2 << 2), 0, esi_3 & 3)
    int32_t i_3 = 0
    int32_t ecx_11 = 0
    
    if (*(arg1 + 4) u> 0)
        int32_t eax_6 = *(arg1 + 0x10)
        
        do
            void* eax_7 = *(eax_6 + (i_3 << 2))
            int32_t esi_4 = *(eax_7 + 0x10)
            int32_t esi_5 = neg.d(esi_4)
            *(eax_7 + 0x1c) = sbb.d(esi_5, esi_5, esi_4 != 0) & (eax_5 + (ecx_11 << 2))
            eax_6 = *(arg1 + 0x10)
            ecx_11 += *(*(eax_6 + (i_3 << 2)) + 0x10)
            i_3 += 1
        while (i_3 u< *(arg1 + 4))
    
    int32_t i_4 = 0
    
    if (*(arg1 + 8) u> 0)
        do
            void* eax_9 = *(*(arg1 + 0x14) + (i_4 << 2))
            int32_t ecx_12 = *(eax_9 + 4)
            
            if (*(arg1 + 0x74) != ecx_12)
                int32_t ecx_14 = *(*(*(arg1 + 0x10) + (ecx_12 << 2)) + 0x1c)
                
                if (ecx_14 != 0)
                    int32_t* ecx_15 = ecx_14 + (*(eax_9 + 0xc) << 2)
                    int32_t eax_11 = *(eax_9 + 0x10) + 1
                    
                    if (*ecx_15 u< eax_11)
                        *ecx_15 = eax_11
            
            i_4 += 1
        while (i_4 u< *(arg1 + 8))
    
    int32_t i_5 = 0
    
    if (*(arg1 + 0xc) u> 0)
        do
            int32_t* eax_13 = *(*(arg1 + 0x18) + (i_5 << 2))
            int32_t ecx_17 = *eax_13
            
            if ((ecx_17 & 0xf0000000) == 0x60000000 || (ecx_17 & 0xfff00000) == 0x11000000)
                int32_t j = 0
                
                if (eax_13[1] u> 0)
                    do
                        void* ecx_21 = *(*(arg1 + 0x14) + (*(eax_13[2] + (j << 2)) << 2))
                        int32_t edx_7 = *(*(*(arg1 + 0x10) + (*(ecx_21 + 4) << 2)) + 0x1c)
                        
                        if (edx_7 != 0)
                            *(edx_7 + (*(ecx_21 + 0xc) << 2)) = 4
                        
                        j += 1
                    while (j u< eax_13[1])
            
            i_5 += 1
        while (i_5 u< *(arg1 + 0xc))
    
    int32_t var_c_1
    
    if (((*(arg1 + 0x6c)).b & 6) == 0)
        sub_4a39e3(arg1)
        var_c_1 = 0
    
    void var_9c
    void var_8c
    void var_78
    void var_50
    int32_t __saved_ebp
    int32_t* ecx_100
    int16_t top
    
    if (((*(arg1 + 0x6c)).b & 6) != 0 || *(arg1 + 0xc) u<= 0)
    label_4b0bdd:
        sub_4a39e3(arg1)
        int32_t var_18_2 = 0
        
        if (*(arg1 + 0xc) u<= 0)
        label_4b1531:
            int32_t result_1
            result_1.b = var_68_1 == 0
            result = result_1
        else
            while (true)
                int32_t* edi_30 = *(*(arg1 + 0x18) + (var_18_2 << 2))
                int32_t eax_59 = *edi_30
                int32_t ecx_97 = eax_59 & 0xf0000000
                
                if (ecx_97 u>= 0x10000000 && ecx_97 u<= 0x40000000
                        && ((eax_59 & 0xfff00000) == 0x10000000 || (*(arg1 + 0x6c) & 6) == 0)
                        && sub_49ea13(edi_30) == 0)
                    int32_t ecx_99 = *(arg1 + 0x14)
                    int32_t eax_65 = *(*(ecx_99 + (*edi_30[4] << 2)) + 4)
                    int32_t eax_67 = *(*(*(arg1 + 0x10) + (eax_65 << 2)) + 0x1c)
                    
                    if (eax_67 != 0)
                        int32_t i_8 = *(arg1 + 0xc)
                        int32_t var_34_2 = 0
                        int32_t i_10 = i_8
                        
                        if (edi_30[1] u> 0)
                            int32_t* var_1c_2 = edi_30[2]
                            int32_t i_11 = edi_30[1]
                            int32_t i_6
                            
                            do
                                void* eax_71
                                
                                for (int32_t j_1 = *var_1c_2; j_1 != 0xffffffff; 
                                        j_1 = *(eax_71 + 8))
                                    eax_71 = *(ecx_99 + (j_1 << 2))
                                    
                                    if ((*(*(*(arg1 + 0x10) + (*(eax_71 + 4) << 2)) + 4) & 2) != 0)
                                        int32_t edx_27 = *(eax_71 + 0x48) + 1
                                        
                                        if (var_34_2 u< edx_27)
                                            var_34_2 = edx_27
                                
                                var_1c_2 = &var_1c_2[1]
                                i_6 = i_11
                                i_11 -= 1
                            while (i_6 != 1)
                        
                        if (edi_30[3] u> 0)
                            int32_t* esi_37 = edi_30[4]
                            int32_t i_12 = edi_30[3]
                            int32_t i_7
                            
                            do
                                void* eax_74 = *(ecx_99 + (*esi_37 << 2))
                                int32_t i_14 = *(eax_74 + 0x54)
                                
                                if (i_10 u> i_14)
                                    i_10 = i_14
                                
                                while (true)
                                    int32_t eax_75 = *(eax_74 + 8)
                                    
                                    if (eax_75 == 0xffffffff)
                                        break
                                    
                                    eax_74 = *(ecx_99 + (eax_75 << 2))
                                    
                                    if ((*(*(*(arg1 + 0x10) + (*(eax_74 + 4) << 2)) + 4) & 2) != 0)
                                        int32_t edx_31 = *(eax_74 + 0x48) + 1
                                        
                                        if (var_34_2 u< edx_31)
                                            var_34_2 = edx_31
                                
                                esi_37 = &esi_37[1]
                                i_7 = i_12
                                i_12 -= 1
                            while (i_7 != 1)
                        
                        int32_t eax_115 = var_34_2
                        int32_t var_20_2 = eax_115
                        void var_ac
                        int32_t var_14_4
                        int32_t* var_c_2
                        int32_t* var_8_1
                        int32_t eax_92
                        int32_t* ecx_102
                        int32_t edx_35
                        int32_t esi_39
                        int32_t edi_33
                        
                        while (true)
                            if (eax_115 u>= i_10)
                                goto label_4b151d
                            
                            if (var_18_2 != var_20_2)
                                ecx_102 = *(*(arg1 + 0x18) + (var_20_2 << 2))
                                
                                var_c_2 = var_18_2 u>= var_20_2 ? edi_30 : ecx_102
                                
                                var_8_1 = var_18_2 u>= var_20_2 ? ecx_102 : edi_30
                                
                                int32_t eax_79 = *var_c_2
                                int32_t var_10_2 = eax_79 & 0xfff00000
                                
                                if (var_10_2 == (*var_8_1 & 0xfff00000))
                                    int32_t ecx_106 = *(arg1 + 0x14)
                                    void* esi_38 = *(ecx_106 + (*var_8_1[4] << 2))
                                    void* edi_32 = *(ecx_106 + (*var_c_2[4] << 2))
                                    int32_t eax_86 = *(edi_32 + 4)
                                    
                                    if (eax_86 == *(esi_38 + 4) && *(edi_32 + 8) == *(esi_38 + 8)
                                            && *(edi_32 + 0x14) == *(esi_38 + 0x14)
                                            && *(edi_32 + 0x18) == *(esi_38 + 0x18))
                                        eax_92 = var_8_1[1] + var_c_2[1]
                                        int32_t edx_34 = var_c_2[3]
                                        int32_t eax_94 = var_8_1[3]
                                        edx_35 = edx_34 + eax_94
                                        
                                        if (edx_35 u<= 4)
                                            edi_33 = *(edi_32 + 0xc)
                                            esi_39 = *(esi_38 + 0xc)
                                            
                                            if (edi_33 == esi_39)
                                            label_4b0e3f:
                                                int32_t var_3c_2 = var_18_2
                                                
                                                if (var_18_2 u>= var_20_2)
                                                    var_3c_2 = var_20_2
                                                
                                                if (var_10_2 == 0x10000000
                                                        || var_10_2 == 0x10100000)
                                                    int32_t* edx_69 = var_c_2[2]
                                                    int32_t* esi_79 = var_8_1[2]
                                                    void* edx_71 = *(ecx_106 + (*edx_69 << 2))
                                                    void* ecx_186 = *(ecx_106 + (*esi_79 << 2))
                                                    
                                                    if (*(edx_71 + 4) == *(ecx_186 + 4)
                                                            && *(edx_71 + 8) == *(ecx_186 + 8)
                                                            && *(edx_71 + 0xc) == *(ecx_186 + 0xc))
                                                        int32_t eax_111 = eax_94 << 2
                                                        int32_t esi_80
                                                        int32_t edi_63
                                                        edi_63, esi_80 = __builtin_memcpy(&var_50, 
                                                            esi_79, eax_111 u>> 2 << 2)
                                                        __builtin_memcpy(edi_63, esi_80, 
                                                            eax_111 & 3)
                                                        __builtin_memcpy(
                                                            &(&__saved_ebp)[eax_94 - 0x13], edx_69, 
                                                            edx_34 << 2)
                                                        goto label_4b11dc
                                                else
                                                    int32_t ecx_108 = eax_79 & 0xf0000000
                                                    int32_t eax_96
                                                    
                                                    if (ecx_108 == 0x10000000)
                                                        int32_t eax_95 = eax_94 << 2
                                                        int32_t esi_46
                                                        int32_t edi_34
                                                        edi_34, esi_46 = __builtin_memcpy(&var_50, 
                                                            var_8_1[2], eax_95 u>> 2 << 2)
                                                        __builtin_memcpy(edi_34, esi_46, eax_95 & 3)
                                                        __builtin_memcpy(
                                                            &(&__saved_ebp)[eax_94 - 0x13], 
                                                            var_c_2[2], edx_34 << 2)
                                                        eax_96 = sub_4aa6c8(arg1, &var_50, edx_35, 
                                                            0, nullptr, var_8_1, 0, var_3c_2)
                                                        top -= 1
                                                        unimplemented  {call 0x4aa6c8}
                                                        goto label_4b1183
                                                    
                                                    if (ecx_108 == 0x20000000)
                                                        int32_t eax_97 = eax_94 << 2
                                                        int32_t esi_49
                                                        int32_t edi_36
                                                        edi_36, esi_49 = __builtin_memcpy(&var_50, 
                                                            var_8_1[2], eax_97 u>> 2 << 2)
                                                        __builtin_memcpy(edi_36, esi_49, eax_97 & 3)
                                                        int32_t esi_50 = var_c_2[2]
                                                        int32_t ecx_121 = edx_34 << 2
                                                        int32_t esi_51
                                                        int32_t edi_38
                                                        edi_38, esi_51 = __builtin_memcpy(
                                                            &(&__saved_ebp)[eax_94 - 0x13], esi_50, 
                                                            ecx_121 u>> 2 << 2)
                                                        int32_t edx_47 = var_8_1[2]
                                                        __builtin_memcpy(edi_38, esi_51, 
                                                            ecx_121 & 3)
                                                        int32_t esi_53
                                                        int32_t edi_39
                                                        edi_39, esi_53 = __builtin_memcpy(&var_78, 
                                                            edx_47 + eax_97, eax_97 u>> 2 << 2)
                                                        __builtin_memcpy(edi_39, esi_53, eax_97 & 3)
                                                        int32_t esi_55
                                                        int32_t edi_41
                                                        edi_41, esi_55 = __builtin_memcpy(
                                                            &(&__saved_ebp)[eax_94 - 0x1d], 
                                                            esi_50 + ecx_121, ecx_121 u>> 2 << 2)
                                                        __builtin_memcpy(edi_41, esi_55, 
                                                            ecx_121 & 3)
                                                        int32_t eax_99 = sub_4aa6c8(arg1, &var_50, 
                                                            edx_35, 0, nullptr, var_8_1, 0, 
                                                            var_3c_2)
                                                        unimplemented  {call 0x4aa6c8}
                                                        int32_t eax_100 = sub_4aa6c8(arg1, &var_78, 
                                                            edx_35, 0, nullptr, var_8_1, 0, 
                                                            var_3c_2)
                                                        top -= 2
                                                        unimplemented  {call 0x4aa6c8}
                                                        
                                                        if (eax_99 != 0 && eax_100 != 0)
                                                            goto label_4b11dc
                                                        
                                                        if (sub_49e878(var_c_2) != 0)
                                                            int32_t esi_57
                                                            int32_t edi_43
                                                            edi_43, esi_57 = __builtin_memcpy(
                                                                &var_8c, var_8_1[2], eax_97 u>> 2 << 2)
                                                            __builtin_memcpy(edi_43, esi_57, 
                                                                eax_97 & 3)
                                                            int32_t edx_51 = var_c_2[2]
                                                            int32_t esi_59
                                                            int32_t edi_45
                                                            edi_45, esi_59 = __builtin_memcpy(
                                                                &(&__saved_ebp)[eax_94 - 0x22], 
                                                                edx_51 + ecx_121, ecx_121 u>> 2 << 2)
                                                            int32_t edx_54 = var_8_1[2]
                                                            __builtin_memcpy(edi_45, esi_59, 
                                                                ecx_121 & 3)
                                                            int32_t esi_61
                                                            int32_t edi_46
                                                            edi_46, esi_61 = __builtin_memcpy(
                                                                &var_9c, edx_54 + eax_97, 
                                                                eax_97 u>> 2 << 2)
                                                            __builtin_memcpy(edi_46, esi_61, 
                                                                eax_97 & 3)
                                                            int32_t esi_63
                                                            int32_t edi_48
                                                            edi_48, esi_63 = __builtin_memcpy(
                                                                &(&__saved_ebp)[eax_94 - 0x26], edx_51, 
                                                                ecx_121 u>> 2 << 2)
                                                            __builtin_memcpy(edi_48, esi_63, 
                                                                ecx_121 & 3)
                                                            int32_t eax_105 = sub_4aa6c8(arg1, 
                                                                &var_8c, edx_35, 0, nullptr, var_8_1, 
                                                                0, var_3c_2)
                                                            unimplemented  {call 0x4aa6c8}
                                                            int32_t eax_106 = sub_4aa6c8(arg1, 
                                                                &var_9c, edx_35, 0, nullptr, var_8_1, 
                                                                0, var_3c_2)
                                                            top -= 2
                                                            unimplemented  {call 0x4aa6c8}
                                                            
                                                            if (eax_105 != 0 && eax_106 != 0)
                                                                var_14_4 = 1
                                                                goto label_4b11e6
                                                    else if (ecx_108 == 0x30000000)
                                                        int32_t eax_107 = eax_94 << 2
                                                        int32_t esi_65
                                                        int32_t edi_50
                                                        edi_50, esi_65 = __builtin_memcpy(&var_50, 
                                                            var_8_1[2], eax_107 u>> 2 << 2)
                                                        __builtin_memcpy(edi_50, esi_65, 
                                                            eax_107 & 3)
                                                        int32_t ecx_161 = edx_34 << 2
                                                        int32_t esi_66 = var_c_2[2]
                                                        int32_t esi_67
                                                        int32_t edi_52
                                                        edi_52, esi_67 = __builtin_memcpy(
                                                            &(&__saved_ebp)[eax_94 - 0x13], esi_66, 
                                                            ecx_161 u>> 2 << 2)
                                                        __builtin_memcpy(edi_52, esi_67, 
                                                            ecx_161 & 3)
                                                        int32_t esi_69
                                                        int32_t edi_53
                                                        edi_53, esi_69 = __builtin_memcpy(&var_78, 
                                                            var_8_1[2] + eax_107, 
                                                            eax_107 u>> 2 << 2)
                                                        __builtin_memcpy(edi_53, esi_69, 
                                                            eax_107 & 3)
                                                        int32_t ecx_170 = edx_34 << 2
                                                        int32_t esi_71
                                                        int32_t edi_55
                                                        edi_55, esi_71 = __builtin_memcpy(
                                                            &(&__saved_ebp)[eax_94 - 0x1d], 
                                                            esi_66 + ecx_170, ecx_170 u>> 2 << 2)
                                                        int32_t edx_65 = var_8_1[2]
                                                        __builtin_memcpy(edi_55, esi_71, 
                                                            ecx_170 & 3)
                                                        int32_t esi_74
                                                        int32_t edi_56
                                                        edi_56, esi_74 = __builtin_memcpy(&var_ac, 
                                                            edx_65 + (eax_94 << 3), 
                                                            eax_107 u>> 2 << 2)
                                                        __builtin_memcpy(edi_56, esi_74, 
                                                            eax_107 & 3)
                                                        int32_t ecx_179 = edx_34 << 2
                                                        int32_t esi_77
                                                        int32_t edi_58
                                                        edi_58, esi_77 = __builtin_memcpy(
                                                            &(&__saved_ebp)[eax_94 - 0x2a], 
                                                            esi_66 + (edx_34 << 3), 
                                                            ecx_179 u>> 2 << 2)
                                                        __builtin_memcpy(edi_58, esi_77, 
                                                            ecx_179 & 3)
                                                        int32_t eax_109 = sub_4aa6c8(arg1, &var_50, 
                                                            edx_35, 0, nullptr, var_8_1, 0, 
                                                            var_3c_2)
                                                        unimplemented  {call 0x4aa6c8}
                                                        int32_t eax_110 = sub_4aa6c8(arg1, &var_78, 
                                                            edx_35, 0, nullptr, var_8_1, 0, 
                                                            var_3c_2)
                                                        unimplemented  {call 0x4aa6c8}
                                                        eax_96 = sub_4aa6c8(arg1, &var_ac, edx_35, 
                                                            0, nullptr, var_8_1, 0, var_3c_2)
                                                        top -= 3
                                                        unimplemented  {call 0x4aa6c8}
                                                        
                                                        if (eax_109 != 0 && eax_110 != 0)
                                                        label_4b1183:
                                                            
                                                            if (eax_96 != 0)
                                                            label_4b11dc:
                                                                var_14_4 = 0
                                                            label_4b11e6:
                                                                
                                                                if (edi_33 == esi_39)
                                                                    break
                                                                
                                                                if (*(eax_67 + (esi_39 << 2))
                                                                        + *(eax_67 + (edi_33 << 2)) u<= 4)
                                                                    break
                                                
                                                while (*(arg1 + 0xc) u> i_8)
                                                    *(arg1 + 0xc) -= 1
                                                    void* eax_114 =
                                                        *(*(arg1 + 0x18) + (*(arg1 + 0xc) << 2))
                                                    
                                                    if (eax_114 != 0)
                                                        sub_46cb59(eax_114, 1)
                                            else if ((*(arg1 + 0x6c) & 6) == 0 && (
                                                    *(*(*(arg1 + 0x10) + (eax_86 << 2)) + 4) & 0x20) == 0
                                                    && *(eax_67 + (esi_39 << 2))
                                                    + *(eax_67 + (edi_33 << 2)) u<= 4)
                                                goto label_4b0e3f
                            
                            var_20_2 += 1
                            eax_115 = var_20_2
                        
                        void* eax_116 = sub_49ec23(0x74)
                        int32_t* var_10_7
                        
                        if (eax_116 == 0)
                            var_10_7 = nullptr
                        else
                            var_10_7 = sub_49e789(eax_116)
                        
                        if (var_10_7 == 0)
                            goto label_4b1546
                        
                        result = sub_49ec6e(var_10_7, ((*var_c_2 ^ edx_35) & 0xfffff) ^ *var_c_2, 
                            eax_92, edx_35, 0)
                        
                        if (result s< 0)
                            ecx_100 = var_10_7
                            break
                        
                        result = sub_49e7bf(var_10_7, var_c_2)
                        
                        if (result s< 0)
                            ecx_100 = var_10_7
                            break
                        
                        if (edi_33 != esi_39)
                            int32_t i_9 = 0
                            
                            if (*(arg1 + 8) u> 0)
                                do
                                    void* eax_125 = *(*(arg1 + 0x14) + (i_9 << 2))
                                    
                                    if (eax_65 == *(eax_125 + 4) && edi_33 == *(eax_125 + 0xc))
                                        *(eax_125 + 0xc) = esi_39
                                        *(eax_125 + 0x10) += *(eax_67 + (esi_39 << 2))
                                    
                                    i_9 += 1
                                while (i_9 u< *(arg1 + 8))
                            
                            int32_t* eax_126 = eax_67 + (esi_39 << 2)
                            int32_t* ecx_199 = eax_67 + (edi_33 << 2)
                            *eax_126 += *ecx_199
                            *ecx_199 = 0
                        
                        int32_t ecx_201 = var_8_1[3] << 2
                        int32_t esi_84
                        int32_t edi_70
                        edi_70, esi_84 =
                            __builtin_memcpy(var_10_7[4], var_8_1[4], ecx_201 u>> 2 << 2)
                        __builtin_memcpy(edi_70, esi_84, ecx_201 & 3)
                        int32_t ecx_206 = var_c_2[3] << 2
                        int32_t esi_86
                        int32_t edi_73
                        edi_73, esi_86 = __builtin_memcpy(var_10_7[4] + (var_8_1[3] << 2), 
                            var_c_2[4], ecx_206 u>> 2 << 2)
                        __builtin_memcpy(edi_73, esi_86, ecx_206 & 3)
                        
                        if ((*var_c_2 & 0xf0000000) == 0x10000000)
                            __builtin_memcpy(var_10_7[2], &var_50, edx_35 << 2)
                        
                        int32_t ecx_216 = *var_c_2 & 0xf0000000
                        int32_t ecx_222
                        void* esi_89
                        int32_t edi_78
                        
                        if (ecx_216 == 0x20000000)
                            void* esi_87 = &var_50
                            
                            if (var_14_4 != 0)
                                esi_87 = &var_8c
                            
                            int32_t ecx_218 = edx_35 << 2
                            int32_t esi_88
                            int32_t edi_76
                            edi_76, esi_88 =
                                __builtin_memcpy(var_10_7[2], esi_87, ecx_218 u>> 2 << 2)
                            __builtin_memcpy(edi_76, esi_88, ecx_218 & 3)
                            esi_89 = &var_78
                            
                            if (var_14_4 != 0)
                                esi_89 = &var_9c
                            
                            ecx_222 = ecx_218
                            edi_78 = var_10_7[2] + ecx_222
                        label_4b13e5:
                            int32_t esi_92
                            int32_t edi_84
                            edi_84, esi_92 = __builtin_memcpy(edi_78, esi_89, ecx_222 u>> 2 << 2)
                            __builtin_memcpy(edi_84, esi_92, ecx_222 & 3)
                        else if (ecx_216 == 0x30000000)
                            int32_t ecx_224 = edx_35 << 2
                            int32_t esi_90
                            int32_t edi_80
                            edi_80, esi_90 =
                                __builtin_memcpy(var_10_7[2], &var_50, ecx_224 u>> 2 << 2)
                            __builtin_memcpy(edi_80, esi_90, ecx_224 & 3)
                            int32_t ecx_229 = edx_35 << 2
                            int32_t esi_91
                            int32_t edi_83
                            edi_83, esi_91 =
                                __builtin_memcpy(var_10_7[2] + ecx_229, &var_78, ecx_229 u>> 2 << 2)
                            __builtin_memcpy(edi_83, esi_91, ecx_229 & 3)
                            ecx_222 = edx_35 << 2
                            esi_89 = &var_ac
                            edi_78 = var_10_7[2] + (edx_35 << 3)
                            goto label_4b13e5
                        uint32_t temp0_1 = divu.dp.d(0:(edi_30[1]), *edi_30 & 0xfffff)
                        void var_bc
                        sub_4a3777(arg1, var_10_7[4], &var_bc, edx_35, 1)
                        int32_t var_24_3 = 0
                        
                        if (temp0_1 u> 0)
                            do
                                sub_4a3777(arg1, var_10_7[2] + ((var_10_7[3] * var_24_3) << 2), 
                                    &var_bc, edx_35, 0)
                                var_24_3 += 1
                            while (var_24_3 u< temp0_1)
                        
                        if (ecx_102 != 0)
                            sub_46cb59(ecx_102, 1)
                        
                        void** eax_138 = var_20_2 << 2
                        *(eax_138 + *(arg1 + 0x18)) = var_10_7
                        *edi_30 = 0
                        edi_30[1] = 0
                        edi_30[3] = 0
                        int32_t eax_139 = *(arg1 + 0xc)
                        
                        if (eax_139 u> i_8)
                            int32_t eax_140 = eax_139 - i_8
                            int32_t eax_141 = eax_140 << 2
                            int32_t eax_142 = sub_745f3f(eax_141)
                            
                            if (eax_142 == 0)
                                goto label_4b1546
                            
                            int32_t esi_95
                            int32_t edi_87
                            edi_87, esi_95 = __builtin_memcpy(eax_142, *(arg1 + 0x18) + (i_8 << 2), 
                                eax_141 u>> 2 << 2)
                            __builtin_memcpy(edi_87, esi_95, eax_141 & 3)
                            int32_t eax_145 = *(arg1 + 0x18)
                            _memcpy(eax_145 + ((eax_140 + var_20_2) << 2), eax_138 + eax_145, 
                                (i_8 - var_20_2) << 2)
                            int32_t esi_97
                            int32_t edi_90
                            edi_90, esi_97 = __builtin_memcpy(*(arg1 + 0x18) + eax_138, eax_142, 
                                eax_141 u>> 2 << 2)
                            __builtin_memcpy(edi_90, esi_97, eax_141 & 3)
                            j__free(eax_142)
                        
                        sub_4a39e3(arg1)
                        var_68_1 = 1
                        var_18_2 = var_34_2 - 1
                
            label_4b151d:
                var_18_2 += 1
                
                if (var_18_2 u>= *(arg1 + 0xc))
                    goto label_4b1531
            
            sub_46cb59(ecx_100, 1)
    else
        while (true)
            int32_t edi_9 = *(arg1 + 0x18)
            int32_t* eax_17 = *(edi_9 + (var_c_1 << 2))
            
            if (*eax_17 == 0x20400001)
                int32_t* eax_18 = eax_17[2]
                int32_t edx_8 = *(arg1 + 0x14)
                void* eax_20 = *(edx_8 + (eax_18[1] << 2))
                void* ecx_25 = *(edx_8 + (*eax_18 << 2))
                int32_t eax_21 = *(arg1 + 0x10)
                
                if ((*(*(eax_21 + (*(ecx_25 + 4) << 2)) + 4) & 2) != 0
                        && (*(*(eax_21 + (*(eax_20 + 4) << 2)) + 4) & 2) != 0)
                    int32_t* esi_14 = *(edi_9 + (*(ecx_25 + 0x48) << 2))
                    int32_t* edi_10 = *(edi_9 + (*(eax_20 + 0x48) << 2))
                    int32_t eax_26 = *esi_14
                    
                    if (eax_26 == 0x20500001 || (eax_26 & 0xfff00000) == 0x50000000)
                        int32_t eax_28 = *edi_10
                        
                        if (eax_28 == 0x20500001 || (eax_28 & 0xfff00000) == 0x50000000)
                            uint32_t ecx_27 = edi_10[1] u>> 1
                            uint32_t eax_31 = esi_14[1] u>> 1
                            uint32_t ecx_28 = ecx_27 + eax_31
                            
                            if (ecx_28 u>= ((not.d(*(arg1 + 0x6c)) & 0x20) | 0x40) u>> 5
                                    && ecx_28 u<= 4)
                                void* ecx_36 = *(edx_8 + (*esi_14[4] << 2))
                                
                                if (var_c_1 == *(ecx_36 + 0x54) && var_c_1 == *(ecx_36 + 0x58))
                                    void* edx_9 = *(edx_8 + (*edi_10[4] << 2))
                                    
                                    if (var_c_1 == *(edx_9 + 0x54) && var_c_1 == *(edx_9 + 0x58))
                                        int32_t esi_16 = esi_14[2]
                                        uint32_t eax_32 = eax_31 << 2
                                        int32_t esi_17
                                        int32_t edi_11
                                        edi_11, esi_17 =
                                            __builtin_memcpy(&var_78, esi_16, eax_32 u>> 2 << 2)
                                        __builtin_memcpy(edi_11, esi_17, eax_32 & 3)
                                        int32_t esi_18 = edi_10[2]
                                        uint32_t ecx_46 = ecx_27 << 2
                                        int32_t esi_19
                                        int32_t edi_13
                                        edi_13, esi_19 = __builtin_memcpy(
                                            &(&__saved_ebp)[eax_31 - 0x1d], esi_18, 
                                            ecx_46 u>> 2 << 2)
                                        __builtin_memcpy(edi_13, esi_19, ecx_46 & 3)
                                        int32_t esi_21
                                        int32_t edi_14
                                        edi_14, esi_21 = __builtin_memcpy(&var_9c, esi_16 + eax_32, 
                                            eax_32 u>> 2 << 2)
                                        __builtin_memcpy(edi_14, esi_21, eax_32 & 3)
                                        int32_t esi_23
                                        int32_t edi_16
                                        edi_16, esi_23 = __builtin_memcpy(
                                            &(&__saved_ebp)[eax_31 - 0x26], esi_18 + ecx_46, 
                                            ecx_46 u>> 2 << 2)
                                        __builtin_memcpy(edi_16, esi_23, ecx_46 & 3)
                                        int32_t eax_34 = sub_4aa6c8(arg1, &var_78, ecx_28, 0, 
                                            nullptr, eax_17, 0, 0xffffffff)
                                        top -= 1
                                        unimplemented  {call 0x4aa6c8}
                                        int32_t eax_35
                                        
                                        if (eax_34 != 0)
                                            eax_35 = sub_4aa6c8(arg1, &var_9c, ecx_28, 0, nullptr, 
                                                eax_17, 0, 0xffffffff)
                                            top -= 1
                                            unimplemented  {call 0x4aa6c8}
                                        
                                        int32_t var_38_2
                                        
                                        if (eax_34 == 0 || eax_35 == 0)
                                            int32_t eax_37 = esi_14[2]
                                            int32_t esi_25
                                            int32_t edi_17
                                            edi_17, esi_25 =
                                                __builtin_memcpy(&var_50, eax_37, eax_32 u>> 2 << 2)
                                            __builtin_memcpy(edi_17, esi_25, eax_32 & 3)
                                            int32_t edx_17 = edi_10[2]
                                            int32_t esi_27
                                            int32_t edi_20
                                            edi_20, esi_27 = __builtin_memcpy(
                                                &(&__saved_ebp)[eax_31 - 0x13], edx_17 + ecx_46, 
                                                ecx_46 u>> 2 << 2)
                                            __builtin_memcpy(edi_20, esi_27, ecx_46 & 3)
                                            int32_t esi_29
                                            int32_t edi_21
                                            edi_21, esi_29 = __builtin_memcpy(&var_8c, 
                                                eax_37 + eax_32, eax_32 u>> 2 << 2)
                                            __builtin_memcpy(edi_21, esi_29, eax_32 & 3)
                                            int32_t esi_31
                                            int32_t edi_23
                                            edi_23, esi_31 = __builtin_memcpy(
                                                &(&__saved_ebp)[eax_31 - 0x22], edx_17, 
                                                ecx_46 u>> 2 << 2)
                                            __builtin_memcpy(edi_23, esi_31, ecx_46 & 3)
                                            int32_t eax_40 = sub_4aa6c8(arg1, &var_50, ecx_28, 0, 
                                                nullptr, eax_17, 0, 0xffffffff)
                                            top -= 1
                                            unimplemented  {call 0x4aa6c8}
                                            
                                            if (eax_40 != 0)
                                                int32_t eax_41 = sub_4aa6c8(arg1, &var_8c, ecx_28, 
                                                    0, nullptr, eax_17, 0, 0xffffffff)
                                                top -= 1
                                                unimplemented  {call 0x4aa6c8}
                                                
                                                if (eax_41 != 0)
                                                    var_38_2 = 1
                                                    goto label_4b0af1
                                        else
                                            var_38_2 = 0
                                        label_4b0af1:
                                            void* eax_42 = sub_49ec23(0x74)
                                            int32_t* var_34_1
                                            
                                            if (eax_42 == 0)
                                                var_34_1 = nullptr
                                            else
                                                var_34_1 = sub_49e789(eax_42)
                                            
                                            if (var_34_1 == 0)
                                                goto label_4b1546
                                            
                                            result = sub_49ec6e(var_34_1, 
                                                (ecx_28 & 0xfffff) | 0x50000000, ecx_28 * 2, 1, 0)
                                            
                                            if (result s< 0)
                                                ecx_100 = var_34_1
                                                break
                                            
                                            result = sub_49e7bf(var_34_1, eax_17)
                                            
                                            if (result s< 0)
                                                ecx_100 = var_34_1
                                                break
                                            
                                            *var_34_1[4] = *eax_17[4]
                                            void* esi_32 = &var_78
                                            
                                            if (var_38_2 != 0)
                                                esi_32 = &var_50
                                            
                                            uint32_t eax_53 = ecx_28 << 2
                                            int32_t esi_33
                                            int32_t edi_26
                                            edi_26, esi_33 = __builtin_memcpy(var_34_1[2], esi_32, 
                                                eax_53 u>> 2 << 2)
                                            __builtin_memcpy(edi_26, esi_33, eax_53 & 3)
                                            void* esi_34 = &var_9c
                                            
                                            if (var_38_2 != 0)
                                                esi_34 = &var_8c
                                            
                                            int32_t esi_35
                                            int32_t edi_29
                                            edi_29, esi_35 = __builtin_memcpy(var_34_1[2] + eax_53, 
                                                esi_34, eax_53 u>> 2 << 2)
                                            __builtin_memcpy(edi_29, esi_35, eax_53 & 3)
                                            *(*(arg1 + 0x18) + (var_c_1 << 2)) = var_34_1
                                            sub_46cb59(eax_17, 1)
                                            *esi_14 = 0
                                            *edi_10 = 0
            
            var_c_1 += 1
            
            if (var_c_1 u>= *(arg1 + 0xc))
                goto label_4b0bdd
        
        sub_46cb59(ecx_100, 1)

j__free(eax_5)
return result

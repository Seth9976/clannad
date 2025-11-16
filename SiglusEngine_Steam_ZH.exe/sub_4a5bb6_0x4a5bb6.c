// 函数: sub_4a5bb6
// 地址: 0x4a5bb6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg1
int32_t edi
int32_t var_48 = edi
void* var_38 = esi
sub_4a39e3(arg1)
int32_t var_30 = 0xffffffff
int32_t var_34 = 0xffffffff
int32_t edi_1 = 0
int32_t var_8 = 0
int32_t var_18 = 0

if (*(esi + 0xc) u> 0)
    while (true)
        int32_t* ebx_1 = *(*(esi + 0x18) + (var_18 << 2))
        int32_t ecx_1 = *ebx_1
        
        if ((ecx_1 & 0xfff00000) != 0)
            int32_t eax_3 = ecx_1 & 0xf0000000
            
            if (eax_3 u>= 0x10000000 && eax_3 u<= 0x40000000)
                uint32_t temp0_1 = divu.dp.d(0:(ebx_1[1]), ecx_1 & 0xfffff)
                int32_t var_c_1 = 0
                
                if (temp0_1 u> 0)
                    while (true)
                        int32_t eax_22 = ebx_1[3]
                        int32_t var_20_1 = 0
                        int32_t var_14_1 = 0
                        
                        if (eax_22 u> 0)
                            while (true)
                                int32_t ecx_4 = *(ebx_1[2] + ((eax_22 * var_c_1 + var_14_1) << 2))
                                int32_t eax_8 = *(esi + 0x14)
                                void* edx_5 = *(eax_8 + (*(ebx_1[4] + (var_14_1 << 2)) << 2))
                                
                                if ((**(eax_8 + (ecx_4 << 2)) & 1) != 0)
                                    int32_t i = *(edx_5 + 0x14)
                                    int32_t var_28_1 = *(edx_5 + 0x18)
                                    
                                    while (true)
                                        if (i == 0xffffffff)
                                            break
                                        
                                        int32_t var_10_1 = 0
                                        void* eax_14 =
                                            *(*(esi + 0x18) + (*((*(esi + 0x14))[i] + 0x48) << 2))
                                        
                                        if (*(eax_14 + 0xc) u> 0)
                                            int32_t* var_1c_1 = *(eax_14 + 0x10)
                                            
                                            while (*var_1c_1 != i)
                                                var_10_1 += 1
                                                var_1c_1 = &var_1c_1[1]
                                                
                                                if (var_10_1 u>= *(eax_14 + 0xc))
                                                    break
                                        
                                        int32_t eax_15 = *(eax_14 + 8)
                                        
                                        if (var_28_1 == 0)
                                            if (sub_4a0ac7(esi, *(eax_15 + (var_10_1 << 2)), ecx_4)
                                                    != 0)
                                                *(edx_5 + 0x40) = 0
                                            else
                                            label_4a5cf6:
                                                void* eax_20 = *((i << 2) + *(esi + 0x14))
                                                var_28_1 = *(eax_20 + 0x18)
                                                i = *(eax_20 + 0x14)
                                                continue
                                        else
                                            if (sub_4a0ac7(esi, ecx_4, *(eax_15 + (var_10_1 << 2)))
                                                    == 0)
                                                goto label_4a5cf6
                                            
                                            *(edx_5 + 0x40) = 1
                                        
                                        var_20_1 += 1
                                        break
                                
                                var_14_1 += 1
                                eax_22 = ebx_1[3]
                                
                                if (var_14_1 u>= eax_22)
                                    break
                            
                            edi_1 = 0
                        
                        int32_t eax_23 = ebx_1[3]
                        
                        if (var_20_1 == eax_23)
                            if (eax_23 u> 0)
                                do
                                    int32_t ecx_9 = *(esi + 0x14)
                                    void* eax_27 = *(ecx_9
                                        + (*(ebx_1[2] + ((eax_23 * var_c_1 + edi_1) << 2)) << 2))
                                    void* ecx_12 = *(*(esi + 0x10) + (*(eax_27 + 4) << 2))
                                    int32_t eax_28
                                    
                                    if (*(*(ecx_9 + (*(ebx_1[4] + (edi_1 << 2)) << 2)) + 0x40) == 0)
                                        bool p_2
                                        
                                        if ((*(ecx_12 + 5) & 1) != 0)
                                            long double x87_r7_3 = fconvert.t(*(eax_27 + 0x20))
                                            long double x87_r6_2 = fconvert.t(0.0)
                                            x87_r6_2 - x87_r7_3
                                            eax_27.w = (x87_r6_2 < x87_r7_3 ? 1 : 0) << 8
                                                | (is_unordered.t(x87_r6_2, x87_r7_3) ? 1 : 0)
                                                << 0xa | (x87_r6_2 == x87_r7_3 ? 1 : 0) << 0xe
                                            p_2 = unimplemented  {test ah, 0x44}
                                        
                                        if ((*(ecx_12 + 5) & 1) == 0 || p_2)
                                            eax_28 = var_34
                                            
                                            if (eax_28 == 0xffffffff)
                                                void* var_4c_4 = ecx_12
                                                void* var_50_4 = ecx_12
                                                var_50_4.q = fconvert.d(float.t(0))
                                                eax_28 =
                                                    sub_49f544(esi, *(esi + 0x78), 0, 0, var_50_4)
                                                var_34 = eax_28
                                            
                                            *(ebx_1[2] + ((ebx_1[3] * var_c_1 + edi_1) << 2)) =
                                                eax_28
                                            var_8 = 1
                                    else
                                        bool p_1
                                        
                                        if ((*(ecx_12 + 5) & 1) != 0)
                                            long double x87_r7_1 = fconvert.t(*(eax_27 + 0x20))
                                            long double x87_r6_1 = fconvert.t(1.0)
                                            x87_r6_1 - x87_r7_1
                                            eax_27.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                                                | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0)
                                                << 0xa | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
                                            p_1 = unimplemented  {test ah, 0x44}
                                        
                                        if ((*(ecx_12 + 5) & 1) == 0 || p_1)
                                            eax_28 = var_30
                                            
                                            if (eax_28 == 0xffffffff)
                                                void* var_4c_3 = ecx_12
                                                void* var_50_3 = ecx_12
                                                var_50_3.q = fconvert.d(float.t(1))
                                                eax_28 =
                                                    sub_49f544(esi, *(esi + 0x78), 0, 0, var_50_3)
                                                var_30 = eax_28
                                            
                                            *(ebx_1[2] + ((ebx_1[3] * var_c_1 + edi_1) << 2)) =
                                                eax_28
                                            var_8 = 1
                                    eax_23 = ebx_1[3]
                                    edi_1 += 1
                                while (edi_1 u< eax_23)
                            
                            edi_1 = 0
                        
                        var_c_1 += 1
                        
                        if (var_c_1 u>= temp0_1)
                            break
        
        var_18 += 1
        
        if (var_18 u>= *(esi + 0xc))
            break

int32_t var_24_2 = 0
sub_4a3f75(esi)
int32_t i_1 = 0

if (*(esi + 0xc) u> 0)
    do
        int32_t* ebx_2 = *(*(esi + 0x18) + (i_1 << 2))
        
        if ((*(ebx_2 + 2) & 0xfff0) != 0)
            int32_t j = 0
            
            if (ebx_2[3] u> 0)
                do
                    int32_t* edx_15 = *(esi + 0x14)
                    void* ecx_21 = edx_15[*(ebx_2[4] + (j << 2))]
                    int32_t k = *(ecx_21 + 0x14)
                    int32_t var_18_1 = *(ecx_21 + 0x18)
                    
                    while (k != 0xffffffff)
                        int32_t edi_7 = k << 2
                        char* edi_8 = edx_15[k]
                        
                        if ((*edi_8 & 0x80) == 0)
                            break
                        
                        long double x87_r7_5 = fconvert.t(*(edi_8 + 0x20))
                        long double x87_r6_3 = fconvert.t(0.0)
                        x87_r6_3 - x87_r7_5
                        k.w = (x87_r6_3 < x87_r7_5 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_3, x87_r7_5) ? 1 : 0) << 0xa
                            | (x87_r6_3 == x87_r7_5 ? 1 : 0) << 0xe
                        
                        if (var_18_1 != 0)
                            bool p_4 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_4))
                                var_18_1 = 0
                                k |= 0xffffffff
                            else
                            label_4a5ffb:
                                void* eax_46 = *(edi_7 + *(esi + 0x14))
                                k = *(eax_46 + 0x14)
                                var_18_1 = *(eax_46 + 0x18)
                        else
                            bool p_3 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_3))
                                goto label_4a5ffb
                            
                            var_18_1 = 0
                            k |= 0xffffffff
                        
                        var_8 = 1
                    
                    j += 1
                    *(ecx_21 + 0x14) = k
                    *(ecx_21 + 0x18) = var_18_1
                while (j u< ebx_2[3])
            
            int32_t ecx_22 = *ebx_2
            int32_t eax_37 = ecx_22 & 0xfff00000
            
            if (eax_37 == 0x10f00000 || eax_37 == 0x11400000)
                int32_t edi_32 = 0
                int32_t temp3_1 = ebx_2[3]
                bool cond:6_1 = 0 == temp3_1
                int32_t var_30_1 = 0
                int32_t j_1 = 0
                
                if (0 u< temp3_1)
                    do
                        int32_t eax_67 = *(esi + 0x14)
                        int32_t ecx_54 = j_1 << 2
                        char* edx_38 = *(eax_67 + (*(ecx_54 + ebx_2[4]) << 2))
                        int32_t* eax_68 = *(eax_67 + (*(ecx_54 + ebx_2[2]) << 2))
                        char* edx_42
                        
                        if ((*(*(*(esi + 0x10) + (eax_68[1] << 2)) + 5) & 1) == 0
                                || eax_68[2] != 0xffffffff)
                            char eax_72 = (*eax_68).b
                            
                            if ((eax_72 & 4) == 0 || (eax_72 & 8) == 0)
                                edx_42 = edx_38
                                *edx_42 &= 0x7f
                            else
                                edx_42 = edx_38
                                *edx_42 |= 0x80
                                *(edx_42 + 0x20) = fconvert.d(float.t(0))
                        else
                            edx_42 = edx_38
                            *edx_42 |= 0x80
                            long double x87_r7_6 = fconvert.t(*(eax_68 + 0x20))
                            long double x87_r6_4 = fconvert.t(0.0)
                            x87_r6_4 - x87_r7_6
                            int32_t* eax_71
                            eax_71.w = (x87_r6_4 < x87_r7_6 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_4, x87_r7_6) ? 1 : 0) << 0xa
                                | (x87_r6_4 == x87_r7_6 ? 1 : 0) << 0xe
                            bool p_5 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_5))
                                *(edx_42 + 0x20) = fconvert.d(float.t(0))
                            else
                                *(edx_42 + 0x20) = fconvert.d(float.t(1))
                        
                        if ((*edx_42 & 0x80) == 0)
                            int32_t eax_73 = ebx_2[4]
                            int32_t edi_33 = edi_32 << 2
                            *(edi_33 + eax_73) = *(ecx_54 + eax_73)
                            int32_t eax_74 = ebx_2[2]
                            *(edi_33 + eax_74) = *(ecx_54 + eax_74)
                            edi_32 = var_30_1 + 1
                            var_30_1 = edi_32
                        
                        j_1 += 1
                    while (j_1 u< ebx_2[3])
                    
                    cond:6_1 = edi_32 == ebx_2[3]
                
                if (not(cond:6_1))
                    int32_t eax_77 = neg.d(edi_32)
                    ebx_2[1] = edi_32
                    ebx_2[3] = edi_32
                    *ebx_2 = sbb.d(eax_77, eax_77, edi_32 != 0) & ((edi_32 & 0xfffff) | 0x10f00000)
                    var_8 = 1
            else if (eax_37 == 0x20700000 || eax_37 == 0x20800000)
                uint32_t temp0_3 = divu.dp.d(0:(ebx_2[1]), ecx_22 & 0xfffff)
                int32_t var_10_2 = 0
                int32_t j_2 = 0
                
                if (ebx_2[3] u> 0)
                    do
                        int32_t ecx_39 = *(esi + 0x14)
                        int32_t edi_19 = j_2 << 2
                        int32_t eax_53 = *(edi_19 + ebx_2[4])
                        void* eax_54 = *(ecx_39 + (eax_53 << 2))
                        
                        if (*(eax_54 + 0x14) != 0xffffffff || *(eax_54 + 0x18) != 0)
                            int32_t edx_30 = ebx_2[2]
                            int32_t edi_20 = *(edi_19 + edx_30)
                            int32_t edx_31 = *(edx_30 + ((ebx_2[3] + j_2) << 2))
                            void* edi_24 = *(ecx_39 + (edi_20 << 2))
                            
                            if (*(edi_24 + 0x14) != 0xffffffff || *(edi_24 + 0x18) != 0)
                                void* ecx_41 = *(ecx_39 + (edx_31 << 2))
                                
                                if (*(ecx_41 + 0x14) != 0xffffffff || *(ecx_41 + 0x18) != 0)
                                    int32_t var_18_4 = 0
                                    *(ebx_2[4] + (var_10_2 << 2)) = eax_53
                                    
                                    if (temp0_3 u> 0)
                                        do
                                            int32_t ecx_46 = ebx_2[3] * var_18_4
                                            int32_t eax_56 = ebx_2[2]
                                            var_18_4 += 1
                                            *(eax_56 + ((ecx_46 + var_10_2) << 2)) =
                                                *(eax_56 + ((j_2 + ecx_46) << 2))
                                        while (var_18_4 u< temp0_3)
                                    
                                    var_10_2 += 1
                                else
                                    *(edi_24 + 4) = *(esi + 0x88)
                                    *(eax_54 + 0x30) = edi_20
                                    var_24_2 = 1
                            else
                                *(*(ecx_39 + (edx_31 << 2)) + 4) = *(esi + 0x88)
                                *(eax_54 + 0x30) = edx_31
                                var_24_2 = 1
                        
                        j_2 += 1
                    while (j_2 u< ebx_2[3])
                
                if (var_10_2 != ebx_2[3])
                    int32_t var_18_5 = 0
                    
                    if (temp0_3 u> 0)
                        int32_t var_20_5 = 0
                        int32_t eax_60 = var_10_2 << 2
                        
                        do
                            int32_t eax_61 = ebx_2[2]
                            int32_t edi_30 = var_20_5 + eax_61
                            var_20_5 += eax_60
                            int32_t esi_8
                            int32_t edi_31
                            edi_31, esi_8 = __builtin_memcpy(edi_30, 
                                eax_61 + ((ebx_2[3] * var_18_5) << 2), eax_60 u>> 2 << 2)
                            var_18_5 += 1
                            __builtin_memcpy(edi_31, esi_8, eax_60 & 3)
                        while (var_18_5 u< temp0_3)
                    
                    int32_t eax_66
                    
                    if (var_10_2 == 0)
                        eax_66 = 0
                    else
                        eax_66 = ((*ebx_2 ^ var_10_2) & 0xfffff) ^ *ebx_2
                    
                    esi = var_38
                    ebx_2[3] = var_10_2
                    ebx_2[1] = temp0_3 * var_10_2
                    *ebx_2 = eax_66
                    var_8 = 1
            else
                int32_t eax_39 = ecx_22 & 0xf0000000
                
                if (eax_39 u< 0x10000000 || eax_39 u> 0x40000000)
                    int32_t j_6 = ebx_2[3]
                    
                    if (j_6 != 0)
                        int32_t var_20_3 = 0
                        
                        if (j_6 u> 0)
                            int32_t* ecx_37 = ebx_2[4]
                            int32_t j_5 = j_6
                            int32_t j_3
                            
                            do
                                void* eax_49 = *(*(esi + 0x14) + (*ecx_37 << 2))
                                
                                if (*(eax_49 + 0x14) != 0xffffffff || *(eax_49 + 0x18) != 0)
                                    var_20_3 += 1
                                
                                ecx_37 = &ecx_37[1]
                                j_3 = j_5
                                j_5 -= 1
                            while (j_3 != 1)
                        
                        if (j_6 u<= 0 || var_20_3 == 0)
                            ebx_2[1] = 0
                            ebx_2[3] = 0
                            *ebx_2 = 0
                            var_8 = 1
                else
                    uint32_t eax_41 = divu.dp.d(0:(ebx_2[1]), ecx_22 & 0xfffff)
                    int32_t var_c_2 = 0
                    int32_t j_4 = 0
                    uint32_t var_3c_3 = eax_41
                    
                    if (ebx_2[3] u> 0)
                        do
                            int32_t ecx_24 = ebx_2[4]
                            int32_t edx_19 = *(ecx_24 + (j_4 << 2))
                            void* edi_10 = *(*(esi + 0x14) + (edx_19 << 2))
                            
                            if (*(edi_10 + 0x14) != 0xffffffff || *(edi_10 + 0x18) != 0)
                                int32_t var_18_2 = 0
                                *(ecx_24 + (var_c_2 << 2)) = edx_19
                                
                                if (eax_41 u> 0)
                                    do
                                        int32_t ecx_26 = ebx_2[3] * var_18_2
                                        int32_t edx_20 = ebx_2[2]
                                        var_18_2 += 1
                                        *(edx_20 + ((ecx_26 + var_c_2) << 2)) =
                                            *(edx_20 + ((j_4 + ecx_26) << 2))
                                        eax_41 = var_3c_3
                                    while (var_18_2 u< eax_41)
                                
                                var_c_2 += 1
                            
                            j_4 += 1
                        while (j_4 u< ebx_2[3])
                    
                    if (var_c_2 != ebx_2[3])
                        int32_t var_18_3 = 0
                        
                        if (eax_41 u> 0)
                            int32_t var_20_2 = 0
                            int32_t ecx_30 = var_c_2 << 2
                            
                            do
                                int32_t edx_21 = ebx_2[2]
                                int32_t esi_4
                                int32_t edi_15
                                edi_15, esi_4 = __builtin_memcpy(var_20_2 + edx_21, 
                                    edx_21 + ((ebx_2[3] * var_18_3) << 2), ecx_30 u>> 2 << 2)
                                var_18_3 += 1
                                __builtin_memcpy(edi_15, esi_4, ecx_30 & 3)
                                var_20_2 += ecx_30
                            while (var_18_3 u< eax_41)
                        
                        int32_t edx_26
                        
                        if (var_c_2 == 0)
                            edx_26 = 0
                        else
                            edx_26 = ((*ebx_2 ^ var_c_2) & 0xfffff) ^ *ebx_2
                        
                        esi = var_38
                        *ebx_2 = edx_26
                        ebx_2[3] = var_c_2
                        ebx_2[1] = eax_41 * var_c_2
                        var_8 = 1
        
        i_1 += 1
    while (i_1 u< *(esi + 0xc))
    
    if (var_24_2 != 0)
        sub_4a3f8e(esi)

int32_t result
result.b = var_8 == 0
return result

// 函数: sub_4b6303
// 地址: 0x4b6303
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg1
int32_t* esi = *(ebx + 0x100)
int32_t ecx = *esi
int32_t edi
int32_t var_b8 = edi
int32_t edi_2 = ecx & 0xfffff
void* var_20 = ebx

if (esi != 0 && ecx != 0)
    uint32_t temp0_1 = divu.dp.d(0:(esi[1]), edi_2)
    int32_t var_18_1 = 0
    int32_t result
    
    if ((ecx & 0xfff00000) != 0x50000000 && esi[3] == edi_2)
        int32_t var_2c_1 = 0
        
        if (zx.d((*(ebx + 0xc8)).w) != 0x104 && sub_4b593e(ebx, esi) != 0)
            int32_t i_7 = esi[3]
            
            if (i_7 u> 0)
                int32_t* esi_1 = esi[4]
                int32_t i
                
                do
                    if (*(*(*(ebx + 0x14) + (*esi_1 << 2)) + 0x10) == 3)
                        var_18_1 = 1
                        var_2c_1 = 1
                    
                    esi_1 = &esi_1[1]
                    i = i_7
                    i_7 -= 1
                while (i != 1)
        
        int32_t var_14_1 = 0
        int32_t var_ac[0xb]
        int32_t var_7c
        int32_t var_78
        
        if (temp0_1 u> 0)
            int32_t* var_24_1 = nullptr
            int32_t (* var_8_1)[0xb] = &var_ac
            
            do
                *var_8_1 = 0xffffffff
                int32_t* edi_4 = &(*var_8_1)[1]
                int32_t var_10_1 = 0
                *edi_4 = 0xffffffff
                void* edi_5 = &edi_4[1]
                *edi_5 = 0xffffffff
                *(edi_5 + 4) = 0xffffffff
                var_7c = 0xffffffff
                int32_t* edi_8 = &var_78
                *edi_8 = 0xffffffff
                void* edi_9 = &edi_8[1]
                *edi_9 = 0xffffffff
                *(edi_9 + 4) = 0xffffffff
                
                if (edi_2 u> 0)
                    void* ecx_3 = *(ebx + 0x100)
                    int32_t edx_5 = *(ebx + 0x14)
                    int32_t edi_12 = *(ebx + 0x10)
                    int32_t* var_28_1 = var_24_1
                    
                    do
                        void* esi_3 = *(edx_5 + (*(var_28_1 + *(ecx_3 + 8)) << 2))
                        int32_t eax_13 =
                            *(*(edx_5 + (*(*(ecx_3 + 0x10) + (var_10_1 << 2)) << 2)) + 0x10)
                        
                        if ((*(*(edi_12 + (*(esi_3 + 4) << 2)) + 5) & 1) == 0)
                            var_ac[eax_13 + (var_14_1 << 2)] = *(esi_3 + 0x10)
                        else
                            var_ac[eax_13 + (var_14_1 << 2)] = eax_13
                        
                        (&var_7c)[eax_13] = 0
                        var_10_1 += 1
                        var_28_1 = &var_28_1[1]
                    while (var_10_1 u< edi_2)
                    
                    ebx = var_20
                
                if (sub_4b58e3(var_8_1, &var_7c, 5) == 0)
                    var_18_1 = 1
                
                var_14_1 += 1
                var_8_1 = &(*var_8_1)[4]
                var_24_1 = &var_24_1[edi_2]
            while (var_14_1 u< temp0_1)
        
        int32_t esi_7 = 0
        
        if (var_18_1 == 0)
            result = sub_49f69d(ebx, *(ebx + 0x100))
        label_4b6892:
            
            if (result s>= 0)
                result = 0
                **(ebx + 0x100) = 0
        else
            int32_t j_1 = 0
            int32_t var_20_1 = 0
            int32_t var_bc_2
            int32_t var_70
            int32_t var_6c
            void var_68
            int32_t* eax_27
            
            if (edi_2 == 4)
                int32_t var_8_2 = 1
                
                while (true)
                    if (var_8_2 != 0)
                        var_7c = 0
                        int32_t* edi_13 = &var_78
                        *edi_13 = 0
                        void* edi_14 = &edi_13[1]
                        *edi_14 = 0
                        *(edi_14 + 4) = 0
                        var_6c = 0xffffffff
                        void* edi_17 = &var_68
                        *edi_17 = 0xffffffff
                        void* edi_18 = edi_17 + 4
                        *edi_18 = 0xffffffff
                        *(edi_18 + 4) = 0xffffffff
                        (&var_7c)[esi_7] = 0xffffffff
                        (&var_6c)[esi_7] = 0
                        var_8_2 = 0
                        
                        if (temp0_1 u> 0)
                            int32_t (* edi_21)[0xb] = &var_ac
                            uint32_t i_6 = temp0_1
                            uint32_t i_1
                            
                            do
                                int32_t eax_20 = sub_4b58e3(edi_21, &var_7c, 5)
                                int32_t eax_21
                                
                                if (eax_20 != 0)
                                    eax_21 = sub_4b58e3(edi_21, &var_7c, 5)
                                
                                if (eax_20 == 0 || eax_21 == 0)
                                    var_8_2 = 1
                                
                                edi_21 = &(*edi_21)[4]
                                i_1 = i_6
                                i_6 -= 1
                            while (i_1 != 1)
                        
                        if (var_2c_1 != 0 && esi_7 != 3)
                            var_8_2 = 1
                        
                        if (var_8_2 == 0)
                            break
                        
                        esi_7 += 1
                        
                        if (esi_7 u< 4)
                            continue
                    
                    int32_t i_2 = 1
                    int32_t var_10_2 = 0
                    int32_t var_5c
                    int32_t var_4c
                    int32_t var_3c
                    
                    while (i_2 != 0)
                        int32_t j = 0
                        int32_t j_2 = 0
                        
                        do
                            if (j != var_10_2)
                                var_7c = 0
                                int32_t* edi_22 = &var_78
                                *edi_22 = 0
                                void* edi_23 = &edi_22[1]
                                *edi_23 = 0
                                *(edi_23 + 4) = 0
                                var_6c = 0xffffffff
                                void* edi_26 = &var_68
                                *edi_26 = 0xffffffff
                                void* edi_27 = edi_26 + 4
                                *edi_27 = 0xffffffff
                                *(edi_27 + 4) = 0xffffffff
                                (&var_7c)[var_10_2] = 0xffffffff
                                (&var_7c)[j] = 0xffffffff
                                (&var_6c)[var_10_2] = 0
                                (&var_6c)[j] = 0
                                i_2 = 0
                                int32_t var_28_2 = 0
                                
                                if (temp0_1 u> 0)
                                    int32_t (* esi_8)[0xb] = &var_ac
                                    uint32_t k_2 = temp0_1
                                    uint32_t k
                                    
                                    do
                                        int32_t eax_23 = sub_4b58e3(esi_8, &var_7c, 5)
                                        int32_t eax_24 = sub_4b58e3(esi_8, &var_6c, 5)
                                        
                                        if (eax_23 == 0)
                                            var_28_2 = 1
                                            i_2 = 1
                                        else if (eax_24 == 0)
                                            i_2 = 1
                                        
                                        esi_8 = &(*esi_8)[4]
                                        k = k_2
                                        k_2 -= 1
                                    while (k != 1)
                                
                                if (var_2c_1 != 0)
                                    i_2 = 1
                                
                                if (i_2 == 0)
                                    j_1 = 1
                                    break
                                
                                if (var_28_2 == 0 && (var_2c_1 == 0 || var_70 != 0))
                                    var_5c = var_7c
                                    void var_58
                                    void* edi_31 = &var_58
                                    int32_t* esi_9 = &var_78
                                    *edi_31 = *esi_9
                                    void* edi_32 = edi_31 + 4
                                    void* esi_10 = &esi_9[1]
                                    *edi_32 = *esi_10
                                    *(edi_32 + 4) = *(esi_10 + 4)
                                    var_4c = 0xffffffff
                                    void var_48
                                    void* edi_35 = &var_48
                                    *edi_35 = 0xffffffff
                                    void* edi_36 = edi_35 + 4
                                    *edi_36 = 0xffffffff
                                    *(edi_36 + 4) = 0xffffffff
                                    var_3c = 0xffffffff
                                    void var_38
                                    void* edi_39 = &var_38
                                    *edi_39 = 0xffffffff
                                    void* edi_40 = edi_39 + 4
                                    *edi_40 = 0xffffffff
                                    *(edi_40 + 4) = 0xffffffff
                                    (&var_4c)[var_10_2] = 0
                                    (&var_3c)[j_2] = 0
                                    var_20_1 = 1
                            
                            j = j_2 + 1
                            j_2 = j
                        while (j u< 4)
                        
                        var_10_2 += 1
                        
                        if (var_10_2 u>= 4)
                            break
                    
                    if (j_1 != 0)
                        result = sub_4d1522(ebx, &var_7c, temp0_1, 4)
                        
                        if (result s< 0)
                            goto label_4b68bd_1
                        
                        var_bc_2 = 4
                        goto label_4b6821
                    
                    if (var_20_1 == 0)
                        goto label_4b683d
                    
                    j_1 = 1
                    result = sub_4d1522(ebx, &var_5c, temp0_1, 4)
                    
                    if (result s< 0)
                        goto label_4b68bd_1
                    
                    result = sub_4d1522(ebx, &var_4c, temp0_1, 4)
                    
                    if (result s< 0)
                        goto label_4b68bd_1
                    
                    var_bc_2 = 4
                    eax_27 = &var_3c
                    goto label_4b682a
                
                result = sub_4d1522(ebx, &var_7c, temp0_1, 4)
                
                if (result s>= 0)
                    result = sub_4d1522(ebx, &var_6c, temp0_1, 4)
                    goto label_4b6892
            else if (edi_2 != 3)
            label_4b683d:
                int32_t esi_14 = 0
                
                if (edi_2 u> 0)
                    do
                        int32_t ecx_12 = *(ebx + 0x14)
                        var_7c = 0xffffffff
                        int32_t* edi_54 = &var_78
                        *edi_54 = 0xffffffff
                        void* edi_55 = &edi_54[1]
                        *edi_55 = 0xffffffff
                        *(edi_55 + 4) = 0xffffffff
                        (&var_7c)[*(*(ecx_12 + (*(*(*(ebx + 0x100) + 0x10) + (esi_14 << 2)) << 2))
                            + 0x10)] = 0
                        result = sub_4d1522(ebx, &var_7c, temp0_1, edi_2)
                        
                        if (result s< 0)
                            return result
                        
                        esi_14 += 1
                    while (esi_14 u< edi_2)
                
                result = 0
                **(ebx + 0x100) = 0
            else
                int32_t i_5 = 0xffffffff
                
                for (int32_t i_3 = 0; i_3 u< 4; i_3 += 1)
                    if (var_ac[i_3] == 0xffffffff)
                        i_5 = i_3
                
                for (int32_t i_4 = 0; i_4 u< 4; i_4 += 1)
                    if (j_1 != 0)
                        goto label_4b6812
                    
                    int32_t esi_13 = 0
                    
                    while (j_1 == 0)
                        if (esi_13 != i_4 && esi_13 != i_5 && i_4 != i_5)
                            var_7c = 0xffffffff
                            int32_t* edi_43 = &var_78
                            *edi_43 = 0xffffffff
                            void* edi_44 = &edi_43[1]
                            *edi_44 = 0xffffffff
                            *(edi_44 + 4) = 0xffffffff
                            var_6c = 0
                            void* edi_47 = &var_68
                            *edi_47 = 0
                            void* edi_48 = edi_47 + 4
                            *edi_48 = 0
                            *(edi_48 + 4) = 0
                            (&var_7c)[i_4] = 0
                            (&var_7c)[esi_13] = 0
                            (&var_6c)[i_4] = 0xffffffff
                            (&var_6c)[esi_13] = 0xffffffff
                            (&var_6c)[i_5] = 0xffffffff
                            int32_t edi_53 = 0
                            int32_t k_1 = 0
                            
                            if (temp0_1 u> 0)
                                int32_t (* var_18_2)[0xb] = &var_ac
                                
                                while (k_1 == 0)
                                    if (sub_4b58e3(var_18_2, &var_7c, 5) == 0)
                                        k_1 = 1
                                    
                                    var_18_2 = &(*var_18_2)[4]
                                    edi_53 += 1
                                    
                                    if (edi_53 u>= temp0_1)
                                        break
                            
                            int32_t var_74
                            
                            if (var_70 == 0 && (var_7c == 0 || var_78 == 0 || var_74 == 0)
                                    && var_2c_1 != 0)
                                k_1 = 1
                            
                            if (k_1 == 0)
                                j_1 = 1
                        
                        esi_13 += 1
                        
                        if (esi_13 u>= 4)
                            break
                
                if (j_1 == 0)
                    goto label_4b683d
                
            label_4b6812:
                result = sub_4d1522(ebx, &var_7c, temp0_1, 3)
                
                if (result s>= 0)
                    var_bc_2 = 3
                label_4b6821:
                    eax_27 = &var_6c
                label_4b682a:
                    result = sub_4d1522(ebx, eax_27, temp0_1, var_bc_2)
                    
                    if (result s>= 0)
                        if (j_1 == 0)
                            goto label_4b683d
                        
                        result = 0
                        **(ebx + 0x100) = 0
        
    label_4b68bd:
        return result
    
    result = sub_49f69d(ebx, esi)
    
    if (result s< 0)
    label_4b68bd_1:
        return result
    
    **(ebx + 0x100) = 0

return 0

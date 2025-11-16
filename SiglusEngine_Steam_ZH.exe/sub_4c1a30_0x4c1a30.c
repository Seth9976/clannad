// 函数: sub_4c1a30
// 地址: 0x4c1a30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* const var_30 = nullptr
int32_t* var_28 = nullptr
int32_t edi
int32_t var_dc = edi
int32_t eax_2 = *arg1[0x40] & 0xfff00000

if (eax_2 == 0)
    return nullptr

int32_t* eax_4 = arg1[0x40]
int32_t ecx = *eax_4
int32_t eax_5 = eax_4[1]
int32_t i_22 = ecx & 0xfffff
int32_t edx_1 = 0
uint32_t temp0_1 = divu.dp.d(edx_1:eax_5, i_22)
uint32_t var_34_1 = modu.dp.d(edx_1:eax_5, i_22)
int32_t ecx_2

if ((ecx & 0xfff00000) == 0x50000000 || eax_2 == 0x50200000 || eax_2 == 0x70800000)
    ecx_2 = 1
else
    ecx_2 = 0

int32_t var_8_1 = 0
void** result

if (eax_2 == 0x60500000 || eax_2 == 0x60a00000 || eax_2 == 0x60f00000 || eax_2 == 0x11000000)
    result = sub_49f69d(arg1, arg1[0x40])
    
    if (result s>= 0)
        *arg1[0x40] = 0
    label_4c2634:
        
        if (var_30 == 0)
            goto label_4c2644
        
        sub_46cb59(var_30, 1)
    label_4c2644:
        int32_t* ecx_87 = var_28
        
        if (ecx_87 != 0)
            sub_46cb59(ecx_87, 1)
else
    int32_t var_d4[0x10]
    
    if (ecx_2 == 0)
        int32_t var_c
        int32_t var_c_1 = var_c & ecx_2
        
        if (temp0_1 u> ecx_2)
            int32_t var_18
            int32_t var_18_1 = var_18 & ecx_2
            int32_t (* var_2c_1)[0x10] = &var_d4
            
            do
                *var_2c_1 = 0xffffffff
                int32_t* edi_2 = &(*var_2c_1)[1]
                *edi_2 = 0xffffffff
                void* edi_3 = &edi_2[1]
                *edi_3 = 0xffffffff
                *(edi_3 + 4) = 0xffffffff
                
                if (i_22 u> 0)
                    void* eax_8 = arg1[0x40]
                    int32_t ecx_3 = arg1[5]
                    int32_t* var_1c_1 = *(eax_8 + 0x10)
                    int32_t* eax_10 = *(eax_8 + 8) + var_18_1
                    int32_t i_16 = i_22
                    int32_t i
                    
                    do
                        int32_t edi_9 = *(*(ecx_3 + (*var_1c_1 << 2)) + 0x10)
                        int32_t esi_6 = *(*(ecx_3 + (*eax_10 << 2)) + 0x10)
                        var_1c_1 = &var_1c_1[1]
                        eax_10 = &eax_10[1]
                        i = i_16
                        i_16 -= 1
                        var_d4[edi_9 + (var_c_1 << 2)] = esi_6
                    while (i != 1)
                
                var_c_1 += 1
                var_2c_1 = &(*var_2c_1)[4]
                var_18_1 += i_22 << 2
            while (var_c_1 u< temp0_1)
        
        if ((*(*(arg1[4] + (*(*(arg1[5] + (**(arg1[0x40] + 0x10) << 2)) + 4) << 2)) + 4) & 0x20)
                == 0)
            int32_t var_c_2 = 0
            
            if (temp0_1 u> 0)
                int32_t (* var_18_3)[0x10] = &var_d4
            label_4c1cd3:
                void* edi_16 = &data_b598e0
                
                for (int32_t i_1 = 0; i_1 u< 0x80; )
                    if (sub_4c16e2(var_18_3, edi_16) != 0)
                        var_c_2 += 1
                        var_18_3 = &(*var_18_3)[4]
                        
                        if (var_c_2 u< temp0_1)
                            goto label_4c1cd3
                        
                        goto label_4c1d02
                    
                    i_1 += 0x10
                    edi_16 += 0x10
                
                var_8_1 = 1
            
            goto label_4c1d02
        
        void* eax_20 = arg1[0x40]
        int32_t ecx_6 = arg1[5]
        void* eax_23 = *(ecx_6 + (**(eax_20 + 8) << 2))
        int32_t eax_25 = (*(*arg1 + 0x54))(*(*(ecx_6 + (**(eax_20 + 0x10) << 2)) + 0x6c))
        int32_t var_84
        void var_80
        
        if (eax_25 == 0xffff)
        label_4c1d02:
            int32_t* eax_38 = arg1[0x40]
            int32_t ecx_15 = *eax_38 & 0xfff00000
            
            if (ecx_15 != 0x10d00000 && ecx_15 != 0x10e00000)
                goto label_4c1eac
            
            int32_t i_18 = eax_38[1]
            int32_t esi_7 = 0
            
            if (i_18 u> 0)
                int32_t* ecx_16 = arg1[5]
                int32_t* eax_39 = eax_38[2]
                int32_t i_2
                
                do
                    if ((*(ecx_16[*eax_39] + 0x3e) & 0x1f) != 0)
                        esi_7 = 1
                    
                    eax_39 = &eax_39[1]
                    i_2 = i_18
                    i_18 -= 1
                while (i_2 != 1)
                
                if (esi_7 != 0)
                    int32_t i_20 = arg1[2]
                    int32_t esi_8 = 0
                    
                    if (i_20 u> 0)
                        int32_t i_19 = i_20
                        int32_t i_3
                        
                        do
                            void* eax_40 = *ecx_16
                            
                            if (arg1[0x22] == *(eax_40 + 4))
                                int32_t eax_41 = *(eax_40 + 0xc)
                                
                                if (eax_41 u>= esi_8)
                                    esi_8 = eax_41 + 1
                            
                            ecx_16 = &ecx_16[1]
                            i_3 = i_19
                            i_19 -= 1
                        while (i_3 != 1)
                    
                    int32_t var_94[0x3]
                    
                    for (int32_t i_4 = 0; i_4 u< 4; i_4 += 1)
                        int32_t* var_e4_8 = ecx_16
                        int32_t* var_e8_7 = ecx_16
                        var_e8_7.q = fconvert.d(float.t(0))
                        int32_t eax_42
                        eax_42, ecx_16 = sub_49f544(arg1, arg1[0x22], esi_8, i_4, var_e8_7)
                        var_94[i_4] = eax_42
                        
                        if (eax_42 == 0xffffffff)
                            goto label_4c1dd6
                    
                    void* eax_43 = sub_49ec23(0x74)
                    
                    if (eax_43 == 0)
                        var_28 = nullptr
                    else
                        var_28 = sub_49e789(eax_43)
                    
                    if (var_28 == 0)
                    label_4c1dd6:
                        result = 0x8007000e
                        goto label_4c2634
                    
                    void* ecx_19 = arg1[0x40]
                    int32_t eax_46 = *(ecx_19 + 4)
                    result = sub_49ec6e(var_28, (eax_46 & 0xfffff) | 0x10000000, eax_46, 
                        *(ecx_19 + 0xc), 0)
                    
                    if (result s< 0)
                        goto label_4c2634
                    
                    result = sub_49e7bf(var_28, arg1[0x40])
                    
                    if (result s< 0)
                        goto label_4c2634
                    
                    int32_t* edx_9 = var_28
                    int32_t ecx_23 = *(arg1[0x40] + 0xc) << 2
                    int32_t esi_9
                    int32_t edi_20
                    edi_20, esi_9 = __builtin_memcpy(edx_9[4], &var_94, ecx_23 u>> 2 << 2)
                    __builtin_memcpy(edi_20, esi_9, ecx_23 & 3)
                    void* eax_53 = arg1[0x40]
                    int32_t ecx_28 = *(eax_53 + 4) << 2
                    int32_t esi_11
                    int32_t edi_22
                    edi_22, esi_11 = __builtin_memcpy(edx_9[2], *(eax_53 + 8), ecx_28 u>> 2 << 2)
                    __builtin_memcpy(edi_22, esi_11, ecx_28 & 3)
                    void* eax_55 = arg1[0x40]
                    int32_t ecx_33 = *(eax_55 + 4) << 2
                    int32_t esi_12
                    int32_t edi_24
                    edi_24, esi_12 = __builtin_memcpy(*(eax_55 + 8), &var_94, ecx_33 u>> 2 << 2)
                    __builtin_memcpy(edi_24, esi_12, ecx_33 & 3)
                    result = sub_49f431(arg1, edx_9)
                    
                    if (result s< 0)
                        goto label_4c2634
                    
                    var_28 = nullptr
            
        label_4c1eac:
            
            if (var_8_1 == 0 || (arg1[0x1b].b & 2) == 0)
                result = sub_49f69d(arg1, arg1[0x40])
                
                if (result s< 0)
                    goto label_4c2634
                
                goto label_4c2409
            
            int32_t j = 0
            int32_t var_20_2 = 0
            int32_t var_e4_15
            int32_t var_74
            void var_70
            int32_t* eax_71
            
            if (i_22 != 4)
                if (i_22 != 3)
                label_4c221e:
                    int32_t esi_19 = 0
                    
                    if (i_22 u> 0)
                        do
                            int32_t ecx_47 = arg1[5]
                            var_84 = 0xffffffff
                            void* edi_64 = &var_80
                            *edi_64 = 0xffffffff
                            void* edi_65 = edi_64 + 4
                            *edi_65 = 0xffffffff
                            *(edi_65 + 4) = 0xffffffff
                            (&var_84)[*(*(ecx_47 + (*(*(arg1[0x40] + 0x10) + (esi_19 << 2)) << 2))
                                + 0x10)] = 0
                            result = sub_4d1522(arg1, &var_84, temp0_1, i_22)
                            
                            if (result s< 0)
                                goto label_4c2634
                            
                            esi_19 += 1
                        while (esi_19 u< i_22)
                else
                    int32_t i_13 = 0xffffffff
                    
                    for (int32_t i_5 = 0; i_5 u< 4; i_5 += 1)
                        if (var_d4[i_5] == 0xffffffff)
                            i_13 = i_5
                    
                    for (int32_t i_6 = 0; i_6 u< 4; i_6 += 1)
                        if (j != 0)
                            goto label_4c21f4
                        
                        int32_t esi_18 = 0
                        
                        while (j == 0)
                            if (esi_18 != i_6 && esi_18 != i_13 && i_6 != i_13)
                                var_84 = 0xffffffff
                                void* edi_55 = &var_80
                                *edi_55 = 0xffffffff
                                void* edi_56 = edi_55 + 4
                                *edi_56 = 0xffffffff
                                *(edi_56 + 4) = 0xffffffff
                                var_74 = 0
                                void* edi_59 = &var_70
                                *edi_59 = 0
                                void* edi_60 = edi_59 + 4
                                *edi_60 = 0
                                *(edi_60 + 4) = 0
                                int32_t edi_63 = 0
                                (&var_84)[i_6] = 0
                                (&var_84)[esi_18] = 0
                                (&var_74)[i_6] = 0xffffffff
                                (&var_74)[esi_18] = 0xffffffff
                                (&var_74)[i_13] = 0xffffffff
                                int32_t var_c_4 = 0
                                
                                if (temp0_1 u> 0)
                                    int32_t (* var_18_4)[0x10] = &var_d4
                                    
                                    do
                                        if (var_c_4 != 0)
                                            goto label_4c21c7
                                        
                                        if (sub_4c1713(var_18_4, &var_84) == 0)
                                            var_c_4 = 1
                                        
                                        var_18_4 = &(*var_18_4)[4]
                                        edi_63 += 1
                                    while (edi_63 u< temp0_1)
                                
                                if (temp0_1 u<= 0 || var_c_4 == 0)
                                    j = 1
                            
                        label_4c21c7:
                            esi_18 += 1
                            
                            if (esi_18 u>= 4)
                                break
                    
                    if (j == 0)
                        goto label_4c221e
                    
                label_4c21f4:
                    result = sub_4d1522(arg1, &var_84, temp0_1, 3)
                    
                    if (result s< 0)
                        goto label_4c2634
                    
                    var_e4_15 = 3
                label_4c2200:
                    eax_71 = &var_74
                label_4c220e:
                    result = sub_4d1522(arg1, eax_71, temp0_1, var_e4_15)
                    
                    if (result s< 0)
                        goto label_4c2634
                    
                    if (j == 0)
                        goto label_4c221e
                
            label_4c226a:
                
                if (var_30 == 0)
                    goto label_4c2409
                
                result = sub_49f431(arg1, var_30)
                
                if (result s< 0)
                    goto label_4c2634
                
                var_30 = nullptr
            label_4c2409:
                *arg1[0x40] = 0
                result = nullptr
                goto label_4c2634
            
            int32_t var_c_3 = 1
            int32_t esi_13 = 0
            
            while (true)
                if (var_c_3 != 0)
                    var_84 = 0
                    void* edi_25 = &var_80
                    *edi_25 = 0
                    void* edi_26 = edi_25 + 4
                    *edi_26 = 0
                    *(edi_26 + 4) = 0
                    var_74 = 0xffffffff
                    void* edi_29 = &var_70
                    *edi_29 = 0xffffffff
                    void* edi_30 = edi_29 + 4
                    *edi_30 = 0xffffffff
                    *(edi_30 + 4) = 0xffffffff
                    (&var_84)[esi_13] = 0xffffffff
                    (&var_74)[esi_13] = 0
                    var_c_3 = 0
                    
                    if (temp0_1 u<= 0)
                        break
                    
                    int32_t (* edi_33)[0x10] = &var_d4
                    uint32_t i_17 = temp0_1
                    uint32_t i_7
                    
                    do
                        int32_t eax_59 = sub_4c1713(edi_33, &var_84)
                        int32_t eax_60
                        
                        if (eax_59 != 0)
                            eax_60 = sub_4c1713(edi_33, &var_84)
                        
                        if (eax_59 == 0 || eax_60 == 0)
                            var_c_3 = 1
                        
                        edi_33 = &(*edi_33)[4]
                        i_7 = i_17
                        i_17 -= 1
                    while (i_7 != 1)
                    
                    if (var_c_3 == 0)
                        break
                    
                    esi_13 += 1
                    
                    if (esi_13 u< 4)
                        continue
                
                int32_t var_1c_2 = 0
                int32_t i_8 = 1
                int32_t var_64
                int32_t var_54
                int32_t var_44
                
                while (i_8 != 0)
                    int32_t j_1 = 0
                    int32_t j_2 = 0
                    
                    do
                        if (j_1 != var_1c_2)
                            var_84 = 0
                            void* edi_34 = &var_80
                            *edi_34 = 0
                            void* edi_35 = edi_34 + 4
                            *edi_35 = 0
                            *(edi_35 + 4) = 0
                            var_74 = 0xffffffff
                            void* edi_38 = &var_70
                            *edi_38 = 0xffffffff
                            void* edi_39 = edi_38 + 4
                            *edi_39 = 0xffffffff
                            *(edi_39 + 4) = 0xffffffff
                            (&var_84)[var_1c_2] = 0xffffffff
                            (&var_84)[j_1] = 0xffffffff
                            (&var_74)[var_1c_2] = 0
                            (&var_74)[j_1] = 0
                            i_8 = 0
                            int32_t var_2c_2 = 0
                            
                            if (temp0_1 u> 0)
                                int32_t (* edi_42)[0x10] = &var_d4
                                uint32_t k_1 = temp0_1
                                uint32_t k
                                
                                do
                                    int32_t eax_64 = sub_4c1713(edi_42, &var_84)
                                    int32_t eax_65 = sub_4c1713(edi_42, &var_74)
                                    
                                    if (eax_64 == 0)
                                        var_2c_2 = 1
                                        i_8 = 1
                                    else if (eax_65 == 0)
                                        i_8 = 1
                                    
                                    edi_42 = &(*edi_42)[4]
                                    k = k_1
                                    k_1 -= 1
                                while (k != 1)
                            
                            if (temp0_1 u<= 0 || i_8 == 0)
                                j = 1
                                break
                            
                            if (var_2c_2 == 0)
                                var_64 = var_84
                                void var_60
                                void* edi_43 = &var_60
                                void* esi_14 = &var_80
                                *edi_43 = *esi_14
                                void* edi_44 = edi_43 + 4
                                void* esi_15 = esi_14 + 4
                                *edi_44 = *esi_15
                                *(edi_44 + 4) = *(esi_15 + 4)
                                var_54 = 0xffffffff
                                void var_50
                                void* edi_47 = &var_50
                                *edi_47 = 0xffffffff
                                void* edi_48 = edi_47 + 4
                                *edi_48 = 0xffffffff
                                *(edi_48 + 4) = 0xffffffff
                                var_44 = 0xffffffff
                                void var_40
                                void* edi_51 = &var_40
                                *edi_51 = 0xffffffff
                                void* edi_52 = edi_51 + 4
                                *edi_52 = 0xffffffff
                                *(edi_52 + 4) = 0xffffffff
                                (&var_54)[var_1c_2] = 0
                                (&var_44)[j_2] = 0
                                var_20_2 = 1
                                j_1 = j_2
                        
                        j_1 += 1
                        j_2 = j_1
                    while (j_1 u< 4)
                    
                    var_1c_2 += 1
                    
                    if (var_1c_2 u>= 4)
                        break
                
                if (j != 0)
                    result = sub_4d1522(arg1, &var_84, temp0_1, 4)
                    
                    if (result s< 0)
                        goto label_4c2634
                    
                    var_e4_15 = 4
                    goto label_4c2200
                
                if (var_20_2 == 0)
                    goto label_4c221e
                
                j = 1
                result = sub_4d1522(arg1, &var_64, temp0_1, 4)
                
                if (result s< 0)
                    goto label_4c2634
                
                result = sub_4d1522(arg1, &var_54, temp0_1, 4)
                
                if (result s< 0)
                    goto label_4c2634
                
                var_e4_15 = 4
                eax_71 = &var_44
                goto label_4c220e
            
            result = sub_4d1522(arg1, &var_84, temp0_1, 4)
            
            if (result s< 0)
                goto label_4c2634
            
            result = sub_4d1522(arg1, &var_74, temp0_1, 4)
            
            if (result s< 0)
                goto label_4c2634
            
            goto label_4c226a
        
        int32_t eax_29
        
        if (eax_25 != 0xb)
            if (eax_25 != 0xd)
                if ((*(eax_23 + 0x3e) & 0x1f) == 0)
                    goto label_4c1c4b
                
                goto label_4c1c3c
            
            int32_t i_9 = 0
            int32_t var_14_1 = 0
            void* edi_11 = &data_b598e0
            
            do
                if (sub_4c16e2(&var_d4, edi_11) != 0)
                    var_14_1 = 1
                    break
                
                i_9 += 0x10
                edi_11 += 0x10
            while (i_9 u< 0x40)
            
            eax_29.b = var_14_1 == 0
            var_8_1 = eax_29
        else
            int32_t eax_26 = sub_4c16e2(&var_d4, 0xb59920)
            int32_t eax_27 = neg.d(eax_26)
            eax_29 = sbb.d(eax_27, eax_27, eax_26 != 0) + 1
            var_8_1 = eax_29
        
        if (eax_29 != 0 || (*(eax_23 + 0x3e) & 0x1f) != 0)
        label_4c1c3c:
            result = sub_4c1911(arg1, &var_30, i_22)
            
            if (result s< 0)
                goto label_4c2634
            
            goto label_4c1c4b
        
    label_4c1c4b:
        var_84 = 0
        void* edi_12 = &var_80
        *edi_12 = 0
        void* edi_13 = edi_12 + 4
        *edi_13 = 0
        *(edi_13 + 4) = 0
        int32_t eax_33 = sub_4c1713(&var_d4, &var_84)
        
        if (eax_33 == 0 && (eax_25 != 0xd || var_d4[0] != eax_33))
            goto label_4c1d02
        
        result = sub_4d1522(arg1, &var_84, temp0_1, i_22)
        
        if (result s< 0)
            goto label_4c2634
        
        *arg1[0x40] = 0
        
        if (var_30 != 0)
            result = sub_49f431(arg1, var_30)
            
            if (result s< 0)
                goto label_4c2634
    else if (eax_2 == 0x50200000 || eax_2 == 0x70800000)
        result = sub_49f69d(arg1, arg1[0x40])
        
        if (result s>= 0)
            *arg1[0x40] = 0
    else
        if (*(*(arg1[5] + (**(arg1[0x40] + 0x10) << 2)) + 4) == arg1[0x21])
            sub_4a4100(arg1, *(arg1[0x40] + 0x3c), 0x12d1, 
                "internal error: write to output with instruction other than mov")
            return 0x80004005
        
        int32_t var_c_5 = 0
        
        if (temp0_1 u> 0)
            int32_t var_2c_3 = 0
            int32_t eax_88 = i_22 << 2
            int32_t (* var_8_2)[0x10] = &var_d4
        label_4c2321:
            int32_t (* edx_12)[0x10] = var_8_2
            *edx_12 = 0xffffffff
            int32_t* edi_69 = &(*edx_12)[1]
            *edi_69 = 0xffffffff
            void* edi_70 = &edi_69[1]
            *edi_70 = 0xffffffff
            *(edi_70 + 4) = 0xffffffff
            
            if (i_22 u> 0)
                int32_t* eax_91 = *(arg1[0x40] + 8) + var_2c_3
                int32_t i_14 = i_22
                int32_t i_10
                
                do
                    *edx_12 = *(*(arg1[5] + (*eax_91 << 2)) + 0x10)
                    eax_91 = &eax_91[1]
                    edx_12 = &(*edx_12)[1]
                    i_10 = i_14
                    i_14 -= 1
                while (i_10 != 1)
            
            int32_t i_11 = 0
            void* edi_74 = &data_b598e0
            
            do
                if (sub_4c16e2(var_8_2, edi_74) != 0)
                    var_c_5 += 1
                    var_2c_3 += eax_88
                    var_8_2 = &(*var_8_2)[4]
                    
                    if (var_c_5 u< temp0_1)
                        goto label_4c2321
                    
                    goto label_4c23f9
                
                i_11 += 0x10
                edi_74 += 0x10
            while (i_11 u< 0x80)
            
            if ((arg1[0x1b].b & 2) == 0)
                goto label_4c23f9
            
            result = sub_4c1769(arg1, &var_28, i_22, temp0_1)
            
            if (result s< 0)
                goto label_4c2644
            
            if (var_28 != 0)
                result = sub_49f431(arg1, var_28)
                
                if (result s< 0)
                    goto label_4c2644
                
                var_28 = nullptr
            
            void* eax_95 = sub_49ec23(0x74)
            int32_t* esi_20
            
            if (eax_95 == 0)
                esi_20 = nullptr
            else
                esi_20 = sub_49e789(eax_95)
            
            if (esi_20 == 0)
            label_4c25ba:
                result = 0x8007000e
                goto label_4c2644
            
            int32_t i_21 = arg1[2]
            int32_t var_8_3 = 0
            
            if (i_21 u> 0)
                int32_t* ecx_62 = arg1[5]
                int32_t i_15 = i_21
                int32_t i_12
                
                do
                    void* eax_101 = *ecx_62
                    char edx_14 = (*(*(arg1[4] + (*(eax_101 + 4) << 2)) + 4)).b
                    
                    if ((edx_14 & 1) != 0 && (edx_14 & 2) != 0)
                        int32_t eax_103 = *(eax_101 + 0xc) + 1
                        
                        if (var_8_3 u< eax_103)
                            var_8_3 = eax_103
                    
                    ecx_62 = &ecx_62[1]
                    i_12 = i_15
                    i_15 -= 1
                while (i_12 != 1)
            
            result = sub_49ec6e(esi_20, 0x20500001, 2, 1, 0)
            
            if (result s< 0)
                goto label_4c2644
            
            result = sub_49e7bf(esi_20, arg1[0x40])
            
            if (result s< 0)
                goto label_4c2644
            
            int32_t* var_e4_25 = esi_20
            int32_t* var_e8_24 = esi_20
            var_e8_24.q = fconvert.d(float.t(0))
            int32_t eax_106 = sub_49f544(arg1, arg1[0x22], var_8_3, 0, var_e8_24)
            int32_t var_8_4 = var_8_3 + 1
            int32_t var_20_3 = eax_106
            
            if (eax_106 == 0xffffffff)
                goto label_4c25ba
            
            *esi_20[4] = eax_106
            *esi_20[2] = **(arg1[0x40] + 8)
            *(esi_20[2] + 4) = *(eax_88 + *(arg1[0x40] + 8))
            result = sub_49f431(arg1, esi_20)
            
            if (result s< 0)
                goto label_4c2644
            
            int32_t var_1c_3 = 1
            
            if (i_22 u<= 1)
                goto label_4c2409
            
            int32_t* var_14_3 = eax_88 + 4
            
            while (true)
                void* eax_116 = sub_49ec23(0x74)
                int32_t* esi_21
                
                if (eax_116 == 0)
                    esi_21 = nullptr
                else
                    esi_21 = sub_49e789(eax_116)
                
                if (esi_21 == 0)
                    break
                
                result = sub_49ec6e(esi_21, 0x70300001, 3, 1, 0)
                
                if (result s< 0)
                    goto label_4c2644
                
                result = sub_49e7bf(esi_21, arg1[0x40])
                
                if (result s< 0)
                    goto label_4c2644
                
                *esi_21[2] = *(*(arg1[0x40] + 8) + (var_1c_3 << 2))
                *(esi_21[2] + 4) = *(var_14_3 + *(arg1[0x40] + 8))
                *(esi_21[2] + 8) = var_20_3
                int32_t eax_122
                
                if (var_1c_3 == i_22 - 1)
                    eax_122 = **(arg1[0x40] + 0x10)
                else
                    int32_t var_e4_28 = i_22 - 1
                    int32_t var_e8_25 = i_22 - 1
                    var_e8_25.q = fconvert.d(float.t(0))
                    eax_122 = sub_49f544(arg1, arg1[0x22], var_8_4, 0, var_e8_25)
                    var_8_4 += 1
                    var_20_3 = eax_122
                    
                    if (eax_122 == 0xffffffff)
                        break
                
                *esi_21[4] = eax_122
                result = sub_49f431(arg1, esi_21)
                
                if (result s< 0)
                    goto label_4c2644
                
                var_1c_3 += 1
                var_14_3 = &var_14_3[1]
                
                if (var_1c_3 u>= i_22)
                    goto label_4c2409
            
            goto label_4c25ba
        
    label_4c23f9:
        result = sub_49f69d(arg1, arg1[0x40])
        
        if (result s>= 0)
            goto label_4c2409

return result

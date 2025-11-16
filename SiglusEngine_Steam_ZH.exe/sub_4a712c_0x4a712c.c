// 函数: sub_4a712c
// 地址: 0x4a712c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_5c = edi
void* ebx = arg1
void* var_1c = ebx
int32_t eax_1 = *arg2
int32_t eax_2 = *(ebx + 0x14)
int32_t i_1 = *(*(eax_2 + (arg4 << 2)) + 0x30)
int32_t i = *(*(eax_2 + (arg5 << 2)) + 0x30)
int32_t* esi_1 = *(eax_2 + (arg3 << 2))
int32_t* ecx_2 = *(eax_2 + (i_1 << 2))
int32_t* edx_2 = *(eax_2 + (i << 2))
int16_t eax_5 = (*(*(*(ebx + 0x10) + (esi_1[1] << 2)) + 4)).w

if ((eax_5.b & 1) == 0 || (eax_5:1.b & 0x10) != 0)
    return 

int32_t ecx_3 = *ecx_2
int32_t edx_3 = *edx_2
int32_t* edi_1 = esi_1
int32_t eax_7 = ecx_3 & 0x1f
int32_t esi_4 = edx_3 & 0x1f
int32_t eax_8 = *edi_1
int32_t esi_6 = eax_8 & 0x40

if ((eax_8 & 0xe000000) == 0)
    int32_t esi_8 = eax_1 & 0xfff00000
    
    if (esi_8 == 0x20000000 || esi_8 == 0x20100000 || esi_8 == 0x20400000 || esi_8 == 0x20700000
            || esi_8 == 0x20800000 || esi_8 == 0x20900000)
        int32_t edx_4 = edx_3 | ecx_3
        
        if ((0x8000000 & edx_4) != 0)
            *edi_1 = eax_8 | 0x8000000
        else if ((&data_4000000 & edx_4) != 0)
            *edi_1 = eax_8 | &data_4000000
        else if ((&data_2000000 & edx_4) != 0)
            *edi_1 = eax_8 | &data_2000000

if ((((*edx_2).b | (*ecx_2).b) & 0x40) != 0)
    int32_t eax_14 = eax_1 & 0xfff00000
    
    if (eax_14 == 0x20700000 || eax_14 == 0x20800000 || eax_14 == 0x20900000)
        *edi_1 |= 0x40
    
    if (eax_14 == 0x20600000 || eax_14 == 0x20000000 || eax_14 == 0x20100000 || eax_14 == 0x20400000
            || eax_14 == 0x20500000)
        *edi_1 |= 0x40

int32_t eax_16 = eax_1 & 0xfff00000

if (eax_16 == 0x20500000)
    *edi_1 |= esi_4 & eax_7 & 3
    int32_t edx_8 = eax_7 & 4
    
    if (edx_8 != 0 && (esi_4.b & 4) != 0)
        *edi_1 |= 4
    else if ((eax_7.b & 8) != 0 && (esi_4.b & 8) != 0)
        *edi_1 |= 4
    
    if (edx_8 != 0 && (esi_4.b & 8) != 0)
        *edi_1 |= 8
    else if ((eax_7.b & 8) != 0 && (esi_4.b & 4) != 0)
        *edi_1 |= 8
    
    int32_t* eax_32 = edx_2
    
    if (ecx_2 != eax_32)
        int32_t ecx_8 = *(ebx + 0x10)
        
        if ((*(*(ecx_8 + (ecx_2[1] << 2)) + 4) & 2) == 0)
            goto label_4a73b6
        
        int32_t* eax_35 = *(*(ebx + 0x18) + (ecx_2[0x12] << 2))
        bool cond:11_1
        
        if ((*eax_35 & 0xfff00000) != 0x10100000)
            eax_32 = edx_2
        label_4a73b6:
            
            if ((*(*(ecx_8 + (eax_32[1] << 2)) + 4) & 2) != 0)
                int32_t* eax_39 = *(*(ebx + 0x18) + (eax_32[0x12] << 2))
                
                if ((*eax_39 & 0xfff00000) == 0x10100000)
                    int32_t ecx_14 = 0
                    
                    if (0 u< eax_39[3])
                        int32_t* edx_17 = eax_39[4]
                        
                        while (*edx_17 != i)
                            ecx_14 += 1
                            edx_17 = &edx_17[1]
                            
                            if (ecx_14 u>= eax_39[3])
                                break
                        
                        if (ecx_14 u< eax_39[3])
                            cond:11_1 = *(eax_39[2] + (ecx_14 << 2)) != i_1
                            goto label_4a73f9
        else
            int32_t ecx_9 = 0
            
            if (0 u< eax_35[3])
                int32_t* edx_15 = eax_35[4]
                
                while (*edx_15 != i_1)
                    ecx_9 += 1
                    edx_15 = &edx_15[1]
                    
                    if (ecx_9 u>= eax_35[3])
                        break
                
                if (ecx_9 u< eax_35[3])
                    cond:11_1 = *(eax_35[2] + (ecx_9 << 2)) != i
                label_4a73f9:
                    
                    if (not(cond:11_1))
                        *edi_1 |= 8
    else
        *edi_1 |= 4
else if (eax_16 == 0x20700000 || eax_16 == 0x20800000 || eax_16 == 0x20900000)
    *edi_1 |= esi_4 & eax_7

if (eax_16 == 0x20400000)
    *edi_1 |= esi_4 & eax_7 & 0xe
else if (eax_16 == 0x20000000)
    *edi_1 |= ((eax_7 | 8) & esi_4) | (eax_7 & 8)
else if (eax_16 == 0x20100000)
    *edi_1 |= ((eax_7 | 4) & esi_4) | (eax_7 & 4)
else if (eax_16 == 0x20200000 || eax_16 == 0x20300000)
    *edi_1 |= 0x17

int32_t var_64_1
int32_t eax_43

if (esi_6 == 0)
    if ((eax_7.b & 4) == 0 || (esi_4.b & 8) == 0)
    label_4a745c:
        
        if ((eax_7.b & 8) == 0 || (esi_4.b & 4) == 0)
            goto label_4a747d
        
        if (eax_16 == 0x20000000)
            goto label_4a744c
        
        if (eax_16 == 0x20100000)
            goto label_4a7454
        
        goto label_4a747d
    
    if (eax_16 == 0x20000000)
    label_4a7454:
    label_4a7b91:
        edi_1[0xc] = i
    else if (eax_16 == 0x20100000)
    label_4a744c:
    label_4a7b91_1:
        edi_1[0xc] = i_1
    else
        long double x87_r7_1
        
        if (eax_16 != 0x20200000)
            if (eax_16 != 0x20300000)
                goto label_4a745c
            
            x87_r7_1 = float.t(1)
            goto label_4a7432
        
        x87_r7_1 = float.t(0)
    label_4a7432:
        int32_t var_60_1 = 0
        var_64_1 = 0
        var_64_1.q = fconvert.d(x87_r7_1)
        int32_t var_68_1 = 0
        int32_t var_6c_1 = 0
    label_4a743e:
        eax_43 = sub_49f544(ebx, *(ebx + 0x78), 0, 0, var_64_1)
    label_4a7b91_2:
        edi_1[0xc] = eax_43
    
    return 

label_4a747d:
int32_t esi_11 = *(ebx + 0x10)
int32_t ecx_16 = *(*(esi_11 + (ecx_2[1] << 2)) + 4)
int32_t var_38_2 = ecx_16
int32_t ecx_17 = ecx_16 & 0x100
long double x87_r7_2

if (ecx_17 != 0 && ecx_2[2] == 0xffffffff && (*(*(esi_11 + (edx_2[1] << 2)) + 4) & 0x100) != 0
        && edx_2[2] == 0xffffffff)
    x87_r7_2 = fconvert.t(*(ecx_2 + 0x20))
    double var_50_1 = fconvert.d(fconvert.t(*(edx_2 + 0x20)))
    int32_t eax_47
    
    switch (eax_16)
        case 0x20000000
            long double temp1_1 = fconvert.t(var_50_1)
            x87_r7_2 - temp1_1
            eax_47.w = (x87_r7_2 < temp1_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe | 0x3800
            bool p_3 = unimplemented  {test ah, 0x5}
            
            if (not(p_3))
                goto label_4a755f
            
        label_4a755c:
            x87_r7_2 = fconvert.t(var_50_1)
        label_4a755f:
            int32_t var_60_2 = ecx_17
            var_64_1 = ecx_17
            var_64_1.q = fconvert.d(x87_r7_2)
        label_4a79a3:
            int32_t var_68_2 = 0
            int32_t var_6c_2 = 0
            goto label_4a743e
        case 0x20100000
            long double temp2_1 = fconvert.t(var_50_1)
            x87_r7_2 - temp2_1
            eax_47.w = (x87_r7_2 < temp2_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_2, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp2_1 ? 1 : 0) << 0xe | 0x3800
            bool p_2 = unimplemented  {test ah, 0x5}
            
            if (p_2)
                goto label_4a755f
            
            goto label_4a755c
        case 0x20200000
            long double temp3_1 = fconvert.t(var_50_1)
            x87_r7_2 - temp3_1
            eax_47.w = (x87_r7_2 < temp3_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_2, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp3_1 ? 1 : 0) << 0xe
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (p_1)
                x87_r7_2 = float.t(0)
                goto label_4a755f
            
            x87_r7_2 = float.t(1)
            goto label_4a755f
        case 0x20300000
            long double temp5_1 = fconvert.t(var_50_1)
            x87_r7_2 - temp5_1
            eax_47.w = (x87_r7_2 < temp5_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_2, temp5_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp5_1 ? 1 : 0) << 0xe
            
            if ((eax_47:1.b & 1) == 0)
                x87_r7_2 = float.t(1)
                goto label_4a755f
            
            x87_r7_2 = float.t(0)
            goto label_4a755f
        case 0x20400000
            x87_r7_2 = x87_r7_2 + fconvert.t(var_50_1)
            goto label_4a755f
        case 0x20500000
            x87_r7_2 = x87_r7_2 * fconvert.t(var_50_1)
            goto label_4a755f
        case 0x20600000
            __fpatan(fconvert.t(var_50_1), x87_r7_2)
            goto label_4a755f
else
    int32_t* eax_48
    
    if (esi_6 != 0)
        eax_48 = edx_2
    label_4a78a1:
        int32_t ecx_26
        
        if (ecx_2 != eax_48)
        label_4a78eb:
            ecx_26 = 0
            
            if (esi_6 == 0)
                int64_t var_50
                
                if (eax_16 == 0x20400000)
                    if ((*(*(esi_11 + (eax_48[1] << 2)) + 4) & 2) != 0)
                        int32_t* eax_59 = *(*(ebx + 0x18) + (eax_48[0x12] << 2))
                        
                        if ((*eax_59 & 0xfff00000) == 0x10100000 && 0 u< eax_59[3])
                            int32_t* edx_34 = eax_59[4]
                            
                            while (*edx_34 != i)
                                ecx_26 += 1
                                edx_34 = &edx_34[1]
                                
                                if (ecx_26 u>= eax_59[3])
                                    break
                            
                            if (ecx_26 u< eax_59[3] && i_1 == *(eax_59[2] + (ecx_26 << 2)))
                                goto label_4a799c
                    
                    if ((var_38_2.b & 2) != 0)
                        int32_t* eax_63 = *(*(ebx + 0x18) + (ecx_2[0x12] << 2))
                        
                        if ((*eax_63 & 0xfff00000) == 0x10100000)
                            ecx_26 = 0
                            
                            if (0 u< eax_63[3])
                                int32_t* edx_36 = eax_63[4]
                                
                                while (*edx_36 != i_1)
                                    ecx_26 += 1
                                    edx_36 = &edx_36[1]
                                    
                                    if (ecx_26 u>= eax_63[3])
                                        break
                                
                                if (ecx_26 u< eax_63[3] && i == *(eax_63[2] + (ecx_26 << 2)))
                                    goto label_4a799c
                    
                    for (int32_t i_2 = 0; i_2 u< 8; i_2 += 1)
                        int32_t i_8
                        int32_t i_9
                        
                        if ((i_2.b & 4) == 0)
                            i_8 = i
                            i_9 = i_1
                        else
                            i_8 = i_1
                            i_9 = i
                        
                        int32_t ecx_31 = i_2 & 2
                        int32_t i_10 = i_8
                        
                        if (ecx_31 == 0)
                        label_4a7a69:
                            void* eax_73 = *(*(ebx + 0x14) + (i_9 << 2))
                            
                            if ((*(*(esi_11 + (*(eax_73 + 4) << 2)) + 4) & 2) != 0)
                                int32_t* eax_75 = *(*(ebx + 0x18) + (*(eax_73 + 0x48) << 2))
                                
                                if ((*eax_75 & 0xfff00000) == 0x20400000)
                                    int32_t esi_18 = eax_75[3]
                                    int32_t ecx_39 = 0
                                    
                                    if (esi_18 u> 0)
                                        int32_t* edx_48 = eax_75[4]
                                        
                                        do
                                            if (i_9 == *edx_48)
                                                int32_t eax_76 = eax_75[2]
                                                int32_t edx_49
                                                
                                                if ((i_2.b & 1) == 0)
                                                    edx_49 = *(eax_76 + ((ecx_39 + esi_18) << 2))
                                                else
                                                    edx_49 = *(eax_76 + (ecx_39 << 2))
                                                    ecx_39 += esi_18
                                                
                                                int32_t eax_77 = *(ebx + 0x14)
                                                var_38_2 = *(*(eax_77 + (edx_49 << 2)) + 0x30)
                                                var_50:4.d = *(
                                                    *(eax_77 + (*(eax_76 + (ecx_39 << 2)) << 2))
                                                    + 0x30)
                                                break
                                            
                                            ecx_39 += 1
                                            edx_48 = &edx_48[1]
                                        while (ecx_39 u< esi_18)
                                        
                                        edi_1 = esi_1
                                    
                                    if (ecx_31 != 0)
                                    label_4a7b4f:
                                        
                                        if (i_10 == var_38_2)
                                            eax_43 = var_50:4.d
                                            goto label_4a7b91_2
                                    else
                                        void* eax_81 = *(*(ebx + 0x14) + (var_38_2 << 2))
                                        
                                        if ((*(*(esi_11 + (*(eax_81 + 4) << 2)) + 4) & 2) != 0)
                                            int32_t* eax_83 =
                                                *(*(ebx + 0x18) + (*(eax_81 + 0x48) << 2))
                                            
                                            if ((*eax_83 & 0xfff00000) == 0x10100000)
                                                int32_t j = 0
                                                
                                                if (eax_83[3] u> 0)
                                                    int32_t* edx_54 = eax_83[4]
                                                    
                                                    do
                                                        if (var_38_2 == *edx_54)
                                                            var_38_2 = *(*(*(ebx + 0x14)
                                                                + (*(eax_83[2] + (j << 2)) << 2))
                                                                + 0x30)
                                                            break
                                                        
                                                        j += 1
                                                        edx_54 = &edx_54[1]
                                                    while (j u< eax_83[3])
                                                
                                                goto label_4a7b4f
                        else
                            int32_t ecx_32 = *(ebx + 0x14)
                            void* eax_65 = *(ecx_32 + (i_8 << 2))
                            
                            if ((*(*(esi_11 + (*(eax_65 + 4) << 2)) + 4) & 2) != 0)
                                int32_t* eax_67 = *(*(ebx + 0x18) + (*(eax_65 + 0x48) << 2))
                                
                                if ((*eax_67 & 0xfff00000) == 0x10100000)
                                    int32_t var_28_2 = 0
                                    
                                    if (eax_67[3] u> 0)
                                        int32_t* edx_43 = eax_67[4]
                                        
                                        while (true)
                                            if (i_10 == *edx_43)
                                                i_10 = *(*(ecx_32
                                                    + (*(eax_67[2] + (var_28_2 << 2)) << 2)) + 0x30)
                                                break
                                            
                                            var_28_2 += 1
                                            
                                            if (var_28_2 u>= eax_67[3])
                                                break
                                            
                                            edx_43 = &edx_43[1]
                                    
                                    goto label_4a7a69
                
                int32_t i_7
                int32_t var_40_1
                int32_t var_3c_2
                int32_t var_34_1
                int32_t var_30_2
                int32_t ecx_48
                
                if (eax_16 == 0x20500000)
                    int32_t i_3 = 0
                    i_7 = i_1
                    var_30_2 = 0
                    var_34_1 = 0
                    var_3c_2 = 0
                    var_40_1 = 0
                    
                    do
                        ecx_48 = *(&i_7 + i_3)
                        
                        while (true)
                            void* eax_97 = *(*(ebx + 0x14) + (ecx_48 << 2))
                            
                            if ((*(*(esi_11 + (*(eax_97 + 4) << 2)) + 4) & 2) == 0)
                                break
                            
                            int32_t* esi_20 = *(*(ebx + 0x18) + (*(eax_97 + 0x48) << 2))
                            int32_t eax_93 = *esi_20 & 0xfff00000
                            void* eax_94
                            int32_t __saved_ebp
                            
                            if (eax_93 != 0x10100000)
                                if (eax_93 != 0x10300000)
                                    break
                                
                                eax_94 = &__saved_ebp + i_3 - 0x3c
                            else
                                eax_94 = &__saved_ebp + i_3 - 0x30
                            int32_t edx_56
                            edx_56.b = *eax_94 == 0
                            *eax_94 = edx_56
                            int32_t edx_57 = esi_20[3]
                            int32_t eax_95 = 0
                            
                            if (edx_57 u> 0)
                                int32_t* edx_58 = esi_20[4]
                                
                                while (true)
                                    if (*edx_58 == ecx_48)
                                        ecx_48 = *(esi_20[2] + (eax_95 << 2))
                                        break
                                    
                                    eax_95 += 1
                                    var_50:4.d = &edx_58[1]
                                    
                                    if (eax_95 u>= edx_57)
                                        break
                                    
                                    edx_58 = var_50:4.d
                            
                            if (eax_95 u>= edx_57)
                                return 
                        
                        *(&i_7 + i_3) = ecx_48
                        i_3 += 4
                    while (i_3 u< 8)
                
                int32_t var_64_2
                
                if (eax_16 != 0x20500000 || i_7 != i || var_40_1 == var_3c_2)
                    int32_t i_4 = i_1
                    
                    if (eax_16 != 0x20200000)
                    label_4a7cc6:
                        int32_t eax_106 = *(ebx + 0x14)
                        void* esi_23 = *(eax_106 + (i_4 << 2))
                        
                        if ((*(*(esi_11 + (*(esi_23 + 4) << 2)) + 4) & 2) != 0
                                && (*(*(esi_11 + (*(*(eax_106 + (i << 2)) + 4) << 2)) + 4) & 2)
                                != 0)
                            if (eax_16 != 0x20500000 && eax_16 != 0x20200000
                                    && eax_16 != 0x20300000)
                                goto label_4a7e02
                            
                            int32_t eax_110 = *(ebx + 0x14)
                            int32_t ecx_57 = *(ebx + 0x18)
                            int32_t* edx_70 = *(ecx_57 + (*(*(eax_110 + (i_4 << 2)) + 0x48) << 2))
                            int32_t* ecx_58 = *(ecx_57 + (*(*(eax_110 + (i << 2)) + 0x48) << 2))
                            
                            if ((*edx_70 & 0xfff00000) != 0x10100000
                                    || (*ecx_58 & 0xfff00000) != 0x10100000)
                                i_4 = i_1
                            label_4a7e02:
                                
                                if (eax_16 == 0x20500000)
                                    if (i_4 != i)
                                        goto label_4a7ee7
                                    
                                    int32_t edx_74 = *(ebx + 0x18)
                                    int32_t* ecx_64 = *(edx_74 + (*(esi_23 + 0x48) << 2))
                                    int32_t* eax_124 = *ecx_64 & 0xfff00000
                                    
                                    if (eax_124 != 0x10300000 && eax_124 != 0x10700000)
                                        goto label_4a7ee7
                                    
                                    int32_t eax_125 = 0
                                    
                                    if (ecx_64[3] u> 0)
                                        int32_t* esi_31 = ecx_64[4]
                                        
                                        while (*esi_31 != i_4)
                                            eax_125 += 1
                                            esi_31 = &esi_31[1]
                                            
                                            if (eax_125 u>= ecx_64[3])
                                                break
                                    
                                    int32_t esi_33 = eax_125 << 2
                                    void* eax_128 = *(*(ebx + 0x14) + (*(esi_33 + ecx_64[2]) << 2))
                                    int32_t* eax_130
                                    int32_t edx_76
                                    
                                    if ((*(*(esi_11 + (*(eax_128 + 4) << 2)) + 4) & 2) != 0
                                            && *(eax_128 + 8) == 0xffffffff)
                                        eax_130 = *(edx_74 + (*(eax_128 + 0x48) << 2))
                                        edx_76 = *eax_130 & 0xfff00000
                                    
                                    if ((*(*(esi_11 + (*(eax_128 + 4) << 2)) + 4) & 2) != 0
                                            && *(eax_128 + 8) == 0xffffffff
                                            && (edx_76 == 0x10300000 || edx_76 == 0x10700000)
                                            && eax_124 != edx_76)
                                        arg5 = 0
                                        
                                        if (eax_130[3] u> 0)
                                            int32_t* edx_77 = eax_130[4]
                                            
                                            do
                                                edx_77[arg5] = *(esi_33 + ecx_64[2])
                                                edx_77 = eax_130[4]
                                                
                                                if (edx_77[arg5] != 0)
                                                    break
                                                
                                                arg5 += 1
                                            while (arg5 u< eax_130[3])
                                        
                                        esi_1[0xc] = *(
                                            *(*(var_1c + 0x14) + (*(eax_130[2] + (arg5 << 2)) << 2))
                                            + 0x30)
                                    else
                                        i_4 = i_1
                                        ebx = var_1c
                                    label_4a7ee7:
                                        
                                        if (eax_16 == 0x20500000)
                                            int32_t eax_134 = *ecx_2 & 1
                                            var_50:4.d = eax_134
                                            int32_t eax_135
                                            
                                            if (eax_134 != 0)
                                                eax_135 = sub_4a0ac7(ebx, i_4, i)
                                            
                                            if (eax_134 == 0 || eax_135 == 0)
                                                int32_t eax_138 = *edx_2 & 1
                                                int32_t eax_139
                                                
                                                if (eax_138 != 0)
                                                    eax_139 = sub_4a0ac7(ebx, i, i_4)
                                                
                                                if (eax_138 == 0 || eax_139 == 0)
                                                    arg3 = 0
                                                    arg2 = nullptr
                                                    int32_t var_2c_2 = 1
                                                    int32_t var_28_3 = 1
                                                    int32_t edi_19 = esi_1[6]
                                                    int32_t i_5 = esi_1[5]
                                                    
                                                    if (i_5 != 0xffffffff)
                                                        void* esi_36
                                                        
                                                        do
                                                            void* esi_35 = *(*(var_1c + 0x18) + (*(
                                                                *((i_5 << 2) + *(var_1c + 0x14)) + 0x48)
                                                                << 2))
                                                            int32_t ecx_72 = *(esi_35 + 0xc)
                                                            int32_t ebx_5 = 0
                                                            
                                                            if (ecx_72 u> 0)
                                                                int32_t* edx_81 = *(esi_35 + 0x10)
                                                                
                                                                while (*edx_81 != i_5)
                                                                    ebx_5 += 1
                                                                    edx_81 = &edx_81[1]
                                                                    
                                                                    if (ebx_5 u>= ecx_72)
                                                                        break
                                                            
                                                            if (var_50:4.d != 0)
                                                                int32_t eax_143 =
                                                                    *(*(esi_35 + 8) + (ebx_5 << 2))
                                                                
                                                                if ((edi_19
                                                                        & sub_4a0ac7(var_1c, i_1, eax_143))
                                                                        != 0)
                                                                    arg3 = 1
                                                                
                                                                if (edi_19 == 0
                                                                        && sub_4a0ac7(var_1c, eax_143, i_1)
                                                                        != 0)
                                                                    var_2c_2 &= edi_19
                                                                    arg3 = 1
                                                            
                                                            if (eax_138 == 0)
                                                                esi_36 = var_1c
                                                            else
                                                                int32_t ebx_6 =
                                                                    *(*(esi_35 + 8) + (ebx_5 << 2))
                                                                
                                                                if ((edi_19
                                                                        & sub_4a0ac7(var_1c, i, ebx_6)) != 0)
                                                                    arg2 = 1
                                                                
                                                                esi_36 = var_1c
                                                                
                                                                if (edi_19 == 0
                                                                        && sub_4a0ac7(esi_36, ebx_6, i) != 0)
                                                                    var_28_3 &= edi_19
                                                                    arg2 = 1
                                                            
                                                            void* eax_150 = (*(esi_36 + 0x14))[i_5]
                                                            edi_19 = *(eax_150 + 0x18)
                                                            i_5 = *(eax_150 + 0x14)
                                                        while (i_5 != 0xffffffff)
                                                        
                                                        long double x87_r7_5
                                                        
                                                        if (arg3 != 0)
                                                            if (arg2 != 0)
                                                                if (var_2c_2 == 0)
                                                                    goto label_4a8063
                                                                
                                                                if (var_28_3 != 0)
                                                                    x87_r7_5 = float.t(1)
                                                                    goto label_4a8065
                                                            
                                                            if (var_2c_2 == 0
                                                                    || (arg2 != 0 && var_28_3 == 0))
                                                                goto label_4a8063
                                                            
                                                            goto label_4a8078
                                                        
                                                        if (arg2 == 0 || var_28_3 != 0)
                                                        label_4a8078:
                                                            
                                                            if (arg3 != 0 && var_2c_2 != 0)
                                                                esi_1[0xc] = i
                                                            else if (arg2 != 0 && var_28_3 != 0)
                                                                esi_1[0xc] = i_1
                                                        else
                                                        label_4a8063:
                                                            x87_r7_5 = float.t(0)
                                                        label_4a8065:
                                                            int32_t var_60_11 = 0
                                                            var_64_2 = 0
                                                            var_64_2.q = fconvert.d(x87_r7_5)
                                                            int32_t var_68_4 = 0
                                                            int32_t var_6c_4 = 0
                                                            esi_1[0xc] = sub_49f544(esi_36, 
                                                                *(esi_36 + 0x78), 0, 0, var_64_2)
                                                else
                                                    esi_1[0xc] = i_4
                                            else
                                                esi_1[0xc] = i
                            else
                                int32_t esi_24 = arg2[3]
                                int32_t var_2c_1 = 0
                                
                                if (esi_24 u> 0)
                                    int32_t* eax_114 = arg2[4]
                                    
                                    while (arg3 != *eax_114)
                                        var_2c_1 += 1
                                        eax_114 = &eax_114[1]
                                        
                                        if (var_2c_1 u>= esi_24)
                                            break
                                
                                int32_t edi_11 = 0
                                
                                if (edx_70[3] u> 0)
                                    int32_t* eax_115 = edx_70[4]
                                    
                                    while (i_1 != *eax_115)
                                        edi_11 += 1
                                        eax_115 = &eax_115[1]
                                        
                                        if (edi_11 u>= edx_70[3])
                                            break
                                
                                int32_t esi_26 = 0
                                
                                if (ecx_58[3] u> 0)
                                    int32_t* eax_116 = ecx_58[4]
                                    
                                    while (i != *eax_116)
                                        esi_26 += 1
                                        eax_116 = &eax_116[1]
                                        
                                        if (esi_26 u>= ecx_58[3])
                                            break
                                    
                                    ebx = var_1c
                                
                                int32_t eax_118
                                int32_t ecx_60
                                
                                if (eax_16 != 0x20500000)
                                    eax_118 = *(ecx_58[2] + (esi_26 << 2))
                                    ecx_60 = *(edx_70[2] + (edi_11 << 2))
                                else
                                    eax_118 = *(edx_70[2] + (edi_11 << 2))
                                    ecx_60 = *(ecx_58[2] + (esi_26 << 2))
                                
                                *(arg2[2] + (var_2c_1 << 2)) =
                                    *(*(*(ebx + 0x14) + (eax_118 << 2)) + 0x30)
                                *(arg2[2] + ((arg2[3] + var_2c_1) << 2)) =
                                    *(*(*(ebx + 0x14) + (ecx_60 << 2)) + 0x30)
                    else
                        void* eax_103 = *(*(ebx + 0x14) + (i_4 << 2))
                        
                        if ((*(*(esi_11 + (*(eax_103 + 4) << 2)) + 4) & 2) == 0
                                || (esi_4.b & 1) == 0)
                            goto label_4a7cc6
                        
                        int32_t* eax_105 = *(*(ebx + 0x18) + (*(eax_103 + 0x48) << 2))
                        
                        if ((*eax_105 & 0xfff00000) != 0x10100000)
                            goto label_4a7cc6
                        
                        int32_t edx_63 = eax_105[3]
                        int32_t ecx_55 = 0
                        
                        if (edx_63 u> 0)
                            int32_t* esi_22 = eax_105[4]
                            
                            while (*esi_22 != i_4)
                                ecx_55 += 1
                                esi_22 = &esi_22[1]
                                
                                if (ecx_55 u>= edx_63)
                                    break
                        
                        if (*(eax_105[2] + (ecx_55 << 2)) != i)
                            goto label_4a7cc6
                        
                        esi_1[0xc] = i
                else
                    long double x87_r7_4
                    
                    if (var_34_1 != var_30_2)
                        x87_r7_4 = fconvert.t(-1.0)
                    else
                        x87_r7_4 = float.t(1)
                    
                    int32_t var_60_4 = ecx_48
                    var_64_2 = ecx_48
                    var_64_2.q = fconvert.d(x87_r7_4)
                    int32_t var_68_3 = 0
                    int32_t var_6c_3 = 0
                    esi_1[0xc] = sub_49f544(ebx, *(ebx + 0x78), 0, 0, var_64_2)
        else
            ecx_26 = eax_16
            
            if (ecx_26 == 0x20000000 || ecx_26 == 0x20100000)
                goto label_4a744c
            
            long double x87_r7_3
            
            if (ecx_26 != 0x20200000)
                if (ecx_26 != 0x20300000)
                    if (ecx_26 != 0x20500000 || (eax_7.b & 1) == 0)
                        goto label_4a78eb
                    
                    goto label_4a744c
                
                if (esi_6 == 0)
                    x87_r7_3 = float.t(1)
                    goto label_4a799e
            else if (esi_6 == 0)
            label_4a799c:
                x87_r7_3 = float.t(0)
            label_4a799e:
                int32_t var_60_3 = ecx_26
                var_64_1 = ecx_26
                var_64_1.q = fconvert.d(x87_r7_3)
                goto label_4a79a3
    else
        int32_t* edx_23
        
        if (ecx_17 != 0)
            edx_23 = ecx_2
        
        if (ecx_17 != 0 && edx_23[2] == 0xffffffff)
            eax_48 = edx_2
        else
            eax_48 = edx_2
            
            if ((*(*(esi_11 + (edx_2[1] << 2)) + 4) & 0x100) == 0 || eax_48[2] != 0xffffffff)
                goto label_4a78a1
            
            edx_23 = ecx_2
        
        int32_t i_6
        
        if (ecx_17 == 0 || edx_23[2] != 0xffffffff)
            x87_r7_2 = fconvert.t(*(eax_48 + 0x20))
            i_6 = i_1
            ecx_17 = eax_7
        else
            x87_r7_2 = fconvert.t(*(edx_23 + 0x20))
            i_6 = i
            ecx_17 = esi_4
        
        int32_t eax_49
        
        if (eax_16 == 0x20000000)
            long double temp4_1 = fconvert.t(1.0)
            x87_r7_2 - temp4_1
            eax_49.w = (x87_r7_2 < temp4_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_2, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp4_1 ? 1 : 0) << 0xe | 0x3800
            
            if ((eax_49:1.b & 1) != 0 || (ecx_17.b & 1) == 0)
                long double temp6_1 = fconvert.t(0.0)
                x87_r7_2 - temp6_1
                eax_49.w = (x87_r7_2 < temp6_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_2, temp6_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == temp6_1 ? 1 : 0) << 0xe | 0x3800
                bool p_15 = unimplemented  {test ah, 0x41}
                
                if (not(p_15) && (ecx_17.b & 4) != 0)
                    goto label_4a755f
            else
                edi_1[0xc] = i_6
        else
            bool cond:16_1
            
            if (eax_16 == 0x20100000)
                long double temp7_1 = fconvert.t(1.0)
                x87_r7_2 - temp7_1
                eax_49.w = (x87_r7_2 < temp7_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_2, temp7_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == temp7_1 ? 1 : 0) << 0xe | 0x3800
                
                if ((eax_49:1.b & 1) == 0 && (ecx_17.b & 1) != 0)
                    goto label_4a755f
                
                long double temp8_1 = fconvert.t(0.0)
                x87_r7_2 - temp8_1
                eax_49.w = (x87_r7_2 < temp8_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_2, temp8_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == temp8_1 ? 1 : 0) << 0xe
                bool p_14 = unimplemented  {test ah, 0x41}
                
                if (not(p_14))
                    cond:16_1 = (ecx_17.b & 4) == 0
                label_4a77a2:
                    
                    if (not(cond:16_1))
                        edi_1[0xc] = i_6
            else
                long double x87_r6_9
                bool cond:21_1
                
                if (eax_16 == 0x20200000)
                    long double temp9_1 = fconvert.t(0.0)
                    x87_r7_2 - temp9_1
                    eax_49.w = (x87_r7_2 < temp9_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_2, temp9_1) ? 1 : 0) << 0xa
                        | (x87_r7_2 == temp9_1 ? 1 : 0) << 0xe | 0x3800
                    
                    if (i_6 != i)
                        bool p_13 = unimplemented  {test ah, 0x41}
                        
                        if (not(p_13) && (ecx_17.b & 4) != 0)
                            x87_r7_2 = float.t(0)
                            goto label_4a755f
                        
                        long double temp11_1 = fconvert.t(0.0)
                        x87_r7_2 - temp11_1
                        eax_49.w = (x87_r7_2 < temp11_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_2, temp11_1) ? 1 : 0) << 0xa
                            | (x87_r7_2 == temp11_1 ? 1 : 0) << 0xe | 0x3800
                        
                        if ((eax_49:1.b & 0x41) == 0 && (ecx_17.b & 8) != 0)
                            x87_r7_2 = float.t(1)
                            goto label_4a755f
                        
                        long double temp13_1 = fconvert.t(1.0)
                        x87_r7_2 - temp13_1
                        eax_49.w = (x87_r7_2 < temp13_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_2, temp13_1) ? 1 : 0) << 0xa
                            | (x87_r7_2 == temp13_1 ? 1 : 0) << 0xe
                        cond:21_1 = (eax_49:1.b & 0x41) != 0
                    label_4a7822:
                        
                        if (not(cond:21_1) && (ecx_17.b & 1) != 0)
                            x87_r7_2 = float.t(1)
                            goto label_4a755f
                    else
                        bool p_12 = unimplemented  {test ah, 0x5}
                        
                        if (not(p_12) && (ecx_17.b & 4) != 0)
                            x87_r7_2 = float.t(1)
                            goto label_4a755f
                        
                        long double temp12_1 = fconvert.t(0.0)
                        x87_r7_2 - temp12_1
                        eax_49.w = (x87_r7_2 < temp12_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_2, temp12_1) ? 1 : 0) << 0xa
                            | (x87_r7_2 == temp12_1 ? 1 : 0) << 0xe | 0x3800
                        
                        if ((eax_49:1.b & 1) == 0 && (ecx_17.b & 8) != 0)
                            x87_r7_2 = float.t(0)
                            goto label_4a755f
                        
                        long double temp14_1 = fconvert.t(1.0)
                        x87_r7_2 - temp14_1
                        eax_49.w = (x87_r7_2 < temp14_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_2, temp14_1) ? 1 : 0) << 0xa
                            | (x87_r7_2 == temp14_1 ? 1 : 0) << 0xe | 0x3800
                        
                        if ((eax_49:1.b & 1) == 0 && (ecx_17.b & 1) != 0)
                            x87_r7_2 = float.t(0)
                            goto label_4a755f
                        
                        x87_r6_9 = fconvert.t(0.0)
                    label_4a7790:
                        x87_r7_2 - x87_r6_9
                        eax_49.w = (x87_r7_2 < x87_r6_9 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_2, x87_r6_9) ? 1 : 0) << 0xa
                            | (x87_r7_2 == x87_r6_9 ? 1 : 0) << 0xe | 0x3800
                        bool p_11 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_11))
                            cond:16_1 = (ecx_17.b & 1) == 0
                            goto label_4a77a2
                else
                    if (eax_16 == 0x20300000)
                        long double temp10_1 = fconvert.t(0.0)
                        x87_r7_2 - temp10_1
                        eax_49.w = (x87_r7_2 < temp10_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_2, temp10_1) ? 1 : 0) << 0xa
                            | (x87_r7_2 == temp10_1 ? 1 : 0) << 0xe | 0x3800
                        
                        if (i_6 == i)
                            bool p_9 = unimplemented  {test ah, 0x5}
                            
                            if (p_9 || (ecx_17.b & 4) == 0)
                                long double temp16_1 = fconvert.t(0.0)
                                x87_r7_2 - temp16_1
                                eax_49.w = (x87_r7_2 < temp16_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_2, temp16_1) ? 1 : 0) << 0xa
                                    | (x87_r7_2 == temp16_1 ? 1 : 0) << 0xe | 0x3800
                                
                                if ((eax_49:1.b & 1) == 0 && (ecx_17.b & 8) != 0)
                                    x87_r7_2 = float.t(1)
                                    goto label_4a755f
                                
                                long double temp18_1 = fconvert.t(1.0)
                                x87_r7_2 - temp18_1
                                eax_49.w = (x87_r7_2 < temp18_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_2, temp18_1) ? 1 : 0) << 0xa
                                    | (x87_r7_2 == temp18_1 ? 1 : 0) << 0xe
                                cond:21_1 = (eax_49:1.b & 1) != 0
                                goto label_4a7822
                            
                            x87_r7_2 = float.t(0)
                            goto label_4a755f
                        
                        bool p_10 = unimplemented  {test ah, 0x41}
                        
                        if (not(p_10) && (ecx_17.b & 4) != 0)
                            x87_r7_2 = float.t(1)
                            goto label_4a755f
                        
                        long double temp15_1 = fconvert.t(0.0)
                        x87_r7_2 - temp15_1
                        eax_49.w = (x87_r7_2 < temp15_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_2, temp15_1) ? 1 : 0) << 0xa
                            | (x87_r7_2 == temp15_1 ? 1 : 0) << 0xe | 0x3800
                        
                        if ((eax_49:1.b & 0x41) == 0 && (ecx_17.b & 8) != 0)
                            x87_r7_2 = float.t(0)
                            goto label_4a755f
                        
                        long double temp17_1 = fconvert.t(1.0)
                        x87_r7_2 - temp17_1
                        eax_49.w = (x87_r7_2 < temp17_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_2, temp17_1) ? 1 : 0) << 0xa
                            | (x87_r7_2 == temp17_1 ? 1 : 0) << 0xe | 0x3800
                        
                        if ((eax_49:1.b & 0x41) != 0 || (ecx_17.b & 1) == 0)
                            x87_r6_9 = fconvert.t(1.0)
                            goto label_4a7790
                        
                        x87_r7_2 = float.t(0)
                        goto label_4a755f
                    
                    if (eax_16 == 0x20400000)
                        long double x87_r6_8 = fconvert.t(0.0)
                        x87_r7_2 - x87_r6_8
                        eax_49.w = (x87_r7_2 < x87_r6_8 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_2, x87_r6_8) ? 1 : 0) << 0xa
                            | (x87_r7_2 == x87_r6_8 ? 1 : 0) << 0xe | 0x3800
                        bool p_8 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_8))
                            edi_1[0xc] = i_6
                    else if (eax_16 == 0x20500000)
                        long double x87_r6_5 = fconvert.t(0.0)
                        x87_r7_2 - x87_r6_5
                        eax_49.w = (x87_r7_2 < x87_r6_5 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_2, x87_r6_5) ? 1 : 0) << 0xa
                            | (x87_r7_2 == x87_r6_5 ? 1 : 0) << 0xe | 0x3800
                        bool p_5 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_5))
                            x87_r7_2 = float.t(0)
                            goto label_4a755f
                        
                        long double x87_r6_6 = fconvert.t(1.0)
                        x87_r7_2 - x87_r6_6
                        eax_49.w = (x87_r7_2 < x87_r6_6 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_2, x87_r6_6) ? 1 : 0) << 0xa
                            | (x87_r7_2 == x87_r6_6 ? 1 : 0) << 0xe | 0x3800
                        bool p_6 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_6))
                            edi_1[0xc] = i_6
                        else
                            long double x87_r6_7 = fconvert.t(0.5)
                            x87_r7_2 - x87_r6_7
                            eax_49.w = (x87_r7_2 < x87_r6_7 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_2, x87_r6_7) ? 1 : 0) << 0xa
                                | (x87_r7_2 == x87_r6_7 ? 1 : 0) << 0xe | 0x3800
                            bool p_7 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_7))
                                int32_t eax_50 = *(ebx + 0x14)
                                void* eax_51 = *(eax_50 + (i_6 << 2))
                                
                                if ((*(*(esi_11 + (*(eax_51 + 4) << 2)) + 4) & 2) != 0)
                                    int32_t* eax_53 = *(*(ebx + 0x18) + (*(eax_51 + 0x48) << 2))
                                    
                                    if ((*eax_53 & 0xfff00000) == 0x20400000)
                                        int32_t edi_2 = eax_53[3]
                                        int32_t esi_12 = 0
                                        
                                        if (edi_2 u> 0)
                                            int32_t* ecx_23 = eax_53[4]
                                            
                                            while (*ecx_23 != i_6)
                                                esi_12 += 1
                                                ecx_23 = &ecx_23[1]
                                                
                                                if (esi_12 u>= edi_2)
                                                    break
                                        
                                        if (esi_12 u< edi_2)
                                            int32_t* ecx_24 = eax_53[2]
                                            
                                            if (ecx_24[esi_12] == ecx_24[edi_2 + esi_12])
                                                esi_1[0xc] =
                                                    *(*(eax_50 + (ecx_24[esi_12] << 2)) + 0x30)
                    else if (eax_16 == 0x20600000)
                        long double x87_r6_4 = fconvert.t(0.0)
                        x87_r7_2 - x87_r6_4
                        eax_49.w = (x87_r7_2 < x87_r6_4 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_2, x87_r6_4) ? 1 : 0) << 0xa
                            | (x87_r7_2 == x87_r6_4 ? 1 : 0) << 0xe | 0x3800
                        bool p_4 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_4) && i_6 == i_1)
                            x87_r7_2 = float.t(0)
                            goto label_4a755f

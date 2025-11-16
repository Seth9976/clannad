// 函数: sub_4affea
// 地址: 0x4affea
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_44 = 0xffffffff
int32_t edi
int32_t var_88 = edi
sub_4a39e3(arg1)
int32_t i_8 = *(arg1 + 8)
int32_t edx = 0
int32_t var_24 = 0

if (i_8 u> 0)
    int32_t* esi_1 = *(arg1 + 0x14)
    int32_t i
    
    do
        void* ecx = *esi_1
        
        if (*(arg1 + 0x88) == *(ecx + 4))
            int32_t ecx_1 = *(ecx + 0xc)
            
            if (edx u<= ecx_1)
                edx = ecx_1 + 1
        
        esi_1 = &esi_1[1]
        i = i_8
        i_8 -= 1
    while (i != 1)
    var_24 = edx

int32_t esi_3 = (edx + (*(arg1 + 0xc) << 3)) << 2
int32_t eax_2 = sub_745f3f(esi_3)

if (eax_2 == 0)
    return 0x8007000e

int32_t i_1 = 0
__builtin_memset(__builtin_memset(eax_2, 0, esi_3 u>> 2 << 2), 0, esi_3 & 3)

if (*(arg1 + 8) u> 0)
    do
        void* eax_4 = *(*(arg1 + 0x14) + (i_1 << 2))
        
        if (*(arg1 + 0x88) == *(eax_4 + 4))
            int32_t eax_5 = *(eax_4 + 0x10)
            int32_t* ecx_9 = eax_2 + (*(eax_4 + 0xc) << 2)
            
            if (*ecx_9 u<= eax_5)
                *ecx_9 = eax_5 + 1
        
        i_1 += 1
    while (i_1 u< *(arg1 + 8))

int32_t eax_7 = *(arg1 + 0xc)
int32_t var_34_1 = 0
int32_t esi_14

if (eax_7 u<= 0)
label_4b064e:
    int32_t eax_113 = 0
    
    if (eax_7 u> 0)
        do
            **(*(arg1 + 0x18) + (eax_113 << 2)) = 0
            eax_113 += 1
        while (eax_113 u< eax_7)
    
    int32_t eax_114 = sub_4a4f2f(arg1)
    
    if (eax_114 != 0)
        esi_14 = eax_114
    
    if (eax_114 == 0 || eax_114 s>= 0)
        int32_t eax_115 = sub_49ff18(arg1)
        
        if (eax_115 != 0)
            esi_14 = eax_115
        
        if (eax_115 == 0 || eax_115 s>= 0)
            int32_t eax_116 = sub_4ad8ba(arg1)
            
            if (eax_116 != 0)
                esi_14 = eax_116
            
            if (eax_116 == 0 || eax_116 s>= 0)
                esi_14 = 0
else
    while (true)
        int32_t* eax_9 = *(*(arg1 + 0x18) + (var_34_1 << 2))
        
        if ((*(eax_9 + 2) & 0xfff0) != 0)
            int32_t esi_4 = 0
            int32_t var_40_1 = 1
            int32_t* var_48
            int32_t i_3 = sub_49e7de(eax_9, 0, &var_48)
            
            if (i_3 == 0)
            label_4b05b8:
                int32_t eax_103 = sub_49f5a4(arg1, *eax_9, eax_9[1], eax_9[3])
                
                if (eax_103 == 0xffffffff)
                label_4b06aa:
                    esi_14 = 0x8007000e
                    break
                
                void* edi_21 = *(*(arg1 + 0x18) + (eax_103 << 2))
                sub_49e7bf(edi_21, eax_9)
                int32_t ecx_80 = eax_9[1] << 2
                int32_t esi_11
                int32_t edi_23
                edi_23, esi_11 = __builtin_memcpy(*(edi_21 + 8), eax_9[2], ecx_80 u>> 2 << 2)
                __builtin_memcpy(edi_23, esi_11, ecx_80 & 3)
                int32_t ecx_85 = eax_9[3] << 2
                int32_t esi_13
                int32_t edi_25
                edi_25, esi_13 = __builtin_memcpy(*(edi_21 + 0x10), eax_9[4], ecx_85 u>> 2 << 2)
                __builtin_memcpy(edi_25, esi_13, ecx_85 & 3)
                int32_t i_2 = 0
                
                if (eax_9[3] u> 0)
                    do
                        *(*(*(arg1 + 0x14) + (*(*(edi_21 + 0x10) + (i_2 << 2)) << 2)) + 0x48) =
                            eax_103
                        i_2 += 1
                    while (i_2 u< eax_9[3])
            else
                int16_t top
                
                do
                    int32_t eax_10 =
                        sub_4aa6c8(arg1, var_48, i_3, eax_2, &var_24, eax_9, eax_7, 0xffffffff)
                    top -= 1
                    unimplemented  {call 0x4aa6c8}
                    
                    if (eax_10 == 0)
                        var_40_1 &= eax_10
                    
                    esi_4 += 1
                    i_3 = sub_49e7de(eax_9, esi_4, &var_48)
                while (i_3 != 0)
                
                if (var_40_1 != i_3)
                    goto label_4b05b8
                
                if (sub_49e81b(eax_9) != 0)
                    goto label_4b05b8
                
                int32_t i_11 = 0
                int32_t eax_12 = sub_49e7de(eax_9, 0, nullptr)
                uint32_t i_10
                
                if (eax_12 == 0)
                    i_10 = 0
                else
                    i_10 = divu.dp.d(0:(eax_9[1]), eax_12)
                
                int32_t var_6c = 0
                void var_68
                void* edi_5 = &var_68
                *edi_5 = 0
                void* edi_6 = edi_5 + 4
                *edi_6 = 0
                *(edi_6 + 4) = 0
                int32_t var_20_1 = 0
                
                if (eax_12 u> 0)
                    void* var_1c_1 = nullptr
                    void var_70
                    void* var_58_1 = &var_70
                    int32_t var_7c[0x3]
                    int32_t __saved_ebp
                    
                    do
                        if (*(var_1c_1 + 4 + var_58_1) == 0)
                            int32_t ecx_19 = var_20_1 + 1
                            int32_t var_18_1 = 1
                            int32_t var_3c_1 = ecx_19
                            
                            if (ecx_19 u< eax_12)
                                void* var_30_1 = 4
                                
                                do
                                    if ((&var_6c)[ecx_19] == 0)
                                        int32_t var_28_1 = 0
                                        
                                        if (i_10 u> 0)
                                            void* eax_18 = eax_9[2] + var_1c_1
                                            
                                            do
                                                int32_t* edi_9 = *(arg1 + 0x14)
                                                *(var_30_1 + eax_18)
                                                *eax_18
                                                
                                                if (*(edi_9[*eax_18] + 4)
                                                        != *(edi_9[*(var_30_1 + eax_18)] + 4))
                                                    break
                                                
                                                int32_t* edx_8 = *(arg1 + 0x14)
                                                
                                                if (*(edx_8[*eax_18] + 8)
                                                        != *(edx_8[*(var_30_1 + eax_18)] + 8))
                                                    break
                                                
                                                int32_t* edx_11 = *(arg1 + 0x14)
                                                
                                                if (*(edx_11[*eax_18] + 0xc)
                                                        != *(edx_11[*(var_30_1 + eax_18)] + 0xc))
                                                    break
                                                
                                                var_28_1 += 1
                                                eax_18 += eax_12 << 2
                                            while (var_28_1 u< i_10)
                                        
                                        if (var_28_1 == i_10)
                                            var_18_1 += 1
                                    
                                    var_30_1 += 4
                                    ecx_19 = var_3c_1 + 1
                                    var_3c_1 = ecx_19
                                while (ecx_19 u< eax_12)
                            
                            int32_t eax_24 = sub_49f5a4(arg1, 
                                ((*eax_9 ^ var_18_1) & 0xfffff) ^ *eax_9, 0xffffffff, 0xffffffff)
                            
                            if (eax_24 == 0xffffffff)
                                goto label_4b06aa
                            
                            int32_t* edi_16 = *(*(arg1 + 0x18) + (eax_24 << 2))
                            sub_49e7bf(edi_16, eax_9)
                            int32_t ecx_32 = eax_12
                            
                            if (eax_12 u> var_20_1)
                                void* var_2c_1 = (var_18_1 << 2) + 0xfffffffc
                                void* eax_31 = (ecx_32 << 2) - var_1c_1
                                
                                while (true)
                                    if ((&__saved_ebp)[ecx_32 - 0x1b] == 0)
                                        int32_t var_28_2 = 0
                                        
                                        if (i_10 u<= 0)
                                        label_4b0378:
                                            
                                            if ((*eax_9 & 0xfff00000) != 0x50000000)
                                                *(var_2c_1 + edi_16[4]) =
                                                    *(((ecx_32 - 1) << 2) + eax_9[4])
                                                *(*(*(arg1 + 0x14) + (*(var_2c_1 + edi_16[4]) << 2))
                                                    + 0x48) = eax_24
                                            
                                            var_2c_1 -= 4
                                        else
                                            void* eax_37 = eax_9[2] + var_1c_1
                                            void* var_50_1 = eax_37
                                            
                                            do
                                                int32_t edx_12 = *(arg1 + 0x14)
                                                int32_t eax_39 = *eax_37 << 2
                                                int32_t ecx_36 = *(eax_37 + eax_31 - 4) << 2
                                                
                                                if (*(*(eax_39 + edx_12) + 4)
                                                        != *(*(ecx_36 + edx_12) + 4))
                                                    break
                                                
                                                int32_t eax_42 = *(arg1 + 0x14)
                                                
                                                if (*(*(eax_39 + eax_42) + 8)
                                                        != *(*(ecx_36 + eax_42) + 8))
                                                    break
                                                
                                                int32_t eax_44 = *(arg1 + 0x14)
                                                
                                                if (*(*(eax_39 + eax_44) + 0xc)
                                                        != *(*(ecx_36 + eax_44) + 0xc))
                                                    break
                                                
                                                var_28_2 += 1
                                                eax_37 = var_50_1 + (eax_12 << 2)
                                                var_50_1 = eax_37
                                            while (var_28_2 u< i_10)
                                            
                                            if (var_28_2 u>= i_10)
                                                void* var_3c_3 = var_2c_1
                                                int32_t var_28_3 = (ecx_32 - 1) << 2
                                                uint32_t i_7 = i_10
                                                uint32_t i_4
                                                
                                                do
                                                    *(var_3c_3 + edi_16[2]) = *(var_28_3 + eax_9[2])
                                                    var_28_3 += eax_12 << 2
                                                    var_3c_3 += var_18_1 << 2
                                                    i_4 = i_7
                                                    i_7 -= 1
                                                while (i_4 != 1)
                                                (&__saved_ebp)[ecx_32 - 0x1b] = 1
                                                goto label_4b0378
                                    
                                    ecx_32 -= 1
                                    
                                    if (ecx_32 u<= var_20_1)
                                        break
                                    
                                    eax_31 -= 4
                            
                            if ((*eax_9 & 0xfff00000) == 0x50000000)
                                if (var_18_1 != eax_12)
                                    int32_t var_8c_4 = ecx_32
                                    unimplemented  {fldz }
                                    int32_t var_90_3 = ecx_32
                                    var_90_3.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                                    unimplemented  {fstp qword [esp], st0}
                                    int32_t eax_69 =
                                        sub_49f544(arg1, *(arg1 + 0x88), var_24, i_11, var_90_3)
                                    var_7c[i_11] = eax_69
                                    *edi_16[4] = eax_69
                                    
                                    if (*edi_16[4] == 0xffffffff)
                                        goto label_4b06aa
                                    
                                    int32_t eax_71 = *(arg1 + 0x14)
                                    *(*(eax_71 + (*edi_16[4] << 2)) + 0x14) =
                                        *(*(eax_71 + (*eax_9[4] << 2)) + 0x14)
                                    int32_t eax_73 = *(arg1 + 0x14)
                                    *(*(eax_73 + (*edi_16[4] << 2)) + 0x18) =
                                        *(*(eax_73 + (*eax_9[4] << 2)) + 0x18)
                                    int32_t eax_75 = sub_4a045d(arg1, edi_16, 0)
                                    top -= 1
                                    unimplemented  {call 0x4a045d}
                                    
                                    if (eax_75 s< 0)
                                        return eax_75
                                    
                                    i_11 += 1
                                else
                                    *edi_16[4] = *eax_9[4]
                                
                                *(*(*(arg1 + 0x14) + (*edi_16[4] << 2)) + 0x48) = eax_24
                        
                        var_20_1 += 1
                        var_1c_1 += 4
                    while (var_20_1 u< eax_12)
                    
                    if (i_11 != 0)
                        int32_t esi_6
                        
                        if (i_11 != 2)
                            esi_6 = sub_49f5a4(arg1, (i_11 & 0xfffff) | 0x50000000, 0xffffffff, 
                                0xffffffff)
                        else
                            int32_t i_5 = 0
                            esi_6 = sub_49f5a4(arg1, 0x20400001, 0xffffffff, 0xffffffff)
                            
                            do
                                int32_t edi_17 = *(arg1 + 0x18)
                                (&__saved_ebp)[i_5 - 0x1e]
                                
                                if ((**(edi_17 + (
                                        *((*(arg1 + 0x14))[*(&(&__saved_ebp)[i_5] - 0x78)] + 0x48)
                                        << 2)) & 0xfff00000) == 0x10000000)
                                    **(edi_17 + (
                                        *((*(arg1 + 0x14))[*(&(&__saved_ebp)[i_5] - 0x78)] + 0x48)
                                        << 2)) = 0
                                    (&__saved_ebp)[i_5 - 0x1e] = **(*(*(arg1 + 0x18) + (
                                        *((*(arg1 + 0x14))[*(&(&__saved_ebp)[i_5] - 0x78)] + 0x48)
                                        << 2)) + 8)
                                
                                i_5 += 1
                            while (i_5 u< 2)
                        
                        if (esi_6 == 0xffffffff)
                            return 0x8007000e
                        
                        void* edi_18 = *(*(arg1 + 0x18) + (esi_6 << 2))
                        sub_49e7bf(edi_18, eax_9)
                        **(edi_18 + 0x10) = *eax_9[4]
                        int32_t ecx_70 = i_11 << 2
                        *(*(*(arg1 + 0x14) + (**(edi_18 + 0x10) << 2)) + 0x48) = esi_6
                        int32_t esi_7
                        int32_t edi_20
                        edi_20, esi_7 = __builtin_memcpy(*(edi_18 + 8), &var_7c, ecx_70 u>> 2 << 2)
                        int32_t ecx_74 = __builtin_memcpy(edi_20, esi_7, ecx_70 & 3)
                        
                        if (i_11 == 2)
                            var_24 += 1
                        else
                            if (var_44 == 0xffffffff)
                                int32_t var_8c_6 = ecx_74
                                unimplemented  {fld1 }
                                int32_t var_90_5 = ecx_74
                                var_90_5.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
                                unimplemented  {fstp qword [esp], st0}
                                int32_t eax_100 = sub_49f544(arg1, *(arg1 + 0x78), 0, 0, var_90_5)
                                var_44 = eax_100
                                
                                if (eax_100 == 0xffffffff)
                                    goto label_4b06aa
                            
                            int32_t i_9 = i_11
                            
                            if (i_9 u> 0)
                                int32_t eax_102 = i_9 << 2
                                int32_t i_6
                                
                                do
                                    *(eax_102 + *(edi_18 + 8)) = var_44
                                    eax_102 += 4
                                    i_6 = i_9
                                    i_9 -= 1
                                while (i_6 != 1)
                            
                            var_24 += 1
        
        var_34_1 += 1
        
        if (var_34_1 u>= eax_7)
            goto label_4b064e

j__free(eax_2)
return esi_14

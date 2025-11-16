// 函数: sub_417435
// 地址: 0x417435
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
int32_t edi
int32_t var_48 = edi
int32_t* var_40 = esi

if (arg3 u< 0x12)
    return 0x80004005

char* ebx_1 = arg2
arg1.b = ebx_1[1]

if ((arg1.b & 0xfe) == 0)
    uint32_t edx_1 = zx.d(ebx_1[2])
    
    if ((edx_1 & 0xfffffff4) == 0 && *(ebx_1 + 0xc) != 0 && *(ebx_1 + 0xe) != 0)
        uint32_t eax_2 = zx.d(ebx_1[7])
        int32_t var_18_1 = 0
        
        if (arg1.b == 0)
            goto label_4174d4
        
        if (eax_2 == 0xf)
            var_18_1 = 0x18
        label_4174d4:
            uint32_t ecx = zx.d(ebx_1[0x10])
            uint32_t eax_8 = (ecx + 7) u>> 3
            int32_t eax_10 = edx_1 & 3
            int32_t var_10_1
            
            if (eax_10 == 1)
                if (ebx_1[1] != 0 && ebx_1[0x10] == 8)
                    var_10_1 = 0x29
                label_41755b:
                    int32_t eax_11
                    eax_11.b = ebx_1[0x11]
                    ecx.b = eax_11.b
                    ecx.b &= 0x20
                    ecx.b -= 0x20
                    int32_t edx_2 = edx_1 & 8
                    char temp10_1 = ecx.b
                    ecx.b = neg.b(ecx.b)
                    eax_11.b &= 0x10
                    uint32_t eax_12 = zx.d(*ebx_1)
                    int32_t ecx_3
                    ecx_3.b = eax_11.b != 0x10
                    
                    if (arg3 - 0x12 u>= eax_12)
                        arg3 = arg3 - 0x12 - eax_12
                        uint32_t ecx_5 = zx.d(*(ebx_1 + 5))
                        int32_t eax_14 = ecx_5 * ((eax_2 + 7) u>> 3)
                        
                        if (arg3 u>= eax_14)
                            if (esi[0x10] == 0 || var_10_1 != 0x29)
                            label_41777e:
                                arg3 -= eax_14
                                void* ecx_30 = &ebx_1[eax_12 + 0x12 + eax_14]
                                uint32_t eax_35 =
                                    zx.d(*(ebx_1 + 0xe)) * zx.d(*(ebx_1 + 0xc)) * eax_8
                                *esi = var_10_1
                                esi[1] = ecx_30
                                esi[0xc] = zx.d(*(ebx_1 + 0xc)) * eax_8
                                bool cond:4_1 = esi[0x10] == 0
                                esi[0xd] = 0
                                esi[3] = zx.d(*(ebx_1 + 0xc))
                                arg2 = ecx_30
                                esi[4] = zx.d(*(ebx_1 + 0xe))
                                esi[5] = 1
                                
                                if (cond:4_1)
                                    return 0
                                
                                if (edx_2 != 0 || sbb.d(ecx, ecx, temp10_1 != 0) == 0xffffffff
                                        || ecx_3 == 0)
                                    int32_t eax_36 = sub_745f3f(eax_35)
                                    esi[1] = eax_36
                                    
                                    if (eax_36 == 0)
                                        return 0x8007000e
                                    
                                    esi[0xe] = 1
                                    int32_t edx_30
                                    
                                    if (sbb.d(ecx, ecx, temp10_1 != 0) == 0xffffffff)
                                        edx_30 = (zx.d(*(ebx_1 + 0xe)) - 1) * esi[0xc] + eax_36
                                    else
                                        edx_30 = eax_36
                                    
                                    int32_t i = 0
                                    
                                    if (*(ebx_1 + 0xe) u> 0)
                                        do
                                            int32_t var_14_2
                                            
                                            if (ecx_3 == 0)
                                                var_14_2 = esi[0xc] - eax_8 + edx_30
                                            else
                                                var_14_2 = edx_30
                                            
                                            uint32_t j = zx.d(*(ebx_1 + 0xc))
                                            int32_t var_28_2 = 0
                                            
                                            if (j u> 0)
                                                do
                                                    int32_t var_2c_2
                                                    
                                                    if (edx_2 == 0)
                                                        var_2c_2 = 0
                                                    else
                                                        if (arg3 u< 1)
                                                            return 0x80004005
                                                        
                                                        uint32_t eax_41 = zx.d(*arg2)
                                                        j = (eax_41 & 0x7f) + 1
                                                        arg2 += 1
                                                        arg3 -= 1
                                                        var_2c_2 = eax_41 & 0x80
                                                    
                                                    var_28_2 += j
                                                    
                                                    if (j != 0)
                                                        do
                                                            if (arg3 u< eax_8)
                                                                return 0x80004005
                                                            
                                                            int32_t esi_2
                                                            int32_t edi_18
                                                            edi_18, esi_2 = __builtin_memcpy(
                                                                var_14_2, arg2, eax_8 u>> 2 << 2)
                                                            __builtin_memcpy(edi_18, esi_2, 
                                                                eax_8 & 3)
                                                            
                                                            if (var_2c_2 == 0)
                                                                arg2 += eax_8
                                                                arg3 -= eax_8
                                                            
                                                            if (ecx_3 == 0)
                                                                var_14_2 -= eax_8
                                                            else
                                                                var_14_2 += eax_8
                                                            
                                                            j -= 1
                                                        while (j != 0)
                                                        
                                                        esi = var_40
                                                    
                                                    if (var_2c_2 != 0)
                                                        arg2 += eax_8
                                                        arg3 -= eax_8
                                                    
                                                    j = zx.d(*(ebx_1 + 0xc))
                                                while (var_28_2 u< j)
                                            
                                            if (sbb.d(ecx, ecx, temp10_1 != 0) == 0xffffffff)
                                                edx_30 -= esi[0xc]
                                            else
                                                edx_30 += esi[0xc]
                                            
                                            i += 1
                                        while (i u< zx.d(*(ebx_1 + 0xe)))
                                    
                                    goto label_417909
                                
                                if (arg3 u>= eax_35)
                                    esi[1] = ecx_30
                                    esi[0xe] = 0
                                label_417909:
                                    
                                    if (*esi != 0x19)
                                        return 0
                                    
                                    void* ecx_38 = esi[1]
                                    void* eax_51 = esi[4] * esi[0xc] + ecx_38
                                    bool cond:11_1 = ecx_38 != eax_51
                                    
                                    if (ecx_38 u< eax_51)
                                        do
                                            void* edi_19 = (esi[3] << 1) + ecx_38
                                            void* ebx_2 = ecx_38
                                            
                                            if (ecx_38 u< edi_19)
                                                while ((*(ebx_2 + 1) & 0x80) == 0)
                                                    ebx_2 += 2
                                                    
                                                    if (ebx_2 u>= edi_19)
                                                        break
                                                
                                                if (ebx_2 u< edi_19)
                                                    break
                                            
                                            ecx_38 += esi[0xc]
                                        while (ecx_38 u< eax_51)
                                        
                                        cond:11_1 = ecx_38 != eax_51
                                    
                                    if (not(cond:11_1))
                                        *esi = 0x18
                                    
                                    return 0
                            else if (zx.d(*(ebx_1 + 3)) + ecx_5 s<= 0x100)
                                int32_t eax_17 = sub_745f3f(0x400)
                                esi[2] = eax_17
                                
                                if (eax_17 == 0)
                                    return 0x8007000e
                                
                                int32_t var_28_1 = 0
                                esi[0xf] = 1
                                __builtin_memset(eax_17, 0xffffffff, 0x400)
                                void* edi_4 = &ebx_1[eax_12 + 0x12]
                                char* eax_19 = esi[2] + (zx.d(*(ebx_1 + 3)) << 2)
                                void* ecx_9 = &eax_19[zx.d(*(ebx_1 + 5)) << 2]
                                void* var_14_1 = edi_4
                                char* var_24_1 = eax_19
                                
                                if (eax_19 u>= ecx_9)
                                label_417763:
                                    
                                    for (void* i_1 = esi[2] + (zx.d(*(ebx_1 + 3)) << 2); 
                                            i_1 u< ecx_9; i_1 += 4)
                                        *(i_1 + 3) = 0xff
                                else
                                    char eax_20 = arg3.b
                                    
                                    do
                                        int32_t var_1c
                                        int32_t ecx_10 = var_1c
                                        uint32_t var_20
                                        char var_c
                                        
                                        if (var_18_1 == 0x14)
                                            eax_20 = *(edi_4 + 2)
                                            ecx_10 = zx.d(*(edi_4 + 1))
                                            var_c = *edi_4
                                            edi_4 += 3
                                        label_41771b:
                                            var_20 = 0xff
                                            var_1c = ecx_10
                                            var_14_1 = edi_4
                                        else if (var_18_1 == 0x15)
                                            int32_t edx_21 = *edi_4
                                            ecx_10 = zx.d(edx_21:1.b)
                                            var_20 = edx_21 u>> 0x18
                                            eax_20 = edx_21.3:2.b
                                            var_c = edx_21.b & 0xff
                                            edi_4 += 4
                                            var_1c = ecx_10
                                            var_14_1 = edi_4
                                        else
                                            if (var_18_1 == 0x18)
                                                uint32_t eax_25 = zx.d(*edi_4)
                                                int32_t ecx_22 = eax_25 u>> 0xa & 0x1f
                                                int32_t eax_26 = eax_25 & 0x1f
                                                int32_t edx_17 = eax_25 u>> 5 & 0x1f
                                                eax_20 = (ecx_22 u>> 2).b | (ecx_22 << 3).b
                                                ecx_10 = edx_17 u>> 2 | edx_17 << 3
                                                var_c = (eax_26 u>> 2).b | (eax_26 << 3).b
                                                edi_4 = var_14_1 + 2
                                                goto label_41771b
                                            
                                            if (var_18_1 == 0x19)
                                                uint32_t eax_21 = zx.d(*edi_4)
                                                var_20 = (eax_21 u>> 0xf) * 0xff
                                                int32_t ecx_16 = eax_21 u>> 0xa & 0x1f
                                                int32_t eax_22 = eax_21 & 0x1f
                                                int32_t edx_11 = eax_21 u>> 5 & 0x1f
                                                eax_20 = (ecx_16 u>> 2).b | (ecx_16 << 3).b
                                                ecx_10 = edx_11 u>> 2 | edx_11 << 3
                                                var_c = (eax_22 u>> 2).b | (eax_22 << 3).b
                                                edi_4 = var_14_1 + 2
                                                var_1c = ecx_10
                                                var_14_1 = edi_4
                                        
                                        var_24_1[1] = ecx_10.b
                                        ecx_10.b = var_c
                                        var_24_1[2] = ecx_10.b
                                        var_24_1[3] = var_20.b
                                        *var_24_1 = eax_20
                                        int32_t edx_25
                                        edx_25.b = var_20 != 0
                                        var_24_1 = &var_24_1[4]
                                        var_28_1 |= edx_25
                                    while (var_24_1 u< ecx_9)
                                    
                                    if (var_28_1 == 0)
                                        goto label_417763
                                
                                goto label_41777e
            else if (eax_10 == 2)
                if (ecx == 0xf)
                    var_10_1 = 0x18
                    goto label_41755b
                
                if (ecx == 0x10)
                    var_10_1 = 0x19
                    goto label_41755b
                
                if (ecx == 0x18)
                    var_10_1 = 0x14
                    goto label_41755b
                
                if (ecx == 0x20)
                    var_10_1 = 0x15
                    goto label_41755b
            else if (eax_10 == 3 && ebx_1[0x10] == 8)
                var_10_1 = 0x32
                goto label_41755b
        else
            if (eax_2 == 0x10)
                var_18_1 = 0x19
                goto label_4174d4
            
            if (eax_2 == 0x18)
                var_18_1 = 0x14
                goto label_4174d4
            
            if (eax_2 == 0x20)
                var_18_1 = 0x15
                goto label_4174d4

return 0x80004005

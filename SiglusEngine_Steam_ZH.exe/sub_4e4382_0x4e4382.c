// 函数: sub_4e4382
// 地址: 0x4e4382
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg1
int32_t ecx = ebx[0xc]
int32_t* esi = arg2
int32_t var_c = esi[1]
uint32_t var_8 = ebx[8]
arg1 = ebx[7]
int32_t eax_3 = ebx[0xd]
int32_t edi
int32_t var_44 = edi
void* i_5 = *esi
void* i_3 = i_5
int32_t var_10 = eax_3
int32_t ecx_2

if (eax_3 u>= ecx)
    ecx_2 = ebx[0xb] - eax_3
else
    ecx_2 = ecx - eax_3 - 1

int32_t eax_4 = *ebx
int32_t var_14 = ecx_2
int32_t var_48_1
int32_t eax_10
void* eax_6

if (eax_4 u<= 9)
    while (true)
        int32_t var_1c
        int32_t var_14_1
        int32_t eax_24
        bool cond:17_1
        
        switch (eax_4)
            case 0
                while (true)
                    if (arg1 u>= 3)
                        int32_t eax_15 = var_8 & 7
                        uint32_t eax_16 = eax_15 u>> 1
                        ebx[6] = eax_15 & 1
                        
                        if (eax_16 == 0)
                            void* ecx_8 = (arg1 - 3) & 7
                            arg1 = arg1 - 3 - ecx_8
                            *ebx = 1
                            var_8 = var_8 u>> 3 u>> ecx_8.b
                            goto label_4e499f
                        
                        if (eax_16 == 1)
                            int32_t* var_48_2 = esi
                            int32_t var_2c
                            int32_t var_28
                            int32_t var_24
                            int32_t var_20
                            sub_4e8540(&var_2c, &var_28, &var_24, &var_20)
                            int32_t* eax_25 = sub_4e7a90(var_2c.b, var_28.b, var_24, var_20, esi)
                            ebx[1] = eax_25
                            
                            if (eax_25 == 0)
                                goto label_4e4a4c
                            
                            var_8 u>>= 3
                            arg1 -= 3
                            *ebx = 6
                            goto label_4e499f
                        
                        if (eax_16 == 2)
                            var_8 u>>= 3
                            eax_24 = 3
                            arg1 -= 3
                            goto label_4e4485
                        
                        if (eax_16 != 3)
                            goto label_4e499f
                        
                        *ebx = 9
                        esi[6] = "invalid block type"
                        ebx[8] = var_8 u>> 3
                        eax_6 = arg1 - 3
                        var_48_1 = 0xfffffffd
                        goto label_4e43d6
                    
                    if (var_c == 0)
                        break
                    
                    arg3 = 0
                    var_c -= 1
                    var_8 |= zx.d(*i_5) << arg1.b
                    i_5 += 1
                    arg1 = &arg1[2]
                    i_3 = i_5
                
                goto label_4e4a02
            case 1
                int32_t* ecx_9 = arg1
                
                while (true)
                    if (ecx_9 u>= 0x20)
                        uint32_t eax_32 = zx.d(var_8.w)
                        
                        if (not.d(var_8) u>> 0x10 != eax_32)
                            *ebx = 9
                            esi[6] = "invalid stored block lengths"
                            goto label_4e49c2
                        
                        ebx[1] = eax_32
                        arg1 = nullptr
                        var_8 = 0
                        
                        if (ebx[1] == 0)
                            goto label_4e4630
                        
                        eax_24 = 2
                        goto label_4e4485
                    
                    if (var_c == 0)
                        break
                    
                    arg3 = 0
                    var_c -= 1
                    var_8 |= zx.d(*i_5) << ecx_9.b
                    i_5 += 1
                    ecx_9 = &ecx_9[2]
                    i_3 = i_5
                    arg1 = ecx_9
                
                goto label_4e4a02
            case 2
                if (var_c == 0)
                label_4e4a02:
                    var_48_1 = arg3
                    ebx[8] = var_8
                    ebx[7] = arg1
                    esi[1] = 0
                    goto label_4e43e3
                
                if (ecx_2 == 0)
                    int32_t ecx_13 = ebx[0xb]
                    
                    if (var_10 != ecx_13)
                    label_4e4593:
                        ebx[0xd] = var_10
                        int32_t eax_37 = sub_4e856f(ebx, esi, arg3)
                        int32_t ecx_14 = ebx[0xc]
                        eax_10 = ebx[0xd]
                        var_10 = eax_10
                        var_1c = ecx_14
                        
                        if (eax_10 u>= ecx_14)
                            ecx_2 = ebx[0xb] - eax_10
                        else
                            ecx_2 = ecx_14 - eax_10 - 1
                        
                        int32_t edx_2 = ebx[0xb]
                        var_14 = ecx_2
                        
                        if (eax_10 == edx_2)
                            eax_10 = ebx[0xa]
                            int32_t edx_3 = var_1c
                            
                            if (eax_10 == edx_3)
                                eax_10 = var_10
                            else
                                var_10 = eax_10
                                
                                if (eax_10 u>= edx_3)
                                    ecx_2 = edx_2 - eax_10
                                else
                                    ecx_2 = edx_3 - eax_10 - 1
                                
                                var_14 = ecx_2
                        
                        if (ecx_2 == 0)
                            var_48_1 = eax_37
                            ebx[8] = var_8
                            ebx[7] = arg1
                            esi[1] = var_c
                            esi[2] += i_5 - *esi
                            break
                    else
                        int32_t eax_33 = ebx[0xc]
                        int32_t edx_1 = ebx[0xa]
                        
                        if (edx_1 == eax_33)
                            goto label_4e4593
                        
                        var_10 = edx_1
                        
                        if (edx_1 u>= eax_33)
                            ecx_2 = ecx_13 - edx_1
                        else
                            ecx_2 = eax_33 - edx_1 - 1
                        
                        var_14 = ecx_2
                        
                        if (ecx_2 == 0)
                            goto label_4e4593
                
                int32_t eax_38 = ebx[1]
                arg3 = 0
                
                if (eax_38 u> var_c)
                    eax_38 = var_c
                
                if (eax_38 u> ecx_2)
                    eax_38 = ecx_2
                
                void* i_4 = i_3
                int32_t edi_2 = var_10
                i_3 += eax_38
                var_c -= eax_38
                var_10 += eax_38
                var_14 -= eax_38
                int32_t esi_1
                int32_t edi_3
                edi_3, esi_1 = __builtin_memcpy(edi_2, i_4, eax_38 u>> 2 << 2)
                __builtin_memcpy(edi_3, esi_1, eax_38 & 3)
                int32_t temp6_1 = ebx[1]
                ebx[1] -= eax_38
                
                if (temp6_1 == eax_38)
                label_4e4630:
                    int32_t eax_39 = ebx[6]
                    int32_t eax_40 = neg.d(eax_39)
                    eax_24 = sbb.d(eax_40, eax_40, eax_39 != 0) & 7
                label_4e4485:
                    *ebx = eax_24
                
                goto label_4e499f
            case 3
                int32_t* i = arg1
                
                while (i u< 0xe)
                    if (var_c == 0)
                        goto label_4e4a02
                    
                    arg3 = 0
                    var_c -= 1
                    var_8 |= zx.d(*i_5) << i.b
                    i_5 += 1
                    i = &i[2]
                    arg1 = i
                
                int32_t eax_45 = var_8 & 0x3fff
                int32_t ecx_23 = eax_45 & 0x1f
                ebx[1] = eax_45
                int32_t eax_47
                
                if (ecx_23 u<= 0x1d)
                    eax_47 = eax_45 u>> 5 & 0x1f
                
                if (ecx_23 u> 0x1d || eax_47 u> 0x1d)
                    *ebx = 9
                    esi[6] = "too many length or distance symbols"
                label_4e49c2:
                    var_48_1 = 0xfffffffd
                    goto label_4e43d0
                
                int32_t eax_49 = esi[8](esi[0xa], eax_47 + ecx_23 + 0x102, 4)
                ebx[3] = eax_49
                
                if (eax_49 == 0)
                label_4e4a4c:
                    var_48_1 = 0xfffffffc
                    goto label_4e43d0
                
                var_8 u>>= 0xe
                arg1 -= 0xe
                ebx[2] = 0
                *ebx = 4
                goto label_4e4717
            case 4
            label_4e4717:
                
                while (ebx[2] u< (ebx[1] u>> 0xa) + 4)
                    int32_t* i_1 = arg1
                    
                    while (i_1 u< 3)
                        if (var_c == 0)
                            goto label_4e4a02
                        
                        arg3 = 0
                        var_c -= 1
                        var_8 |= zx.d(*i_5) << i_1.b
                        i_5 += 1
                        i_1 = &i_1[2]
                        arg1 = i_1
                    
                    uint32_t eax_52 = var_8
                    var_8 u>>= 3
                    *(ebx[3] + (*((ebx[2] << 2) + &data_aceab0) << 2)) = eax_52 & 7
                    ebx[2] += 1
                    arg1 -= 3
                
                while (ebx[2] u< 0x13)
                    *(ebx[3] + (*((ebx[2] << 2) + &data_aceab0) << 2)) = 0
                    ebx[2] += 1
                
                int32_t var_4c_6 = ebx[9]
                int32_t* var_58_3 = ebx[3]
                ebx[4] = 7
                int32_t eax_60 = sub_4e83c9(&ebx[5], var_58_3, &ebx[4], &ebx[5], var_4c_6, esi)
                var_14_1 = eax_60
                
                if (eax_60 == 0)
                    ebx[2] &= eax_60
                    *ebx = 5
                    goto label_4e4886
                
                cond:17_1 = var_14_1 != 0xfffffffd
            label_4e4a33:
                
                if (not(cond:17_1))
                    esi[9](esi[0xa], ebx[3])
                    *ebx = 9
                
                var_48_1 = var_14_1
                goto label_4e43d0
            case 5
            label_4e4886:
                
                while (true)
                    int32_t eax_74 = ebx[1]
                    
                    if (ebx[2] u>= (eax_74 u>> 5 & 0x1f) + (eax_74 & 0x1f) + 0x102)
                        int32_t eax_77 = ebx[1]
                        ebx[5] = 0
                        int32_t var_4c_7 = ebx[9]
                        int32_t* var_60_1 = ebx[3]
                        var_1c = 9
                        i_3 = 6
                        int32_t var_38
                        int32_t var_34
                        int32_t eax_80 = sub_4e8444((eax_77 u>> 5 & 0x1f) + 1, 
                            (eax_77 & 0x1f) + 0x101, (eax_77 u>> 5 & 0x1f) + 1, var_60_1, &var_1c, 
                            &i_3, &var_38, &var_34, var_4c_7, esi)
                        var_14_1 = eax_80
                        
                        if (eax_80 != 0)
                            cond:17_1 = var_14_1 != 0xfffffffd
                            goto label_4e4a33
                        
                        int32_t* eax_81 = sub_4e7a90(var_1c.b, i_3.b, var_38, var_34, esi)
                        
                        if (eax_81 == 0)
                            goto label_4e4a4c
                        
                        int32_t var_48_8 = ebx[3]
                        ebx[1] = eax_81
                        esi[9](esi[0xa], var_48_8)
                        *ebx = 6
                        goto label_4e4925
                    
                    int32_t eax_61
                    
                    for (eax_61 = ebx[4]; arg1 u< eax_61; arg1 = &arg1[2])
                        if (var_c == 0)
                            goto label_4e4a02
                        
                        arg3 = 0
                        var_c -= 1
                        var_8 |= zx.d(*i_5) << arg1.b
                        i_5 += 1
                    
                    void* eax_64 = ebx[5] + ((*((eax_61 << 2) + &data_ad00f8) & var_8) << 3)
                    uint32_t ecx_30 = zx.d(*(eax_64 + 1))
                    int32_t edx_10 = *(eax_64 + 4)
                    
                    if (edx_10 u>= 0x10)
                        int32_t eax_67
                        
                        if (edx_10 != 0x12)
                            eax_67 = edx_10 - 0xe
                        else
                            eax_67 = 7
                        
                        int32_t ecx_32
                        ecx_32.b = edx_10 == 0x12
                        i_3 = (ecx_32 << 3) + 3
                        
                        for (; arg1 u< eax_67 + ecx_30; arg1 = &arg1[2])
                            if (var_c == 0)
                                goto label_4e4a02
                            
                            arg3 = 0
                            var_c -= 1
                            var_8 |= zx.d(*i_5) << arg1.b
                            i_5 += 1
                        
                        uint32_t var_8_1 = var_8 u>> ecx_30.b
                        i_3 += *((eax_67 << 2) + &data_ad00f8) & var_8_1
                        var_8 = var_8_1 u>> eax_67.b
                        arg1 -= eax_67 + ecx_30
                        int32_t eax_69 = ebx[1]
                        int32_t ecx_40 = ebx[2]
                        
                        if (i_3 + ecx_40 u<= (eax_69 u>> 5 & 0x1f) + (eax_69 & 0x1f) + 0x102)
                            int32_t eax_73
                            
                            if (edx_10 != 0x10)
                                eax_73 = 0
                            label_4e4881:
                                void* i_2
                                
                                do
                                    *(ebx[3] + (ecx_40 << 2)) = eax_73
                                    ecx_40 += 1
                                    i_2 = i_3
                                    i_3 -= 1
                                while (i_2 != 1)
                                ebx[2] = ecx_40
                                continue
                            else if (ecx_40 u>= 1)
                                eax_73 = *(ebx[3] + (ecx_40 << 2) - 4)
                                goto label_4e4881
                        
                        esi[9](esi[0xa], ebx[3])
                        *ebx = 9
                        esi[6] = "invalid bit length repeat"
                        break
                    
                    var_8 u>>= ecx_30.b
                    arg1 -= ecx_30
                    *(ebx[3] + (ebx[2] << 2)) = edx_10
                    ebx[2] += 1
                
                goto label_4e49c2
            case 6
            label_4e4925:
                ebx[8] = var_8
                ebx[7] = arg1
                esi[1] = var_c
                esi[2] += i_5 - *esi
                *esi = i_5
                ebx[0xd] = var_10
                int32_t eax_88 = sub_4e7ac7(ebx, esi, arg3)
                
                if (eax_88 != 1)
                    return sub_4e856f(ebx, esi, eax_88)
                
                arg3 = 0
                sub_4e8020(ebx[1], esi)
                int32_t ecx_48 = ebx[0xd]
                i_5 = *esi
                var_c = esi[1]
                var_8 = ebx[8]
                arg1 = ebx[7]
                int32_t eax_92 = ebx[0xc]
                i_3 = i_5
                var_10 = ecx_48
                int32_t eax_94
                
                if (ecx_48 u>= eax_92)
                    eax_94 = ebx[0xb] - var_10
                else
                    eax_94 = eax_92 - ecx_48 - 1
                
                var_14 = eax_94
                
                if (ebx[6] == 0)
                    *ebx = 0
                label_4e499f:
                    eax_4 = *ebx
                    i_5 = i_3
                    esi = arg2
                    
                    if (eax_4 u> 9)
                        goto label_4e43cb
                    
                    ecx_2 = var_14
                    continue
                
                *ebx = 7
            label_4e4a61:
                ebx[0xd] = var_10
                eax_88 = sub_4e856f(ebx, esi, arg3)
                int32_t ecx_54 = ebx[0xd]
                var_10 = ecx_54
                
                if (ebx[0xc] == ecx_54)
                    *ebx = 8
                    var_48_1 = 1
                    goto label_4e43d0
                
                ebx[8] = var_8
                ebx[7] = arg1
                esi[1] = var_c
                void* ecx_59 = i_5 - *esi
                *esi = i_5
                esi[2] += ecx_59
                ebx[0xd] = var_10
                return sub_4e856f(ebx, esi, eax_88)
            case 7
                goto label_4e4a61
            case 8
                var_48_1 = 1
                goto label_4e43d0
            case 9
                goto label_4e49c2
else
label_4e43cb:
    var_48_1 = 0xfffffffe
label_4e43d0:
    ebx[8] = var_8
    eax_6 = arg1
label_4e43d6:
    ebx[7] = eax_6
    esi[1] = var_c
label_4e43e3:
    esi[2] += i_5 - *esi
    eax_10 = var_10
*esi = i_5
ebx[0xd] = eax_10
return sub_4e856f(ebx, esi, var_48_1)

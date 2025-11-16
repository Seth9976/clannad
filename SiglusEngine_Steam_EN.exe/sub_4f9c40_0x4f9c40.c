// 函数: sub_4f9c40
// 地址: 0x4f9c40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_103 = data_1bfdd30
char** eax_4
int32_t ecx_23
uint32_t eax_1
int32_t ecx_28

if (eax_103 s<= 0xaf2)
    if (eax_103 s>= 0xaf0)
        return sub_4f9300(arg1, arg2) __tailcall
    
    if (eax_103 - 0x7d0 u> 0x38)
        return sub_4f9650(arg1, arg2) __tailcall
    
    eax_1 = zx.d(*(eax_103 + 0x4fa1f4))
    
    switch (eax_1)
        case 0
            int32_t eax_2 = data_1af4e84
            
            if (eax_2 != 0)
                eax_4 = eax_2 - 1
                
                if (eax_2 == 1)
                    return sub_49af80(
                        sub_49af80(
                            sub_4ef190(eax_4, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 0, 
                            data_1b8a720, data_1b8a734), 
                        1, data_1b8a720, data_1b8a734)
                
                return eax_4
            
            eax_4 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            int32_t esi_1 = data_1b8a720
            
            if (esi_1 u> 7)
                return eax_4
            
            void* eax_8
            int32_t ecx_7
            eax_8, ecx_7 = sub_49c6b0(esi_1, 0)
            int32_t var_8_2 = 1
            sub_49bbf0(eax_8, 0, esi_1, 0, ecx_7)
            eax_4 = sub_49a750(esi_1, 0)
            (&data_20f0094)[esi_1 * 2] += 1
            goto label_4f9d1e
        case 1
            return sub_48ceb0(sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720), 
                data_1b8a720, 0x48, 0xffffffff)
        case 2
            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            int32_t edx_6 = data_1b8a720
            int32_t ecx_20
            
            if (edx_6 u> 7)
                ecx_20 = 0
            else
                int32_t ecx_19 = (&data_8d02b4)[edx_6 * 0x1640]
                
                if (ecx_19 == 1 || ecx_19 == 3)
                    if ((&data_8d02b8)[edx_6 * 0x1640] != 0)
                        ecx_20 = 0
                    else
                        ecx_20 = 1
                else if (ecx_19 != 5 || (&data_8d02b8)[edx_6 * 0x1640] != 0)
                    ecx_20 = 0
                else
                    ecx_20 = 1
            
            data_715e98 = ecx_20
            
            if (edx_6 u<= 7)
                int32_t edx_7 = *(edx_6 * 0x5900 + &data_8d2f34)
                
                if ((edx_7 == 1 || edx_7 == 3 || edx_7 == 5) && (&data_8d2f38)[edx_6 * 0x1640] == 0)
                    int32_t eax_18 = 1 | ecx_20
                    data_715e98 = eax_18
                    return eax_18
            
            data_715e98 = ecx_20
            return ecx_20
        case 3
            eax_4 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            ecx_23 = data_1b8a720
            
            if (ecx_23 u> 7)
                return eax_4
            
            eax_4 = ecx_23 * 0x5900
            (&data_20f0094)[ecx_23 * 2] += 1
            *(eax_4 + &data_8d02b8) = 1
        case 4
            eax_4 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            int32_t edx_10 = data_1b8a720
            int32_t esi_5 = data_131310c
            
            if (edx_10 u<= 7)
                (&data_20f0094)[edx_10 * 2] += 1
                (&data_f466f8)[edx_10 * 2] = 1
                eax_4 = esi_5 - (&data_8d0310)[edx_10 * 0x1640]
                (&data_8d02b8)[edx_10 * 0x1640] = 0
                (&data_8d02bc)[edx_10 * 0x1640] = 0
                (&data_8d2f24)[edx_10 * 0x1640] = eax_4
                
                if (edx_10 u<= 7)
                    (&data_f466fc)[edx_10 * 2] = 1
                    int32_t esi_6 = esi_5 - (&data_8d2f90)[edx_10 * 0x1640]
                    (&data_20f0098)[edx_10 * 2] += 1
                    (&data_8d2f38)[edx_10 * 0x1640] = 0
                    (&data_8d2f3c)[edx_10 * 0x1640] = 0
                    (&data_8d5ba4)[edx_10 * 0x1640] = esi_6
                    return edx_10 * 0x5900 + &data_8d2f34
            
            return eax_4
        case 5
            sub_49c660(0)
            return sub_49c660(1) __tailcall
        case 6
            return sub_48ceb0(eax_1, 0xffffffff, 0x48, 0xffffffff)
        case 7
            int32_t eax_20 = sub_49c510(0)
            data_715e98 = eax_20
            int32_t eax_21 = sub_49c510(1)
            data_715e98 = eax_20 | eax_21
            return eax_21
        case 8
            data_20f0094 += 1
            data_20f009c += 1
            data_20f00a4 += 1
            data_20f00ac += 1
            data_20f00b4 += 1
            data_20f00bc += 1
            data_20f00c4 += 1
            data_20f00cc += 1
            data_8d02b8 = 1
            data_8d5bb8 = 1
            data_8db4b8 = 1
            data_8e0db8 = 1
            data_8e66b8 = 1
            data_8ebfb8 = 1
            data_8f18b8 = 1
            data_8f71b8 = 1
        label_4f9f48:
            data_20f0098 += 1
            data_20f00a0 += 1
            data_20f00a8 += 1
            data_20f00b0 += 1
            data_20f00b8 += 1
            data_20f00c0 += 1
            data_20f00c8 += 1
            data_20f00d0 += 1
            data_8d2f38 = 1
            data_8d8838 = 1
            data_8de138 = 1
            data_8e3a38 = 1
            data_8e9338 = 1
            data_8eec38 = 1
            data_8f4538 = 1
            data_8f9e38 = 1
            return eax_1
        case 9
            ecx_28 = data_131310c
            data_8d2f24 = ecx_28 - data_8d0310
            data_8d8824 = ecx_28 - data_8d5c10
            data_8de124 = ecx_28 - data_8db510
            int32_t eax_33 = ecx_28 - data_8e0e10
            data_20f0094 += 1
            data_20f009c += 1
            data_20f00a4 += 1
            data_20f00ac += 1
            data_20f00b4 += 1
            data_20f00bc += 1
            data_20f00c4 += 1
            data_8e3a24 = eax_33
            data_8e9324 = ecx_28 - data_8e6710
            data_8eec24 = ecx_28 - data_8ec010
            data_8f4524 = ecx_28 - data_8f1910
            int32_t eax_41 = ecx_28 - data_8f7210
            data_20f00cc += 1
            data_8d02b8 = 0
            data_f466f8 = 1
            data_8d02bc = 0
            data_8d5bb8 = 0
            data_f46700 = 1
            data_8d5bbc = 0
            data_8db4b8 = 0
            data_f46708 = 1
            data_8db4bc = 0
            data_8e0db8 = 0
            data_f46710 = 1
            data_8e0dbc = 0
            data_8e66b8 = 0
            data_f46718 = 1
            data_8e66bc = 0
            data_8ebfb8 = 0
            data_f46720 = 1
            data_8ebfbc = 0
            data_8f18b8 = 0
            data_f46728 = 1
            data_8f18bc = 0
            data_8f71b8 = 0
            data_f46730 = 1
            data_8f71bc = 0
            data_8f9e24 = eax_41
            goto label_4fa1fe
        case 0xa
            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            return sub_49ab50(data_1b8a720) __tailcall
        case 0xb
            return sub_4f9300(arg1, arg2) __tailcall
        case 0xc
            return sub_49ab70() __tailcall
        case 0xd
            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            return sub_49c300(data_1b8a720) __tailcall
        case 0xe
            return sub_49c370() __tailcall
        case 0xf
            return sub_4f9650(arg1, arg2) __tailcall
else
    void* eax_72
    
    if (eax_103 s> 0xeda)
        if (eax_103 - 0xf0a u> 0x18)
            return sub_4f9650(arg1, arg2) __tailcall
        
        eax_1 = zx.d(*(eax_103 + sub_4f9650+0x51a))
        
        switch (eax_1)
            case 0
                int32_t eax_92 = data_1af4e84
                
                if (eax_92 != 0)
                    eax_4 = eax_92 - 1
                    
                    if (eax_92 == 1)
                        return sub_49af80(
                            sub_4ef190(eax_4, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 1, 
                            data_1b8a720, data_1b8a734)
                    
                    return eax_4
                
                eax_4 = sub_4ef190(eax_92, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            label_4f9d1e:
                int32_t esi_2 = data_1b8a720
                
                if (esi_2 u<= 7)
                    void* eax_9
                    int32_t ecx_11
                    eax_9, ecx_11 = sub_49c6b0(esi_2, 1)
                    int32_t var_8_3 = 1
                    sub_49bbf0(eax_9, 1, esi_2, 1, ecx_11)
                    eax_4 = sub_49a750(esi_2, 1)
                    (&data_20f0098)[esi_2 * 2] += 1
                
                return eax_4
            case 1
                return sub_48ceb0(sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", 
                    &data_1b8a720), data_1b8a720, 0x48, 1)
            case 2
                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                int32_t eax_97 = data_1b8a720
                
                if (eax_97 u> 7)
                    data_715e98 = 0
                    return 0
                
                eax_72 = eax_97 * 0x5900 + &data_8d2f34
            label_4fa507:
                int32_t ecx_53 = *eax_72
                
                if ((ecx_53 == 1 || ecx_53 == 3 || ecx_53 == 5) && *(eax_72 + 4) == 0)
                    data_715e98 = 1
                    return 1
                
                data_715e98 = 0
                return 0
            case 3
                eax_4 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                ecx_23 = data_1b8a720
            case 4
                eax_4 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                int32_t edx_30 = data_1b8a720
                
                if (edx_30 u> 7)
                    return eax_4
                
                int32_t eax_100 = data_131310c
                (&data_f466fc)[edx_30 * 2] = 1
                int32_t eax_101 = eax_100 - (&data_8d2f90)[edx_30 * 0x1640]
                (&data_20f0098)[edx_30 * 2] += 1
                (&data_8d2f38)[edx_30 * 0x1640] = 0
                (&data_8d2f3c)[edx_30 * 0x1640] = 0
                (&data_8d5ba4)[edx_30 * 0x1640] = eax_101
                return eax_101
            case 5
                return sub_49c660(1) __tailcall
            case 6
                return sub_48ceb0(eax_1, 0xffffffff, 0x48, 1)
            case 7
                int32_t eax_99 = sub_49c510(1)
                data_715e98 = eax_99
                return eax_99
            case 8
                goto label_4f9f48
            case 9
                ecx_28 = data_131310c
            label_4fa1fe:
                data_20f0098 += 1
                data_8d5ba4 = ecx_28 - data_8d2f90
                data_8db4a4 = ecx_28 - data_8d8890
                int32_t eax_47 = ecx_28 - data_8de190
                data_20f00a0 += 1
                data_20f00a8 += 1
                data_20f00b0 += 1
                data_20f00b8 += 1
                data_20f00c0 += 1
                data_20f00c8 += 1
                data_8e0da4 = eax_47
                data_8e66a4 = ecx_28 - data_8e3a90
                data_8ebfa4 = ecx_28 - data_8e9390
                data_8f18a4 = ecx_28 - data_8eec90
                int32_t eax_55 = ecx_28 - data_8f4590
                int32_t ecx_29 = ecx_28 - data_8f9e90
                data_20f00d0 += 1
                data_8d2f3c = 0
                data_f466fc = 1
                data_8d2f38 = 0
                data_8d8838 = 0
                data_f46704 = 1
                data_8d883c = 0
                data_8de138 = 0
                data_f4670c = 1
                data_8de13c = 0
                data_8e3a38 = 0
                data_f46714 = 1
                data_8e3a3c = 0
                data_8e9338 = 0
                data_f4671c = 1
                data_8e933c = 0
                data_8eec38 = 0
                data_f46724 = 1
                data_8eec3c = 0
                data_8f4538 = 0
                data_f4672c = 1
                data_8f453c = 0
                data_8f71a4 = eax_55
                data_8f9e38 = 0
                data_f46734 = 1
                data_8f9e3c = 0
                data_8fcaa4 = ecx_29
                return eax_55
            case 0xa
                return sub_4f9650(arg1, arg2) __tailcall
    else
        if (eax_103 s>= 0xed8)
            return sub_4f9300(arg1, arg2) __tailcall
        
        if (eax_103 - 0xb22 u> 0x18)
            return sub_4f9650(arg1, arg2) __tailcall
        
        uint32_t eax_61 = zx.d(*(eax_103 + 0x4f9f0a))
        
        switch (eax_61)
            case 0
                int32_t eax_62 = data_1af4e84
                
                if (eax_62 == 0)
                    eax_4 = sub_4ef190(eax_62, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                    int32_t esi_7 = data_1b8a720
                    
                    if (esi_7 u<= 7)
                        void* eax_66
                        int32_t ecx_45
                        eax_66, ecx_45 = sub_49c6b0(esi_7, 0)
                        int32_t var_8_4 = 1
                        sub_49bbf0(eax_66, 0, esi_7, 0, ecx_45)
                        int32_t eax_67 = sub_49a750(esi_7, 0)
                        (&data_20f0094)[esi_7 * 2] += 1
                        return eax_67
                else
                    eax_4 = eax_62 - 1
                    
                    if (eax_62 == 1)
                        return sub_49af80(
                            sub_4ef190(eax_4, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 0, 
                            data_1b8a720, data_1b8a734)
                
                return eax_4
            case 1
                return sub_48ceb0(sub_4ef190(eax_61, arg2 + 0x20, *(arg2 + 0x20), $", 
                    &data_1b8a720), data_1b8a720, 0x48, 0)
            case 2
                sub_4ef190(eax_61, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                int32_t eax_70 = data_1b8a720
                
                if (eax_70 u> 7)
                    data_715e98 = 0
                    return 0
                
                eax_72 = &(&data_8d02b4)[eax_70 * 0x1640]
                goto label_4fa507
            case 3
                eax_4 = sub_4ef190(eax_61, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                int32_t ecx_56 = data_1b8a720
                
                if (ecx_56 u> 7)
                    return eax_4
                
                (&data_20f0094)[ecx_56 * 2] += 1
                (&data_8d02b8)[ecx_56 * 0x1640] = 1
                return ecx_56 * 0x5900
            case 4
                eax_4 = sub_4ef190(eax_61, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                int32_t edx_23 = data_1b8a720
                
                if (edx_23 u> 7)
                    return eax_4
                
                int32_t eax_75 = data_131310c
                (&data_f466f8)[edx_23 * 2] = 1
                int32_t eax_76 = eax_75 - (&data_8d0310)[edx_23 * 0x1640]
                (&data_20f0094)[edx_23 * 2] += 1
                (&data_8d02b8)[edx_23 * 0x1640] = 0
                (&data_8d02bc)[edx_23 * 0x1640] = 0
                (&data_8d2f24)[edx_23 * 0x1640] = eax_76
                return eax_76
            case 5
                return sub_49c660(0) __tailcall
            case 6
                return sub_48ceb0(eax_61, 0xffffffff, 0x48, 0)
            case 7
                int32_t eax_73 = sub_49c510(0)
                data_715e98 = eax_73
                return eax_73
            case 8
                data_20f0094 += 1
                data_20f009c += 1
                data_20f00a4 += 1
                data_20f00ac += 1
                data_20f00b4 += 1
                data_20f00bc += 1
                data_20f00c4 += 1
                data_20f00cc += 1
                data_8d02b8 = 1
                data_8d5bb8 = 1
                data_8db4b8 = 1
                data_8e0db8 = 1
                data_8e66b8 = 1
                data_8ebfb8 = 1
                data_8f18b8 = 1
                data_8f71b8 = 1
                return eax_61
            case 9
                int32_t ecx_61 = data_131310c
                data_8d2f24 = ecx_61 - data_8d0310
                data_8d8824 = ecx_61 - data_8d5c10
                int32_t eax_82 = ecx_61 - data_8db510
                data_20f0094 += 1
                data_20f009c += 1
                data_20f00a4 += 1
                data_20f00ac += 1
                data_20f00b4 += 1
                data_20f00bc += 1
                data_20f00c4 += 1
                data_8de124 = eax_82
                data_8e3a24 = ecx_61 - data_8e0e10
                data_8e9324 = ecx_61 - data_8e6710
                data_8eec24 = ecx_61 - data_8ec010
                int32_t eax_90 = ecx_61 - data_8f1910
                int32_t ecx_62 = ecx_61 - data_8f7210
                data_20f00cc += 1
                data_8d02b8 = 0
                data_f466f8 = 1
                data_8d02bc = 0
                data_8d5bb8 = 0
                data_f46700 = 1
                data_8d5bbc = 0
                data_8db4b8 = 0
                data_f46708 = 1
                data_8db4bc = 0
                data_8e0db8 = 0
                data_f46710 = 1
                data_8e0dbc = 0
                data_8e66b8 = 0
                data_f46718 = 1
                data_8e66bc = 0
                data_8ebfb8 = 0
                data_f46720 = 1
                data_8ebfbc = 0
                data_8f18b8 = 0
                data_f46728 = 1
                data_8f18bc = 0
                data_8f4524 = eax_90
                data_8f71b8 = 0
                data_f46730 = 1
                data_8f71bc = 0
                data_8f9e24 = ecx_62
                return eax_90
            case 0xa
                return sub_4f9650(arg1, arg2) __tailcall

if (ecx_23 u> 7)
    return eax_4

(&data_20f0098)[ecx_23 * 2] += 1
(&data_8d2f38)[ecx_23 * 0x1640] = 1
return ecx_23 * 0x5900

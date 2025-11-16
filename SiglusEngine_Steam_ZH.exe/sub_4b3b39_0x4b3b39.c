// 函数: sub_4b3b39
// 地址: 0x4b3b39
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg1
int32_t edi
int32_t var_14 = edi
int32_t* edi_1

if ((arg1[0x1c].b & 0x40) != 0)
    edi_1 = arg1
label_4b3b5d:
    int32_t i = 0
    int32_t i_23 = 0
    int16_t top
    
    if (arg1[3] u> 0)
        do
            int32_t eax_2 = arg1[6]
            arg1[0x3f] = i
            int32_t* eax_3 = *(eax_2 + (i << 2))
            arg1[0x40] = eax_3
            
            if ((*eax_3 & 0xfff00000) == 0x11400000)
                int32_t* eax_6 = sub_4cca72(arg1)
                top -= 1
                unimplemented  {call 0x4cca72}
                edi_1 = eax_6
                
                if (edi_1 s< 0)
                    return edi_1
                
                i = i_23
            else
                edi_1 = 1
            
            i += 1
            i_23 = i
        while (i u< arg1[3])
    
    if ((arg1[0x33].b & 4) != 0)
        sub_4a3f75(arg1)
        int32_t i_24 = 0
        
        if (arg1[3] u> 0)
            int32_t i_1 = 0
            
            do
                int32_t eax_7 = arg1[6]
                arg1[0x3f] = i_1
                int32_t* eax_8 = *(eax_7 + (i_1 << 2))
                arg1[0x40] = eax_8
                
                if ((*eax_8 & 0xfff00000) == 0x10000000)
                    sub_4c936e(arg1)
                    i_1 = i_24
                
                i_1 += 1
                i_24 = i_1
            while (i_1 u< arg1[3])
        
        sub_4a3f8e(arg1)
    
    if ((arg1[0x33].b & 4) != 0 && (arg1[0x33].b & 4) != 0)
    label_4b4047:
        sub_4c8264(arg1)
        int32_t i_2 = 0
        int32_t i_17 = 0
        
        if (arg1[3] u> 0)
            do
                int32_t eax_63 = arg1[6]
                arg1[0x3f] = i_2
                int32_t* eax_64 = *(eax_63 + (i_2 << 2))
                arg1[0x40] = eax_64
                int32_t eax_66 = *eax_64 & 0xfff00000
                
                if (eax_66 == 0x74600000 || eax_66 == 0x74700000)
                    edi_1 = sub_4cdc21(arg1)
                    
                    if (edi_1 s< 0)
                        return edi_1
                    
                    edi_1 = sub_4cdd6f(arg1)
                    
                    if (edi_1 s< 0)
                        return edi_1
                    
                    i_2 = i_17
                
                i_2 += 1
                i_17 = i_2
            while (i_2 u< arg1[3])
        
        int32_t i_3 = 0
        
        if (arg1[3] u> 0)
            do
                int32_t eax_69 = arg1[6]
                arg1[0x3f] = i_3
                int32_t* eax_70 = *(eax_69 + (i_3 << 2))
                arg1[0x40] = eax_70
                int32_t eax_72 = *eax_70 & 0xfff00000
                
                if (eax_72 == 0x74400000 || eax_72 == 0x74500000 || eax_72 == 0x74600000
                        || eax_72 == 0x74700000)
                    sub_4cded1(arg1)
                
                i_3 += 1
            while (i_3 u< arg1[3])
        
        int32_t i_4 = 0
        int32_t i_18 = 0
        
        if (arg1[3] u> 0)
            do
                int32_t eax_73 = arg1[6]
                arg1[0x3f] = i_4
                int32_t* eax_74 = *(eax_73 + (i_4 << 2))
                arg1[0x40] = eax_74
                
                if ((*eax_74 & 0xfff00000) == 0x20900000)
                    edi_1 = sub_4cd403(arg1)
                    
                    if (edi_1 s< 0)
                        return edi_1
                    
                    i_4 = i_18
                
                i_4 += 1
                i_18 = i_4
            while (i_4 u< arg1[3])
        
        sub_4c8264(arg1)
        int32_t i_5 = 0
        int32_t i_19 = 0
        
        if (arg1[3] u> 0)
            do
                int32_t eax_78 = arg1[6]
                arg1[0x3f] = i_5
                int32_t* eax_79 = *(eax_78 + (i_5 << 2))
                arg1[0x40] = eax_79
                
                if ((*eax_79 & 0xfff00000) == 0x20900000)
                    edi_1 = sub_4ccf29(arg1)
                    
                    if (edi_1 s< 0)
                        return edi_1
                    
                    i_5 = i_19
                
                i_5 += 1
                i_19 = i_5
            while (i_5 u< arg1[3])
        
        int32_t i_6 = 0
        int32_t i_20 = 0
        
        if (arg1[3] u> 0)
            do
                int32_t eax_83 = arg1[6]
                arg1[0x3f] = i_6
                int32_t* eax_84 = *(eax_83 + (i_6 << 2))
                arg1[0x40] = eax_84
                
                if ((*eax_84 & 0xfff00000) == 0x11400000)
                    edi_1 = sub_4c85c1(arg1)
                    
                    if (edi_1 s< 0)
                        return edi_1
                    
                    i_6 = i_20
                
                i_6 += 1
                i_20 = i_6
            while (i_6 u< arg1[3])
        
        int32_t i_7 = 0
        int32_t i_21 = 0
        
        if (arg1[3] u> 0)
            do
                int32_t eax_88 = arg1[6]
                arg1[0x3f] = i_7
                int32_t* eax_89 = *(eax_88 + (i_7 << 2))
                arg1[0x40] = eax_89
                
                if ((*eax_89 & 0xfff00000) == 0x70300000)
                    edi_1 = sub_4cf3e5(arg1, 0)
                    
                    if (edi_1 s< 0)
                        return edi_1
                    
                    i_7 = i_21
                
                i_7 += 1
                i_21 = i_7
            while (i_7 u< arg1[3])
        
        sub_4c8264(arg1)
        int32_t i_8 = 0
        int32_t i_22 = 0
        
        if (arg1[3] u> 0)
            do
                int32_t eax_93 = arg1[6]
                arg1[0x3f] = i_8
                int32_t* eax_94 = *(eax_93 + (i_8 << 2))
                arg1[0x40] = eax_94
                int32_t eax_96 = *eax_94 & 0xfff00000
                int32_t* eax_97
                
                if (eax_96 == 0x10300000 || eax_96 == 0x10500000 || eax_96 == 0x10600000
                        || eax_96 == 0x10700000 || eax_96 == 0x50000000)
                    eax_97 = sub_4cbb85(arg1)
                label_4b4268:
                    
                    if (eax_97 s< 0)
                        return eax_97
                    
                    i_8 = i_22
                else if (eax_96 == 0x70300000)
                    eax_97 = sub_4d4fc2(arg1)
                    goto label_4b4268
                i_8 += 1
                i_22 = i_8
            while (i_8 u< arg1[3])
        
        sub_4c8264(arg1)
        edi_1 = sub_4a4f2f(arg1)
        
        if (edi_1 s>= 0)
            edi_1 = sub_4ad8ba(arg1)
            
            if (edi_1 s>= 0)
                edi_1 = sub_49ff18(arg1)
                
                if (edi_1 s>= 0)
                    edi_1 = sub_4a6590(arg1)
                    
                    if (edi_1 s>= 0)
                        sub_4c8264(arg1)
                        return nullptr
    else
        int32_t i_9 = 0
        int32_t i_25 = 0
        
        if (arg1[3] u> 0)
            do
                int32_t eax_11 = arg1[6]
                arg1[0x3f] = i_9
                int32_t* eax_12 = *(eax_11 + (i_9 << 2))
                arg1[0x40] = eax_12
                int32_t eax_14 = *eax_12 & 0xfff00000
                
                if (eax_14 == 0x10100000)
                    edi_1 = sub_4d3a58(arg1, 1)
                label_4b3c6b:
                    
                    if (edi_1 s< 0)
                        return edi_1
                    
                    i_9 = i_25
                else
                    if (eax_14 == 0x20000000 || eax_14 == 0x20100000 || eax_14 == 0x30000000)
                        edi_1 = sub_4c9d4c(arg1)
                        sub_4c8264(arg1)
                        goto label_4b3c6b
                    
                    edi_1 = 1
                
                i_9 += 1
                i_25 = i_9
            while (i_9 u< arg1[3])
        
        if ((arg1[0x1b].b & 0x80) == 0 || (*(arg1 + 0x71) & 1) == 0)
        label_4b3d94:
            int32_t i_10 = 0
            int32_t i_14 = 0
            
            if (arg1[3] u> 0)
                do
                    int32_t ecx_17 = arg1[6]
                    arg1[0x3f] = i_10
                    int32_t* eax_31 = *(ecx_17 + (i_10 << 2))
                    arg1[0x40] = eax_31
                    int32_t eax_33 = *eax_31 & 0xfff00000
                    
                    if (eax_33 == 0x10500000)
                        if (zx.d((arg1[0x32]).w) u< 0x200)
                            edi_1 = 1
                        else
                            edi_1 = sub_4c8ee5(arg1)
                    else
                        int32_t* eax_35
                        
                        if (eax_33 == 0x10f00000)
                            eax_35 = sub_4cbe73(arg1)
                            top -= 1
                            unimplemented  {call 0x4cbe73}
                            edi_1 = eax_35
                        else if (eax_33 == 0x11400000)
                            eax_35 = sub_4cca72(arg1)
                            top -= 1
                            unimplemented  {call 0x4cca72}
                            edi_1 = eax_35
                        else if (eax_33 == 0x20100000)
                            if (zx.d((arg1[0x32]).w) u< 0x200)
                                edi_1 = 1
                            else
                                edi_1 = sub_4cec77(arg1)
                        else if (eax_33 != 0x20400000)
                            edi_1 = 1
                        else
                            if ((arg1[0x1b].b & 0x20) != 0)
                                edi_1 = sub_4ce6ec(arg1)
                            
                            if (edi_1 == 1)
                                edi_1 = sub_4d3b12(arg1, edi_1)
                    
                    int32_t j = 0
                    int32_t j_1 = 0
                    
                    if (arg1[3] u> 0)
                        edi_1 = 1
                        
                        do
                            int32_t eax_40 = arg1[6]
                            arg1[0x3f] = j
                            int32_t* eax_41 = *(eax_40 + (j << 2))
                            arg1[0x40] = eax_41
                            
                            if ((*eax_41 & 0xfff00000) == 0x70000000)
                                sub_4d3a98(arg1)
                                j = j_1
                            
                            j += 1
                            j_1 = j
                        while (j u< arg1[3])
                    
                    if (edi_1 s< 0)
                        return edi_1
                    
                    i_10 = i_14 + 1
                    i_14 = i_10
                while (i_10 u< arg1[3])
            
            edi_1 = sub_4a4f2f(arg1)
            
            if (edi_1 s>= 0)
                sub_4c8264(arg1)
                int32_t var_8_2 = 0
                
                if (arg1[3] u> 0)
                    int32_t ecx_34
                    
                    do
                        ecx_34 = var_8_2
                        int32_t eax_46 = arg1[6]
                        arg1[0x3f] = ecx_34
                        int32_t* eax_47 = *(eax_46 + (ecx_34 << 2))
                        arg1[0x40] = eax_47
                        int32_t eax_49 = *eax_47 & 0xfff00000
                        int32_t* eax_51
                        
                        if (eax_49 == 0x20500000)
                            eax_51 = sub_4ce0e9(arg1)
                        label_4b3f65:
                            edi_1 = eax_51
                        label_4b3f67:
                            
                            if (edi_1 s< 0)
                                return edi_1
                            
                            ecx_34 = var_8_2
                        else
                            if (eax_49 == 0x50000000)
                                if ((arg1[0x1b].b & 0x20) == 0)
                                    goto label_4b3f67
                                
                                eax_51 = sub_4ce9ac(arg1)
                                goto label_4b3f65
                            
                            if (eax_49 == 0x70300000)
                                eax_51 = sub_4cf3e5(arg1, 1)
                                goto label_4b3f65
                            
                            if (eax_49 == 0x73500000 || eax_49 == 0x73600000)
                                edi_1 = sub_4cc5aa(arg1)
                                
                                if (edi_1 s< 0)
                                    return edi_1
                                
                                eax_51 = sub_4cc6f8(arg1)
                                goto label_4b3f65
                            
                            if (eax_49 == 0x74600000 || eax_49 == 0x74700000)
                                edi_1 = sub_4cdc21(arg1)
                                
                                if (edi_1 s< 0)
                                    return edi_1
                                
                                eax_51 = sub_4cdd6f(arg1)
                                goto label_4b3f65
                            
                            edi_1 = 1
                        var_8_2 = ecx_34 + 1
                    while (ecx_34 + 1 u< arg1[3])
                
                int32_t i_11 = 0
                int32_t i_15 = 0
                
                if (arg1[3] u> 0)
                    do
                        int32_t eax_53 = arg1[6]
                        arg1[0x3f] = i_11
                        int32_t* eax_54 = *(eax_53 + (i_11 << 2))
                        arg1[0x40] = eax_54
                        int32_t eax_56 = *eax_54 & 0xfff00000
                        
                        if (eax_56 == 0x74400000)
                            goto label_4b3fe6
                        
                        int32_t* eax_57
                        
                        if (eax_56 == 0x73500000 || eax_56 == 0x73600000 || eax_56 == 0x73700000
                                || eax_56 == 0x73800000)
                            eax_57 = sub_4cc85a(arg1)
                            goto label_4b3feb
                        
                        if (eax_56 == 0x74500000 || eax_56 == 0x74600000 || eax_56 == 0x74700000)
                        label_4b3fe6:
                            eax_57 = sub_4cded1(arg1)
                        label_4b3feb:
                            
                            if (eax_57 s< 0)
                                return eax_57
                            
                            i_11 = i_15
                        
                        i_11 += 1
                        i_15 = i_11
                    while (i_11 u< arg1[3])
                
                int32_t i_12 = 0
                int32_t i_16 = 0
                
                if (arg1[3] u> 0)
                    do
                        int32_t eax_58 = arg1[6]
                        arg1[0x3f] = i_12
                        int32_t* eax_59 = *(eax_58 + (i_12 << 2))
                        arg1[0x40] = eax_59
                        
                        if ((*eax_59 & 0xfff00000) == 0x73700000)
                            edi_1 = sub_4cc4c3(arg1)
                            
                            if (edi_1 s< 0)
                                return edi_1
                            
                            i_12 = i_16
                        
                        i_12 += 1
                        i_16 = i_12
                    while (i_12 u< arg1[3])
                
                goto label_4b4047
        else
            int32_t i_13 = 0
            int32_t i_26 = 0
            
            if (arg1[3] u> 0)
                do
                    int32_t eax_17 = arg1[6]
                    arg1[0x3f] = i_13
                    int32_t* eax_18 = *(eax_17 + (i_13 << 2))
                    arg1[0x40] = eax_18
                    
                    if ((*eax_18 & 0xfff00000) == 0x30000000)
                        if (edi_1 s< 0)
                            return edi_1
                        
                        int32_t* eax_21 = sub_4c93f1(arg1, nullptr, 0, nullptr)
                        top -= 1
                        unimplemented  {call 0x4c93f1}
                        
                        if (eax_21 s< 0)
                            return eax_21
                        
                        edi_1 = sub_4c99ed(arg1, nullptr, 0, nullptr)
                        
                        if (edi_1 s< 0)
                            return edi_1
                        
                        i_13 = i_26
                    else
                        edi_1 = 1
                    
                    i_13 += 1
                    i_26 = i_13
                while (i_13 u< arg1[3])
            
            edi_1 = sub_4a4f2f(arg1)
            
            if (edi_1 s>= 0)
                sub_4c8264(arg1)
                int32_t var_8_1 = 0
                
                if (arg1[3] u> 0)
                    int32_t ecx_15
                    
                    do
                        ecx_15 = var_8_1
                        int32_t eax_24 = arg1[6]
                        arg1[0x3f] = ecx_15
                        int32_t* eax_25 = *(eax_24 + (ecx_15 << 2))
                        arg1[0x40] = eax_25
                        int32_t eax_27 = *eax_25 & 0xfff00000
                        
                        if (eax_27 == 0x20000000)
                        label_4b3d79:
                            edi_1 = sub_4c9d4c(arg1)
                            sub_4c8264(arg1)
                        label_4b3d80:
                            
                            if (edi_1 s< 0)
                                return edi_1
                            
                            ecx_15 = var_8_1
                        else
                            if (eax_27 == 0x30000000)
                                edi_1 = sub_4ced6a(arg1)
                                
                                if (edi_1 s< 0)
                                    return edi_1
                                
                                edi_1 = sub_4cee3c(arg1)
                                goto label_4b3d80
                            
                            if (eax_27 == 0x70b00000)
                                goto label_4b3d79
                            
                            edi_1 = 1
                        
                        var_8_1 = ecx_15 + 1
                    while (ecx_15 + 1 u< arg1[3])
                
                goto label_4b3d94
else
    edi_1 = sub_4b3624(arg1)
    
    if (edi_1 s>= 0)
        goto label_4b3b5d

return edi_1

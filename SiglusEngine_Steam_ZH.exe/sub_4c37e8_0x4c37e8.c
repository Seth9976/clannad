// 函数: sub_4c37e8
// 地址: 0x4c37e8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
int32_t i = 0
int32_t result
int16_t top

if (arg1[3] u> 0)
    do
        int32_t eax_1 = arg1[6]
        arg1[0x3f] = i
        int32_t* ecx = *(eax_1 + (i << 2))
        arg1[0x40] = ecx
        int32_t eax_3 = *ecx & 0xfff00000
        
        if (eax_3 == 0x10400000)
            if ((*(arg1 + 0x71) & 0x20) != 0)
                *ecx = (ecx[3] & 0xfffff) | 0x71000000
            
            result = 0
            goto label_4c383f
        
        if (eax_3 == 0x11400000)
            result = sub_4cca72(arg1)
            top -= 1
            unimplemented  {call 0x4cca72}
        label_4c383f:
            
            if (result s< 0)
                return result
        
        i += 1
    while (i u< arg1[3])

if ((arg1[0x33].b & 4) != 0)
label_4c3aa8:
    sub_4c8264(arg1)
    int32_t i_1 = 0
    
    if (arg1[3] u> 0)
        do
            int32_t eax_31 = arg1[6]
            arg1[0x3f] = i_1
            int32_t* eax_32 = *(eax_31 + (i_1 << 2))
            arg1[0x40] = eax_32
            int32_t eax_34 = *eax_32 & 0xfff00000
            
            if (eax_34 == 0x74600000 || eax_34 == 0x74700000)
                result = sub_4cdc21(arg1)
                
                if (result s< 0)
                    return result
                
                result = sub_4cdd6f(arg1)
                
                if (result s< 0)
                    return result
            
            i_1 += 1
        while (i_1 u< arg1[3])
    
    int32_t i_2 = 0
    
    if (arg1[3] u> 0)
        do
            int32_t eax_35 = arg1[6]
            arg1[0x3f] = i_2
            int32_t* eax_36 = *(eax_35 + (i_2 << 2))
            arg1[0x40] = eax_36
            int32_t eax_38 = *eax_36 & 0xfff00000
            
            if (eax_38 == 0x74400000 || eax_38 == 0x74500000 || eax_38 == 0x74600000
                    || eax_38 == 0x74700000)
                sub_4cded1(arg1)
            
            i_2 += 1
        while (i_2 u< arg1[3])
    
    int32_t i_3 = 0
    
    if (arg1[3] u> 0)
        do
            int32_t eax_39 = arg1[6]
            arg1[0x3f] = i_3
            int32_t* eax_40 = *(eax_39 + (i_3 << 2))
            arg1[0x40] = eax_40
            
            if ((*eax_40 & 0xfff00000) == 0x20900000)
                result = sub_4cd403(arg1)
                
                if (result s< 0)
                    return result
            
            i_3 += 1
        while (i_3 u< arg1[3])
    
    int32_t i_4 = 0
    
    if (arg1[3] u> 0)
        do
            int32_t eax_43 = arg1[6]
            arg1[0x3f] = i_4
            int32_t* eax_44 = *(eax_43 + (i_4 << 2))
            arg1[0x40] = eax_44
            
            if ((*eax_44 & 0xfff00000) == 0x11400000)
                result = sub_4c85c1(arg1)
                
                if (result s< 0)
                    return result
            
            i_4 += 1
        while (i_4 u< arg1[3])
    
    int32_t i_5 = 0
    
    if (arg1[3] u> 0)
        do
            int32_t eax_47 = arg1[6]
            arg1[0x3f] = i_5
            int32_t* eax_48 = *(eax_47 + (i_5 << 2))
            arg1[0x40] = eax_48
            
            if ((*eax_48 & 0xfff00000) == 0x70300000)
                if (zx.d((arg1[0x32]).w) u< 0x200)
                    result = 1
                else
                    result = sub_4cf3e5(arg1, 0)
                
                if (result s< 0)
                    return result
            
            i_5 += 1
        while (i_5 u< arg1[3])
    
    sub_4c8264(arg1)
    int32_t i_6 = 0
    
    if (arg1[3] u> 0)
        do
            int32_t eax_53 = arg1[6]
            arg1[0x3f] = i_6
            int32_t* eax_54 = *(eax_53 + (i_6 << 2))
            arg1[0x40] = eax_54
            int32_t eax_56 = *eax_54 & 0xfff00000
            
            if (eax_56 == 0x10300000 || eax_56 == 0x10500000 || eax_56 == 0x10600000
                    || eax_56 == 0x10700000 || eax_56 == 0x50000000)
                result = sub_4cbb85(arg1)
            label_4c3c7b:
                
                if (result s< 0)
                    return result
            else if (eax_56 == 0x70300000)
                if (zx.d((arg1[0x32]).w) u< 0x200)
                    result = 1
                else
                    result = sub_4d4fc2(arg1)
                
                goto label_4c3c7b
            
            i_6 += 1
        while (i_6 u< arg1[3])
    
    sub_4c8264(arg1)
    int32_t i_7 = 0
    
    if (arg1[3] u> 0)
        do
            int32_t eax_59 = arg1[6]
            arg1[0x3f] = i_7
            int32_t* eax_60 = *(eax_59 + (i_7 << 2))
            arg1[0x40] = eax_60
            
            if ((*eax_60 & 0xfff00000) == 0x50300000)
                result = sub_4c8922(arg1)
                
                if (result s< 0)
                    return result
            
            i_7 += 1
        while (i_7 u< arg1[3])
    
    result = sub_4a4f2f(arg1)
    
    if (result s>= 0)
        result = sub_4ad8ba(arg1)
        
        if (result s>= 0)
            result = sub_49ff18(arg1)
            
            if (result s>= 0)
                result = sub_4a6590(arg1)
                
                if (result s>= 0)
                    sub_4c8264(arg1)
                    return 0
else
    int32_t i_8 = 0
    
    if (arg1[3] u> 0)
        do
            int32_t eax_7 = arg1[6]
            arg1[0x3f] = i_8
            int32_t* eax_8 = *(eax_7 + (i_8 << 2))
            arg1[0x40] = eax_8
            int32_t eax_10 = *eax_8 & 0xfff00000
            
            if (eax_10 == 0x10100000)
                result = sub_4d3a58(arg1, 1)
            label_4c3906:
                
                if (result s< 0)
                    return result
            else
                if (eax_10 == 0x10500000)
                    if (zx.d((arg1[0x32]).w) u>= 0x200)
                        result = sub_4c8ee5(arg1)
                        goto label_4c3906
                    
                label_4c38cd:
                    result = 1
                    goto label_4c3906
                
                if (eax_10 == 0x10f00000)
                    result = sub_4cbe73(arg1)
                    top -= 1
                    unimplemented  {call 0x4cbe73}
                    goto label_4c3906
                
                if (eax_10 == 0x11400000)
                    result = sub_4cca72(arg1)
                    top -= 1
                    unimplemented  {call 0x4cca72}
                    goto label_4c3906
                
                if (eax_10 == 0x20100000)
                    if (zx.d((arg1[0x32]).w) u< 0x200)
                        goto label_4c38cd
                    
                    result = sub_4cec77(arg1)
                    goto label_4c3906
                
                if (eax_10 == 0x20400000)
                    result = sub_4d3b12(arg1, 1)
                    goto label_4c3906
            
            i_8 += 1
        while (i_8 u< arg1[3])
    
    result = sub_4a4f2f(arg1)
    
    if (result s>= 0)
        sub_4c8264(arg1)
        int32_t i_9 = 0
        
        if (arg1[3] u> 0)
            do
                int32_t eax_15 = arg1[6]
                arg1[0x3f] = i_9
                int32_t* eax_16 = *(eax_15 + (i_9 << 2))
                arg1[0x40] = eax_16
                int32_t eax_18 = *eax_16 & 0xfff00000
                
                if (eax_18 == 0x20500000)
                    if (zx.d((arg1[0x32]).w) u< 0x200)
                    label_4c39e3:
                        result = 1
                        goto label_4c39e4
                    
                    result = sub_4ce0e9(arg1)
                label_4c39e4:
                    
                    if (result s< 0)
                        return result
                else
                    if (eax_18 == 0x70300000)
                        if (zx.d((arg1[0x32]).w) u< 0x200)
                            goto label_4c39e3
                        
                        result = sub_4cf3e5(arg1, 1)
                        goto label_4c39e4
                    
                    if (eax_18 == 0x73500000 || eax_18 == 0x73600000)
                        result = sub_4cc5aa(arg1)
                        
                        if (result s< 0)
                            return result
                        
                        result = sub_4cc6f8(arg1)
                        goto label_4c39e4
                    
                    if (eax_18 == 0x74600000 || eax_18 == 0x74700000)
                        result = sub_4cdc21(arg1)
                        
                        if (result s< 0)
                            return result
                        
                        result = sub_4cdd6f(arg1)
                        goto label_4c39e4
                
                i_9 += 1
            while (i_9 u< arg1[3])
        
        int32_t i_10 = 0
        
        if (arg1[3] u> 0)
            do
                int32_t eax_23 = arg1[6]
                arg1[0x3f] = i_10
                int32_t* eax_24 = *(eax_23 + (i_10 << 2))
                arg1[0x40] = eax_24
                int32_t eax_26 = *eax_24 & 0xfff00000
                
                if (eax_26 == 0x74400000)
                    goto label_4c3a5a
                
                if (eax_26 == 0x73500000 || eax_26 == 0x73600000 || eax_26 == 0x73700000
                        || eax_26 == 0x73800000)
                    result = sub_4cc85a(arg1)
                    goto label_4c3a5f
                
                if (eax_26 == 0x74500000 || eax_26 == 0x74600000 || eax_26 == 0x74700000)
                label_4c3a5a:
                    result = sub_4cded1(arg1)
                label_4c3a5f:
                    
                    if (result s< 0)
                        return result
                
                i_10 += 1
            while (i_10 u< arg1[3])
        
        int32_t i_11 = 0
        
        if (arg1[3] u> 0)
            do
                int32_t eax_27 = arg1[6]
                arg1[0x3f] = i_11
                int32_t* eax_28 = *(eax_27 + (i_11 << 2))
                arg1[0x40] = eax_28
                
                if ((*eax_28 & 0xfff00000) == 0x73700000)
                    result = sub_4cc4c3(arg1)
                    
                    if (result s< 0)
                        return result
                
                i_11 += 1
            while (i_11 u< arg1[3])
        
        goto label_4c3aa8

return result

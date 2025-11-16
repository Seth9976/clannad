// 函数: sub_4c571e
// 地址: 0x4c571e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
int32_t i = 0

if (arg1[3] u> 0)
    do
        int32_t eax_1 = arg1[6]
        arg1[0x3f] = i
        arg1[0x40] = *(eax_1 + (i << 2))
        sub_4c8b2d(arg1)
        i += 1
    while (i u< arg1[3])

int32_t i_1 = 0

if (arg1[3] u> 0)
    do
        int32_t eax_3 = arg1[6]
        arg1[0x3f] = i_1
        void* eax_4 = *(eax_3 + (i_1 << 2))
        arg1[0x40] = eax_4
        void* eax_5 = *(eax_4 + 0x3c)
        
        if (eax_5 != 0 && *(eax_5 + 4) == 0xd)
            arg1[0x41] = eax_5 + 0x30
        
        int32_t result = sub_4b3add(arg1)
        
        if (result s< 0)
            return result
        
        int32_t eax_9 = *arg1[0x40] & 0xfff00000
        int32_t eax_10
        
        if (eax_9 u> 0x70600000)
            if (eax_9 u> 0x73a00000)
                if (eax_9 u<= 0x74200000)
                    if (eax_9 == 0x74200000)
                        eax_10 = sub_4d90dc(arg1)
                        goto label_4c5b5a
                    
                    if (eax_9 == 0x73b00000 || eax_9 == 0x73c00000)
                        goto label_4c5a8d
                    
                    if (eax_9 == 0x73d00000 || eax_9 == 0x73e00000 || eax_9 == 0x73f00000
                            || eax_9 == 0x74000000)
                        goto label_4c5afa
                    
                    if (eax_9 != 0x74100000)
                        sub_4a4100(arg1, *(arg1[0x40] + 0x3c), 0x11b4, 
                            "cannot map expression to vertex shader instruction set")
                        return 0x80004001
                    
                    eax_10 = sub_4d9146(arg1)
                    goto label_4c5b5a
                
                if (eax_9 == 0x74400000 || eax_9 == 0x74500000 || eax_9 == 0x74600000
                        || eax_9 == 0x74700000)
                    if ((arg1[0x1c].b & 4) == 0)
                        eax_10 = 0x80004001
                        goto label_4c5b5a
                    
                    eax_10 = sub_4d7a9f(arg1)
                    goto label_4c5b5a
                
                if (eax_9 == 0x74a00000)
                    eax_10 = sub_4d7a75(arg1)
                    goto label_4c5b5a
                
                if (eax_9 != 0x74b00000)
                    sub_4a4100(arg1, *(arg1[0x40] + 0x3c), 0x11b4, 
                        "cannot map expression to vertex shader instruction set")
                    return 0x80004001
                
                eax_10 = sub_4d7a4b(arg1)
                goto label_4c5b5a
            
            if (eax_9 == 0x73a00000)
            label_4c5a8d:
                eax_10 = sub_4d85ab(arg1)
                goto label_4c5b5a
            
            if (eax_9 u> 0x73300000)
                if (eax_9 == 0x73400000)
                    eax_10 = sub_4d87aa(arg1)
                    goto label_4c5b5a
                
                if (eax_9 == 0x73500000 || eax_9 == 0x73600000 || eax_9 == 0x73700000
                    || eax_9 == 0x73800000)
                label_4c5a99:
                    eax_10 = sub_4d81d3(arg1)
                    goto label_4c5b5a
                
                if (eax_9 == 0x73900000)
                    goto label_4c5a8d
                
                sub_4a4100(arg1, *(arg1[0x40] + 0x3c), 0x11b4, 
                    "cannot map expression to vertex shader instruction set")
                return 0x80004001
            
            if (eax_9 == 0x73300000)
            label_4c5afa:
                eax_10 = sub_4d8780(arg1)
                goto label_4c5b5a
            
            if (eax_9 == 0x70700000)
                goto label_4c5992
            
            if (eax_9 == 0x70900000)
                eax_10 = sub_4d93d5()
                goto label_4c5b5a
            
            if (eax_9 == 0x70d00000)
                eax_10 = sub_4d88e1(arg1)
                goto label_4c5b5a
            
            if (eax_9 == 0x71000000)
                eax_10 = sub_4c450d(arg1)
                goto label_4c5b5a
            
            int32_t var_10_1
            
            if (eax_9 == 0x73000000)
                var_10_1 = 0
            else
                if (eax_9 == 0x73100000)
                    goto label_4c5afa
                
                if (eax_9 != 0x73200000)
                    sub_4a4100(arg1, *(arg1[0x40] + 0x3c), 0x11b4, 
                        "cannot map expression to vertex shader instruction set")
                    return 0x80004001
                
                var_10_1 = 1
            
            eax_10 = sub_4d8706(arg1, var_10_1)
            goto label_4c5b5a
        
        if (eax_9 == 0x70600000)
        label_4c5992:
            eax_10 = sub_4d8c52(arg1)
        label_4c5b5a:
            
            if (eax_10 == 0x80004001)
                sub_4a4100(arg1, *(arg1[0x40] + 0x3c), 0x11b4, 
                    "cannot map expression to vertex shader instruction set")
                return 0x80004001
        else if (eax_9 u> 0x20300000)
            if (eax_9 u> 0x50300000)
                if (eax_9 == 0x70000000)
                    eax_10 = sub_4d94b0()
                    goto label_4c5b5a
                
                if (eax_9 == 0x70100000)
                    eax_10 = sub_4d8953(arg1)
                    goto label_4c5b5a
                
                if (eax_9 == 0x70200000)
                    eax_10 = sub_4d8a6e(arg1)
                    goto label_4c5b5a
                
                if (eax_9 == 0x70300000 || eax_9 == 0x70400000)
                    eax_10 = sub_4d8b14(arg1)
                    goto label_4c5b5a
                
                if (eax_9 == 0x70500000)
                    goto label_4c5992
                
                sub_4a4100(arg1, *(arg1[0x40] + 0x3c), 0x11b4, 
                    "cannot map expression to vertex shader instruction set")
                return 0x80004001
            
            if (eax_9 == 0x50300000)
                eax_10 = sub_4d8135(arg1)
                goto label_4c5b5a
            
            if (eax_9 == 0x20400000)
                eax_10 = sub_4d93c1()
                goto label_4c5b5a
            
            if (eax_9 == 0x20500000)
                eax_10 = sub_4d93cb()
                goto label_4c5b5a
            
            if (eax_9 == 0x20700000)
                eax_10 = sub_4d83dc(arg1)
                goto label_4c5b5a
            
            if (eax_9 != 0x20800000)
                if (eax_9 == 0x20900000)
                    goto label_4c58bc
                
                if (eax_9 == 0x50000000)
                    eax_10 = sub_4d93df(arg1)
                    goto label_4c5b5a
                
                if (eax_9 != 0x50100000)
                    sub_4a4100(arg1, *(arg1[0x40] + 0x3c), 0x11b4, 
                        "cannot map expression to vertex shader instruction set")
                    return 0x80004001
                
                eax_10 = sub_4d9492()
                goto label_4c5b5a
        else
            if (eax_9 == 0x20300000)
                eax_10 = sub_4d93b7()
                goto label_4c5b5a
            
            if (eax_9 u<= 0x10700000)
                switch (eax_9)
                    case 0
                        eax_10 = sub_579f60()
                        goto label_4c5b5a
                    case 0x10000000
                        goto label_4c58bc
                    case 0x10100000
                        eax_10 = sub_4d87d4(arg1)
                        goto label_4c5b5a
                    case 0x10300000
                        eax_10 = sub_4d9317(arg1)
                        goto label_4c5b5a
                    case 0x10400000
                        eax_10 = sub_4d9335()
                        goto label_4c5b5a
                    case 0x10500000
                        eax_10 = sub_4c47d3(arg1)
                        goto label_4c5b5a
                    case 0x10700000
                        eax_10 = sub_4d937b(arg1)
                        goto label_4c5b5a
                
                if (eax_9 != 0x10600000)
                    sub_4a4100(arg1, *(arg1[0x40] + 0x3c), 0x11b4, 
                        "cannot map expression to vertex shader instruction set")
                    return 0x80004001
                
                eax_10 = sub_4c4a0a(arg1)
                goto label_4c5b5a
            
            if (eax_9 == 0x10f00000)
                goto label_4c5a99
            
            if (eax_9 == 0x11200000)
            label_4c58bc:
                eax_10 = sub_4d91ca(arg1)
                goto label_4c5b5a
            
            if (eax_9 != 0x11300000)
                if (eax_9 == 0x11500000)
                    goto label_4c58bc
                
                if (eax_9 == 0x20000000)
                    eax_10 = sub_4d9399()
                    goto label_4c5b5a
                
                if (eax_9 == 0x20100000)
                    eax_10 = sub_4d93a3()
                    goto label_4c5b5a
                
                if (eax_9 != 0x20200000)
                    sub_4a4100(arg1, *(arg1[0x40] + 0x3c), 0x11b4, 
                        "cannot map expression to vertex shader instruction set")
                    return 0x80004001
                
                eax_10 = sub_4d93ad()
                goto label_4c5b5a
        
        i_1 += 1
    while (i_1 u< arg1[3])

return 0

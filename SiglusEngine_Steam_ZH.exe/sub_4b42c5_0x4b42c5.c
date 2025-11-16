// 函数: sub_4b42c5
// 地址: 0x4b42c5
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
        
        if (eax_9 u> 0x60f00000)
            bool cond:15_1
            
            if (eax_9 u> 0x73400000)
                if (eax_9 u<= 0x73f00000)
                    if (eax_9 == 0x73f00000)
                    label_4b47ca:
                        eax_10 = sub_4d8780(arg1)
                        goto label_4b4896
                    
                    if (eax_9 u> 0x73a00000)
                        if (eax_9 == 0x73b00000 || eax_9 == 0x73c00000)
                        label_4b4831:
                            eax_10 = sub_4d85ab(arg1)
                            goto label_4b4896
                        
                        if (eax_9 == 0x73d00000)
                            goto label_4b47ca
                        
                        cond:15_1 = eax_9 != 0x73e00000
                    label_4b47c2:
                        
                        if (cond:15_1)
                            goto label_4b48ea
                        
                        goto label_4b47ca
                    
                    if (eax_9 == 0x73a00000)
                        goto label_4b4831
                    
                    if (eax_9 == 0x73500000 || eax_9 == 0x73600000 || eax_9 == 0x73700000
                            || eax_9 == 0x73800000)
                        goto label_4b483a
                    
                    if (eax_9 != 0x73900000)
                        goto label_4b48ea
                    
                    goto label_4b4831
                
                if (eax_9 u> 0x74500000)
                    if (eax_9 == 0x74600000 || eax_9 == 0x74700000)
                    label_4b4891:
                        eax_10 = sub_4d7a9f(arg1)
                        goto label_4b4896
                    
                    if (eax_9 == 0x74a00000)
                        eax_10 = sub_4d7a75(arg1)
                        goto label_4b4896
                    
                    if (eax_9 != 0x74b00000)
                        goto label_4b48ea
                    
                    eax_10 = sub_4d7a4b(arg1)
                    goto label_4b4896
                
                if (eax_9 == 0x74500000)
                    goto label_4b4891
                
                if (eax_9 == 0x74000000)
                    goto label_4b47ca
                
                if (eax_9 == 0x74100000)
                    eax_10 = sub_4d9146(arg1)
                    goto label_4b4896
                
                if (eax_9 == 0x74200000)
                    eax_10 = sub_4d90dc(arg1)
                    goto label_4b4896
                
                if (eax_9 != 0x74400000)
                    goto label_4b48ea
                
                goto label_4b4891
            
            if (eax_9 != 0x73400000)
                if (eax_9 u> 0x70600000)
                    if (eax_9 u> 0x70d00000)
                        int32_t var_10_1
                        
                        if (eax_9 == 0x73000000)
                            var_10_1 = 0
                        label_4b47d8:
                            eax_10 = sub_4d8706(arg1, var_10_1)
                            goto label_4b4896
                        
                        if (eax_9 == 0x73100000)
                            goto label_4b47ca
                        
                        if (eax_9 == 0x73200000)
                            var_10_1 = 1
                            goto label_4b47d8
                        
                        cond:15_1 = eax_9 != 0x73300000
                        goto label_4b47c2
                    
                    if (eax_9 == 0x70d00000)
                        eax_10 = sub_4d88e1(arg1)
                        goto label_4b4896
                    
                    if (eax_9 == 0x70700000)
                        goto label_4b4720
                    
                    if (eax_9 == 0x70800000)
                        eax_10 = sub_4d7faa(arg1)
                        goto label_4b4896
                    
                    if (eax_9 == 0x70900000)
                        eax_10 = sub_4d93d5()
                        goto label_4b4896
                    
                    if (eax_9 == 0x70b00000)
                    label_4b448d:
                        eax_10 = sub_4d9399()
                        goto label_4b4896
                    
                    if (eax_9 != 0x70c00000)
                        goto label_4b48ea
                    
                    goto label_4b477a
                
                if (eax_9 == 0x70600000)
                label_4b4720:
                    eax_10 = sub_4d8c52(arg1)
                    goto label_4b4896
                
                if (eax_9 u> 0x70100000)
                    if (eax_9 == 0x70200000)
                        eax_10 = sub_4d8a6e(arg1)
                        goto label_4b4896
                    
                    if (eax_9 == 0x70300000 || eax_9 == 0x70400000)
                        eax_10 = sub_4d8b14(arg1)
                        goto label_4b4896
                    
                    if (eax_9 != 0x70500000)
                        goto label_4b48ea
                    
                    goto label_4b4720
                
                if (eax_9 == 0x70100000)
                    eax_10 = sub_4d8953(arg1)
                    goto label_4b4896
                
                if (eax_9 == 0x61000000)
                    goto label_4b46e8
                
                if (eax_9 == 0x61100000)
                    goto label_4b46d0
                
                if (eax_9 == 0x61200000)
                    goto label_4b45c8
                
                if (eax_9 == 0x61300000)
                    goto label_4b463c
                
                if (eax_9 != 0x70000000)
                    goto label_4b48ea
                
                eax_10 = sub_4d94b0()
                goto label_4b4896
            
            eax_10 = sub_4d87aa(arg1)
        label_4b4896:
            
            if (eax_10 == 0x80004001)
            label_4b48ea:
                
                if ((arg1[0x1c].b & 0x40) != 0)
                    goto label_4b48f0
                
                sub_4a4100(arg1, *(arg1[0x40] + 0x3c), 0x11b4, 
                    "cannot map expression to pixel shader instruction set")
                return 0x80004001
        else
            if (eax_9 == 0x60f00000)
            label_4b4652:
                
                if ((arg1[0x1c].b & 0x40) == 0)
                    eax_10 = sub_4d7be5(arg1)
                    goto label_4b4896
                
            label_4b48f0:
                sub_4a4100(arg1, *(arg1[0x40] + 0x3c), 0x11b4, 
                    "cannot map expression to vertex shader instruction set")
                return 0x80004001
            
            if (eax_9 u> 0x20700000)
                if (eax_9 u> 0x60400000)
                    bool cond:16_1
                    
                    if (eax_9 u<= 0x60a00000)
                        if (eax_9 == 0x60a00000 || eax_9 == 0x60500000)
                            goto label_4b4652
                        
                        if (eax_9 == 0x60600000)
                            goto label_4b46e8
                        
                        if (eax_9 == 0x60700000)
                            goto label_4b46d0
                        
                        if (eax_9 == 0x60800000)
                            goto label_4b45c8
                        
                        cond:16_1 = eax_9 != 0x60900000
                        goto label_4b4636
                    
                    if (eax_9 == 0x60b00000)
                    label_4b46e8:
                        eax_10 = sub_4d7c49(arg1)
                        goto label_4b4896
                    
                    if (eax_9 == 0x60c00000)
                    label_4b46d0:
                        
                        if ((arg1[0x1c].b & 0x40) != 0)
                            goto label_4b48f0
                        
                        eax_10 = sub_4d7e78(arg1)
                        goto label_4b4896
                    
                    if (eax_9 == 0x60d00000)
                    label_4b45c8:
                        
                        if ((arg1[0x1c].b & 0x40) != 0)
                            goto label_4b48f0
                        
                        eax_10 = sub_4d7edf(arg1)
                        goto label_4b4896
                    
                    cond:16_1 = eax_9 != 0x60e00000
                label_4b4636:
                    
                    if (cond:16_1 || (arg1[0x1c].b & 0x20) == 0)
                        goto label_4b48ea
                    
                    goto label_4b4648
                
                if (eax_9 == 0x60400000)
                label_4b463c:
                    
                    if ((arg1[0x1c].b & 0x20) == 0)
                        goto label_4b48ea
                    
                label_4b4648:
                    eax_10 = sub_4d7f46(arg1)
                    goto label_4b4896
                
                if (eax_9 u> 0x50300000)
                    if (eax_9 == 0x60000000)
                        goto label_4b4652
                    
                    if (eax_9 == 0x60100000)
                        goto label_4b46e8
                    
                    if (eax_9 == 0x60200000)
                        goto label_4b46d0
                    
                    if (eax_9 != 0x60300000)
                        goto label_4b48ea
                    
                    goto label_4b45c8
                
                if (eax_9 == 0x50300000)
                    eax_10 = sub_4d8135(arg1)
                    goto label_4b4896
                
                if (eax_9 != 0x20800000)
                    if (eax_9 == 0x20900000)
                    label_4b4499:
                        eax_10 = sub_4d91ca(arg1)
                        goto label_4b4896
                    
                    if (eax_9 == 0x30000000)
                        if ((arg1[0x1c].b & 0x40) != 0)
                            goto label_4b48f0
                        
                        eax_10 = sub_4d949c()
                        goto label_4b4896
                    
                    if (eax_9 == 0x50000000)
                        eax_10 = sub_4d93df(arg1)
                        goto label_4b4896
                    
                    if (eax_9 != 0x50100000)
                        goto label_4b48ea
                    
                    eax_10 = sub_4d9492()
                    goto label_4b4896
            else
                if (eax_9 == 0x20700000)
                    eax_10 = sub_4d83dc(arg1)
                    goto label_4b4896
                
                if (eax_9 u<= 0x10f00000)
                    if (eax_9 == 0x10f00000)
                    label_4b483a:
                        eax_10 = sub_4d81d3(arg1)
                        goto label_4b4896
                    
                    if (eax_9 u<= 0x10500000)
                        if (eax_9 == 0x10500000)
                            eax_10 = sub_4d933f(arg1)
                            goto label_4b4896
                        
                        if (eax_9 == 0)
                            eax_10 = sub_579f60()
                            goto label_4b4896
                        
                        if (eax_9 == 0x10000000)
                            goto label_4b4499
                        
                        if (eax_9 == 0x10100000)
                            eax_10 = sub_4d87d4(arg1)
                            goto label_4b4896
                        
                        if (eax_9 == 0x10300000)
                            eax_10 = sub_4d9317(arg1)
                            goto label_4b4896
                        
                        if (eax_9 != 0x10400000)
                            goto label_4b48ea
                        
                        eax_10 = sub_4d9335()
                        goto label_4b4896
                    
                    if (eax_9 == 0x10600000)
                        eax_10 = sub_4d935d(arg1)
                        goto label_4b4896
                    
                    if (eax_9 == 0x10700000)
                        eax_10 = sub_4d937b(arg1)
                        goto label_4b4896
                    
                    if (eax_9 == 0x10d00000)
                        if ((arg1[0x1c].b & 0x10) != 0)
                            eax_10 = sub_4d9303()
                            goto label_4b4896
                        
                    label_4b4420:
                        eax_10 = 0x80004001
                        goto label_4b4896
                    
                    if (eax_9 != 0x10e00000)
                        goto label_4b48ea
                    
                    if ((arg1[0x1c].b & 0x10) == 0)
                        goto label_4b4420
                    
                    eax_10 = sub_4d930d()
                    goto label_4b4896
                
                if (eax_9 u> 0x20100000)
                    if (eax_9 == 0x20200000)
                        eax_10 = sub_4d93ad()
                        goto label_4b4896
                    
                    if (eax_9 == 0x20300000)
                        eax_10 = sub_4d93b7()
                        goto label_4b4896
                    
                    if (eax_9 == 0x20400000)
                        eax_10 = sub_4d93c1()
                        goto label_4b4896
                    
                    if (eax_9 != 0x20500000)
                        goto label_4b48ea
                    
                    eax_10 = sub_4d93cb()
                    goto label_4b4896
                
                if (eax_9 == 0x20100000)
                label_4b477a:
                    eax_10 = sub_4d93a3()
                    goto label_4b4896
                
                if (eax_9 == 0x11000000)
                    if ((arg1[0x1c].b & 0x40) != 0)
                        goto label_4b48f0
                    
                    eax_10 = sub_4d7fe0(arg1)
                    goto label_4b4896
                
                if (eax_9 == 0x11200000)
                    goto label_4b4499
                
                if (eax_9 != 0x11300000)
                    if (eax_9 == 0x11500000)
                        goto label_4b4499
                    
                    if (eax_9 != 0x20000000)
                        goto label_4b48ea
                    
                    goto label_4b448d
        i_1 += 1
    while (i_1 u< arg1[3])

return 0

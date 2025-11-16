// 函数: sub_4c2949
// 地址: 0x4c2949
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg1[3]
int32_t i = 0
int32_t edi
int32_t var_44 = edi
int32_t edi_1 = 0
int32_t* var_8 = nullptr

if (eax u> 0)
    do
        int32_t eax_1 = arg1[6]
        arg1[0x3f] = i
        arg1[0x40] = *(eax_1 + (i << 2))
        sub_4c8b2d(arg1)
        i += 1
    while (i u< arg1[3])

int32_t eax_3 = 0
int32_t var_14 = 0

if (eax u<= 0)
label_4c2d5a:
    sub_4c8264(arg1)
    int32_t eax_53 = arg1[3]
    int32_t esi_6 = 0
    
    if (eax_53 u> 0)
        while (true)
            int32_t eax_54 = arg1[6]
            arg1[0x3f] = esi_6
            void* eax_55 = *(eax_54 + (esi_6 << 2))
            arg1[0x40] = eax_55
            void* eax_56 = *(eax_55 + 0x3c)
            
            if (eax_56 != 0 && *(eax_56 + 4) == 0xd)
                arg1[0x41] = eax_56 + 0x30
            
            int32_t* ecx_37 = arg1[0x40]
            int32_t eax_59 = *ecx_37 & 0xfff00000
            
            if (eax_59 != 0 && ecx_37[1] != 0
                    && *(*(arg1[5] + (*ecx_37[2] << 2)) + 8) != 0xffffffff)
                sub_4a4100(arg1, *(arg1[0x40] + 0x3c), 0x119f, 
                    "relative addressing not allowed for pixel shaders")
                return 0
            
            int32_t eax_60
            
            if (eax_59 u> 0x60500000)
                if (eax_59 u> 0x61300000)
                    if (eax_59 u> 0x70b00000)
                        if (eax_59 == 0x70c00000)
                            edi_1 = sub_4c108d(arg1)
                        else if (eax_59 == 0x70d00000)
                            edi_1 = sub_4d88e1(arg1)
                        else
                            if (eax_59 != 0x73500000 && eax_59 != 0x73600000 && eax_59 != 0x73700000
                                    && eax_59 != 0x73800000)
                                break
                            
                            edi_1 = sub_4d81d3(arg1)
                    else if (eax_59 == 0x70b00000)
                        edi_1 = sub_4c11c3(arg1)
                    else
                        if (eax_59 == 0x70000000)
                            eax_60 = sub_4d94b0()
                        else if (eax_59 == 0x70100000)
                            eax_60 = sub_4d8953(arg1)
                        else if (eax_59 == 0x70200000)
                            eax_60 = sub_4d8a6e(arg1)
                        else if (eax_59 == 0x70300000 || eax_59 == 0x70400000)
                            eax_60 = sub_4d8b14(arg1)
                        else
                            if (eax_59 != 0x70800000)
                                break
                            
                            eax_60 = sub_4d7faa(arg1)
                        
                        edi_1 = eax_60
                else if (eax_59 == 0x61300000)
                label_4c2fd1:
                    
                    if ((arg1[0x1c].b & 0x20) == 0)
                        sub_4a4100(arg1, *(arg1[0x40] + 0x3c), 0x11b4, 
                            "texlod not supported on this target")
                        return 0
                    
                    edi_1 = sub_4d7f46(arg1)
                else if (eax_59 u> 0x60c00000)
                    if (eax_59 == 0x60d00000)
                        edi_1 = sub_4d7edf(arg1)
                    else
                        if (eax_59 == 0x60e00000)
                            goto label_4c2fd1
                        
                        if (eax_59 == 0x60f00000)
                            edi_1 = sub_4d7be5(arg1)
                        else if (eax_59 == 0x61000000)
                            edi_1 = sub_4d7c49(arg1)
                        else if (eax_59 == 0x61100000)
                            edi_1 = sub_4d7e78(arg1)
                        else
                            if (eax_59 != 0x61200000)
                                break
                            
                            edi_1 = sub_4d7edf(arg1)
                else if (eax_59 == 0x60c00000)
                    edi_1 = sub_4d7e78(arg1)
                else if (eax_59 == 0x60600000)
                    edi_1 = sub_4d7c49(arg1)
                else if (eax_59 == 0x60700000)
                    edi_1 = sub_4d7e78(arg1)
                else if (eax_59 == 0x60800000)
                    edi_1 = sub_4d7edf(arg1)
                else
                    if (eax_59 == 0x60900000)
                        goto label_4c2fd1
                    
                    if (eax_59 == 0x60a00000)
                        edi_1 = sub_4d7be5(arg1)
                    else
                        if (eax_59 != 0x60b00000)
                            break
                        
                        edi_1 = sub_4d7c49(arg1)
            else if (eax_59 == 0x60500000)
                edi_1 = sub_4d7be5(arg1)
            else if (eax_59 u> 0x20100000)
                if (eax_59 u<= 0x50000000)
                    switch (eax_59)
                        case 0x20200000
                            eax_60 = sub_4c0fb1(arg1)
                        case 0x20300000
                            eax_60 = sub_4c0ed5(arg1)
                        case 0x20400000
                            eax_60 = sub_4d93c1()
                        case 0x20500000
                            eax_60 = sub_4d93cb()
                        case 0x20700000
                            eax_60 = sub_4d83dc(arg1)
                        case 0x50000000
                            eax_60 = sub_4d93df(arg1)
                        default
                            if (eax_59 != 0x30000000)
                                break
                            
                            eax_60 = sub_4d949c()
                    
                    edi_1 = eax_60
                else if (eax_59 == 0x50300000)
                    edi_1 = sub_4d8135(arg1)
                else if (eax_59 == 0x60000000)
                    edi_1 = sub_4d7be5(arg1)
                else if (eax_59 == 0x60100000)
                    edi_1 = sub_4d7c49(arg1)
                else if (eax_59 == 0x60200000)
                    edi_1 = sub_4d7e78(arg1)
                else
                    if (eax_59 != 0x60300000)
                        if (eax_59 != 0x60400000)
                            break
                        
                        goto label_4c2fd1
                    
                    edi_1 = sub_4d7edf(arg1)
            else if (eax_59 == 0x20100000)
                edi_1 = sub_4c108d(arg1)
            else if (eax_59 u> 0x10600000)
                if (eax_59 == 0x10700000)
                    edi_1 = sub_4d937b(arg1)
                else if (eax_59 == 0x10d00000)
                    if ((arg1[0x1c].b & 0x10) == 0)
                        edi_1 = 0x80004001
                    else
                        edi_1 = sub_4d9303()
                else if (eax_59 == 0x10e00000)
                    if ((arg1[0x1c].b & 0x10) == 0)
                        edi_1 = 0x80004001
                    else
                        edi_1 = sub_4d930d()
                else if (eax_59 == 0x10f00000)
                    edi_1 = sub_4d81d3(arg1)
                else if (eax_59 == 0x11000000)
                    edi_1 = sub_4d7fe0(arg1)
                else
                    if (eax_59 != 0x20000000)
                        break
                    
                    edi_1 = sub_4c11c3(arg1)
            else if (eax_59 == 0x10600000)
                edi_1 = sub_4d935d(arg1)
            else if (eax_59 != 0)
                if (eax_59 == 0x10000000)
                    eax_60 = sub_4d91ca(arg1)
                else if (eax_59 == 0x10100000)
                    eax_60 = sub_4d87d4(arg1)
                else if (eax_59 == 0x10300000)
                    eax_60 = sub_4d9317(arg1)
                else if (eax_59 == 0x10400000)
                    eax_60 = sub_4d9335()
                else
                    if (eax_59 != 0x10500000)
                        break
                    
                    eax_60 = sub_4d933f(arg1)
                
                edi_1 = eax_60
            
            if (edi_1 == 0x80004001)
                break
            
            esi_6 += 1
            
            if (esi_6 u>= eax_53)
                return 0
        
        sub_4a4100(arg1, *(arg1[0x40] + 0x3c), 0x11b4, 
            "cannot map expression to pixel shader instruction set")
    label_4c31a6:
        
        if (var_8 != 0)
            sub_46cb59(var_8, 1)
else
    int32_t* ecx_19
    
    while (true)
        int32_t ecx_1 = arg1[6]
        arg1[0x3f] = eax_3
        int32_t* eax_4 = *(ecx_1 + (eax_3 << 2))
        arg1[0x40] = eax_4
        int32_t ecx_3 = *eax_4 & 0xfff00000
        int32_t* var_48_1
        
        if (ecx_3 == 0x60500000 || ecx_3 == 0x60f00000 || ecx_3 == 0x60a00000 || ecx_3 == 0x60200000
                || ecx_3 == 0x60700000 || ecx_3 == 0x60c00000 || ecx_3 == 0x61100000
                || ecx_3 == 0x60300000 || ecx_3 == 0x60800000 || ecx_3 == 0x60d00000
                || ecx_3 == 0x61200000 || ecx_3 == 0x60000000 || ecx_3 == 0x11000000)
            int32_t eax_5 = *eax_4
            int32_t esi_1 = eax_5 & 0xfffff
            int32_t var_10_1 = esi_1
            
            if ((eax_5 & 0xfff00000) == 0x11000000)
                var_10_1 = 0
            
            int32_t var_c_1 = 0
            
            if (esi_1 u> 0)
                int32_t edi_3 = var_10_1 << 2
                
                do
                    void* eax_10 = *(arg1[5] + (*(edi_3 + *(arg1[0x40] + 8)) << 2))
                    
                    if (*(eax_10 + 0x10) != var_c_1)
                        break
                    
                    if ((*(eax_10 + 0x3e) & 0x1f) != 0)
                        break
                    
                    int32_t ecx_6 = *(eax_10 + 4)
                    bool cond:11_1
                    
                    if (ecx_6 != arg1[0x20])
                        cond:11_1 = ecx_6 != arg1[0x22]
                    else
                        cond:11_1 = (*(*arg1 + 0x54))(*(eax_10 + 0x6c)) != 6
                    
                    if (cond:11_1)
                        break
                    
                    var_c_1 += 1
                    edi_3 += 4
                while (var_c_1 u< esi_1)
            
            if ((*arg1[0x40] & 0xfff00000) == 0x60000000 && esi_1 == 1)
                int32_t var_28
                
                if ((*(*arg1 + 0x80))(arg1[0x3f], &var_28, 4, 0, 0) s< 0)
                    return 0
                
                void* eax_17 = sub_49ec23(0x74)
                int32_t* esi_2
                
                if (eax_17 == 0)
                    esi_2 = nullptr
                else
                    esi_2 = sub_49e789(eax_17)
                
                var_8 = esi_2
                
                if (esi_2 == 0)
                    return 0x8007000e
                
                if (sub_49ec6e(esi_2, 0x10000002, 2, 2, 0) s< 0)
                    goto label_4c31a6
                
                if (sub_49e7bf(esi_2, arg1[0x40]) s< 0)
                    goto label_4c31a6
                
                *esi_2[2] = *(*(arg1[0x40] + 8) + 4)
                *(esi_2[2] + 4) = *(*(arg1[0x40] + 8) + 4)
                *esi_2[4] = var_28
                int32_t var_24
                *(esi_2[4] + 4) = var_24
                
                if (sub_49f431(arg1, esi_2) s< 0)
                    goto label_4c31a6
                
                void* eax_30 = sub_49ec23(0x74)
                int32_t* esi_3
                
                if (eax_30 == 0)
                    esi_3 = nullptr
                else
                    esi_3 = sub_49e789(eax_30)
                
                if (esi_3 == 0)
                    return 0
                
                ecx_19 = esi_3
                
                if (sub_49ec6e(esi_3, 0x60500002, 4, *(arg1[0x40] + 0xc), 0) s< 0)
                    break
                
                if (sub_49e7bf(ecx_19, arg1[0x40]) s< 0)
                    ecx_19 = esi_3
                    break
                
                for (int32_t* i_1 = 8; i_1 u< 0x10; i_1 = &i_1[1])
                    *(i_1 + esi_3[2] - 8) = **(arg1[0x40] + 8)
                    *(i_1 + esi_3[2]) = *(&var_28 - 8 + i_1)
                
                void* eax_35 = arg1[0x40]
                int32_t* eax_36 = esi_3
                int32_t ecx_22 = *(eax_35 + 0xc) << 2
                int32_t esi_5
                int32_t edi_7
                edi_7, esi_5 = __builtin_memcpy(eax_36[4], *(eax_35 + 0x10), ecx_22 u>> 2 << 2)
                __builtin_memcpy(edi_7, esi_5, ecx_22 & 3)
                void* ecx_26 = arg1[0x40]
                
                if (ecx_26 != 0)
                    sub_46cb59(ecx_26, 1)
                    eax_36 = esi_3
                
                *(arg1[6] + (var_14 << 2)) = eax_36
                arg1[0x40] = eax_36
                var_8 = nullptr
            else if (var_c_1 != esi_1)
                int32_t var_38[0x4]
                
                if ((*(*arg1 + 0x80))(arg1[0x3f], &var_38, 4, 0, 0) s< 0)
                    return 0
                
                void* eax_39 = sub_49ec23(0x74)
                
                if (eax_39 == 0)
                    var_8 = nullptr
                else
                    var_8 = sub_49e789(eax_39)
                
                if (var_8 == 0)
                    return 0x8007000e
                
                if (sub_49ec6e(var_8, (esi_1 & 0xfffff) | 0x10000000, esi_1, esi_1, 0) s< 0)
                    goto label_4c31a6
                
                if (sub_49e7bf(var_8, arg1[0x40]) s< 0)
                    goto label_4c31a6
                
                int32_t var_c_3 = 0
                
                if (esi_1 u> 0)
                    int32_t ecx_33 = var_10_1 << 2
                    
                    do
                        int32_t eax_47 = var_c_3 << 2
                        var_c_3 += 1
                        *(eax_47 + var_8[2]) = *(ecx_33 + *(arg1[0x40] + 8))
                        *(eax_47 + var_8[4]) = var_38[var_c_3]
                        *(ecx_33 + *(arg1[0x40] + 8)) = *(eax_47 + var_8[4])
                        ecx_33 += 4
                    while (var_c_3 u< esi_1)
                
                if (sub_49f431(arg1, var_8) s< 0)
                    goto label_4c31a6
                
                var_8 = nullptr
            
            var_48_1 = arg1[0x40]
        else
            var_48_1 = eax_4
        
        edi_1 = sub_49f69d(arg1, var_48_1)
        
        if (edi_1 s< 0)
            return 0
        
        *arg1[0x40] = 0
        eax_3 = var_14 + 1
        var_14 = eax_3
        
        if (eax_3 u>= eax)
            goto label_4c2d5a
    
    sub_46cb59(ecx_19, 1)

return 0

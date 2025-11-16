// 函数: sub_4bf648
// 地址: 0x4bf648
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = 0
int32_t edi
int32_t var_10 = edi

if (arg3 u> 0)
    do
        arg1[0x3f] = ebx
        void* eax_2 = *(arg2 + (ebx << 2))
        arg1[0x40] = eax_2
        
        if (eax_2 != 0)
            void* eax_3 = *(eax_2 + 0x3c)
            
            if (eax_3 != 0 && *(eax_3 + 4) == 0xd)
                arg1[0x41] = eax_3 + 0x30
            
            int32_t* edi_1 = arg1[0x40]
            int32_t ecx = *edi_1
            
            if (ecx != 0)
                int32_t edx_1 = arg1[5]
                
                if (*(*(edx_1 + (*edi_1[2] << 2)) + 8) != 0xffffffff)
                    sub_4a4100(arg1, *(arg1[0x40] + 0x3c), 0x119f, 
                        "relative addressing not allowed for pixel shaders")
                    return 0x80004005
                
                int32_t eax_9 = ecx & 0xfff00000
                int32_t result
                
                if (eax_9 u> 0x70300000)
                    uint32_t var_14_1
                    
                    if (eax_9 u> 0x72600000)
                        if (eax_9 == 0x72700000)
                            var_14_1 = 0x45
                        label_4bf942:
                            result = sub_4bd1b5(arg1, var_14_1)
                            goto label_4bf947
                        
                        if (eax_9 == 0x72800000)
                            var_14_1 = 0x46
                            goto label_4bf942
                        
                        if (eax_9 == 0x72900000)
                            var_14_1 = 0x4d
                            goto label_4bf942
                        
                        if (eax_9 == 0x72a00000)
                            var_14_1 = 0x4c
                            goto label_4bf942
                        
                        if (eax_9 == 0x72b00000)
                            var_14_1 = 0x53
                            goto label_4bf942
                        
                        if (eax_9 != 0x72e00000)
                            sub_4a4100(arg1, *(arg1[0x40] + 0x3c), 0x11b4, 
                                "cannot map expression to pixel shader instruction set")
                            return 0x80004001
                        
                        result = sub_4bd2fa(arg1)
                        goto label_4bf947
                    
                    switch (eax_9)
                        case 0x70400000
                            goto label_4bf8f0
                        case 0x70f00000
                            result = sub_4d94a6()
                            goto label_4bf947
                        case 0x72100000
                            result = sub_4bd5f8(arg1)
                            goto label_4bf947
                        case 0x72200000
                            var_14_1 = 0x47
                            goto label_4bf942
                        case 0x72300000
                            var_14_1 = 0x48
                            goto label_4bf942
                        case 0x72400000
                            var_14_1 = 0x49
                            goto label_4bf942
                        case 0x72600000
                            var_14_1 = 0x52
                            goto label_4bf942
                    
                    if (eax_9 != 0x72500000)
                        sub_4a4100(arg1, *(arg1[0x40] + 0x3c), 0x11b4, 
                            "cannot map expression to pixel shader instruction set")
                        return 0x80004001
                    
                    var_14_1 = 0x4a
                    goto label_4bf942
                
                if (eax_9 == 0x70300000)
                label_4bf8f0:
                    result = sub_4d8b14(arg1)
                label_4bf947:
                    
                    if (result == 0x80004001)
                        sub_4a4100(arg1, *(arg1[0x40] + 0x3c), 0x11b4, 
                            "cannot map expression to pixel shader instruction set")
                        return 0x80004001
                    
                    if (result s< 0)
                        return result
                else
                    if (eax_9 u> 0x50000000)
                        if (eax_9 == 0x60000000 || eax_9 == 0x60500000)
                        label_4bf882:
                            result = sub_4bd4a7(arg1)
                            goto label_4bf947
                        
                        if (eax_9 == 0x60700000)
                            result = sub_4bd3d5(arg1)
                            goto label_4bf947
                        
                        if (eax_9 == 0x60a00000 || eax_9 == 0x60f00000)
                            goto label_4bf882
                        
                        if (eax_9 != 0x70100000)
                            sub_4a4100(arg1, *(arg1[0x40] + 0x3c), 0x11b4, 
                                "cannot map expression to pixel shader instruction set")
                            return 0x80004001
                        
                        result = sub_4d8953(arg1)
                        goto label_4bf947
                    
                    if (eax_9 == 0x50000000)
                        int32_t ecx_7 = ecx & 0xfffff
                        
                        if (ecx_7 == 2)
                            sub_4a4100(arg1, *(arg1[0x40] + 0x3c), 0x11b4, 
                                "cannot map expression to pixel shader instruction set")
                            return 0x80004001
                        
                        if (ecx_7 != 4 || zx.d((arg1[0x32]).w) != 0x101)
                            uint32_t eax_15 = zx.d((arg1[0x32]).w)
                            
                            if (eax_15 == 0x102)
                                if (ecx_7 == 4)
                                    goto label_4bf7c2
                                
                                result = sub_4d93df(arg1)
                            else if (eax_15 != 0x103 || ecx_7 != 4)
                                result = sub_4d93df(arg1)
                            else
                            label_4bf7c2:
                                void* ecx_8 = *(edx_1 + (*edi_1[4] << 2))
                                int32_t* eax_18 = edi_1[2]
                                void* edi_3 = *(edx_1 + (*eax_18 << 2))
                                void* edx_2 = *(edx_1 + (eax_18[4] << 2))
                                int32_t eax_20 = *(ecx_8 + 4)
                                bool cond:5_1
                                
                                if (eax_20 == arg1[0x21])
                                    int32_t eax_21 = arg1[0x22]
                                    
                                    if ((*(edi_3 + 4) == eax_21 && *(edi_3 + 0xc) == 0)
                                            || (*(edx_2 + 4) == eax_21 && *(edx_2 + 0xc) == 0))
                                        cond:5_1 = zx.d((*(ecx_8 + 0x6c)).b) != 1
                                        goto label_4bf820
                                    
                                    result = sub_4d93df(arg1)
                                else if (*(edi_3 + 4) == eax_20 && *(edi_3 + 0xc) == *(ecx_8 + 0xc))
                                    result = sub_4bd068(arg1)
                                else if (*(edx_2 + 4) != eax_20)
                                    result = sub_4d93df(arg1)
                                else
                                    cond:5_1 = *(edx_2 + 0xc) != *(ecx_8 + 0xc)
                                label_4bf820:
                                    
                                    if (cond:5_1)
                                        result = sub_4d93df(arg1)
                                    else
                                        result = sub_4bd068(arg1)
                        else
                            result = sub_4bd068(arg1)
                        
                        goto label_4bf947
                    
                    if (eax_9 != 0)
                        if (eax_9 == 0x10000000)
                            result = sub_4d91ca(arg1)
                            goto label_4bf947
                        
                        if (eax_9 == 0x10100000)
                            result = sub_4d87d4(arg1)
                            goto label_4bf947
                        
                        if (eax_9 == 0x11000000)
                            result = sub_4d7fe0(arg1)
                            goto label_4bf947
                        
                        if (eax_9 == 0x20400000)
                            result = sub_4d93c1()
                            goto label_4bf947
                        
                        if (eax_9 == 0x20500000)
                            result = sub_4d93cb()
                            goto label_4bf947
                        
                        if (eax_9 != 0x30000000)
                            sub_4a4100(arg1, *(arg1[0x40] + 0x3c), 0x11b4, 
                                "cannot map expression to pixel shader instruction set")
                            return 0x80004001
                        
                        if (zx.d((arg1[0x32]).w) != 0x104)
                            result = 0x80004001
                        else
                            result = sub_4d949c()
                        
                        goto label_4bf947
        
        ebx += 1
    while (ebx u< arg3)

return 0

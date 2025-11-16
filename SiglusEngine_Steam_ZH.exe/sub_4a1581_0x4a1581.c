// 函数: sub_4a1581
// 地址: 0x4a1581
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_3c = edi
int32_t* edi_1 = arg2[3]
uint32_t temp0 = divu.dp.d(0:(arg2[1]), edi_1)
void* ebx = arg1
void* var_c = ebx

if (sub_49e84e(arg2) == 0)
    int32_t edx_4 = 0
    int32_t* var_10_1 = edi_1
    int32_t var_1c_1 = 0
    int32_t var_30
    int32_t var_20
    
    if (edi_1 u> 0)
        do
            int32_t edi_4 = arg2[4]
            int32_t eax_11 = *(edi_4 + (edx_4 << 2))
            
            if (eax_11 != 0xffffffff && (
                    *(*(*(ebx + 0x10) + (*(*(*(ebx + 0x14) + (eax_11 << 2)) + 4) << 2)) + 4) & 0x40) != 0)
                int32_t var_8_1 = 0
                int32_t eax_15 = edx_4
                int32_t var_28_1 = eax_15
                
                if (edx_4 u< edi_1)
                    while (true)
                        if (*((eax_15 << 2) + edi_4) != 0xffffffff)
                            int32_t* eax_16 = arg2[4]
                            
                            if (sub_4a143a(ebx, eax_16[edx_4], eax_16[eax_15]) != 0)
                                var_8_1 += 1
                        
                        eax_15 = var_28_1 + 1
                        var_28_1 = eax_15
                        
                        if (eax_15 u>= edi_1)
                            break
                        
                        edx_4 = var_1c_1
                
                int32_t eax_23 =
                    sub_49f5a4(ebx, ((*arg2 ^ var_8_1) & 0xfffff) ^ *arg2, 0xffffffff, 0xffffffff)
                
                if (eax_23 == 0xffffffff)
                    return 0x8007000e
                
                void* edi_5 = *(*(ebx + 0x18) + (eax_23 << 2))
                sub_49e7bf(edi_5, arg2)
                int32_t ebx_2 = var_1c_1
                int32_t var_8_2 = 0
                var_30 = *(arg2[4] + (ebx_2 << 2))
                bool cond:8_1 = ebx_2 u>= edi_1
                
                while (true)
                    var_20 = ebx_2
                    
                    if (cond:8_1)
                        break
                    
                    int32_t eax_28 = *(arg2[4] + (ebx_2 << 2))
                    
                    if (eax_28 != 0xffffffff && sub_4a143a(var_c, var_30, eax_28) != 0)
                        int32_t var_18_1 = 0
                        
                        if (temp0 u> 0)
                            do
                                int32_t edx_7 = *(edi_5 + 0xc) * var_18_1 + var_8_2
                                int32_t eax_33 = *(arg2[2] + ((arg2[3] * var_18_1 + ebx_2) << 2))
                                var_18_1 += 1
                                *(*(edi_5 + 8) + (edx_7 << 2)) = eax_33
                                ebx_2 = var_20
                            while (var_18_1 u< temp0)
                        
                        *(*(edi_5 + 0x10) + (var_8_2 << 2)) = *(arg2[4] + (ebx_2 << 2))
                        *(arg2[4] + (ebx_2 << 2)) = 0xffffffff
                        var_10_1 -= 1
                        var_8_2 += 1
                    
                    ebx_2 += 1
                    cond:8_1 = ebx_2 u>= edi_1
                
                ebx = var_c
            
            edx_4 = var_1c_1 + 1
            var_1c_1 = edx_4
        while (edx_4 u< edi_1)
    
    int32_t eax_38 = sub_49ea13(arg2)
    int32_t var_2c_1 = eax_38
    int32_t var_24_1 = 1
    int32_t var_28_2 = 1
    
    if (eax_38 == 0)
        int32_t var_20_1 = var_20 & eax_38
        
        if (edi_1 u> eax_38)
            int32_t* ecx_22 = arg2[4]
            
            do
                int32_t eax_39 = *ecx_22
                
                if (eax_39 != 0xffffffff && (
                        *(*(*(ebx + 0x10) + (*(*(*(ebx + 0x14) + (eax_39 << 2)) + 4) << 2)) + 5)
                        & 0x10) != 0)
                    var_2c_1 = 1
                    break
                
                var_20_1 += 1
                ecx_22 = &ecx_22[1]
            while (var_20_1 u< edi_1)
    
    if (var_10_1 != 0)
        while (true)
            if (var_10_1 u<= 4 && var_2c_1 == 0)
                var_24_1 = 0
                var_28_2 = 0
            
            int32_t ecx_23 = 0
            int32_t i_2 = 0
            int32_t var_18_2 = 0
            
            if (edi_1 u<= 0)
                return 0
            
            do
                if (*(arg2[4] + (ecx_23 << 2)) != 0xffffffff)
                    int32_t edi_8 = 0
                    int32_t i = 0
                    
                    while (i u< 4)
                        int32_t eax_45 = arg2[4]
                        
                        if (*(eax_45 + (edi_8 << 2)) != 0xffffffff)
                            if (var_24_1 == 0)
                            label_4a182a:
                                
                                if (var_28_2 == 0)
                                    i += 1
                                else if (sub_4a14dc(ebx, arg2, var_18_2, edi_8) == 0)
                                    i += 1
                            else if (sub_4a14af(ebx, *(eax_45 + (ecx_23 << 2)), 
                                    *(eax_45 + (edi_8 << 2))) != 0)
                                goto label_4a182a
                        
                        ecx_23 = var_18_2
                        edi_8 += 1
                        
                        if (edi_8 u>= edi_1)
                            break
                    
                    if (i_2 u< i)
                        i_2 = i
                        var_30 = ecx_23
                
                ecx_23 += 1
                var_18_2 = ecx_23
            while (ecx_23 u< edi_1)
            
            if (i_2 == 0)
                return 0
            
            int32_t eax_53 =
                sub_49f5a4(ebx, ((*arg2 ^ i_2) & 0xfffff) ^ *arg2, 0xffffffff, 0xffffffff)
            
            if (eax_53 == 0xffffffff)
                return 0x8007000e
            
            void* edi_9 = *(*(ebx + 0x18) + (eax_53 << 2))
            sub_49e7bf(edi_9, arg2)
            int32_t eax_55 = *(arg2[4] + (var_30 << 2))
            int32_t ebx_4 = 0
            int32_t i_1 = 0
            int32_t var_20_2 = 0
            
            while (i_1 u< 4)
                int32_t eax_57 = *(arg2[4] + (ebx_4 << 2))
                
                if (eax_57 != 0xffffffff)
                    if (var_24_1 == 0)
                    label_4a18df:
                        
                        if (var_28_2 == 0)
                        label_4a18f6:
                            int32_t var_1c_2 = 0
                            
                            if (temp0 u> 0)
                                do
                                    int32_t edx_12 = *(edi_9 + 0xc) * var_1c_2 + i_1
                                    int32_t eax_63 =
                                        *(arg2[2] + ((arg2[3] * var_1c_2 + ebx_4) << 2))
                                    var_1c_2 += 1
                                    *(*(edi_9 + 8) + (edx_12 << 2)) = eax_63
                                    ebx_4 = var_20_2
                                while (var_1c_2 u< temp0)
                            
                            *(*(edi_9 + 0x10) + (i_1 << 2)) = *(arg2[4] + (ebx_4 << 2))
                            *(arg2[4] + (ebx_4 << 2)) = 0xffffffff
                            var_10_1 -= 1
                            i_1 += 1
                        else if (sub_4a14dc(var_c, arg2, var_30, ebx_4) == 0)
                            goto label_4a18f6
                    else if (sub_4a14af(var_c, eax_55, eax_57) != 0)
                        goto label_4a18df
                
                ebx_4 += 1
                var_20_2 = ebx_4
                
                if (ebx_4 u>= edi_1)
                    break
            
            if (var_10_1 == 0)
                return 0
            
            ebx = var_c
else
    int32_t var_1c = 0
    
    if (edi_1 u> 0)
        bool cond:4_1
        
        do
            int32_t eax_6 = sub_49f5a4(ebx, (*arg2 & 0xfff00001) | 1, 0xffffffff, 0xffffffff)
            
            if (eax_6 == 0xffffffff)
                return 0x8007000e
            
            void* edi_2 = *(*(ebx + 0x18) + (eax_6 << 2))
            sub_49e7bf(edi_2, arg2)
            int32_t eax_7 = 0
            
            if (temp0 u> 0)
                do
                    *(*(edi_2 + 8) + (eax_7 << 2)) = *(arg2[2] + ((arg2[3] * eax_7 + var_1c) << 2))
                    eax_7 += 1
                while (eax_7 u< temp0)
                
                ebx = var_c
            
            cond:4_1 = var_1c + 1 u< edi_1
            **(edi_2 + 0x10) = *(arg2[4] + (var_1c << 2))
            var_1c += 1
        while (cond:4_1)

return 0

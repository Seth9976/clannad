// 函数: sub_4adf5e
// 地址: 0x4adf5e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i_3 = 0
uint32_t eax_2 = sub_745f3f(*(arg1 + 0xc) << 2)
int32_t result

if (eax_2 != 0)
    int32_t edi
    int32_t var_34_1 = edi
    int32_t i = 0
    
    if (*(arg1 + 0xc) u> 0)
        do
            int32_t* eax_4 = *(*(arg1 + 0x18) + (i << 2))
            int32_t ecx_3 = *eax_4 & 0xfff00000
            
            if (ecx_3 != 0 && (arg2 == 0 || eax_4[9] == 0) && ecx_3 != 0x10f00000
                    && ecx_3 != 0x20700000 && ecx_3 != 0x11100000 && ecx_3 != 0x11200000
                    && ecx_3 != 0x11300000 && ecx_3 != 0x11400000 && ecx_3 != 0x20800000
                    && ecx_3 != 0x20900000 && ecx_3 != 0x11500000)
                int32_t edi_1 = eax_4[3]
                int32_t var_14_1 = 0
                
                if (edi_1 u> 0)
                    int32_t* eax_5 = eax_4[4]
                    
                    while ((*(*(*(arg1 + 0x10) + (*(*(*(arg1 + 0x14) + (*eax_5 << 2)) + 4) << 2))
                            + 4) & 0x1020) == 0)
                        var_14_1 += 1
                        eax_5 = &eax_5[1]
                        
                        if (var_14_1 u>= edi_1)
                            break
                
                if (var_14_1 u>= edi_1)
                    int32_t i_5 = i_3
                    i_3 += 1
                    *(eax_2 + (i_5 << 2)) = i
            
            i += 1
        while (i u< *(arg1 + 0xc))
    
    int32_t var_18_1 = 0
    
    while (true)
        arg2 = 0
        sub_4a3f75(arg1)
        sub_458e55(sub_4a43bd, eax_2, i_3, arg1)
        
        if (i_3 u<= 0)
            break
        
        int32_t j_1 = 1
        uint32_t var_14_2 = eax_2
        int32_t i_2 = i_3
        int32_t i_1
        
        do
            int32_t eax_9 = *var_14_2
            
            if (eax_9 != 0xffffffff)
                for (int32_t j = j_1; j u< i_3; j += 1)
                    int32_t ebx_6 = eax_2 + (j << 2)
                    int32_t* edi_3 = *ebx_6
                    
                    if (edi_3 != 0xffffffff)
                        if (eax_9 u>= edi_3)
                            break
                        
                        if (sub_4a421e(eax_9, edi_3, arg1) != 0)
                            break
                        
                        int32_t eax_11 = *(arg1 + 0x18)
                        void* ecx_10 = *(eax_11 + (eax_9 << 2))
                        int32_t* eax_12 = *(eax_11 + (edi_3 << 2))
                        arg2 = 0
                        
                        if (*(ecx_10 + 0xc) u> 0)
                            do
                                void* edi_6 = *(*(arg1 + 0x14) + (*(eax_12[4] + (arg2 << 2)) << 2))
                                int32_t edx_3 = *(*(ecx_10 + 0x10) + (arg2 << 2))
                                arg2 += 1
                                *(edi_6 + 0x30) = edx_3
                            while (arg2 u< *(ecx_10 + 0xc))
                        
                        *ebx_6 = 0xffffffff
                        *eax_12 = 0
                        eax_12[1] = 0
                        eax_12[3] = 0
                        var_18_1 = 1
                        arg2 = 1
            
            var_14_2 += 4
            j_1 += 1
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        int32_t eax_13 = 0
        
        if (arg2 == 0)
            break
        
        bool cond:5_1 = i_3 u<= 0
        int32_t i_4 = i_3
        i_3 = 0
        int32_t var_24_1 = 0
        
        if (not(cond:5_1))
            do
                int32_t ecx_13 = *(eax_2 + (eax_13 << 2))
                
                if (ecx_13 != 0xffffffff)
                    void* eax_15 = *(*(arg1 + 0x18) + (ecx_13 << 2))
                    int32_t edi_7 = *(eax_15 + 4)
                    arg2 = 0
                    
                    if (edi_7 u> 0)
                        int32_t* eax_16 = *(eax_15 + 8)
                        
                        do
                            int32_t edx_5 = *eax_16
                            
                            if (*(*(*(arg1 + 0x14) + (edx_5 << 2)) + 0x30) != edx_5)
                                break
                            
                            arg2 += 1
                            eax_16 = &eax_16[1]
                        while (arg2 u< edi_7)
                    
                    if (arg2 != edi_7)
                        int32_t i_6 = i_3
                        i_3 += 1
                        *(eax_2 + (i_6 << 2)) = ecx_13
                
                eax_13 = var_24_1 + 1
                var_24_1 = eax_13
            while (eax_13 u< i_4)
        
        sub_4a3f8e(arg1)
    
    if (var_18_1 != 0)
        sub_4ad8ba(arg1)
    
    int32_t result_1
    result_1.b = var_18_1 == 0
    result = result_1
else
    result = 0x8007000e

j__free(eax_2)
return result

// 函数: sub_4ceaa2
// 地址: 0x4ceaa2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg2
int32_t edi
int32_t var_24 = edi
int32_t eax_1 = (*(*arg1 + 0x20))(ebx, 0)

if (eax_1 == 0)
    int32_t var_8
    int32_t var_8_1 = var_8 & eax_1
    int32_t i_3 = *(ebx + 0xc)
    arg2 = 0xffffffff
    
    if (i_3 u> 0)
        int32_t* ecx = *(ebx + 0x10)
        int32_t i_2 = i_3
        int32_t i
        
        do
            void* eax_3 = *(arg1[5] + (*ecx << 2))
            int32_t edx_1 = *(eax_3 + 0x4c)
            
            if (var_8_1 u< edx_1)
                var_8_1 = edx_1
            
            void* eax_4 = *(eax_3 + 0x48)
            
            if (arg2 u> eax_4)
                arg2 = eax_4
            
            ecx = &ecx[1]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t eax_5 = *(ebx + 4)
    
    if (eax_5 u> 0)
        int32_t* var_14_1 = *(ebx + 8)
        int32_t var_18_1 = eax_5
        
        while (true)
            void* eax_8 = *(arg1[5] + (*var_14_1 << 2))
            
            if ((*(*(arg1[4] + (*(eax_8 + 4) << 2)) + 4) & 2) != 0)
                int32_t ecx_5 = *(eax_8 + 0x48)
                
                if (ecx_5 != 0xffffffff)
                    if (var_8_1 u< ecx_5 + 1)
                        var_8_1 = ecx_5 + 1
                    
                    while (true)
                        int32_t ecx_10 = *(eax_8 + 0x50)
                        
                        if (arg2 u< ecx_10)
                            break
                        
                        if (ecx_10 != 0xffffffff)
                            int32_t edx_3 = 0
                            
                            if (arg4 u> 0)
                                while (*(arg3 + (edx_3 << 2)) != *(arg1[6] + (ecx_10 << 2)))
                                    edx_3 += 1
                                    
                                    if (edx_3 u>= arg4)
                                        break
                                
                                if (edx_3 u< arg4)
                                    void* ecx_8 = *(arg3 + (edx_3 << 2))
                                    int32_t var_c_1 = 0
                                    
                                    if (*(ecx_8 + 0xc) u> 0)
                                        int32_t* var_10_1 = *(ecx_8 + 0x10)
                                        
                                        while (*(eax_8 + 0x10)
                                                != *(*(arg1[5] + (*var_10_1 << 2)) + 0x10))
                                            var_c_1 += 1
                                            var_10_1 = &var_10_1[1]
                                            
                                            if (var_c_1 u>= *(ecx_8 + 0xc))
                                                break
                                    
                                    if (var_c_1 u< *(ecx_8 + 0xc))
                                        eax_8 =
                                            *(arg1[5] + (*(*(ecx_8 + 0x10) + (var_c_1 << 2)) << 2))
                                        continue
                        
                        arg2 = *(eax_8 + 0x50) - 1
                        break
            
            var_14_1 = &var_14_1[1]
            int32_t temp1_1 = var_18_1
            var_18_1 -= 1
            
            if (temp1_1 == 1)
                break
    
    int32_t eax_13 = 0
    int32_t edi_6
    
    if (arg4 u<= 0)
        edi_6 = arg4
    else
        do
            edi_6 = *(*(arg1[5] + (**(*(arg3 + (eax_13 << 2)) + 0x10) << 2)) + 0x48)
            
            if (edi_6 u>= var_8_1 && edi_6 u<= arg2)
                break
            
            eax_13 += 1
        while (eax_13 u< arg4)
    
    if (eax_13 != arg4 && (*(*arg1 + 0x34))(ebx, edi_6) == 0)
        int32_t eax_16 = 0
        
        if (arg4 u> 0)
            do
                **(arg3 + (eax_16 << 2)) = 0
                eax_16 += 1
            while (eax_16 u< arg4)
        
        void* ecx_16 = *(arg1[6] + (edi_6 << 2))
        
        if (ecx_16 != 0)
            sub_46cb59(ecx_16, 1)
        
        *(arg1[6] + (edi_6 << 2)) = ebx
        int32_t i_1 = 0
        
        if (*(ebx + 0xc) u> 0)
            do
                void* ecx_19 = *(arg1[5] + (*(*(ebx + 0x10) + (i_1 << 2)) << 2))
                i_1 += 1
                *(ecx_19 + 0x48) = edi_6
            while (i_1 u< *(ebx + 0xc))
        
        return 0

if (ebx != 0)
    sub_46cb59(ebx, 1)

return 1

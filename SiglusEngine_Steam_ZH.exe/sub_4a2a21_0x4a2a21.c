// 函数: sub_4a2a21
// 地址: 0x4a2a21
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t* ebx = arg3
int32_t ecx = 1
int32_t edi
int32_t var_14 = edi

if (arg4 u<= 1)
label_4a2a5d:
    
    for (arg3 = nullptr; arg3 u< 4; arg3 += 1)
        void* edx_4 = (arg3 - 1) & 3
        int32_t esi_2 = *(arg2 + (edx_4 << 2))
        
        if (esi_2 != 0xffffffff)
            int32_t eax_5 = *(arg1 + 0x14)
            long double x87_r7_2 = fconvert.t(*(*(eax_5 + (esi_2 << 2)) + 0x20))
            long double x87_r6_2 = fconvert.t(*(*(eax_5 + (*ebx << 2)) + 0x20))
            x87_r6_2 - x87_r7_2
            void* eax_6
            eax_6.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (not(p_2))
                int32_t eax_7 = 0
                
                if (arg4 u> 0)
                    do
                        ebx[eax_7] = *(arg2 + (edx_4 << 2))
                        eax_7 += 1
                    while (eax_7 u< arg4)
                
                break
else
    int32_t edx_1 = *(arg1 + 0x14)
    
    while (true)
        long double x87_r7_1 = fconvert.t(*(*(edx_1 + (*ebx << 2)) + 0x20))
        long double x87_r6_1 = fconvert.t(*(*(edx_1 + (ebx[ecx] << 2)) + 0x20))
        x87_r6_1 - x87_r7_1
        void* eax_3
        eax_3.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (p_1)
            int32_t esi_3 = 0
            
            if (arg4 u> 0)
                do
                    for (arg3 = nullptr; arg3 u< 4; arg3 += 1)
                        void* edx_7 = (arg3 + esi_3) & 3
                        int32_t edi_2 = *(arg2 + (edx_7 << 2))
                        
                        if (edi_2 != 0xffffffff)
                            int32_t eax_11 = *(arg1 + 0x14)
                            long double x87_r7_3 = fconvert.t(*(*(eax_11 + (edi_2 << 2)) + 0x20))
                            long double x87_r6_3 =
                                fconvert.t(*(*(eax_11 + (ebx[esi_3] << 2)) + 0x20))
                            x87_r6_3 - x87_r7_3
                            void* eax_12
                            eax_12.w = (x87_r6_3 < x87_r7_3 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_3, x87_r7_3) ? 1 : 0) << 0xa
                                | (x87_r6_3 == x87_r7_3 ? 1 : 0) << 0xe
                            bool p_3 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_3))
                                ebx[esi_3] = *(arg2 + (edx_7 << 2))
                                break
                    
                    esi_3 += 1
                while (esi_3 u< arg4)
            
            break
        
        ecx += 1
        
        if (ecx u>= arg4)
            goto label_4a2a5d

return 0

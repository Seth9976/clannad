// 函数: sub_41da34
// 地址: 0x41da34
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 8)
int32_t edi
int32_t var_10 = edi
long double x87_r6_1

if (eax == 1)
    int32_t eax_31 = *(arg1 + 0x54) - 1
    
    if (eax_31 == 1)
        int32_t i = 0
        
        if (*(arg1 + 0x68) u> 0)
            long double x87_r7_19 = fconvert.t(1f)
            x87_r6_1 = fconvert.t(0.5f)
            float* edx_9 = nullptr
            void* eax_42 = arg2 + 8
            
            do
                i += 1
                *(edx_9 + *(arg1 + 0x58)) =
                    fconvert.s((fconvert.t(*(eax_42 - 8)) + x87_r7_19) * x87_r6_1)
                edx_9 = &edx_9[4]
                *(edx_9 + *(arg1 + 0x58) - 0xc) =
                    fconvert.s((fconvert.t(*(eax_42 - 4)) + x87_r7_19) * x87_r6_1)
                long double x87_r5_57 = fconvert.t(*eax_42)
                eax_42 += 0x10
                *(edx_9 + *(arg1 + 0x58) - 8) = fconvert.s((x87_r5_57 + x87_r7_19) * x87_r6_1)
                *(edx_9 + *(arg1 + 0x58) - 4) = fconvert.s(fconvert.t(*(eax_42 - 0xc)))
            while (i u< *(arg1 + 0x68))
    else if (eax_31 == 2)
        int32_t i_1 = 0
        
        if (*(arg1 + 0x68) u> 0)
            long double x87_r7_18 = fconvert.t(1f)
            x87_r6_1 = fconvert.t(0.5f)
            float* edx_8 = nullptr
            void* eax_40 = arg2 + 8
            
            do
                i_1 += 1
                *(edx_8 + *(arg1 + 0x58)) =
                    fconvert.s((fconvert.t(*(eax_40 - 8)) + x87_r7_18) * x87_r6_1)
                edx_8 = &edx_8[4]
                *(edx_8 + *(arg1 + 0x58) - 0xc) =
                    fconvert.s((fconvert.t(*(eax_40 - 4)) + x87_r7_18) * x87_r6_1)
                long double x87_r5_45 = fconvert.t(*eax_40)
                eax_40 += 0x10
                *(edx_8 + *(arg1 + 0x58) - 8) = fconvert.s((x87_r5_45 + x87_r7_18) * x87_r6_1)
                *(edx_8 + *(arg1 + 0x58) - 4) =
                    fconvert.s((fconvert.t(*(eax_40 - 0xc)) + x87_r7_18) * x87_r6_1)
            while (i_1 u< *(arg1 + 0x68))
    else if (eax_31 == 3)
        int32_t i_2 = 0
        
        if (*(arg1 + 0x68) u> 0)
            long double x87_r7_17 = fconvert.t(1f)
            void* edx_7 = arg2 + 8
            
            do
                long double x87_r6_2 = float.t(0)
                long double temp13_1 = fconvert.t(*(edx_7 - 8))
                x87_r6_2 - temp13_1
                void* eax_35
                eax_35.w = (x87_r6_2 < temp13_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_2, temp13_1) ? 1 : 0) << 0xa
                    | (x87_r6_2 == temp13_1 ? 1 : 0) << 0xe | 0x3800
                long double x87_r6_3
                
                if ((eax_35:1.b & 0x41) != 0)
                    long double temp14_1 = fconvert.t(*(edx_7 - 8))
                    x87_r7_17 - temp14_1
                    eax_35.w = (x87_r7_17 < temp14_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_17, temp14_1) ? 1 : 0) << 0xa
                        | (x87_r7_17 == temp14_1 ? 1 : 0) << 0xe | 0x3800
                    
                    if ((eax_35:1.b & 0x41) != 0)
                        x87_r6_3 = float.t(1)
                    else
                        x87_r6_3 = fconvert.t(*(edx_7 - 8))
                else
                    x87_r6_3 = float.t(0)
                
                void* esi_3 = 0xfffffff8 - arg2 + edx_7
                *(esi_3 + *(arg1 + 0x58)) = fconvert.s(x87_r6_3)
                long double x87_r6_4 = float.t(0)
                long double temp16_1 = fconvert.t(*(edx_7 - 4))
                x87_r6_4 - temp16_1
                int32_t eax_36
                eax_36.w = (x87_r6_4 < temp16_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_4, temp16_1) ? 1 : 0) << 0xa
                    | (x87_r6_4 == temp16_1 ? 1 : 0) << 0xe | 0x3800
                long double x87_r6_5
                
                if ((eax_36:1.b & 0x41) != 0)
                    long double temp19_1 = fconvert.t(*(edx_7 - 4))
                    x87_r7_17 - temp19_1
                    eax_36.w = (x87_r7_17 < temp19_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_17, temp19_1) ? 1 : 0) << 0xa
                        | (x87_r7_17 == temp19_1 ? 1 : 0) << 0xe | 0x3800
                    
                    if ((eax_36:1.b & 0x41) != 0)
                        x87_r6_5 = float.t(1)
                    else
                        x87_r6_5 = fconvert.t(*(edx_7 - 4))
                else
                    x87_r6_5 = float.t(0)
                
                *(esi_3 + *(arg1 + 0x58) + 4) = fconvert.s(x87_r6_5)
                long double x87_r6_6 = float.t(0)
                long double temp22_1 = fconvert.t(*edx_7)
                x87_r6_6 - temp22_1
                int32_t eax_37
                eax_37.w = (x87_r6_6 < temp22_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_6, temp22_1) ? 1 : 0) << 0xa
                    | (x87_r6_6 == temp22_1 ? 1 : 0) << 0xe | 0x3800
                long double x87_r6_7
                
                if ((eax_37:1.b & 0x41) != 0)
                    long double temp25_1 = fconvert.t(*edx_7)
                    x87_r7_17 - temp25_1
                    eax_37.w = (x87_r7_17 < temp25_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_17, temp25_1) ? 1 : 0) << 0xa
                        | (x87_r7_17 == temp25_1 ? 1 : 0) << 0xe | 0x3800
                    
                    if ((eax_37:1.b & 0x41) != 0)
                        x87_r6_7 = float.t(1)
                    else
                        x87_r6_7 = fconvert.t(*edx_7)
                else
                    x87_r6_7 = float.t(0)
                
                *(esi_3 + *(arg1 + 0x58) + 8) = fconvert.s(x87_r6_7)
                long double x87_r6_8 = float.t(0)
                long double temp28_1 = fconvert.t(*(edx_7 + 4))
                x87_r6_8 - temp28_1
                int32_t eax_38
                eax_38.w = (x87_r6_8 < temp28_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_8, temp28_1) ? 1 : 0) << 0xa
                    | (x87_r6_8 == temp28_1 ? 1 : 0) << 0xe | 0x3800
                long double x87_r6_9
                
                if ((eax_38:1.b & 0x41) != 0)
                    long double temp31_1 = fconvert.t(*(edx_7 + 4))
                    x87_r7_17 - temp31_1
                    eax_38.w = (x87_r7_17 < temp31_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_17, temp31_1) ? 1 : 0) << 0xa
                        | (x87_r7_17 == temp31_1 ? 1 : 0) << 0xe | 0x3800
                    
                    if ((eax_38:1.b & 0x41) != 0)
                        x87_r6_9 = float.t(1)
                    else
                        x87_r6_9 = fconvert.t(*(edx_7 + 4))
                else
                    x87_r6_9 = float.t(0)
                
                i_2 += 1
                *(esi_3 + *(arg1 + 0x58) + 0xc) = fconvert.s(x87_r6_9)
                edx_7 += 0x10
            while (i_2 u< *(arg1 + 0x68))
else if (eax == 2)
    int32_t eax_17 = *(arg1 + 0x54)
    
    if (eax_17 == 1)
        int32_t i_3 = 0
        
        if (*(arg1 + 0x68) u> 0)
            long double x87_r7_16 = fconvert.t(1f)
            x87_r6_1 = fconvert.t(2f)
            float* edx_6 = nullptr
            void* eax_29 = arg2 + 8
            
            do
                i_3 += 1
                *(edx_6 + *(arg1 + 0x58)) =
                    fconvert.s(fconvert.t(*(eax_29 - 8)) * x87_r6_1 - x87_r7_16)
                edx_6 = &edx_6[4]
                *(edx_6 + *(arg1 + 0x58) - 0xc) =
                    fconvert.s(fconvert.t(*(eax_29 - 4)) * x87_r6_1 - x87_r7_16)
                long double x87_r5_35 = fconvert.t(*eax_29)
                eax_29 += 0x10
                *(edx_6 + *(arg1 + 0x58) - 8) = fconvert.s(x87_r5_35 * x87_r6_1 - x87_r7_16)
                *(edx_6 + *(arg1 + 0x58) - 4) = fconvert.s(fconvert.t(*(eax_29 - 0xc)))
            while (i_3 u< *(arg1 + 0x68))
    else if (eax_17 == 3)
        int32_t i_4 = 0
        
        if (*(arg1 + 0x68) u> 0)
            float* edx_5 = nullptr
            void* eax_27 = arg2 + 8
            
            do
                *(edx_5 + *(arg1 + 0x58)) = fconvert.s(fconvert.t(*(eax_27 - 8)))
                i_4 += 1
                *(edx_5 + *(arg1 + 0x58) + 4) = fconvert.s(fconvert.t(*(eax_27 - 4)))
                edx_5 = &edx_5[4]
                *(edx_5 + *(arg1 + 0x58) - 8) = fconvert.s(fconvert.t(*eax_27))
                long double x87_r7_13 = fconvert.t(*(eax_27 + 4))
                eax_27 += 0x10
                *(edx_5 + *(arg1 + 0x58) - 4) =
                    fconvert.s((x87_r7_13 + fconvert.t(1f)) * fconvert.t(0.5f))
            while (i_4 u< *(arg1 + 0x68))
    else if (eax_17 == 4)
        int32_t i_5 = 0
        
        if (*(arg1 + 0x68) u> 0)
            long double x87_r7_9 = fconvert.t(-1f)
            x87_r6_1 = fconvert.t(1f)
            void* edx_4 = arg2 + 8
            
            do
                long double temp15_1 = fconvert.t(*(edx_4 - 8))
                x87_r7_9 - temp15_1
                void* eax_22
                eax_22.w = (x87_r7_9 < temp15_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_9, temp15_1) ? 1 : 0) << 0xa
                    | (x87_r7_9 == temp15_1 ? 1 : 0) << 0xe | 0x3000
                long double x87_r5_22
                
                if ((eax_22:1.b & 0x41) != 0)
                    long double temp17_1 = fconvert.t(*(edx_4 - 8))
                    x87_r6_1 - temp17_1
                    eax_22.w = (x87_r6_1 < temp17_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_1, temp17_1) ? 1 : 0) << 0xa
                        | (x87_r6_1 == temp17_1 ? 1 : 0) << 0xe | 0x3000
                    
                    if ((eax_22:1.b & 0x41) != 0)
                        x87_r5_22 = float.t(1)
                    else
                        x87_r5_22 = fconvert.t(*(edx_4 - 8))
                else
                    x87_r5_22 = x87_r7_9
                
                float* esi_2 = edx_4 + 0xfffffff8 - arg2
                *(esi_2 + *(arg1 + 0x58)) = fconvert.s(x87_r5_22)
                long double temp20_1 = fconvert.t(*(edx_4 - 4))
                x87_r7_9 - temp20_1
                int32_t eax_23
                eax_23.w = (x87_r7_9 < temp20_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_9, temp20_1) ? 1 : 0) << 0xa
                    | (x87_r7_9 == temp20_1 ? 1 : 0) << 0xe | 0x3000
                long double x87_r5_24
                
                if ((eax_23:1.b & 0x41) != 0)
                    long double temp23_1 = fconvert.t(*(edx_4 - 4))
                    x87_r6_1 - temp23_1
                    eax_23.w = (x87_r6_1 < temp23_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_1, temp23_1) ? 1 : 0) << 0xa
                        | (x87_r6_1 == temp23_1 ? 1 : 0) << 0xe | 0x3000
                    
                    if ((eax_23:1.b & 0x41) != 0)
                        x87_r5_24 = float.t(1)
                    else
                        x87_r5_24 = fconvert.t(*(edx_4 - 4))
                else
                    x87_r5_24 = x87_r7_9
                
                *(esi_2 + *(arg1 + 0x58) + 4) = fconvert.s(x87_r5_24)
                long double temp26_1 = fconvert.t(*edx_4)
                x87_r7_9 - temp26_1
                int32_t eax_24
                eax_24.w = (x87_r7_9 < temp26_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_9, temp26_1) ? 1 : 0) << 0xa
                    | (x87_r7_9 == temp26_1 ? 1 : 0) << 0xe | 0x3000
                long double x87_r5_26
                
                if ((eax_24:1.b & 0x41) != 0)
                    long double temp29_1 = fconvert.t(*edx_4)
                    x87_r6_1 - temp29_1
                    eax_24.w = (x87_r6_1 < temp29_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_1, temp29_1) ? 1 : 0) << 0xa
                        | (x87_r6_1 == temp29_1 ? 1 : 0) << 0xe | 0x3000
                    
                    if ((eax_24:1.b & 0x41) != 0)
                        x87_r5_26 = float.t(1)
                    else
                        x87_r5_26 = fconvert.t(*edx_4)
                else
                    x87_r5_26 = x87_r7_9
                
                *(esi_2 + *(arg1 + 0x58) + 8) = fconvert.s(x87_r5_26)
                long double x87_r5_27 = float.t(0)
                long double temp32_1 = fconvert.t(*(edx_4 + 4))
                x87_r5_27 - temp32_1
                int32_t eax_25
                eax_25.w = (x87_r5_27 < temp32_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r5_27, temp32_1) ? 1 : 0) << 0xa
                    | (x87_r5_27 == temp32_1 ? 1 : 0) << 0xe | 0x3000
                long double x87_r5_28
                
                if ((eax_25:1.b & 0x41) != 0)
                    long double temp34_1 = fconvert.t(*(edx_4 + 4))
                    x87_r6_1 - temp34_1
                    eax_25.w = (x87_r6_1 < temp34_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_1, temp34_1) ? 1 : 0) << 0xa
                        | (x87_r6_1 == temp34_1 ? 1 : 0) << 0xe | 0x3000
                    
                    if ((eax_25:1.b & 0x41) != 0)
                        x87_r5_28 = float.t(1)
                    else
                        x87_r5_28 = fconvert.t(*(edx_4 + 4))
                else
                    x87_r5_28 = float.t(0)
                
                i_5 += 1
                *(esi_2 + *(arg1 + 0x58) + 0xc) = fconvert.s(x87_r5_28)
                edx_4 += 0x10
            while (i_5 u< *(arg1 + 0x68))
else if (eax == 3)
    int32_t eax_4 = *(arg1 + 0x54)
    
    if (eax_4 == 1)
        int32_t i_6 = 0
        
        if (*(arg1 + 0x68) u> 0)
            long double x87_r7_8 = fconvert.t(1f)
            x87_r6_1 = fconvert.t(2f)
            float* edx_3 = nullptr
            void* eax_16 = arg2 + 8
            
            do
                i_6 += 1
                *(edx_3 + *(arg1 + 0x58)) =
                    fconvert.s(fconvert.t(*(eax_16 - 8)) * x87_r6_1 - x87_r7_8)
                edx_3 = &edx_3[4]
                *(edx_3 + *(arg1 + 0x58) - 0xc) =
                    fconvert.s(fconvert.t(*(eax_16 - 4)) * x87_r6_1 - x87_r7_8)
                long double x87_r5_15 = fconvert.t(*eax_16)
                eax_16 += 0x10
                *(edx_3 + *(arg1 + 0x58) - 8) = fconvert.s(x87_r5_15 * x87_r6_1 - x87_r7_8)
                *(edx_3 + *(arg1 + 0x58) - 4) =
                    fconvert.s(fconvert.t(*(eax_16 - 0xc)) * x87_r6_1 - x87_r7_8)
            while (i_6 u< *(arg1 + 0x68))
    else if (eax_4 == 2)
        int32_t i_7 = 0
        
        if (*(arg1 + 0x68) u> 0)
            float* edx_2 = nullptr
            void* eax_14 = arg2 + 8
            
            do
                *(edx_2 + *(arg1 + 0x58)) = fconvert.s(fconvert.t(*(eax_14 - 8)))
                i_7 += 1
                *(edx_2 + *(arg1 + 0x58) + 4) = fconvert.s(fconvert.t(*(eax_14 - 4)))
                edx_2 = &edx_2[4]
                *(edx_2 + *(arg1 + 0x58) - 8) = fconvert.s(fconvert.t(*eax_14))
                long double x87_r7_5 = fconvert.t(*(eax_14 + 4))
                eax_14 += 0x10
                *(edx_2 + *(arg1 + 0x58) - 4) = fconvert.s(x87_r7_5 + x87_r7_5 - fconvert.t(1f))
            while (i_7 u< *(arg1 + 0x68))
    else if (eax_4 == 4)
        int32_t i_8 = 0
        
        if (*(arg1 + 0x68) u> 0)
            long double x87_r7_1 = fconvert.t(-1f)
            x87_r6_1 = fconvert.t(1f)
            void* edx_1 = arg2 + 8
            
            do
                long double temp18_1 = fconvert.t(*(edx_1 - 8))
                x87_r7_1 - temp18_1
                void* eax_9
                eax_9.w = (x87_r7_1 < temp18_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_1, temp18_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == temp18_1 ? 1 : 0) << 0xe | 0x3000
                long double x87_r5_2
                
                if ((eax_9:1.b & 0x41) != 0)
                    long double temp21_1 = fconvert.t(*(edx_1 - 8))
                    x87_r6_1 - temp21_1
                    eax_9.w = (x87_r6_1 < temp21_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_1, temp21_1) ? 1 : 0) << 0xa
                        | (x87_r6_1 == temp21_1 ? 1 : 0) << 0xe | 0x3000
                    
                    if ((eax_9:1.b & 0x41) != 0)
                        x87_r5_2 = float.t(1)
                    else
                        x87_r5_2 = fconvert.t(*(edx_1 - 8))
                else
                    x87_r5_2 = x87_r7_1
                
                float* esi_1 = 0xfffffff8 - arg2 + edx_1
                *(esi_1 + *(arg1 + 0x58)) = fconvert.s(x87_r5_2)
                long double temp24_1 = fconvert.t(*(edx_1 - 4))
                x87_r7_1 - temp24_1
                int32_t eax_10
                eax_10.w = (x87_r7_1 < temp24_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_1, temp24_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == temp24_1 ? 1 : 0) << 0xe | 0x3000
                long double x87_r5_4
                
                if ((eax_10:1.b & 0x41) != 0)
                    long double temp27_1 = fconvert.t(*(edx_1 - 4))
                    x87_r6_1 - temp27_1
                    eax_10.w = (x87_r6_1 < temp27_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_1, temp27_1) ? 1 : 0) << 0xa
                        | (x87_r6_1 == temp27_1 ? 1 : 0) << 0xe | 0x3000
                    
                    if ((eax_10:1.b & 0x41) != 0)
                        x87_r5_4 = float.t(1)
                    else
                        x87_r5_4 = fconvert.t(*(edx_1 - 4))
                else
                    x87_r5_4 = x87_r7_1
                
                *(esi_1 + *(arg1 + 0x58) + 4) = fconvert.s(x87_r5_4)
                long double temp30_1 = fconvert.t(*edx_1)
                x87_r7_1 - temp30_1
                int32_t eax_11
                eax_11.w = (x87_r7_1 < temp30_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_1, temp30_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == temp30_1 ? 1 : 0) << 0xe | 0x3000
                long double x87_r5_6
                
                if ((eax_11:1.b & 0x41) != 0)
                    long double temp33_1 = fconvert.t(*edx_1)
                    x87_r6_1 - temp33_1
                    eax_11.w = (x87_r6_1 < temp33_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_1, temp33_1) ? 1 : 0) << 0xa
                        | (x87_r6_1 == temp33_1 ? 1 : 0) << 0xe | 0x3000
                    
                    if ((eax_11:1.b & 0x41) != 0)
                        x87_r5_6 = float.t(1)
                    else
                        x87_r5_6 = fconvert.t(*edx_1)
                else
                    x87_r5_6 = x87_r7_1
                
                *(esi_1 + *(arg1 + 0x58) + 8) = fconvert.s(x87_r5_6)
                long double temp35_1 = fconvert.t(*(edx_1 + 4))
                x87_r7_1 - temp35_1
                int32_t eax_12
                eax_12.w = (x87_r7_1 < temp35_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_1, temp35_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == temp35_1 ? 1 : 0) << 0xe | 0x3000
                long double x87_r5_8
                
                if ((eax_12:1.b & 0x41) != 0)
                    long double temp36_1 = fconvert.t(*(edx_1 + 4))
                    x87_r6_1 - temp36_1
                    eax_12.w = (x87_r6_1 < temp36_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_1, temp36_1) ? 1 : 0) << 0xa
                        | (x87_r6_1 == temp36_1 ? 1 : 0) << 0xe | 0x3000
                    
                    if ((eax_12:1.b & 0x41) != 0)
                        x87_r5_8 = float.t(1)
                    else
                        x87_r5_8 = fconvert.t(*(edx_1 + 4))
                else
                    x87_r5_8 = x87_r7_1
                
                i_8 += 1
                *(esi_1 + *(arg1 + 0x58) + 0xc) = fconvert.s(x87_r5_8)
                edx_1 += 0x10
            while (i_8 u< *(arg1 + 0x68))
*(arg1 + 0x58)

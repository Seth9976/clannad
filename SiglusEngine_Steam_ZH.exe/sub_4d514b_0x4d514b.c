// 函数: sub_4d514b
// 地址: 0x4d514b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i_1 = 0
int32_t i = 0
bool cond:0 = *(arg1 + 8) u<= 0
int32_t edi
int32_t var_11c = edi
int32_t* var_10 = nullptr

if (not(cond:0))
    do
        *(*(*(arg1 + 0x14) + (i << 2)) + 0x30) = 0xffffffff
        *(*(*(arg1 + 0x14) + (i << 2)) + 0x34) = 0xffffffff
        i += 1
    while (i u< *(arg1 + 8))

int32_t eax = *(arg1 + 0xc)
int32_t result = sub_4d086f(arg1, 0xffffffff, 1, &var_10, 0, 0, nullptr, eax, 1, 0, 0, 0)

if (*(arg1 + 8) u> 0)
    do
        int32_t ecx_6 = i_1 << 2
        int32_t* edx_2 = *(arg1 + 0x14) + ecx_6
        void* edi_1 = *edx_2
        
        if (*(edi_1 + 0x30) != 0xffffffff || *(edi_1 + 0x34) != 0xffffffff)
            void* edx_3 = *edx_2
            *(edx_3 + 0x14) = *(edx_3 + 0x30)
            void* edx_5 = *(ecx_6 + *(arg1 + 0x14))
            *(edx_5 + 0x18) = *(edx_5 + 0x34)
        
        *(*(ecx_6 + *(arg1 + 0x14)) + 0x30) = 0xffffffff
        *(*(ecx_6 + *(arg1 + 0x14)) + 0x34) = 0xffffffff
        i_1 += 1
    while (i_1 u< *(arg1 + 8))

int32_t ecx_8 = 0

if (eax u> 0)
    do
        int32_t* edx_10 = *(*(arg1 + 0x18) + (ecx_8 << 2))
        ecx_8 += 1
        *edx_10 = 0
    while (ecx_8 u< eax)

if (result s>= 0)
    *(arg1 + 0xfc) = 0
    void var_110
    void var_90
    sub_4cf788(arg1, &var_110, &var_90, nullptr, 0)
    int32_t i_2 = 0
    
    if (*(arg1 + 0xc) u> 0)
        do
            int32_t* edi_4 = *(*(arg1 + 0x18) + (i_2 << 2))
            int32_t eax_2 = *edi_4
            int32_t ecx_12 = eax_2 & 0xfff00000
            
            if ((eax_2 & 0xfffff) == 1)
                var_10 = 0xffffffff
                int32_t j = 0xffffffff
                
                if (ecx_12 == 0x73000000 || ecx_12 == 0x73200000 || ecx_12 == 0x73100000
                        || ecx_12 == 0x73300000)
                    void* eax_21 = *(*(arg1 + 0x14) + (*edi_4[2] << 2))
                    int32_t ecx_32 = *(*(*(arg1 + 0x10) + (*(eax_21 + 4) << 2)) + 4)
                    
                    if ((ecx_32:1.b & 2) != 0 && (0x2000 & ecx_32) == 0)
                        result = sub_4cf996(arg1, &(*U"yxwzgrab")[7], 0x2000, eax_21, &var_10)
                        
                        if (result s< 0)
                            return result
                        
                        *edi_4[2] = var_10
                else if (ecx_12 == 0x73b00000)
                    void* eax_6 = *(*(arg1 + 0x14) + (*(edi_4[2] + 4) << 2))
                    void* ecx_15 = *(*(arg1 + 0x10) + (*(eax_6 + 4) << 2))
                    
                    if ((*(ecx_15 + 5) & 1) != 0 && *(eax_6 + 8) == 0xffffffff)
                        long double x87_r7_1 = fconvert.t(0.0)
                        long double x87_r6_1 = fconvert.t(*(eax_6 + 0x20))
                        x87_r6_1 - x87_r7_1
                        eax_6.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
                        bool p_1 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_1))
                            void* var_120_1 = ecx_15
                            void* var_124_1 = ecx_15
                            var_124_1.q = fconvert.d(float.t(0))
                            int32_t j_1 = sub_49f544(arg1, 0, 0, 0, var_124_1)
                            j = j_1
                            
                            if (j_1 == 0xffffffff)
                                return 0x8007000e
                            
                            int32_t eax_7 = *(arg1 + 0x14)
                            int32_t* edx_14 = *(eax_7 + (*edi_4[2] << 2))
                            int32_t* ebx = *(eax_7 + (j_1 << 2))
                            var_10 = edx_14
                            result = sub_49f070(ebx, edx_14)
                            
                            if (result s< 0)
                                return result
                            
                            result = sub_49f12c(ebx, var_10)
                            
                            if (result s< 0)
                                return result
                            
                            ebx[0xf] ^= 0x80000
                            int32_t j_3 = j
                            ebx[0xe] = *edi_4[2]
                            *(edi_4[2] + 4) = j_3
                else if (ecx_12 == 0x74200000 || ecx_12 == 0x74100000)
                    void* eax_13 = *(*(arg1 + 0x14) + (*edi_4[2] << 2))
                    int32_t ecx_23 = *(*(*(arg1 + 0x10) + (*(eax_13 + 4) << 2)) + 4)
                    
                    if ((ecx_23:1.b & 2) != 0 && (0x40000 & ecx_23) == 0)
                        result = sub_4cf996(arg1, 0xabff18, 0x40000, eax_13, &j)
                        
                        if (result s< 0)
                            return result
                        
                        int32_t j_2 = j
                        *edi_4[2] = j_2
                        void* ebx_1 = *(*(arg1 + 0x14) + (j_2 << 2))
                        bool cond:5_1 = edi_4[1] u<= 1
                        j = 1
                        
                        if (not(cond:5_1))
                            do
                                int32_t j_4 = j
                                int32_t eax_15 = *(edi_4[2] + (j_4 << 2))
                                void* eax_16
                                
                                if (eax_15 == 0xffffffff)
                                    eax_16 = ebx_1
                                else
                                    eax_16 = *(*(arg1 + 0x14) + (eax_15 << 2))
                                
                                int32_t j_7 = j_4
                                int32_t j_6 = j_4
                                j_6.q = fconvert.d(fconvert.t(*(eax_16 + 0x20)))
                                int32_t eax_17 =
                                    sub_49f544(arg1, *(ebx_1 + 4), *(ebx_1 + 0xc), j_4, j_6)
                                int32_t j_5 = j
                                int32_t ecx_28 = edi_4[2]
                                j += 1
                                *(ecx_28 + (j_5 << 2)) = eax_17
                            while (j u< edi_4[1])
            
            i_2 += 1
        while (i_2 u< *(arg1 + 0xc))
    
    result = sub_4a6590(arg1)
    
    if (result s>= 0)
        return 0

return result

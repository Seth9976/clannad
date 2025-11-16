// 函数: sub_4afa34
// 地址: 0x4afa34
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_ac = edi
int32_t i = 0
int32_t var_1c = 0

if (*(arg1 + 8) u> 0)
    do
        void* eax_2 = *(*(arg1 + 0x14) + (i << 2))
        void* ecx_1 = *(*(arg1 + 0x10) + (*(eax_2 + 4) << 2))
        *(eax_2 + 0x30) = *(eax_2 + 0x14)
        *(eax_2 + 0x40) = *(eax_2 + 0x18)
        int32_t ecx_2 = *(ecx_1 + 4)
        
        if ((ecx_2.b & 0x10) != 0)
            *(eax_2 + 0x18) = 1
            *(eax_2 + 0x14) = 0xffffffff
        else if ((ecx_2 & 0x11028) == 0)
            *(eax_2 + 0x18) = 0
            *(eax_2 + 0x14) = 0xffffffff
        
        i += 1
    while (i u< *(arg1 + 8))

int32_t i_6 = *(arg1 + 0xc)
int32_t i_1 = i_6

if (i_6 u> 0)
    do
        i_1 -= 1
        int32_t* esi_1 = *(*(arg1 + 0x18) + (i_1 << 2))
        
        if ((*(esi_1 + 2) & 0xfff0) != 0)
            int32_t j = 1
            
            if (esi_1[3] u> 1)
                do
                    int32_t* eax_4 = esi_1[4]
                    int32_t ecx_4 = *(arg1 + 0x14)
                    sub_4a68ef(arg1, *(ecx_4 + (*eax_4 << 2)), *(ecx_4 + (eax_4[j] << 2)))
                    j += 1
                while (j u< esi_1[3])
            
            int32_t j_1 = 1
            
            if (esi_1[3] u> 1)
                do
                    int32_t* eax_6 = esi_1[4]
                    int32_t ecx_6 = *(arg1 + 0x14)
                    int32_t* edx_2 = j_1 << 2
                    j_1 += 1
                    *(*(ecx_6 + (*(edx_2 + eax_6) << 2)) + 0x14) =
                        *(*(ecx_6 + (*eax_6 << 2)) + 0x14)
                    int32_t* eax_9 = esi_1[4]
                    int32_t ecx_8 = *(arg1 + 0x14)
                    *(*(ecx_8 + (*(edx_2 + eax_9) << 2)) + 0x18) =
                        *(*(ecx_8 + (*eax_9 << 2)) + 0x18)
                while (j_1 u< esi_1[3])
            
            int32_t ecx_10 = *esi_1
            int32_t eax_14 = ecx_10 & 0xfff00000
            
            if (eax_14 == 0x20700000 || eax_14 == 0x20800000 || eax_14 == 0x11500000)
                int32_t j_2 = 0
                
                if (esi_1[3] u> 0)
                    do
                        int32_t ecx_31 = *(arg1 + 0x14)
                        int32_t eax_45 = j_2 << 2
                        j_2 += 1
                        *(*(ecx_31 + (*(eax_45 + esi_1[4]) << 2)) + 0x14) = *(
                            *(ecx_31 + (*(*(ecx_31 + (*(eax_45 + esi_1[2]) << 2)) + 0x14) << 2))
                            + 0x14)
                        int32_t ecx_33 = *(arg1 + 0x14)
                        *(*(ecx_33 + (*(eax_45 + esi_1[4]) << 2)) + 0x18) = *(
                            *(ecx_33 + (*(*(ecx_33 + (*(eax_45 + esi_1[2]) << 2)) + 0x14) << 2))
                            + 0x18)
                    while (j_2 u< esi_1[3])
            else if (eax_14 != 0x11200000)
                int32_t eax_26 = ecx_10 & 0xf0000000
                
                if (eax_26 u>= 0x10000000 && eax_26 u<= 0x40000000)
                    uint32_t temp0_2 = divu.dp.d(0:(esi_1[1]), ecx_10 & 0xfffff)
                    int32_t j_3 = 0
                    
                    if (esi_1[3] u> 0)
                        do
                            int32_t var_c_2 = 0
                            
                            if (temp0_2 u> 0)
                                do
                                    void** ebx_11
                                    
                                    for (int32_t k =
                                            *(esi_1[2] + ((esi_1[3] * var_c_2 + j_3) << 2)); 
                                            k != 0xffffffff; k = *(*(ebx_11 + *(arg1 + 0x14)) + 8))
                                        int32_t ecx_20 = *(arg1 + 0x14)
                                        ebx_11 = k << 2
                                        sub_4a68ef(arg1, *(ebx_11 + ecx_20), 
                                            *(ecx_20 + (*(esi_1[4] + (j_3 << 2)) << 2)))
                                    
                                    var_c_2 += 1
                                while (var_c_2 u< temp0_2)
                            
                            j_3 += 1
                        while (j_3 u< esi_1[3])
                else if (esi_1[3] == 0)
                    int32_t j_4 = 0
                    
                    if (esi_1[1] u> 0)
                        do
                            *(*(*(arg1 + 0x14) + (*(esi_1[2] + (j_4 << 2)) << 2)) + 0x14) =
                                0xffffffff
                            void* ecx_30 = *(*(arg1 + 0x14) + (*(esi_1[2] + (j_4 << 2)) << 2))
                            j_4 += 1
                            *(ecx_30 + 0x18) = 1
                        while (j_4 u< esi_1[1])
                else
                    int32_t j_5 = 0
                    
                    if (esi_1[1] u> 0)
                        do
                            void** ebx_13
                            
                            for (int32_t k_1 = *(esi_1[2] + (j_5 << 2)); k_1 != 0xffffffff; 
                                    k_1 = *(*(*(arg1 + 0x14) + ebx_13) + 8))
                                int32_t ecx_23 = *(arg1 + 0x14)
                                ebx_13 = k_1 << 2
                                sub_4a68ef(arg1, *(ebx_13 + ecx_23), *(ecx_23 + (*esi_1[4] << 2)))
                            
                            j_5 += 1
                        while (j_5 u< esi_1[1])
            else
                uint32_t temp0_1 = divu.dp.d(0:(esi_1[1]), ecx_10 & 0xfffff)
                int32_t j_6 = 0
                
                if (esi_1[3] u> 0)
                    do
                        int32_t var_c_1 = 0
                        
                        if (temp0_1 u> 0)
                            do
                                void** ebx_9
                                
                                for (int32_t k_2 = *(esi_1[2] + ((esi_1[3] * var_c_1 + j_6) << 2)); 
                                        k_2 != 0xffffffff; k_2 = *(*(ebx_9 + *(arg1 + 0x14)) + 8))
                                    int32_t eax_20 = *(arg1 + 0x14)
                                    ebx_9 = k_2 << 2
                                    sub_4a68ef(arg1, *(ebx_9 + eax_20), 
                                        *(eax_20 + (
                                            *(*(eax_20 + (*(esi_1[4] + (j_6 << 2)) << 2)) + 0x14)
                                            << 2)))
                                
                                var_c_1 += 1
                            while (var_c_1 u< temp0_1)
                        
                        j_6 += 1
                    while (j_6 u< esi_1[3])
    while (i_1 u> 0)

int32_t i_2 = 0

if (*(arg1 + 0xc) u> 0)
    do
        int32_t* esi_2 = *(*(arg1 + 0x18) + (i_2 << 2))
        int32_t eax_51 = *esi_2 & 0xfff00000
        
        if (eax_51 != 0 && eax_51 != 0x10f00000 && eax_51 != 0x20700000 && eax_51 != 0x11100000
                && eax_51 != 0x11200000 && eax_51 != 0x11300000 && eax_51 != 0x11400000
                && eax_51 != 0x20800000 && eax_51 != 0x20900000 && eax_51 != 0x11500000)
            int32_t eax_53 = *esi_2[4]
            void* ecx_38 = *(*(arg1 + 0x14) + (eax_53 << 2))
            
            if ((*(*(*(arg1 + 0x10) + (*(ecx_38 + 4) << 2)) + 5) & 0x10) == 0)
                int32_t j_11 = 0
                i_1 = 0
                sub_49fee7(arg1, eax_53, &j_11)
                void* eax_54 = ecx_38
                
                while (true)
                    int32_t ebx_17 = *(eax_54 + 8)
                    
                    if (ebx_17 == 0xffffffff)
                        break
                    
                    sub_49fee7(arg1, ebx_17, &i_1)
                    eax_54 = *(*(arg1 + 0x14) + (ebx_17 << 2))
                
                int32_t j_13 = esi_2[1]
                
                if (j_13 u> 0)
                    int32_t* var_8_1 = esi_2[2]
                    int32_t j_12 = j_13
                    int32_t j_7
                    
                    do
                        for (int32_t k_3 = *var_8_1; k_3 != 0xffffffff; 
                                k_3 = *(*(*(arg1 + 0x14) + (k_3 << 2)) + 8))
                            sub_49fee7(arg1, k_3, &i_1)
                        
                        var_8_1 = &var_8_1[1]
                        j_7 = j_12
                        j_12 -= 1
                    while (j_7 != 1)
                
                int32_t j_14 = j_11
                int32_t eax_60 = *(ecx_38 + 0x14)
                
                if (j_14 u> i_1)
                    j_11 = j_14 - i_1
                    int32_t j_8
                    
                    do
                        if ((*(*(*(arg1 + 0x10) + (*((*(arg1 + 0x14))[eax_60] + 4) << 2)) + 5)
                                & 0x80) != 0)
                            int32_t k_4 = 0
                            
                            if (esi_2[3] u> 0)
                                do
                                    void* ecx_53 =
                                        *(*(arg1 + 0x14) + (*(esi_2[4] + (k_4 << 2)) << 2))
                                    int32_t k_5 = k_4
                                    k_4 += 1
                                    *(ecx_53 + 0x18) = *((*(arg1 + 0x14))[eax_60] + 0x18)
                                    *(*(*(arg1 + 0x14) + (*(esi_2[4] + (k_5 << 2)) << 2)) + 0x14) =
                                        *((*(arg1 + 0x14))[eax_60] + 0x14)
                                while (k_4 u< esi_2[3])
                        
                        j_8 = j_11
                        j_11 -= 1
                        eax_60 = *((*(arg1 + 0x14))[eax_60] + 0x14)
                    while (j_8 != 1)
        
        i_2 += 1
    while (i_2 u< *(arg1 + 0xc))

int32_t i_9 = *(arg1 + 8)

if (i_9 u> 0)
    int32_t* ecx_60 = *(arg1 + 0x14)
    int32_t i_7 = i_9
    int32_t i_3
    
    do
        void* eax_64 = *ecx_60
        
        if (*(eax_64 + 0x30) != *(eax_64 + 0x14) || *(eax_64 + 0x40) != *(eax_64 + 0x18))
            var_1c = 1
        
        ecx_60 = &ecx_60[1]
        i_3 = i_7
        i_7 -= 1
    while (i_3 != 1)
    
    if (var_1c != 0)
        sub_4a39e3(arg1)
        int32_t i_4 = *(arg1 + 0xc)
        
        while (i_4 u> 0)
            i_4 -= 1
            void* eax_66 = *(*(arg1 + 0x18) + (i_4 << 2))
            
            if ((*(eax_66 + 2) & 0xfff0) != 0)
                int32_t j_15 = *(eax_66 + 0xc)
                int32_t i_5 = i_4
                
                if (j_15 u> 0)
                    int32_t ecx_62 = *(arg1 + 0x14)
                    int32_t* esi_5 = *(eax_66 + 0x10)
                    int32_t j_10 = j_15
                    int32_t j_9
                    
                    do
                        int32_t edx_30 = *(*(ecx_62 + (*esi_5 << 2)) + 0x14)
                        
                        if (edx_30 != 0xffffffff)
                            int32_t i_10 = *(*(ecx_62 + (edx_30 << 2)) + 0x48)
                            
                            if (i_5 u< i_10)
                                i_5 = i_10
                        
                        esi_5 = &esi_5[1]
                        j_9 = j_10
                        j_10 -= 1
                    while (j_9 != 1)
                    
                    if (i_4 != i_5)
                        int32_t i_8 = i_4
                        
                        if (i_4 u< i_5)
                            do
                                int32_t* ecx_64 = *(arg1 + 0x18) + (i_8 << 2)
                                i_8 += 1
                                *ecx_64 = ecx_64[1]
                            while (i_8 u< i_5)
                        
                        *(*(arg1 + 0x18) + (i_5 << 2)) = eax_66
                        sub_4a39e3(arg1)
        
        return 0

return 1

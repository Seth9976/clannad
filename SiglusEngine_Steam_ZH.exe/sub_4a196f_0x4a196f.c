// 函数: sub_4a196f
// 地址: 0x4a196f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg2
void* i = *esi & 0xfffff
int32_t edi
int32_t var_5c = edi
void* i_3 = i
void* i_2 = i
arg2 = nullptr

if (i u> 0)
    while (true)
        void* i_4 = nullptr
        int32_t var_50
        int32_t var_4c
        int32_t var_48
        int32_t var_44
        int32_t var_40
        int32_t var_3c
        int32_t var_38
        int32_t var_34
        
        if (i_2 u<= 4)
            i_4 = i_2
        else if (i u> 0)
            int32_t var_20_1 = 0
            int32_t var_28_1 = 1
            int32_t var_24_1 = i << 2
            
            do
                int32_t* ecx_3 = esi[2]
                
                if (*(ecx_3 + var_20_1) != 0xffffffff)
                    int32_t edx_2 = *(arg1 + 0x14)
                    void* eax_4 = *(edx_2 + (*(ecx_3 + var_20_1) << 2))
                    void* ecx_5 = *(edx_2 + (*(ecx_3 + var_24_1) << 2))
                    void* i_8 = 1
                    int32_t var_18_1 = var_28_1
                    
                    if (var_28_1 u< i_3)
                        int32_t var_10_1 = var_24_1 + 4
                        
                        do
                            int32_t* edx_6 = esi[2]
                            
                            if (*(edx_6 + var_10_1) != 0xffffffff)
                                void* edx_8 = *(*(arg1 + 0x14) + (edx_6[var_18_1] << 2))
                                void* edx_11 = *(*(arg1 + 0x14) + (*(esi[2] + var_10_1) << 2))
                                
                                if (*(eax_4 + 4) == *(edx_8 + 4) && *(eax_4 + 8) == *(edx_8 + 8)
                                        && *(eax_4 + 0xc) == *(edx_8 + 0xc)
                                        && *(eax_4 + 0x48) == *(edx_8 + 0x48)
                                        && *(ecx_5 + 4) == *(edx_11 + 4)
                                        && *(ecx_5 + 8) == *(edx_11 + 8)
                                        && *(ecx_5 + 0xc) == *(edx_11 + 0xc)
                                        && *(ecx_5 + 0x48) == *(edx_11 + 0x48))
                                    i_8 += 1
                                    
                                    if (i_8 == 4)
                                        break
                            
                            var_18_1 += 1
                            var_10_1 += 4
                        while (var_18_1 u< i_3)
                    
                    if (i_8 u> i_4)
                        i_4 = i_8
                        var_34 = *(eax_4 + 4)
                        var_44 = *(ecx_5 + 4)
                        var_38 = *(eax_4 + 8)
                        var_48 = *(ecx_5 + 8)
                        var_3c = *(eax_4 + 0xc)
                        var_40 = *(eax_4 + 0x48)
                        var_4c = *(ecx_5 + 0xc)
                        var_50 = *(ecx_5 + 0x48)
                    
                    if (i_4 == 4)
                        break
                    
                    i = i_3
                
                var_20_1 += 4
                var_24_1 += 4
                var_28_1 += 1
            while (var_28_1 - 1 u< i)
        
        int32_t eax_10 = sub_49f5a4(arg1, (i_4 & 0xfffff) | 0x50000000, 0xffffffff, 0xffffffff)
        
        if (eax_10 != 0xffffffff)
            void* ebx_15 = *(*(arg1 + 0x18) + (eax_10 << 2))
            sub_49e7bf(ebx_15, esi)
            void* i_5 = i_3
            int32_t eax_11 = 0
            int32_t var_28_2 = 0
            int32_t var_20_2 = 0
            
            if (i_5 u> 0)
                int32_t var_10_2 = i_5 << 2
                int32_t var_24_2 = i_4 << 2
                
                do
                    i_5 = i_4
                    
                    if (var_28_2 u>= i_5)
                        break
                    
                    i_5 = esi[2]
                    
                    if (*(i_5 + (eax_11 << 2)) != 0xffffffff)
                        if (i_2 u<= 4)
                        label_4a1bdf:
                            *(*(ebx_15 + 8) + (var_28_2 << 2)) = *(esi[2] + (eax_11 << 2))
                            *(var_24_2 + *(ebx_15 + 8)) = *(var_10_2 + esi[2])
                            eax_11 = var_20_2
                            *(esi[2] + (eax_11 << 2)) = 0xffffffff
                            i_5 = esi[2]
                            *(var_10_2 + i_5) = 0xffffffff
                            var_28_2 += 1
                            var_24_2 += 4
                        else
                            i_5 = *(*(arg1 + 0x14) + (*(i_5 + (eax_11 << 2)) << 2))
                            
                            if (var_34 == *(i_5 + 4) && var_38 == *(i_5 + 8)
                                    && var_3c == *(i_5 + 0xc) && var_40 == *(i_5 + 0x48))
                                i_5 = *(*(arg1 + 0x14) + (*(esi[2] + var_10_2) << 2))
                                
                                if (var_44 == *(i_5 + 4) && var_48 == *(i_5 + 8)
                                        && var_4c == *(i_5 + 0xc) && var_50 == *(i_5 + 0x48))
                                    goto label_4a1bdf
                    
                    var_10_2 += 4
                    eax_11 += 1
                    var_20_2 = eax_11
                while (eax_11 u< i_3)
            
            int32_t* ecx_32
            
            if (i_3 u<= 4)
                ecx_32 = *(ebx_15 + 0x10)
                *ecx_32 = *esi[4]
            label_4a1c90:
                i_2 -= i_4
                arg2 += 1
                
                if (i_2 u> 0)
                    i = i_3
                    continue
                else
                    if (arg2 u<= 1)
                        break
                    
                    int32_t* var_60_2 = ecx_32
                    int32_t* var_64_1 = ecx_32
                    var_64_1.q = fconvert.d(float.t(1))
                    void* eax_24 = sub_49f544(arg1, *(arg1 + 0x78), 0xffffffff, 0, var_64_1)
                    
                    if (eax_24 != 0xffffffff)
                        int32_t* i_1
                        
                        do
                            void* var_1c_1 = *(arg1 + 0xc) - arg2
                            i_1 = nullptr
                            
                            if (arg2 u> 0)
                                int32_t var_28_3 = 0
                                
                                do
                                    void* eax_28 = arg2 - var_28_3
                                    void* var_c = eax_28
                                    
                                    if (eax_28 u> 4)
                                        var_c = 4
                                        eax_28 = 4
                                    
                                    int32_t var_68_2
                                    
                                    if (eax_28 == 1)
                                        var_68_2 = 0x10000001
                                    else if (eax_28 != 2)
                                        var_68_2 = (eax_28 & 0xfffff) | 0x50000000
                                    else
                                        var_68_2 = 0x20400001
                                    
                                    int32_t eax_31 =
                                        sub_49f5a4(arg1, var_68_2, 0xffffffff, 0xffffffff)
                                    
                                    if (eax_31 == 0xffffffff)
                                        return 0x8007000e
                                    
                                    void* ebx_16 = *(*(arg1 + 0x18) + (eax_31 << 2))
                                    sub_49e7bf(ebx_16, esi)
                                    void* ecx_37 = var_c
                                    int32_t eax_32 = 0
                                    int32_t var_14 = 0
                                    
                                    if (ecx_37 u> 0)
                                        void** var_20_3 = ecx_37 << 2
                                        int32_t var_24_3 = var_1c_1 << 2
                                        
                                        do
                                            ecx_37 = **(*(var_24_3 + *(arg1 + 0x18)) + 0x10)
                                            *(*(ebx_16 + 8) + (eax_32 << 2)) = ecx_37
                                            
                                            if (var_c u> 2)
                                                ecx_37 = eax_24
                                                *(var_20_3 + *(ebx_16 + 8)) = ecx_37
                                            
                                            var_24_3 += 4
                                            var_20_3 = &var_20_3[1]
                                            eax_32 = var_14 + 1
                                            var_14 = eax_32
                                        while (eax_32 u< var_c)
                                    
                                    if (arg2 u<= 4)
                                        **(ebx_16 + 0x10) = *esi[4]
                                    else
                                        void* var_60_4 = ecx_37
                                        void* var_64_2 = ecx_37
                                        var_64_2.q = fconvert.d(float.t(0))
                                        **(ebx_16 + 0x10) = sub_49f544(arg1, *(arg1 + 0x88), 
                                            0xffffffff, 0xffffffff, var_64_2)
                                        
                                        if (**(ebx_16 + 0x10) == 0xffffffff)
                                            return 0x8007000e
                                        
                                        int32_t eax_37 = *(arg1 + 0x14)
                                        *(*(eax_37 + (**(ebx_16 + 0x10) << 2)) + 0x14) =
                                            *(*(eax_37 + (*esi[4] << 2)) + 0x14)
                                        int32_t eax_39 = *(arg1 + 0x14)
                                        *(*(eax_39 + (**(ebx_16 + 0x10) << 2)) + 0x18) =
                                            *(*(eax_39 + (*esi[4] << 2)) + 0x18)
                                    
                                    var_1c_1 += var_c
                                    var_28_3 += 4
                                    i_1 += 1
                                while (var_28_3 u< arg2)
                            
                            arg2 = i_1
                        while (i_1 u> 1)
                        break
            else
                void* i_7 = i_5
                void* i_6 = i_5
                i_6.q = fconvert.d(float.t(0))
                **(ebx_15 + 0x10) = sub_49f544(arg1, *(arg1 + 0x88), 0xffffffff, 0xffffffff, i_6)
                
                if (**(ebx_15 + 0x10) != 0xffffffff)
                    int32_t eax_17 = *(arg1 + 0x14)
                    *(*(eax_17 + (**(ebx_15 + 0x10) << 2)) + 0x14) =
                        *(*(eax_17 + (*esi[4] << 2)) + 0x14)
                    int32_t eax_19 = *(arg1 + 0x14)
                    ecx_32 = *(*(eax_19 + (*esi[4] << 2)) + 0x18)
                    *(*(eax_19 + (**(ebx_15 + 0x10) << 2)) + 0x18) = ecx_32
                    goto label_4a1c90
        
        return 0x8007000e

return 0

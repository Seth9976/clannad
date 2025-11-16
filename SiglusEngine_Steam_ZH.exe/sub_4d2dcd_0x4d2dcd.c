// 函数: sub_4d2dcd
// 地址: 0x4d2dcd
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = sub_4c8264(arg1)

if (result s>= 0)
    int32_t i_8 = arg1[2]
    int32_t var_10_1 = 0
    int32_t edi
    int32_t var_70_1 = edi
    
    if (i_8 u> 0)
        int32_t* ecx = arg1[5]
        int32_t i_6 = i_8
        int32_t i
        
        do
            void* eax = *ecx
            
            if (arg1[0x22] == *(eax + 4))
                int32_t eax_1 = *(eax + 0xc)
                
                if (eax_1 u>= var_10_1)
                    var_10_1 = eax_1 + 1
            
            ecx = &ecx[1]
            i = i_6
            i_6 -= 1
        while (i != 1)
    
    int32_t ecx_1 = arg1[3]
    int32_t i_9 = 0
    int32_t i_5 = 0
    
    if (ecx_1 u> 0)
        while (true)
            int32_t* ebx_1 = *(arg1[6] + (i_9 << 2))
            int32_t eax_3 = *ebx_1
            int32_t* var_44_1 = ebx_1
            
            if ((eax_3 & 0xfff00000) != 0)
                int32_t i_10 = eax_3 & 0xfffff
                uint32_t temp0_1 = divu.dp.d(0:(ebx_1[1]), i_10)
                void* eax_8 = *(arg1[5] + (*ebx_1[4] << 2))
                int32_t ecx_4 = *(eax_8 + 0x14)
                int32_t eax_9 = *(eax_8 + 0x18)
                
                while (true)
                    int32_t var_1c
                    
                    if ((*(*arg1 + 0x20))(ebx_1, &var_1c) == 0
                            || (*ebx_1 & 0xfff00000) == 0x74100000)
                        result = sub_49f69d(arg1, ebx_1)
                        break
                    
                    int32_t ecx_5 = var_1c
                    void* eax_17 = *(arg1[4]
                        + (*(*(arg1[5] + (*(ebx_1[2] + ((ecx_5 * i_10) << 2)) << 2)) + 4) << 2))
                    char* var_78_10
                    
                    if ((*(eax_17 + 4) & 2) != 0)
                        var_78_10 = "internal error: result violated port constraints"
                        int32_t var_7c_7 = 0
                    else
                        int32_t var_18_1 = 0
                        int32_t var_8_1 = 0
                        
                        if (temp0_1 u> 0)
                            int32_t* var_14_1 = nullptr
                            
                            do
                                void* edi_1 = *(arg1[4]
                                    + (*(*(arg1[5] + (*(var_14_1 + ebx_1[2]) << 2)) + 4) << 2))
                                
                                if ((*(*arg1 + 0x9c))(ebx_1, var_8_1) != 1)
                                    int16_t eax_24 = (*(edi_1 + 4)).w
                                    
                                    if ((eax_24.b & 0x40) != 0
                                            && (((*(eax_17 + 4)).w ^ eax_24) & 0x12bf) == 0)
                                        int32_t i_7 = i_10
                                        
                                        if (i_7 u> 0)
                                            int32_t ecx_13 = arg1[5]
                                            int32_t* edx_7 = var_14_1
                                            int32_t i_1
                                            
                                            do
                                                int32_t eax_28 =
                                                    *(*(ecx_13 + (*(edx_7 + ebx_1[2]) << 2)) + 0x5c)
                                                
                                                if (var_18_1 u< eax_28)
                                                    var_18_1 = eax_28
                                                    var_1c = var_8_1
                                                
                                                edx_7 = &edx_7[1]
                                                i_1 = i_7
                                                i_7 -= 1
                                            while (i_1 != 1)
                                
                                var_8_1 += 1
                                var_14_1 = &var_14_1[i_10]
                            while (var_8_1 u< temp0_1)
                            
                            ecx_5 = var_1c
                        
                        void* eax_35 = *(arg1[5] + (*(ebx_1[2] + ((ecx_5 * i_10) << 2)) << 2))
                        int32_t ecx_16 = *(eax_35 + 4)
                        int32_t edi_2 = *(eax_35 + 0xc)
                        int32_t eax_36 = *(eax_35 + 8)
                        
                        if ((*(*(arg1[4] + (ecx_16 << 2)) + 4) & 0x40) == 0)
                            var_78_10 =
                                "internal error: non-vectorized pool violated port constraints"
                            int32_t var_7c_8 = 0
                        else
                            int32_t var_68 = 0xffffffff
                            void var_64
                            void* edi_3 = &var_64
                            *edi_3 = 0xffffffff
                            void* edi_4 = edi_3 + 4
                            int32_t var_18_2 = 0
                            *edi_4 = 0xffffffff
                            int32_t i_2 = 0
                            bool cond:7_1 = arg1[2] u<= 0
                            *(edi_4 + 4) = 0xffffffff
                            
                            if (not(cond:7_1))
                                int32_t* var_14_2 = arg1[5]
                                
                                do
                                    void* eax_41 = *var_14_2
                                    
                                    if (*(eax_41 + 4) == ecx_16 && *(eax_41 + 0xc) == edi_2
                                            && *(eax_41 + 8) == eax_36
                                            && *(eax_41 + 0x38) == 0xffffffff)
                                        int32_t edi_9 = *(eax_41 + 0x58)
                                        
                                        if (edi_9 u>= i_5)
                                            (&var_68)[*(eax_41 + 0x10)] = i_2
                                            
                                            if (var_18_2 u<= edi_9)
                                                var_18_2 = edi_9 + 1
                                    
                                    var_14_2 = &var_14_2[1]
                                    i_2 += 1
                                while (i_2 u< arg1[2])
                            
                            int32_t eax_43 = 0
                            int32_t var_14_3 = 0
                            int32_t var_8_2 = 0
                            int32_t var_58[0x4]
                            int32_t eax_50
                            
                            while (true)
                                int32_t ecx_17 = (&var_68)[var_8_2]
                                
                                if (ecx_17 == 0xffffffff)
                                label_4d3052:
                                    var_8_2 += 1
                                    
                                    if (var_8_2 u< 4)
                                        continue
                                    else
                                        eax_50 = sub_49f5a4(arg1, (eax_43 & 0xfffff) | 0x10000000, 
                                            eax_43, eax_43)
                                        
                                        if (eax_50 != 0xffffffff)
                                            break
                                else
                                    int32_t var_78_2 = ecx_17
                                    int32_t var_7c_2 = ecx_17
                                    var_7c_2.q = fconvert.d(float.t(0))
                                    int32_t eax_44 =
                                        sub_49f544(arg1, arg1[0x22], var_10_1, var_8_2, var_7c_2)
                                    var_58[var_8_2] = eax_44
                                    
                                    if (eax_44 != 0xffffffff)
                                        int32_t ecx_19 = arg1[5]
                                        void* edi_13 = *(ecx_19 + (eax_44 << 2))
                                        result = sub_49f12c(edi_13, *(ecx_19 + (ecx_17 << 2)))
                                        
                                        if (result s< 0)
                                            return result
                                        
                                        *(edi_13 + 0x68) = 0
                                        *(edi_13 + 0x6c) = 0xffffffff
                                        *(edi_13 + 0x70) = 0
                                        var_14_3 += 1
                                        *(edi_13 + 0x14) = ecx_4
                                        *(edi_13 + 0x18) = eax_9
                                        eax_43 = var_14_3
                                        goto label_4d3052
                                
                            label_4d3260:
                                return 0x8007000e
                            
                            void* edi_14 = *(arg1[6] + (eax_50 << 2))
                            result = sub_49e7bf(edi_14, ebx_1)
                            
                            if (result s< 0)
                                return result
                            
                            int32_t* eax_51 = nullptr
                            
                            for (int32_t i_3 = 0; i_3 u< 0x10; i_3 += 4)
                                int32_t ecx_25 = *(&var_68 + i_3)
                                
                                if (ecx_25 != 0xffffffff)
                                    *(eax_51 + *(edi_14 + 8)) = ecx_25
                                    *(eax_51 + *(edi_14 + 0x10)) = *(&var_58 + i_3)
                                    eax_51 = &eax_51[1]
                            
                            var_10_1 += 1
                            
                            for (int32_t i_4 = i_5; i_4 u< var_18_2; i_4 += 1)
                                void* edi_15 = *(arg1[6] + (i_4 << 2))
                                
                                if ((*(edi_15 + 2) & 0xfff0) != 0)
                                    void* ecx_29 = *(arg1[5] + (**(edi_15 + 0x10) << 2))
                                    int32_t j = *(ecx_29 + 0x14)
                                    int32_t ecx_30 = *(ecx_29 + 0x18)
                                    void* eax_54
                                    
                                    for (; j != 0xffffffff; j = *(eax_54 + 0x14))
                                        if (j == ecx_4 && ecx_30 == eax_9)
                                            break
                                        
                                        eax_54 = *(arg1[5] + (j << 2))
                                        ecx_30 = *(eax_54 + 0x18)
                                    
                                    if (j == ecx_4 && ecx_30 == eax_9
                                            && (*(*arg1 + 0x20))(edi_15, 0) != 0)
                                        int32_t j_1 = 0
                                        
                                        if (*(edi_15 + 4) u> 0)
                                            do
                                                int32_t ecx_33 = arg1[5]
                                                int32_t ebx_3 = j_1 << 2
                                                int32_t* eax_58 = *(edi_15 + 8) + ebx_3
                                                void* eax_60 = *(ecx_33 + (*eax_58 << 2))
                                                
                                                if (*(eax_60 + 4) == ecx_16
                                                        && *(eax_60 + 0xc) == edi_2
                                                        && *(eax_60 + 8) == eax_36)
                                                    int32_t eax_62 = var_58[*(eax_60 + 0x10)]
                                                    
                                                    if (*(eax_60 + 0x38) != 0xffffffff)
                                                        void* ecx_35 = *(ecx_33 + (eax_62 << 2))
                                                        void* var_78_6 = ecx_35
                                                        void* var_7c_5 = ecx_35
                                                        var_7c_5.q = fconvert.d(float.t(0))
                                                        *(ebx_3 + *(edi_15 + 8)) = sub_49f544(arg1, 
                                                            arg1[0x22], *(ecx_35 + 0xc), 
                                                            *(ecx_35 + 0x10), var_7c_5)
                                                        int32_t eax_64 = *(edi_15 + 8)
                                                        
                                                        if (*(ebx_3 + eax_64) == 0xffffffff)
                                                            goto label_4d3260
                                                        
                                                        void* ebx_4 =
                                                            *(arg1[5] + (*(ebx_3 + eax_64) << 2))
                                                        result = sub_49f12c(ebx_4, ecx_35)
                                                        
                                                        if (result s< 0)
                                                            return result
                                                        
                                                        *(ebx_4 + 0x38) = var_58[*(eax_60 + 0x10)]
                                                        *(ebx_4 + 0x3c) = *(eax_60 + 0x3c)
                                                    else
                                                        *eax_58 = eax_62
                                                
                                                j_1 += 1
                                            while (j_1 u< *(edi_15 + 4))
                                            
                                            ebx_1 = var_44_1
                            
                            continue
                    
                    sub_4a4100(arg1, ebx_1[0xf], 0, var_78_10)
                    return 0x80004005
                
                if (result s< 0)
                    return result
                
                *ebx_1 = 0
            
            i_9 = i_5 + 1
            i_5 = i_9
            
            if (i_9 u>= ecx_1)
                break
    
    result = 0

return result

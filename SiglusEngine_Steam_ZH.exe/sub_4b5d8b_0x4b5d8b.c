// 函数: sub_4b5d8b
// 地址: 0x4b5d8b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0
int32_t edi
int32_t var_30 = edi

if (arg1[2] u> 0)
    int32_t* ecx = arg1[5]
    int32_t i_2 = arg1[2]
    int32_t i
    
    do
        void* eax_1 = *ecx
        
        if (arg1[0x22] == *(eax_1 + 4))
            int32_t eax_2 = *(eax_1 + 0xc)
            
            if (eax_2 u>= var_c)
                var_c = eax_2 + 1
        
        ecx = &ecx[1]
        i = i_2
        i_2 -= 1
    while (i != 1)

int32_t ecx_1 = arg1[0x89]
int32_t eax_4 = arg1[0x13]
int32_t var_24 = ecx_1
int32_t var_18 = eax_4

if (eax_4 u< ecx_1)
    do
        int32_t* ebx_1 = *(arg1[0x8c] + (var_18 << 2))
        
        if (ebx_1 != 0)
            int32_t eax_6 = *ebx_1
            
            if (eax_6 != 0)
                int32_t edi_2 = eax_6 & 0xfffff
                int32_t var_10_1 = edi_2
                
                if ((eax_6 & 0xfff00000) == 0x70100000)
                    int32_t* eax_8 = ebx_1[2]
                    int32_t ecx_2 = arg1[5]
                    int32_t edx_3 = arg1[4]
                    
                    if ((*(*(edx_3 + (*(*(ecx_2 + (*eax_8 << 2)) + 4) << 2)) + 5) & 2) == 0 || (
                            *(*(edx_3 + (*(*(ecx_2 + (eax_8[var_10_1] << 2)) + 4) << 2)) + 5) & 2) == 0)
                        edi_2 = var_10_1
                    else
                        edi_2 = var_10_1
                        
                        if ((*(*(edx_3 + (*(*(ecx_2 + (eax_8[edi_2 * 2] << 2)) + 4) << 2)) + 5) & 2)
                                != 0)
                            void* eax_13 = sub_49ec23(0x74)
                            int32_t* var_14_1
                            
                            if (eax_13 == 0)
                                var_14_1 = nullptr
                            else
                                var_14_1 = sub_49e789(eax_13)
                            
                            if (var_14_1 == 0)
                                return 0x8007000e
                            
                            int32_t eax_18 = sub_49ec6e(var_14_1, (edi_2 & 0xfffff) | 0x10000000, 
                                edi_2, edi_2, 0)
                            
                            if (eax_18 s< 0)
                                return eax_18
                            
                            int32_t eax_19 = sub_49e7bf(var_14_1, ebx_1)
                            
                            if (eax_19 s< 0)
                                return eax_19
                            
                            int32_t var_8_2 = 0
                            
                            if (edi_2 u> 0)
                                do
                                    int32_t edi_13 = var_8_2 << 2
                                    void* eax_22 = *(arg1[5] + (*(edi_13 + ebx_1[4]) << 2))
                                    int32_t ecx_8 = *(edi_13 + ebx_1[2])
                                    int32_t var_34_2 = ecx_8
                                    int32_t var_38_2 = ecx_8
                                    var_38_2.q = fconvert.d(float.t(0))
                                    *(edi_13 + var_14_1[2]) = ecx_8
                                    *(edi_13 + var_14_1[4]) = sub_49f544(arg1, arg1[0x22], var_c, 
                                        *(eax_22 + 0x10), var_38_2)
                                    *(edi_13 + ebx_1[2]) = *(edi_13 + var_14_1[4])
                                    
                                    if (*(edi_13 + var_14_1[4]) == 0xffffffff)
                                        return 0x8007000e
                                    
                                    var_8_2 += 1
                                while (var_8_2 u< var_10_1)
                                
                                edi_2 = var_10_1
                            
                            var_c += 1
                            
                            if (arg1[0x89] u>= 0x200)
                                return 0x8007000e
                            
                            int32_t eax_28 = sub_49f431(arg1, var_14_1)
                            
                            if (eax_28 s< 0)
                                return eax_28
                            
                            *(arg1[0x8c] + (arg1[0x89] << 2)) = var_14_1
                            arg1[0x89] += 1
                
                if ((*ebx_1 & 0xfff00000) == 0x30000000 && zx.d((arg1[0x32]).w) != 0x104)
                    int32_t edx_9 = 1
                    
                    if (edi_2 u> 1)
                        int32_t* eax_34 = ebx_1[2]
                        void* eax_35 = &eax_34[1]
                        
                        do
                            if (*eax_34 != *eax_35)
                                uint32_t var_34_14 = zx.d((arg1[0x32]).b)
                                sub_4a4100(arg1, ebx_1[0xf], 0x11ca, 
                                    "unable to emulate vector conditionals in ps_1_%i shader model")
                                return 0x80004005
                            
                            edx_9 += 1
                            eax_35 += 4
                        while (edx_9 u< edi_2)
                    
                    void* eax_36 = sub_49ec23(0x74)
                    int32_t* edi_14
                    
                    if (eax_36 == 0)
                        edi_14 = nullptr
                    else
                        edi_14 = sub_49e789(eax_36)
                    
                    if (edi_14 == 0)
                        return 0x8007000e
                    
                    int32_t eax_38 = sub_49f431(arg1, edi_14)
                    
                    if (eax_38 s< 0)
                        sub_46cb59(edi_14, 1)
                        return eax_38
                    
                    int32_t eax_39 = sub_49ec6e(edi_14, 0x70300001, 3, 1, 0)
                    
                    if (eax_39 s< 0)
                        return eax_39
                    
                    int32_t eax_40 = sub_49e7bf(edi_14, ebx_1)
                    
                    if (eax_40 s< 0)
                        return eax_40
                    
                    int32_t* ecx_18 = edi_14[2]
                    int32_t* var_34_6 = ecx_18
                    int32_t* var_38_3 = ecx_18
                    var_38_3.q = fconvert.d(fconvert.t(-1.0))
                    *ecx_18 = *ebx_1[2]
                    int32_t eax_43 = sub_49f544(arg1, arg1[0x1e], 0, 0, var_38_3)
                    void* ecx_20 = edi_14[2]
                    void* var_34_7 = ecx_20
                    void* var_38_4 = ecx_20
                    var_38_4.q = fconvert.d(fconvert.t(0.5))
                    *(ecx_20 + 4) = eax_43
                    int32_t eax_44 = sub_49f544(arg1, arg1[0x1e], 0, 0, var_38_4)
                    void* ecx_22 = edi_14[2]
                    *(ecx_22 + 8) = eax_44
                    void* eax_45 = edi_14[2]
                    
                    if (*(eax_45 + 4) == 0xffffffff || *(eax_45 + 8) == 0xffffffff)
                        return 0x8007000e
                    
                    void* var_34_8 = ecx_22
                    void* var_38_5 = ecx_22
                    var_38_5.q = fconvert.d(float.t(0))
                    *edi_14[4] = sub_49f544(arg1, arg1[0x22], var_c, 3, var_38_5)
                    
                    if (*edi_14[4] == 0xffffffff)
                        return 0x8007000e
                    
                    int32_t eax_48 = 0
                    int32_t var_8_3 = 0
                    
                    if (var_10_1 u> 0)
                        int32_t var_1c_1 = var_10_1 << 3
                        int32_t var_14_2 = var_10_1 << 2
                        
                        do
                            *(ebx_1[2] + (eax_48 << 2)) = *edi_14[4]
                            int32_t* eax_49 = ebx_1[2]
                            int32_t ecx_29 = var_14_2
                            var_14_2 += 4
                            void* ecx_30 = ecx_29 + eax_49
                            int32_t edx_13 = *ecx_30
                            *ecx_30 = *(eax_49 + var_1c_1)
                            *(var_1c_1 + ebx_1[2]) = edx_13
                            eax_48 = var_8_3 + 1
                            var_8_3 = eax_48
                            var_1c_1 += 4
                        while (eax_48 u< var_10_1)
                    
                    int32_t eax_53 = arg1[0x89]
                    var_c += 1
                    
                    if (eax_53 u>= 0x200)
                        return 0x8007000e
                    
                    *(arg1[0x8c] + (eax_53 << 2)) = edi_14
                    int32_t eax_54 = *arg1
                    arg1[0x89] += 1
                    
                    if ((*(eax_54 + 0x20))(edi_14, 0) != 0)
                        void* eax_56 = sub_49ec23(0x74)
                        int32_t* var_14_3
                        
                        if (eax_56 == 0)
                            var_14_3 = nullptr
                        else
                            var_14_3 = sub_49e789(eax_56)
                        
                        int32_t eax_58 = sub_49f431(arg1, var_14_3)
                        
                        if (eax_58 s< 0)
                            if (var_14_3 == 0)
                                return eax_58
                            
                            sub_46cb59(var_14_3, 1)
                            return eax_58
                        
                        if (var_14_3 == 0)
                            return 0x8007000e
                        
                        int32_t eax_59 = sub_49ec6e(var_14_3, 0x20400001, 2, 1, 0)
                        
                        if (eax_59 s< 0)
                            return eax_59
                        
                        int32_t eax_60 = sub_49e7bf(var_14_3, ebx_1)
                        
                        if (eax_60 s< 0)
                            return eax_60
                        
                        *var_14_3[4] = *edi_14[4]
                        int32_t ecx_40 = *(edi_14[2] + 8)
                        int32_t var_34_11 = ecx_40
                        int32_t var_38_7 = ecx_40
                        var_38_7.q = fconvert.d(float.t(0))
                        *var_14_3[2] = ecx_40
                        *edi_14[4] = sub_49f544(arg1, arg1[0x22], 0, 3, var_38_7)
                        *(var_14_3[2] + 4) = *edi_14[4]
                        edi_14[1] = 2
                        *edi_14 = 0x20500001
                        int32_t eax_66 = arg1[0x89]
                        
                        if (eax_66 u>= 0x200)
                            return 0x8007000e
                        
                        *(arg1[0x8c] + (eax_66 << 2)) = var_14_3
                        arg1[0x89] += 1
                    
                    arg1[0x113] = 1
                    *ebx_1 = (var_10_1 & 0xfffff) | 0x70f00000
                
                void* eax_70 = sub_49ec23(0x74)
                int32_t* edi_15
                
                if (eax_70 == 0)
                    edi_15 = nullptr
                else
                    edi_15 = sub_49e789(eax_70)
                
                if (edi_15 == 0)
                    return 0x8007000e
                
                int32_t eax_72 = sub_49eecd(edi_15, ebx_1)
                
                if (eax_72 s< 0)
                    return eax_72
                
                if (arg1[0x89] u>= 0x200)
                    return 0x8007000e
                
                int32_t eax_73 = sub_49f431(arg1, edi_15)
                
                if (eax_73 s< 0)
                    return eax_73
                
                *(arg1[0x8c] + (arg1[0x89] << 2)) = edi_15
                arg1[0x89] += 1
                ecx_1 = var_24
        
        var_18 += 1
    while (var_18 u< ecx_1)

for (int32_t i_1 = arg1[0x13]; i_1 u< ecx_1; i_1 += 1)
    **(arg1[0x8c] + (i_1 << 2)) = 0

return 0

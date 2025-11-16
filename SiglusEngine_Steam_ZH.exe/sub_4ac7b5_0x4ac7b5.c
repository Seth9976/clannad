// 函数: sub_4ac7b5
// 地址: 0x4ac7b5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0xcc)
int32_t edi
int32_t var_44 = edi

if ((0x100 & eax) != 0 || (eax.b & 4) != 0)
    return 1

sub_4a6689(arg1)
void*** eax_1 = sub_745f3f(0x1fc)
void*** eax_2

if (eax_1 == 0)
    eax_2 = nullptr
else
    eax_2 = sub_4c5b94(eax_1)

*(arg1 + 0xe0) = eax_2

if (eax_2 == 0)
    return 0x8007000e

int32_t result = sub_4a463f(eax_2, arg1, 0x46580201, *(arg1 + 0xcc) | 0x100)

if (result s>= 0)
    sub_49ffb2(*(arg1 + 0xe0))
    result = sub_4a01c3(arg1)
    
    if (result s>= 0)
        int32_t i = 0
        
        if (*(arg1 + 8) u> 0)
            do
                *(*(*(arg1 + 0x14) + (i << 2)) + 0x30) = 0xffffffff
                *(*(*(arg1 + 0x14) + (i << 2)) + 0x44) = 0xffffffff
                i += 1
            while (i u< *(arg1 + 8))
        
        int32_t var_10_1 = 0xffffffff
        int32_t var_c_1 = 0
        int32_t i_1 = 0
        
        if (*(arg1 + 0xc) u> 0)
            do
                int32_t* edi_1 = *(*(arg1 + 0x18) + (i_1 << 2))
                int32_t eax_4 = *edi_1
                
                if ((eax_4 & 0xfff00000) != 0)
                    int32_t j_2 = eax_4 & 0xfffff
                    uint32_t temp0_1 = divu.dp.d(0:(edi_1[1]), j_2)
                    int32_t j_3 = j_2
                    int32_t var_24_1 = 0
                    
                    if (temp0_1 u> 0)
                        int32_t* var_14_1 = nullptr
                        
                        do
                            int32_t var_8_1 = 0
                            
                            if (j_2 u> 0)
                                int32_t* ebx_2 = edi_1[2] + var_14_1
                                int32_t j_1 = j_2
                                int32_t j
                                
                                do
                                    int32_t eax_7 = *ebx_2
                                    
                                    if ((*(*(*(arg1 + 0x10)
                                            + (*(*(*(arg1 + 0x14) + (eax_7 << 2)) + 4) << 2)) + 4) & 2)
                                            != 0 && sub_49ff77(arg1, eax_7) == 0)
                                        var_8_1 += 1
                                    
                                    ebx_2 = &ebx_2[1]
                                    j = j_1
                                    j_1 -= 1
                                while (j != 1)
                                
                                if (var_8_1 != 0)
                                    if (var_10_1 == 0xffffffff)
                                        int32_t eax_9 =
                                            sub_49f4eb(arg1, 0xabfed8, 0x80251, 0xffffffff, 4)
                                        var_10_1 = eax_9
                                        
                                        if (eax_9 == 0xffffffff)
                                            return 0x8007000e
                                    
                                    int32_t eax_13 = sub_49f5a4(*(arg1 + 0xe0), 
                                        (var_8_1 & 0xfffff) | 0x10000000, var_8_1, var_8_1)
                                    
                                    if (eax_13 == 0xffffffff)
                                        return 0x8007000e
                                    
                                    int32_t* eax_14 = *(*(*(arg1 + 0xe0) + 0x18) + (eax_13 << 2))
                                    sub_49e7bf(eax_14, edi_1)
                                    int32_t var_8_2 = 0
                                    int32_t var_1c_1 = 0
                                    int32_t* ebx_3 = var_14_1
                                    
                                    do
                                        int32_t* eax_16 = edi_1[2] + ebx_3
                                        int32_t eax_17 = *eax_16
                                        int32_t ecx_25 = eax_17 << 2
                                        void* ecx_26 = *(ecx_25 + *(arg1 + 0x14))
                                        
                                        if ((*(*(*(arg1 + 0x10) + (*(ecx_26 + 4) << 2)) + 4) & 2)
                                                != 0 && sub_49ff77(arg1, eax_17) == 0)
                                            int32_t eax_19 = *(ecx_26 + 0x48)
                                            
                                            if (eax_19 == 0xffffffff || (
                                                    **(*(arg1 + 0x18) + (eax_19 << 2)) & 0xfff00000)
                                                    != 0x10100000)
                                                int32_t eax_23 = *(ecx_26 + 0x30)
                                                
                                                if (eax_23 == 0xffffffff)
                                                    void* ecx_32 = *(arg1 + 0xe0)
                                                    void* var_4c_6 = ecx_32
                                                    void* var_50_2 = ecx_32
                                                    var_50_2.q = fconvert.d(float.t(0))
                                                    int32_t eax_24 = sub_49f544(ecx_32, 
                                                        *(ecx_32 + 0x84), var_c_1, var_8_2, 
                                                        var_50_2)
                                                    
                                                    if (eax_24 == 0xffffffff)
                                                        return 0x8007000e
                                                    
                                                    int32_t ecx_34 = var_8_2 << 2
                                                    int32_t var_4c_7 = ecx_34
                                                    int32_t var_50_3 = ecx_34
                                                    var_50_3.q = fconvert.d(float.t(0))
                                                    *(ecx_34 + eax_14[4]) = eax_24
                                                    *(ecx_34 + eax_14[2]) = eax_17
                                                    *(ebx_3 + edi_1[2]) = sub_49f544(arg1, 
                                                        var_10_1, var_c_1, var_8_2, var_50_3)
                                                    
                                                    if (*(ebx_3 + edi_1[2]) == 0xffffffff)
                                                        return 0x8007000e
                                                    
                                                    int32_t eax_29 = *(arg1 + 0x14)
                                                    void* ecx_39 =
                                                        *(eax_29 + (*(ebx_3 + edi_1[2]) << 2))
                                                    sub_49f12c(ecx_39, *(ecx_25 + eax_29))
                                                    *(ecx_39 + 0x60) = 0
                                                    *(ecx_39 + 0x64) = 0
                                                    var_8_2 += 1
                                                    *(ecx_39 + 0x44) = eax_24
                                                    *((*(arg1 + 0x14))[eax_17] + 0x30) =
                                                        *(ebx_3 + edi_1[2])
                                                else
                                                    *eax_16 = eax_23
                                        
                                        var_1c_1 += 1
                                        ebx_3 = &ebx_3[1]
                                    while (var_1c_1 u< j_3)
                                    
                                    int32_t edx_13 = neg.d(var_8_2)
                                    var_c_1 += 1
                                    *eax_14 = sbb.d(edx_13, edx_13, var_8_2 != 0)
                                        & ((var_8_2 & 0xfffff) | 0x10000000)
                                    eax_14[3] = var_8_2
                                    eax_14[1] = var_8_2
                            
                            j_2 = j_3
                            var_24_1 += 1
                            var_14_1 = &var_14_1[j_2]
                        while (var_24_1 u< temp0_1)
                
                i_1 += 1
            while (i_1 u< *(arg1 + 0xc))
        
        int32_t i_2 = 0
        
        if (*(arg1 + 8) u> 0)
            do
                int32_t eax_42 = *(arg1 + 0x14)
                void* edi_2 = *(eax_42 + (i_2 << 2))
                int32_t ecx_45 = *(edi_2 + 8)
                
                if (ecx_45 != 0xffffffff)
                    void* ebx_4 = *(eax_42 + (ecx_45 << 2))
                    
                    if ((*(*(*(arg1 + 0x10) + (*(ebx_4 + 4) << 2)) + 4) & 2) != 0
                            && sub_49ff77(arg1, ecx_45) == 0)
                        if (*(ebx_4 + 0x30) == 0xffffffff)
                            if (var_10_1 == 0xffffffff)
                                int32_t eax_46 = sub_49f4eb(arg1, 0xabfed8, 0x80251, 0xffffffff, 4)
                                var_10_1 = eax_46
                                
                                if (eax_46 == 0xffffffff)
                                    return 0x8007000e
                            
                            int32_t eax_47 = sub_49f5a4(*(arg1 + 0xe0), 0x10000001, 1, 1)
                            
                            if (eax_47 == 0xffffffff)
                                return 0x8007000e
                            
                            void* edi_3 = *(*(*(arg1 + 0xe0) + 0x18) + (eax_47 << 2))
                            sub_49e7bf(edi_3, *(*(arg1 + 0x18) + (*(ebx_4 + 0x48) << 2)))
                            **(edi_3 + 8) = *(edi_2 + 8)
                            void* ecx_55 = *(arg1 + 0xe0)
                            void* var_4c_11 = ecx_55
                            void* var_50_4 = ecx_55
                            var_50_4.q = fconvert.d(float.t(0))
                            int32_t eax_50 =
                                sub_49f544(ecx_55, *(ecx_55 + 0x84), var_c_1, 0, var_50_4)
                            int32_t* ecx_56 = *(edi_3 + 0x10)
                            *ecx_56 = eax_50
                            
                            if (**(edi_3 + 0x10) == 0xffffffff)
                                return 0x8007000e
                            
                            int32_t* var_4c_12 = ecx_56
                            int32_t* var_50_5 = ecx_56
                            var_50_5.q = fconvert.d(float.t(0))
                            int32_t eax_52 = sub_49f544(arg1, var_10_1, var_c_1, 0, var_50_5)
                            *(ebx_4 + 0x30) = eax_52
                            
                            if (eax_52 == 0xffffffff)
                                return 0x8007000e
                            
                            void* ebx_5 = *(*(arg1 + 0x14) + (eax_52 << 2))
                            sub_49f12c(ebx_5, ebx_4)
                            int32_t eax_54 = **(edi_3 + 0x10)
                            *(ebx_5 + 0x60) = 0
                            *(ebx_5 + 0x64) = 0
                            var_c_1 += 1
                            *(ebx_5 + 0x44) = eax_54
                        
                        *(edi_2 + 8) = *(ebx_4 + 0x30)
                
                i_2 += 1
            while (i_2 u< *(arg1 + 8))
        
        result = sub_4a4f2f(*(arg1 + 0xe0))
        
        if (result == 0 || result s>= 0)
            result = sub_49ff18(*(arg1 + 0xe0))
            
            if (result == 0 || result s>= 0)
                sub_4a39e3(*(arg1 + 0xe0))
                result = sub_4a4f2f(arg1)
                
                if (result == 0 || result s>= 0)
                    result = sub_49ff18(arg1)
                    
                    if (result == 0 || result s>= 0)
                        result = sub_4a6590(arg1)
                        
                        if (result == 0 || result s>= 0)
                            return 0

return result

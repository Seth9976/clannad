// 函数: sub_4b8cf5
// 地址: 0x4b8cf5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_40 = edi
void var_34
__builtin_memset(&var_34, 0, 0x18)
int32_t i_3 = *(arg1 + 0xc)

if (i_3 u> 0)
    int32_t* var_10_1 = *(arg1 + 0x18)
    int32_t i_2 = i_3
    int32_t i
    
    do
        int32_t* eax_1 = *var_10_1
        
        if (eax_1 != 0)
            int32_t ecx_1 = *eax_1
            
            if (ecx_1 != 0)
                int32_t ecx_2 = eax_1[1]
                int32_t var_14_1 = 0
                
                if (ecx_2 u> 0)
                    int32_t* ebx_1 = eax_1[2]
                    
                    do
                        void* ecx_4 = *(*(arg1 + 0x14) + (*ebx_1 << 2))
                        
                        if (*(ecx_4 + 4) == *(arg1 + 0x80))
                            uint32_t edx_1 = zx.d(*(ecx_4 + 0x6d))
                            
                            if (edx_1 u> 5)
                                break
                            
                            if (*(ecx_4 + 0x6c) == 3)
                                int32_t edi_2 = ecx_1 & 0xfff00000
                                int32_t __saved_ebp
                                
                                if (sub_4b4917(edi_2) != 0 || edi_2 == 0x11000000)
                                    int32_t edx_3 = *(ecx_4 + 0x10) + 1
                                    
                                    if (edx_3 u> (&__saved_ebp)[edx_1 - 0xc]
                                            && *(ecx_4 + 0x3c) != 0)
                                        (&__saved_ebp)[edx_1 - 0xc] = edx_3
                                else
                                    int32_t ecx_6 = *(ecx_4 + 0x10) + 1
                                    
                                    if (ecx_6 u> (&__saved_ebp)[edx_1 - 0xc])
                                        (&__saved_ebp)[edx_1 - 0xc] = ecx_6
                        
                        var_14_1 += 1
                        ebx_1 = &ebx_1[1]
                    while (var_14_1 u< ecx_2)
        
        var_10_1 = &var_10_1[1]
        i = i_2
        i_2 -= 1
    while (i != 1)

int32_t i_1 = 0
void* var_8_2 = &var_34
int32_t ebx_2

do
    if (*var_8_2 != 0)
        void* eax_9 = sub_49ec23(0x74)
        int32_t* edi_3
        
        if (eax_9 == 0)
            edi_3 = nullptr
        else
            edi_3 = sub_49e789(eax_9)
        
        if (edi_3 == 0)
            return 0x8007000e
        
        int32_t eax_12 = *var_8_2
        int32_t eax_15
        int32_t ecx_9
        eax_15, ecx_9 = sub_49ec6e(edi_3, (eax_12 & 0xfffff) | 0x72100000, eax_12, eax_12, 0)
        
        if (eax_15 s< 0)
            return eax_15
        
        int32_t ebx_3 = 0
        
        if (*var_8_2 u> 0)
            while (true)
                int32_t var_44_2 = ecx_9
                int32_t var_48_2 = ecx_9
                var_48_2.q = fconvert.d(float.t(0))
                int32_t eax_17 = sub_49f544(arg1, *(arg1 + 0x88), 0, ebx_3, var_48_2)
                ecx_9 = edi_3[4]
                *(ecx_9 + (ebx_3 << 2)) = eax_17
                
                if (*(edi_3[4] + (ebx_3 << 2)) == 0xffffffff)
                    sub_46cb59(edi_3, 1)
                    break
                
                ebx_3 += 1
                
                if (ebx_3 u>= *var_8_2)
                    goto label_4b8e75
            
            return 0x8007000e
        
    label_4b8e75:
        int32_t eax_21
        int32_t ecx_12
        eax_21, ecx_12 = sub_4b794d(arg1, *(arg1 + 0x18), *(arg1 + 0xc), 3, i_1, *var_8_2, edi_3[4])
        
        if (eax_21 s< 0)
            sub_46cb59(edi_3, 1)
            return eax_21
        
        int32_t j = 0
        
        if (*var_8_2 u> 0)
            do
                int32_t var_44_4 = ecx_12
                int32_t var_48_4 = ecx_12
                var_48_4.q = fconvert.d(float.t(0))
                int32_t eax_23 = sub_49f544(arg1, *(arg1 + 0x80), i_1, j, var_48_4)
                
                if (eax_23 == 0xffffffff)
                    sub_46cb59(edi_3, 1)
                    return 0x8007000e
                
                void* ecx_15 = *(*(arg1 + 0x14) + (eax_23 << 2))
                *(ecx_15 + 0x3c) = 0
                *(ecx_15 + 0x6c) = i_1 << 8 | 3
                ecx_12 = edi_3[2]
                *(ecx_12 + (j << 2)) = eax_23
                j += 1
            while (j u< *var_8_2)
        
        ebx_2 = sub_49f431(arg1, edi_3)
        int32_t var_14_2 = ebx_2
        
        if (ebx_2 s< 0)
            return ebx_2
    
    i_1 += 1
    var_8_2 += 4
while (i_1 u< 6)

int32_t var_8_3 = 0

if (i_3 u> 0)
    do
        int32_t* edi_4 = *(*(arg1 + 0x18) + (var_8_3 << 2))
        int32_t eax_27 = *edi_4
        int32_t edx_8 = eax_27 & 0xfff00000
        int32_t ecx_19 = eax_27 & 0xfffff
        
        if (sub_4b4917(edx_8) != 0 || edx_8 == 0x11000000)
            int32_t* eax_29 = edi_4[2]
            int32_t eax_30
            
            if (edx_8 != 0x11000000)
                eax_30 = eax_29[ecx_19]
            else
                eax_30 = *eax_29
            
            void* eax_32 = *(*(arg1 + 0x14) + (eax_30 << 2))
            
            if ((*(eax_32 + 0x3e) & 0x1f) != 0 && *(eax_32 + 4) == *(arg1 + 0x88))
                void* eax_34 = sub_49ec23(0x74)
                int32_t* ebx_4
                
                if (eax_34 == 0)
                    ebx_4 = nullptr
                else
                    ebx_4 = sub_49e789(eax_34)
                
                if (ebx_4 == 0)
                    return 0x8007000e
                
                int32_t eax_39 =
                    sub_49ec6e(ebx_4, (ecx_19 & 0xfffff) | 0x10000000, ecx_19, ecx_19, 0)
                int32_t var_14_3 = eax_39
                int32_t eax_51
                
                if (eax_39 s>= 0)
                    int32_t eax_40 = *edi_4
                    int32_t ecx_27 = eax_40 & 0xfffff
                    
                    if ((eax_40 & 0xfff00000) == 0x11000000)
                        ecx_27 = 0
                    
                    int32_t var_c_1 = 0
                    
                    if (ecx_19 u> 0)
                        int32_t var_14_4 = ecx_27 << 2
                        
                        do
                            int32_t eax_45 = *(var_14_4 + edi_4[2])
                            void* ecx_30 = *(*(arg1 + 0x14) + (eax_45 << 2))
                            int32_t ecx_31 = ebx_4[2]
                            int32_t var_44_7 = ecx_31
                            int32_t var_48_6 = ecx_31
                            *(ecx_31 + (var_c_1 << 2)) = eax_45
                            var_48_6.q = fconvert.d(float.t(0))
                            int32_t edx_10 = var_c_1
                            var_c_1 += 1
                            *(ebx_4[4] + (edx_10 << 2)) =
                                sub_49f544(arg1, *(arg1 + 0x88), 0, *(ecx_30 + 0x10), var_48_6)
                            int32_t edx_11 = var_14_4
                            var_14_4 += 4
                            *(edx_11 + edi_4[2]) = *(ebx_4[4] + (edx_10 << 2))
                        while (var_c_1 u< ecx_19)
                    
                    eax_51 = sub_49f431(arg1, ebx_4)
                    var_14_3 = eax_51
                
                if (eax_39 s< 0 || eax_51 s< 0)
                    return var_14_3
        
        var_8_3 += 1
    while (var_8_3 u< i_3)

int32_t edi_5 = 0

if (i_3 u> 0)
    do
        ebx_2 = sub_49f69d(arg1, *(*(arg1 + 0x18) + (edi_5 << 2)))
        
        if (ebx_2 s< 0)
            return ebx_2
        
        **(*(arg1 + 0x18) + (edi_5 << 2)) = 0
        edi_5 += 1
    while (edi_5 u< i_3)

int32_t eax_57 = *(arg1 + 0xc)
int32_t var_18_1 = 0

if (eax_57 u<= 0)
    return sub_49ff18(arg1)

while (true)
    int32_t* edi_6 = *(*(arg1 + 0x18) + (var_18_1 << 2))
    int32_t eax_59 = *edi_6
    
    if (eax_59 != 0)
        int32_t ecx_39 = eax_59 & 0xfff00000
        int32_t eax_60 = eax_59 & 0xfffff
        
        if (sub_4b4917(ecx_39) != 0 || ecx_39 == 0x11000000)
            int32_t ecx_41 = neg.d(ecx_39 - 0x11000000)
            int32_t eax_63 = (sbb.d(ecx_41, ecx_41, ecx_39 != 0x11000000) & eax_60) << 2
            void* eax_65 = *(*(arg1 + 0x14) + (*(eax_63 + edi_6[2]) << 2))
            int16_t ecx_48 = (*(*(*(arg1 + 0x10) + (*(eax_65 + 4) << 2)) + 4)).w
            
            if ((ecx_48:1.b & 2) != 0)
            label_4b9150:
                void* eax_66 = sub_49ec23(0x74)
                int32_t* var_8_4
                
                if (eax_66 == 0)
                    var_8_4 = nullptr
                else
                    var_8_4 = sub_49e789(eax_66)
                
                if (var_8_4 == 0)
                    return 0x8007000e
                
                ebx_2 = sub_49ec6e(var_8_4, (eax_60 & 0xfffff) | 0x10000000, eax_60, eax_60, 0)
                
                if (ebx_2 s< 0)
                    return ebx_2
                
                ebx_2 = sub_49e7bf(var_8_4, edi_6)
                
                if (ebx_2 s< 0)
                    return ebx_2
                
                int32_t var_c_2 = 0
                
                if (eax_60 u> 0)
                    int32_t* eax_73 = edi_6[2]
                    int32_t ebx_5 = eax_63
                    
                    do
                        int32_t ecx_53 = var_8_4[2]
                        int32_t var_44_12 = ecx_53
                        int32_t var_48_8 = ecx_53
                        var_48_8.q = fconvert.d(float.t(0))
                        *(ecx_53 + (var_c_2 << 2)) = *(eax_73 + ebx_5)
                        *(var_8_4[4] + (var_c_2 << 2)) =
                            sub_49f544(arg1, *(arg1 + 0x88), 0, var_c_2, var_48_8)
                        *(ebx_5 + edi_6[2]) = *(var_8_4[4] + (var_c_2 << 2))
                        eax_73 = edi_6[2]
                        
                        if (*(eax_73 + ebx_5) == 0xffffffff)
                            return 0x8007000e
                        
                        var_c_2 += 1
                        ebx_5 += 4
                    while (var_c_2 u< eax_60)
                
                sub_49f431(arg1, var_8_4)
            else if ((ecx_48.b & 0x10) != 0 && *(eax_65 + 0x6c) == 1)
                goto label_4b9150
        
        sub_49f69d(arg1, edi_6)
        *edi_6 = 0
    
    var_18_1 += 1
    
    if (var_18_1 u>= eax_57)
        return sub_49ff18(arg1)

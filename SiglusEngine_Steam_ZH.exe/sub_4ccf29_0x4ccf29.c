// 函数: sub_4ccf29
// 地址: 0x4ccf29
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_58 = 0xffffffff
int32_t var_54 = 0xffffffff
int32_t var_50 = 0xffffffff
int32_t var_48 = 0xffffffff
int32_t var_44 = 0xffffffff
int32_t var_40 = 0xffffffff
int32_t eax_1 = **(arg1 + 0x100)
int32_t edi
int32_t var_224 = edi
int32_t ecx_1 = eax_1 & 0xfffff
int32_t var_5c = 0
int32_t var_4c = 0

if ((eax_1 & 0xfff00000) != 0x20900000)
    return 1

void* eax_4 = sub_49ec23(0x74)
int32_t* var_24_1

if (eax_4 == 0)
    var_24_1 = nullptr
else
    var_24_1 = sub_49e789(eax_4)

int32_t* ebx_1 = var_24_1

if (ebx_1 == 0)
    return 0x8007000e

int32_t eax_6 = sub_49eecd(ebx_1, *(arg1 + 0x100))

if (eax_6 s< 0)
    sub_46cb59(ebx_1, 1)
    return eax_6

int32_t eax_7 = 0
ebx_1[3] = 1
ebx_1[1] = 2
*ebx_1 = 0x20900001
int32_t var_38_1 = 0

if (ecx_1 u<= 0)
    return 0

int32_t var_2c_1 = ecx_1 << 2

while (true)
    int32_t eax_8 = eax_7 << 2
    *ebx_1[4] = *(eax_8 + *(*(arg1 + 0x100) + 0x10))
    *ebx_1[2] = *(eax_8 + *(*(arg1 + 0x100) + 8))
    int32_t eax_12 = *(var_2c_1 + *(*(arg1 + 0x100) + 8))
    void* ecx_12 = ebx_1[2]
    int32_t var_10 = 0
    *(ecx_12 + 4) = eax_12
    int32_t var_fc
    __builtin_memset(&var_fc, 0xffffffff, 0xa0)
    void var_1dc
    int32_t eax_13 = sub_4c73cc(arg1, ebx_1, 0xaccb18, &var_1dc, &var_10, &var_fc, &var_5c, 1, 1)
    int32_t i_2
    int32_t var_dc
    
    if (eax_13 == 0 && i_2 == var_dc)
        var_10 &= eax_13
        void var_21c
        int32_t var_19c
        sub_4c73cc(arg1, ebx_1, 0xaccbd8, &var_21c, &var_10, &var_19c, &var_4c, 1, 1)
        int32_t edx_4 = var_fc
        int32_t var_14_1
        int32_t var_18c
        
        var_14_1 = var_19c != edx_4 ? edx_4 : var_18c
        
        if (var_14_1 != 0xffffffff)
            *ebx_1[4]
            
            if (*((*(arg1 + 0x14))[*ebx_1[4]] + 0x14) != 0xffffffff)
                int32_t* ecx_17 = *(arg1 + 0x14)
                int32_t ecx_19 = *(ecx_17[*(ecx_17[*ebx_1[4]] + 0x14)] + 0x48)
                
                if (ecx_19 != 0xffffffff)
                    int32_t* eax_21 = *(*(arg1 + 0x18) + (ecx_19 << 2))
                    
                    if (*eax_21 == 0x11100001)
                        int32_t eax_22 = *(arg1 + 0x14)
                        void* ecx_20 = *(eax_22 + (edx_4 << 2))
                        void* ecx_21 = *(eax_22 + (i_2 << 2))
                        int32_t i = i_2
                        
                        while (true)
                            int32_t eax_26 = *(ecx_21 + 0x48)
                            
                            if (eax_26 == 0xffffffff)
                                break
                            
                            if (*(ecx_21 + 8) != 0xffffffff)
                                break
                            
                            int32_t* eax_23 = *(*(arg1 + 0x18) + (eax_26 << 2))
                            int32_t edi_4 = *eax_23
                            
                            if ((edi_4 & 0xfff00000) != 0x10000000)
                                break
                            
                            int32_t var_8_1 = 0
                            int32_t temp0_1 = edi_4 & 0xfffff
                            
                            if (temp0_1 u<= 0)
                                break
                            
                            int32_t* ebx_4 = eax_23[4]
                            
                            while (*ebx_4 != i)
                                var_8_1 += 1
                                ebx_4 = &ebx_4[1]
                                
                                if (var_8_1 u>= temp0_1)
                                    goto label_4cd18e
                            
                            i = *(eax_23[2] + (var_8_1 << 2))
                            ecx_21 = *(*(arg1 + 0x14) + (i << 2))
                        
                    label_4cd18e:
                        int32_t eax_27 = *(arg1 + 0x10)
                        
                        if ((*(*(eax_27 + (*(ecx_20 + 4) << 2)) + 4) & 0x100) != 0
                                && (*(*(eax_27 + (*(ecx_21 + 4) << 2)) + 4) & 0x100) != 0)
                            long double x87_r7_1 = fconvert.t(1.0)
                            long double x87_r6_1 = fconvert.t(*(ecx_20 + 0x20))
                            x87_r6_1 - x87_r7_1
                            void* eax_28
                            eax_28.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
                            bool p_1 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_1))
                                long double x87_r7_2 = fconvert.t(0.0)
                                long double x87_r6_2 = fconvert.t(*(ecx_21 + 0x20))
                                x87_r6_2 - x87_r7_2
                                eax_28.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                                    | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
                                bool p_2 = unimplemented  {test ah, 0x44}
                                
                                if (not(p_2))
                                    void* edx_6 = *(*(arg1 + 0x14) + (var_14_1 << 2))
                                    int32_t ecx_24 = *(edx_6 + 0x54)
                                    int32_t ebx_7 = 0xffffffff
                                    bool cond:4_1 = ecx_24 u> *(edx_6 + 0x58)
                                    int32_t var_30_1 = 0xffffffff
                                    void* var_1c_2 = edx_6
                                    var_10 = ecx_24
                                    
                                    if (not(cond:4_1))
                                        bool cond:6_1
                                        
                                        do
                                            void* eax_31 = *(*(arg1 + 0x18) + (ecx_24 << 2))
                                            void* var_28_1 = eax_31
                                            
                                            if (*(eax_31 + 0xc) != 0)
                                                int32_t i_1 = 0
                                                
                                                if (*(eax_31 + 4) u> 0)
                                                    do
                                                        int32_t ecx_25 = *(arg1 + 0x14)
                                                        void* edi_8 = *(ecx_25
                                                            + (*(*(eax_31 + 8) + (i_1 << 2)) << 2))
                                                        int32_t edx_9 = *(edi_8 + 8)
                                                        int32_t var_20_1 = 0xffffffff
                                                        
                                                        if (edx_9 == 0xffffffff)
                                                        label_4cd29f:
                                                            ebx_7 = var_30_1
                                                            
                                                            if (var_20_1 == var_14_1)
                                                                if (ebx_7 == 0xffffffff)
                                                                    int32_t eax_38
                                                                    int32_t ecx_31
                                                                    eax_38, ecx_31 = sub_49f4eb(arg1, 
                                                                        0xacd098, 0x15, ebx_7, 4)
                                                                    int32_t var_22c_2 = ecx_31
                                                                    int32_t var_230_2 = ecx_31
                                                                    var_230_2.q = fconvert.d(float.t(0))
                                                                    ebx_7 = sub_49f544(arg1, eax_38, 0, 0, 
                                                                        var_230_2)
                                                                    var_30_1 = ebx_7
                                                                    *(edi_8 + 8) = ebx_7
                                                                
                                                                *(edi_8 + 8) = ebx_7
                                                                int32_t edi_9 = *(edi_8 + 0x38)
                                                                
                                                                if (edi_9 != 0xffffffff)
                                                                    *(*(*(arg1 + 0x14) + (edi_9 << 2))
                                                                        + 8) = ebx_7
                                                            
                                                            eax_31 = var_28_1
                                                        else
                                                            int32_t ecx_27 =
                                                                *(*(ecx_25 + (edx_9 << 2)) + 0x48)
                                                            
                                                            if (ecx_27 != 0xffffffff)
                                                                int32_t* ecx_28 =
                                                                    *(*(arg1 + 0x18) + (ecx_27 << 2))
                                                                int32_t eax_33 = *ecx_28
                                                                
                                                                if ((eax_33 & 0xfff00000) != 0x10000000)
                                                                    var_20_1 = edx_9
                                                                else
                                                                    int32_t var_8_2 = 0
                                                                    int32_t temp1_1 = eax_33 & 0xfffff
                                                                    
                                                                    if (temp1_1 u> 0)
                                                                        int32_t* ebx_10 = ecx_28[4]
                                                                        
                                                                        do
                                                                            if (*ebx_10 == edx_9)
                                                                                var_20_1 = *(ecx_28[2] + (var_8_2 << 2))
                                                                                break
                                                                            
                                                                            var_8_2 += 1
                                                                            ebx_10 = &ebx_10[1]
                                                                        while (var_8_2 u< temp1_1)
                                                                
                                                                goto label_4cd29f
                                                        
                                                        i_1 += 1
                                                    while (i_1 u< *(eax_31 + 4))
                                                    
                                                    edx_6 = var_1c_2
                                                    ecx_24 = var_10
                                            
                                            ecx_24 += 1
                                            cond:6_1 = ecx_24 u<= *(edx_6 + 0x58)
                                            var_10 = ecx_24
                                        while (cond:6_1)
                                        
                                        if (ebx_7 != 0xffffffff)
                                            void* eax_42 = sub_49ec23(0x74)
                                            int32_t* edi_10
                                            
                                            if (eax_42 == 0)
                                                edi_10 = nullptr
                                            else
                                                edi_10 = sub_49e789(eax_42)
                                            
                                            if (edi_10 == 0)
                                                return 0x8007000e
                                            
                                            int32_t ebx_11 = sub_49ec6e(edi_10, 0x74100001, 3, 1, 0)
                                            
                                            if (ebx_11 s< 0)
                                                sub_46cb59(edi_10, 1)
                                                return ebx_11
                                            
                                            ebx_11 = sub_49e7bf(edi_10, eax_21)
                                            
                                            if (ebx_11 s< 0)
                                                sub_46cb59(edi_10, 1)
                                                return ebx_11
                                            
                                            *edi_10[4] = *eax_21[4]
                                            *edi_10[2] = *eax_21[2]
                                            int32_t ecx_41 = *(arg1 + 0x14)
                                            void* ebx_12 = *(ecx_41 + (*eax_21[2] << 2))
                                            int32_t var_22c_4 = ecx_41
                                            int32_t var_230_3 = ecx_41
                                            var_230_3.q = fconvert.d(float.t(0))
                                            int32_t eax_49 = sub_49f544(arg1, *(ebx_12 + 4), 
                                                *(ebx_12 + 0xc), 2, var_230_3)
                                            void* ecx_43 = edi_10[2]
                                            void* var_22c_5 = ecx_43
                                            void* var_230_4 = ecx_43
                                            var_230_4.q = fconvert.d(float.t(1))
                                            *(ecx_43 + 4) = eax_49
                                            *(edi_10[2] + 8) = sub_49f544(arg1, *(ebx_12 + 4), 
                                                *(ebx_12 + 0xc), 2, var_230_4)
                                            ebx_11 = sub_49eecd(eax_21, edi_10)
                                            sub_46cb59(edi_10, 1)
                                            
                                            if (ebx_11 s< 0)
                                                return ebx_11
    
    var_2c_1 += 4
    eax_7 = var_38_1 + 1
    var_38_1 = eax_7
    
    if (eax_7 u>= ecx_1)
        return 0
    
    ebx_1 = var_24_1

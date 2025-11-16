// 函数: sub_4ba6d9
// 地址: 0x4ba6d9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_17c = edi
int32_t ebx = *(arg1 + 8)
int32_t var_170[0x20]
__builtin_memset(&var_170, 0, 0x80)
void var_f0
__builtin_memset(&var_f0, 0, 0x80)
int32_t var_70[0x8]
__builtin_memset(&var_70, 0, 0x20)
int32_t eax = sub_49f4eb(arg1, 0xabfed8, 0x311, 8, 4)
int32_t var_14 = 0
char* var_180_1

if (ebx u<= 0)
label_4ba78a:
    int32_t ecx_1 = *(arg1 + 0x224)
    int32_t eax_5 = *(arg1 + 0x220)
    int32_t var_10_1 = 0
    
    if (eax_5 + ecx_1 u<= 0)
    label_4bab7e:
        int32_t ecx_21 = 0
        
        if (ebx u> 0)
            do
                void* eax_44 = *(*(arg1 + 0x14) + (ecx_21 << 2))
                
                if ((*(*(*(arg1 + 0x10) + (*(eax_44 + 4) << 2)) + 5) & 1) != 0)
                    *(eax_44 + 4) = *(arg1 + 0x74)
                
                ecx_21 += 1
            while (ecx_21 u< ebx)
        
        return 0
    
    while (true)
        int32_t* ebx_2
        
        if (var_10_1 u>= eax_5)
            ebx_2 = *(*(arg1 + 0x230) + ((var_10_1 - eax_5) << 2))
        else
            ebx_2 = *(*(arg1 + 0x22c) + (var_10_1 << 2))
        
        void* var_18_1 = nullptr
        int32_t* var_24_1 = ebx_2
        
        if (ebx_2 != 0 && ebx_2[3] != 0)
            int32_t edi_4 = *ebx_2[4]
            
            if (edi_4 != 0xffffffff)
                int32_t edx_10 = *ebx_2
                
                if ((edx_10 & 0xfff00000) != 0)
                    if (*(*(*(arg1 + 0x14) + (edi_4 << 2)) + 0x10) != 3 && ebx_2[3] != 4
                            && var_10_1 u>= eax_5)
                        int32_t edx_13 = 1
                        
                        if (var_10_1 - eax_5 + 1 u< ecx_1)
                            int32_t i_6 = var_10_1 - eax_5 + 1
                            int32_t i = var_10_1 - eax_5 + 1
                            
                            do
                                void* edi_10 = *(*(arg1 + 0x230) + (i_6 << 2))
                                
                                if (edi_10 != 0 && (*(edi_10 + 2) & 0xfff0) != 0)
                                    break
                                
                                edx_13 += 1
                                i += 1
                                i_6 = i
                            while (i u< *(arg1 + 0x224))
                            
                            ebx_2 = var_24_1
                        
                        int32_t edx_15 = edx_13 - eax_5 + var_10_1
                        
                        if (edx_15 u< *(arg1 + 0x224))
                            void* eax_8 = *(*(arg1 + 0x230) + (edx_15 << 2))
                            var_18_1 = eax_8
                            
                            if (*(eax_8 + 0xc) != 1
                                    || *(*(*(arg1 + 0x14) + (**(eax_8 + 0x10) << 2)) + 0x10) != 3)
                                var_18_1 = nullptr
                    
                    int32_t eax_13 = edx_10 & 0xfffff
                    uint32_t temp0_1 = divu.dp.d(0:(ebx_2[1]), eax_13)
                    int32_t var_28_2 = 0
                    
                    if (temp0_1 u> 0)
                        int32_t* var_14_1 = nullptr
                        
                        while (true)
                            int32_t var_40 = 0
                            void var_3c
                            void* edi_11 = &var_3c
                            *edi_11 = 0
                            void* edi_12 = edi_11 + 4
                            *edi_12 = 0
                            *(edi_12 + 4) = 0
                            int32_t* edx_18 = ebx_2[2] + var_14_1
                            int32_t eax_17 = *edx_18
                            int32_t ecx_6 = *(arg1 + 0x14)
                            ebx_2 = var_24_1
                            
                            if ((*(*(*(arg1 + 0x10) + (*(*(ecx_6 + (eax_17 << 2)) + 4) << 2)) + 5)
                                    & 1) != 0 && eax_17 u< ebx)
                                int32_t eax_18 = 0
                                int32_t var_c_1 = 0
                                int32_t var_50[0x3]
                                
                                if (eax_13 u> 0)
                                    int32_t edi_18 = *ebx_2 & 0xfff00000
                                    
                                    do
                                        if (edi_18 != 0x50000000)
                                            eax_18 = *(*(ecx_6 + (*(ebx_2[4] + (eax_18 << 2)) << 2))
                                                + 0x10)
                                        
                                        var_50[eax_18] = fconvert.s(fconvert.t(
                                            *(*(ecx_6 + (*edx_18 << 2)) + 0x20)))
                                        (&var_40)[eax_18] = 1
                                        eax_18 = var_c_1 + 1
                                        edx_18 = &edx_18[1]
                                        var_c_1 = eax_18
                                    while (eax_18 u< eax_13)
                                
                                void* edi_25 = var_18_1
                                
                                if (edi_25 != 0)
                                    int32_t i_7 = *(edi_25 + 4)
                                    
                                    if (i_7 u> 0)
                                        int32_t* edi_22 = *(edi_25 + 8)
                                        int32_t* var_8_2 = edi_22
                                        int32_t i_5 = i_7
                                        int32_t i_1
                                        
                                        do
                                            void* eax_24 = *(ecx_6 + (*edi_22 << 2))
                                            
                                            if ((*(*(*(arg1 + 0x10) + (*(eax_24 + 4) << 2)) + 5)
                                                    & 1) != 0 && *var_8_2 u< ebx)
                                                int32_t var_34_1 = 1
                                                float var_44 =
                                                    fconvert.s(fconvert.t(*(eax_24 + 0x20)))
                                            
                                            edi_22 = &var_8_2[1]
                                            i_1 = i_5
                                            i_5 -= 1
                                            var_8_2 = edi_22
                                        while (i_1 != 1)
                                        edi_25 = var_18_1
                                
                                int32_t j = 0
                                int32_t var_c_2 = 0
                                
                                for (int32_t i_2 = 0; i_2 u< 0x80; i_2 += 0x10)
                                    if (var_70[var_c_2] == 0)
                                        int32_t var_8_3 = 1
                                        
                                        do
                                            if (*(&var_40 + j) != 0)
                                                long double x87_r7_3 =
                                                    fconvert.t(*(&var_170 + i_2 + j))
                                                long double x87_r6_1 = fconvert.t(*(&var_50 + j))
                                                x87_r6_1 - x87_r7_3
                                                int32_t eax_26
                                                eax_26.w = (x87_r6_1 < x87_r7_3 ? 1 : 0) << 8
                                                    | (is_unordered.t(x87_r6_1, x87_r7_3) ? 1 : 0)
                                                    << 0xa | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe
                                                bool p_1 = unimplemented  {test ah, 0x44}
                                                
                                                if (p_1 && *(&var_f0 + i_2 + j) != 0)
                                                    var_8_3 = 0
                                            
                                            j += 4
                                        while (j u< 0x10)
                                        
                                        j = 0
                                        
                                        if (var_8_3 != 0)
                                            break
                                    
                                    var_c_2 += 1
                                
                                if (var_c_2 == 8)
                                    var_180_1 = "
                                        program too complex: exceeded available constant registers."
                                    break
                                
                                int32_t i_3 = 0
                                int32_t var_8_4 = 0
                                
                                do
                                    if ((&var_40)[i_3] != 0)
                                        int32_t eax_30 = (i_3 + (var_c_2 << 2)) << 2
                                        int32_t __saved_ebp
                                        long double x87_r7_4 =
                                            fconvert.t((&__saved_ebp)[i_3 - 0x13])
                                        *(&var_f0 + eax_30) = 1
                                        *(&var_170 + eax_30) = fconvert.s(x87_r7_4)
                                        long double x87_r7_5 =
                                            fconvert.t((&__saved_ebp)[i_3 - 0x13])
                                        long double temp4_1 = fconvert.t(1.0)
                                        x87_r7_5 - temp4_1
                                        eax_30.w = (x87_r7_5 < temp4_1 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r7_5, temp4_1) ? 1 : 0) << 0xa
                                            | (x87_r7_5 == temp4_1 ? 1 : 0) << 0xe
                                        
                                        if ((eax_30:1.b & 0x41) == 0)
                                            var_8_4 = 1
                                        else
                                            long double x87_r7_6 =
                                                fconvert.t((&__saved_ebp)[i_3 - 0x13])
                                            long double temp5_1 = fconvert.t(-1f)
                                            x87_r7_6 - temp5_1
                                            eax_30.w = (x87_r7_6 < temp5_1 ? 1 : 0) << 8
                                                | (is_unordered.t(x87_r7_6, temp5_1) ? 1 : 0)
                                                << 0xa | (x87_r7_6 == temp5_1 ? 1 : 0) << 0xe
                                            bool p_2 = unimplemented  {test ah, 0x5}
                                            
                                            if (not(p_2))
                                                var_8_4 = 1
                                    
                                    i_3 += 1
                                while (i_3 u< 4)
                                
                                if (var_8_4 != 0)
                                    sub_4a4195(arg1, ebx_2[0xf], 0x1260, 
                                        "literal values outside range -1 to 1 are clamped on all ps_1_x "
                                    "shading models")
                                
                                int32_t var_8_5 = 0
                                
                                if (eax_13 u> 0)
                                    int32_t* edi_26 = var_14_1
                                    
                                    do
                                        int32_t eax_31 = *(arg1 + 0x14)
                                        void* ecx_10 = *(eax_31 + (*(edi_26 + ebx_2[2]) << 2))
                                        void* var_180_2 = ecx_10
                                        void* var_184_1 = ecx_10
                                        var_184_1.q = fconvert.d(fconvert.t(*(ecx_10 + 0x20)))
                                        int32_t var_188_2
                                        
                                        if ((*ebx_2 & 0xfff00000) != 0x50000000)
                                            var_188_2 = *(
                                                *(eax_31 + (*(ebx_2[4] + (var_8_5 << 2)) << 2))
                                                + 0x10)
                                        else
                                            var_188_2 = var_8_5
                                        
                                        int32_t eax_33 =
                                            sub_49f544(arg1, eax, var_c_2, var_188_2, var_184_1)
                                        *(*(*(arg1 + 0x14) + (eax_33 << 2)) + 0x3c) = 0
                                        var_8_5 += 1
                                        *(edi_26 + ebx_2[2]) = eax_33
                                        edi_26 = &edi_26[1]
                                    while (var_8_5 u< eax_13)
                                    
                                    edi_25 = var_18_1
                                
                                if (edi_25 != 0)
                                    int32_t i_4 = 0
                                    
                                    if (*(edi_25 + 4) u> 0)
                                        do
                                            int32_t ecx_18 = *(*(edi_25 + 8) + (i_4 << 2))
                                            void* eax_37 = *(*(arg1 + 0x14) + (ecx_18 << 2))
                                            
                                            if ((*(*(*(arg1 + 0x10) + (*(eax_37 + 4) << 2)) + 5)
                                                    & 1) == 0 || ecx_18 u>= ebx)
                                                edi_25 = var_18_1
                                            else
                                                int32_t var_180_3 = ecx_18
                                                int32_t var_184_2 = ecx_18
                                                var_184_2.q =
                                                    fconvert.d(fconvert.t(*(eax_37 + 0x20)))
                                                edi_25 = var_18_1
                                                *(*(edi_25 + 8) + (i_4 << 2)) =
                                                    sub_49f544(arg1, eax, var_c_2, 3, var_184_2)
                                            
                                            i_4 += 1
                                        while (i_4 u< *(edi_25 + 4))
                            
                            var_28_2 += 1
                            var_14_1 = &var_14_1[eax_13]
                            
                            if (var_28_2 u>= temp0_1)
                                goto label_4bab63
                        
                        break
        
    label_4bab63:
        ecx_1 = *(arg1 + 0x224)
        eax_5 = *(arg1 + 0x220)
        var_10_1 += 1
        
        if (var_10_1 u>= eax_5 + ecx_1)
            goto label_4bab7e
else
    int32_t ebx_1 = *(arg1 + 0x10)
    int32_t* edi_1 = *(arg1 + 0x14)
    
    while (true)
        void* eax_1 = *edi_1
        int16_t edx_3 = (*(*(ebx_1 + (*(eax_1 + 4) << 2)) + 4)).w
        
        if ((edx_3:1.b & 2) != 0 && (edx_3 & 0x180) == 0)
            int32_t edx_4 = *(eax_1 + 0xc)
            
            if (edx_4 u> *(arg1 + 0x38))
                var_180_1 = "exceeded maximum constant registers"
                break
            
            __builtin_memcpy(&var_f0 + (edx_4 << 4), 
                "\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00", 0x10)
            var_70[edx_4] = 1
        
        var_14 += 1
        edi_1 = &edi_1[1]
        
        if (var_14 u>= ebx)
            goto label_4ba78a

sub_4a4100(arg1, nullptr, 0x119b, var_180_1)
return 0x80004005

// 函数: sub_4d55c7
// 地址: 0x4d55c7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t eax = arg1[0x56]
int32_t eax_1 = neg.d(eax)
int32_t edi
int32_t var_190 = edi
void var_158
sub_4c6bfc(&var_158, (sbb.d(eax_1, eax_1, eax != 0) & 0x40cf503) + 0x42415443)
int32_t var_178
__builtin_memset(&var_178, 0, 0x1c)
int32_t var_170 = arg1[0x32]
int32_t ecx_2 = arg1[0x33]
var_178 = 0x1c
int32_t var_164 = ecx_2
char* var_134 = nullptr
int32_t var_114 = 0
char* var_148 = nullptr
char* var_140 = nullptr
char* var_144 = nullptr
int32_t* var_130 = nullptr
void* result = sub_4c6c51(&var_158, &var_178, 0x1c, 1, nullptr)

if (result s>= 0)
    int32_t edi_1 = 0
    int32_t ecx_4 = 0
    int32_t var_11c_1 = 0
    int32_t var_10c_1 = 0
    
    if (arg1[2] u> 0)
        int32_t* var_118_1 = arg1[5]
        int32_t i_6 = arg1[2]
        int32_t i
        
        do
            void* eax_9 = *var_118_1
            int32_t esi_3 = *(*(arg1[4] + (*(eax_9 + 4) << 2)) + 4)
            int24_t var_110_1 = esi_3.3
            
            if ((esi_3 & 0x200) != 0 && (var_110_1:1.b & 1) == 0)
                int32_t eax_10 = *(eax_9 + 0xc)
                
                if ((var_110_1.b & 0x80) == 0)
                    if ((var_110_1:1.b & 0x20) == 0)
                        if ((var_110_1:2.b & 4) == 0)
                            if (ecx_4 u<= eax_10)
                                ecx_4 = eax_10 + 1
                        else if (var_10c_1 u<= eax_10)
                            var_10c_1 = eax_10 + 1
                    else if (var_11c_1 u<= eax_10)
                        var_11c_1 = eax_10 + 1
                else if (edi_1 u<= eax_10)
                    edi_1 = eax_10 + 1
            
            var_118_1 = &var_118_1[1]
            i = i_6
            i_6 -= 1
        while (i != 1)
    
    int32_t esi_6 = var_10c_1 + edi_1 + ecx_4 + var_11c_1
    int32_t edi_3 = esi_6 << 2
    int32_t eax_17 = sub_745f3f(edi_3)
    var_114 = eax_17
    
    if (eax_17 == 0)
    label_4d60f4:
        result = 0x8007000e
    else
        int32_t* eax_18 = sub_745f3f(edi_3)
        var_130 = eax_18
        
        if (eax_18 == 0)
        label_4d60f4_1:
            result = 0x8007000e
        else
            int32_t i_1 = 0
            __builtin_memset(__builtin_memset(var_114, 0, edi_3 u>> 2 << 2), 0, edi_3 & 3)
            
            if (arg1[2] u> 0)
                do
                    void* eax_20 = *(arg1[5] + (i_1 << 2))
                    
                    if (*(eax_20 + 0x60) != 0 && *(eax_20 + 8) == 0xffffffff)
                        int32_t ecx_13 = *(*(arg1[4] + (*(eax_20 + 4) << 2)) + 4)
                        
                        if ((ecx_13:1.b & 2) != 0 && (ecx_13:1.b & 1) == 0)
                            int32_t edx_5
                            
                            if (ecx_13.b s< 0)
                                edx_5 = ecx_4 + var_11c_1
                            else if ((ecx_13:1.b & 0x20) == 0)
                                edx_5 = edi_1 + ecx_4 + var_11c_1
                                
                                if ((ecx_13 & 0x40000) == 0)
                                    edx_5 = var_11c_1
                            else
                                edx_5 = 0
                            
                            int32_t ecx_15 = *(eax_20 + 0xc) + edx_5
                            int32_t edx_7 = ecx_15 - (*(eax_20 + 0x70) u>> 2)
                            int32_t ecx_16 = ecx_15 + 1
                            
                            while (ecx_16 u> edx_7)
                                ecx_16 -= 1
                                void** edi_10 = var_114 + (ecx_16 << 2)
                                
                                if (*edi_10 != 0)
                                    break
                                
                                *edi_10 = eax_20
                    
                    i_1 += 1
                while (i_1 u< arg1[2])
            
            int32_t* edx_8 = nullptr
            int32_t ecx_17 = 0
            int32_t* var_120_1 = nullptr
            int32_t* ebx_1
            int32_t edi_11
            
            if (esi_6 u<= 0)
                edi_11 = var_114
            else
                do
                    edi_11 = var_114
                    int32_t eax_22 = *(edi_11 + (ecx_17 << 2))
                    
                    if (eax_22 != 0)
                        ebx_1 = var_120_1
                        var_120_1 += 1
                        *(edi_11 + (ebx_1 << 2)) = eax_22
                    
                    ecx_17 += 1
                while (ecx_17 u< esi_6)
            
            void* eax_23 = nullptr
            int32_t var_124_1 = 0
            
            if (var_120_1 u> 0)
                do
                    if (eax_23 == 0)
                    label_4d58c9:
                        eax_23 = *(edi_11 + (edx_8 << 2))
                        
                        if (eax_23 != 0)
                            void* ecx_23 = *(eax_23 + 0x60)
                            
                            if (*(ecx_23 + 4) == 6)
                                void* esi_12 = *(ecx_23 + 0x14)
                                
                                if (esi_12 != 0 && *(esi_12 + 4) == 3)
                                    void* ecx_24 = *(ecx_23 + 0x18)
                                    
                                    if (ecx_24 != 0 && *(ecx_24 + 4) == 0xb && *(esi_12 + 0x10) == 9
                                            && *(esi_12 + 0x18) != 0)
                                        int32_t esi_13 = var_124_1
                                        var_124_1 += 1
                                        var_130[esi_13] = edx_8
                    else
                        void* ecx_18 = *(edi_11 + (edx_8 << 2))
                        
                        if (*(ecx_18 + 4) != *(eax_23 + 4) || *(ecx_18 + 0x60) != *(eax_23 + 0x60))
                            goto label_4d58c9
                        
                        void* ecx_20 = *(edi_11 + (edx_8 << 2))
                        
                        if (*(ecx_20 + 0xc) - (*(ecx_20 + 0x70) u>> 2)
                                != *(eax_23 + 0xc) - (*(eax_23 + 0x70) u>> 2))
                            goto label_4d58c9
                    
                    edx_8 += 1
                while (edx_8 u< var_120_1)
            
            int32_t ecx_26 = 0
            int32_t var_110_2 = 0
            
            if (var_124_1 u> 0)
                while (true)
                    int32_t eax_25 = var_130[ecx_26]
                    void* eax_26 = *(edi_11 + (eax_25 << 2))
                    int32_t esi_14 = 0
                    
                    if (ecx_26 u> 0)
                        while (true)
                            void* ecx_27 = *(edi_11 + (var_130[esi_14] << 2))
                            char* eax_34 = *(*(*(ecx_27 + 0x60) + 0x14) + 0x18)
                            void* edi_12 = *(*(*(eax_26 + 0x60) + 0x14) + 0x18)
                            int32_t eax_37
                            
                            while (true)
                                ebx_1.b = *edi_12
                                edx_8.b = ebx_1.b
                                char temp4_1 = *eax_34
                                bool c_1 = ebx_1.b u< temp4_1
                                
                                if (ebx_1.b == temp4_1)
                                    if (edx_8.b == 0)
                                        eax_37 = 0
                                        break
                                    
                                    ebx_1.b = *(edi_12 + 1)
                                    edx_8.b = ebx_1.b
                                    char temp8_1 = eax_34[1]
                                    c_1 = ebx_1.b u< temp8_1
                                    
                                    if (ebx_1.b == temp8_1)
                                        edi_12 += 2
                                        eax_34 = &eax_34[2]
                                        
                                        if (edx_8.b != 0)
                                            continue
                                        
                                        eax_37 = 0
                                        break
                                
                                bool c_2 = unimplemented  {sbb eax, eax}
                                eax_37 = sbb.d(sbb.d(eax_34, eax_34, c_1), 0xffffffff, c_2)
                                break
                            
                            if (eax_37 s< 0)
                                break
                            
                            if (eax_37 s<= 0 && *(eax_26 + 4) u< *(ecx_27 + 4))
                                break
                            
                            esi_14 += 1
                            
                            if (esi_14 u>= var_110_2)
                                break
                            
                            edi_11 = var_114
                        
                        ecx_26 = var_110_2
                        
                        if (ecx_26 u> esi_14)
                            int32_t eax_40 = ecx_26
                            
                            do
                                var_130[eax_40] = var_130[eax_40 - 1]
                                eax_40 -= 1
                            while (eax_40 u> esi_14)
                            
                            var_130[esi_14] = eax_25
                        
                        edi_11 = var_114
                    
                    ecx_26 += 1
                    var_110_2 = ecx_26
                    
                    if (ecx_26 u>= var_124_1)
                        break
            
            int32_t eax_43 = (*(*arg1 + 0x8c))()
            int32_t ebx_4 = eax_43 + var_124_1
            
            if (eax_43 == neg.d(var_124_1))
            label_4d5ff0:
                result = (*(*arg1 + 0x90))(&var_158, var_134, var_124_1)
                
                if (result s>= 0)
                    char* var_184 = nullptr
                    void var_180
                    void* edi_27 = &var_180
                    *edi_27 = 0
                    *(edi_27 + 4) = 0
                    result = sub_46b31b(arg1[0x42], 0, &var_184)
                    
                    if (result s>= 0)
                        void var_160
                        result = sub_4c6c51(&var_158, var_184, 0xffffffff, 5, &var_160)
                        
                        if (result s>= 0)
                            void var_174
                            result = sub_4c6c51(&var_158, 
                                "Microsoft (R) D3DX9 Shader Compiler 5.04.00.3900", 0xffffffff, 5, 
                                &var_174)
                            
                            if (result s>= 0)
                                void* eax_115 = sub_4c6d8a(&var_158)
                                
                                if (eax_115 u> 0x8000)
                                    sub_4a4100(arg1, nullptr, 0x11c4, 
                                        "constant table info exceeds maximum comment size")
                                    result = 0x80004005
                                else
                                    result = sub_4d19ed(arg1, eax_115)
                                    
                                    if (result s>= 0)
                                        void* eax_117 = arg1[0x43]
                                        _memcpy(eax_117 + (eax_115 << 2) + 4, eax_117 + 4, 
                                            (arg1[0x44] << 2) + 0xfffffffc)
                                        result = sub_4c6d96(&var_158, arg1[0x43] + 4, eax_115)
                                        
                                        if (result s>= 0)
                                            arg1[0x44] += eax_115
                                            int32_t eax_122 = arg1[0x44]
                                            arg1[0x48] += eax_115
                                            arg1[0x47] = eax_122
                                            result = nullptr
            else
                int32_t esi_16 = ebx_4 * 0x14
                char* eax_44 = sub_745f3f(esi_16)
                var_134 = eax_44
                
                if (eax_44 == 0)
                label_4d60f4_2:
                    result = 0x8007000e
                else
                    __builtin_memset(__builtin_memset(var_134, 0, esi_16 u>> 2 << 2), 0, esi_16 & 3)
                    void var_168
                    result = sub_4c6c51(&var_158, var_134, esi_16, 1, &var_168)
                    
                    if (result s>= 0)
                        int32_t var_110_3 = 0
                        int32_t var_16c_1 = ebx_4
                        
                        if (var_124_1 u> 0)
                            int32_t* edi_17 = var_130
                            void* ebx_6 = &var_134[4]
                            int32_t* var_118_4 = edi_17
                            void* var_11c_2 = ebx_6
                            
                            do
                                void* eax_47 = *(var_114 + (*edi_17 << 2))
                                void* ecx_36 = *(eax_47 + 0x60)
                                void* edx_10 = *(ecx_36 + 0x18)
                                char* ecx_38 = *(*(ecx_36 + 0x14) + 0x18)
                                void* edx_12 = *(arg1[4] + (*(eax_47 + 4) << 2))
                                char* var_1a0_2
                                char var_198_1
                                void* var_194_5
                                
                                if (arg1[0x56] != 0)
                                    int32_t edx_13 = *(edx_12 + 4)
                                    char const* const eax_50 = "c_%s"
                                    
                                    if ((edx_13:1.b & 0x20) != 0)
                                        eax_50 = "b_%s"
                                    else if ((edx_13 & 0x40000) != 0)
                                        eax_50 = "i_%s"
                                    else if (edx_13.b s< 0)
                                        eax_50 = "s_%s"
                                    
                                    char* var_194_6 = ecx_38
                                    void var_108
                                    sub_74aa1b(&var_108, 0xff, eax_50)
                                    var_194_5 = ebx_6 - 4
                                    var_198_1 = 6
                                    int32_t var_19c_3 = 0xffffffff
                                    char var_a_1 = 0
                                    var_1a0_2 = &var_108
                                else
                                    var_194_5 = ebx_6 - 4
                                    var_198_1 = 7
                                    int32_t var_19c_2 = 0xffffffff
                                    var_1a0_2 = ecx_38
                                
                                result = sub_4c6c51(&var_158, var_1a0_2, 0xffffffff, var_198_1, 
                                    var_194_5)
                                
                                if (result s< 0)
                                    goto label_4d611b
                                
                                int32_t eax_53 = *edi_17
                                int32_t edx_14 = 1
                                
                                if (eax_53 + 1 u< var_120_1)
                                    int32_t* eax_54 = var_114 + (eax_53 << 2)
                                    void* eax_55 = &eax_54[1]
                                    int32_t var_10c_3 = eax_53 + 1
                                    void* var_128_3 = eax_55
                                    
                                    while (*(*eax_54 + 4) == *(*eax_55 + 4))
                                        int32_t eax_57 = *edi_17
                                        
                                        if (*(*(var_114 + (eax_57 << 2)) + 0x60)
                                                != *(*(var_114 + ((eax_57 + edx_14) << 2)) + 0x60))
                                            break
                                        
                                        int32_t eax_60 = *edi_17
                                        void* eax_61 = *(var_114 + (eax_60 << 2))
                                        void* ecx_45 = *(var_114 + ((eax_60 + edx_14) << 2))
                                        
                                        if (*(eax_61 + 0xc) - (*(eax_61 + 0x70) u>> 2)
                                                != *(ecx_45 + 0xc) - (*(ecx_45 + 0x70) u>> 2))
                                            break
                                        
                                        eax_55 = var_128_3 + 4
                                        edx_14 += 1
                                        var_10c_3 += 1
                                        var_128_3 = eax_55
                                        
                                        if (var_10c_3 u>= var_120_1)
                                            break
                                
                                int32_t eax_66 = *(edx_12 + 4)
                                int16_t eax_67
                                
                                if (eax_66.b s< 0)
                                    eax_67 = 3
                                else if ((eax_66:1.b & 0x20) == 0)
                                    int32_t eax_68 = eax_66 & 0x40000
                                    int32_t eax_69 = neg.d(eax_68)
                                    eax_67 = (sbb.d(eax_69, eax_69, eax_68 != 0)).w + 2
                                else
                                    eax_67 = 0
                                
                                *ebx_6 = eax_67
                                void* eax_73 = *(var_114 + (*edi_17 << 2))
                                int32_t esi_26 = *(eax_73 + 0x70)
                                eax_73.w = *(eax_73 + 0xc)
                                eax_73.w -= (esi_26 u>> 2).w
                                *(ebx_6 + 2) = eax_73.w
                                *(ebx_6 + 4) = edx_14.w
                                void* eax_75 = *(edx_10 + 0x20)
                                
                                if (eax_75 != 0)
                                    void* result_1
                                    result_1, edx_14 = sub_4d16f4(&var_158, eax_75, 1, 
                                        *(*(var_114 + (*edi_17 << 2)) + 0x3c) & 0xe00000, ebx_6 + 8)
                                    result = result_1
                                    
                                    if (result s< 0)
                                        goto label_4d611b
                                
                                if (*(edx_10 + 0x30) != 0)
                                    void* result_2
                                    result_2, edx_14 = (*(*arg1 + 0x94))(edx_10, ebx_6 - 4)
                                    result = result_2
                                    
                                    if (result s< 0)
                                        goto label_4d611b
                                
                                int32_t eax_78 = *(edx_10 + 0x34)
                                
                                if (eax_78 != 0)
                                    edx_14.w = *ebx_6
                                    
                                    if (edx_14.w == 1)
                                        int32_t esi_29 = (eax_78 + 3) & 0xfffffffc
                                        int32_t eax_80 = esi_29 << 2
                                        char* eax_81 = sub_745f3f(eax_80)
                                        var_144 = eax_81
                                        
                                        if (eax_81 == 0)
                                            goto label_4d60f4_2
                                        
                                        uint32_t i_7 = esi_29 u>> 2
                                        __builtin_memset(
                                            __builtin_memset(var_144, 0, eax_80 u>> 2 << 2), 0, 
                                            eax_80 & 3)
                                        
                                        if (i_7 != 0)
                                            int32_t* eax_82 = &var_144[8]
                                            uint32_t i_2
                                            
                                            do
                                                *eax_82 = 1
                                                eax_82 = &eax_82[4]
                                                i_2 = i_7
                                                i_7 -= 1
                                            while (i_2 != 1)
                                        
                                        void* edi_20 = edx_10
                                        int32_t i_3 = 0
                                        
                                        if (*(edi_20 + 0x34) u> 0)
                                            do
                                                int32_t* esi_31 = i_3 << 2
                                                int32_t* eax_84 = *(esi_31 + *(edi_20 + 0x38))
                                                
                                                if (eax_84 != 0)
                                                    int32_t ecx_60 = *eax_84
                                                    
                                                    if (ecx_60 == 0)
                                                        int32_t ecx_65
                                                        ecx_65.b = eax_84[2] != 0
                                                        *(esi_31 + var_144) = ecx_65
                                                    else if (ecx_60 == 1 || ecx_60 == 2)
                                                        *(esi_31 + var_144) = eax_84[2]
                                                    else if (ecx_60 == 3)
                                                        int32_t eax_85
                                                        int16_t x87control
                                                        eax_85, x87control = __ftol(x87control, 
                                                            fconvert.t(*(eax_84 + 8)))
                                                        edi_20 = edx_10
                                                        *(esi_31 + var_144) = eax_85
                                                
                                                i_3 += 1
                                            while (i_3 u< *(edi_20 + 0x34))
                                        
                                        result = sub_4c6c51(&var_158, var_144, eax_80, 0xb, 
                                            var_11c_2 + 0xc)
                                        
                                        if (result s< 0)
                                            goto label_4d611b
                                        
                                        var_144 = nullptr
                                        ebx_6 = var_11c_2
                                        edi_17 = var_118_4
                                    else if (edx_14.w == 2)
                                        void* esi_33 = ((eax_78 + 3) & 0xfffffffc) << 2
                                        char* eax_93 = sub_745f3f(esi_33)
                                        var_148 = eax_93
                                        
                                        if (eax_93 == 0)
                                            goto label_4d60f4_2
                                        
                                        __builtin_memset(
                                            __builtin_memset(var_148, 0, esi_33 u>> 2 << 2), 0, 
                                            esi_33 & 3)
                                        int32_t i_4 = 0
                                        
                                        if (*(edx_10 + 0x34) u> 0)
                                            do
                                                float* ecx_73 = i_4 << 2
                                                int32_t* eax_95 = *(ecx_73 + *(edx_10 + 0x38))
                                                
                                                if (eax_95 != 0)
                                                    int32_t esi_34 = *eax_95
                                                    long double x87_r7_2
                                                    
                                                    if (esi_34 == 0)
                                                        if (eax_95[2] == 0)
                                                            x87_r7_2 = float.t(0)
                                                        else
                                                            x87_r7_2 = float.t(1)
                                                        
                                                        *(ecx_73 + var_148) = fconvert.s(x87_r7_2)
                                                    else if (esi_34 == 1)
                                                        *(ecx_73 + var_148) =
                                                            fconvert.s(float.t(eax_95[2]))
                                                    else if (esi_34 == 2)
                                                        int32_t eax_96 = eax_95[2]
                                                        x87_r7_2 = float.t(eax_96)
                                                        
                                                        if (eax_96 s< 0)
                                                            x87_r7_2 =
                                                                x87_r7_2 + fconvert.t(4.2949673e+09f)
                                                        
                                                        *(ecx_73 + var_148) = fconvert.s(x87_r7_2)
                                                    else if (esi_34 == 3)
                                                        *(ecx_73 + var_148) =
                                                            fconvert.s(fconvert.t(*(eax_95 + 8)))
                                                
                                                i_4 += 1
                                            while (i_4 u< *(edx_10 + 0x34))
                                        
                                        result = sub_4c6c51(&var_158, var_148, esi_33, 0xb, 
                                            var_11c_2 + 0xc)
                                        
                                        if (result s< 0)
                                            goto label_4d611b
                                        
                                        var_148 = nullptr
                                        ebx_6 = var_11c_2
                                        edi_17 = var_118_4
                                    else if (edx_14.w == 0)
                                        void* esi_40 = *(edx_10 + 0x14) << 2
                                        char* eax_101 = sub_745f3f(esi_40)
                                        var_140 = eax_101
                                        
                                        if (eax_101 == 0)
                                            goto label_4d60f4_2
                                        
                                        __builtin_memset(
                                            __builtin_memset(var_140, 0, esi_40 u>> 2 << 2), 0, 
                                            esi_40 & 3)
                                        int32_t i_5 = 0
                                        
                                        if (*(edx_10 + 0x14) u> 0)
                                            do
                                                int32_t* ecx_81 = i_5 << 2
                                                int32_t* eax_103 = *(ecx_81 + *(edx_10 + 0x3c))
                                                
                                                if (eax_103 != 0)
                                                    int32_t edx_21 = *eax_103
                                                    
                                                    if (edx_21 == 0 || edx_21 == 1 || edx_21 == 2)
                                                        int32_t edx_26
                                                        edx_26.b = eax_103[2] != 0
                                                        *(ecx_81 + var_140) = edx_26
                                                    else if (edx_21 == 3)
                                                        long double x87_r7_3 = fconvert.t(0.0)
                                                        long double x87_r6_1 =
                                                            fconvert.t(*(eax_103 + 8))
                                                        x87_r6_1 - x87_r7_3
                                                        eax_103.w =
                                                            (x87_r6_1 < x87_r7_3 ? 1 : 0) << 8 | (
                                                            is_unordered.t(x87_r6_1, x87_r7_3) ? 1
                                                            : 0) << 0xa
                                                            | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe
                                                        bool p_1 = unimplemented  {test ah, 0x44}
                                                        int32_t eax_104
                                                        
                                                        eax_104 = not(p_1) ? 0 : 1
                                                        
                                                        *(ecx_81 + var_140) = eax_104
                                                
                                                i_5 += 1
                                            while (i_5 u< *(edx_10 + 0x14))
                                        
                                        result = sub_4c6c51(&var_158, var_140, esi_40, 0xb, 
                                            var_11c_2 + 0xc)
                                        
                                        if (result s< 0)
                                            goto label_4d611b
                                        
                                        var_140 = nullptr
                                        ebx_6 = var_11c_2
                                        edi_17 = var_118_4
                                
                                var_110_3 += 1
                                edi_17 = &edi_17[1]
                                ebx_6 += 0x14
                                var_118_4 = edi_17
                                var_11c_2 = ebx_6
                            while (var_110_3 u< var_124_1)
                        
                        goto label_4d5ff0

label_4d611b:
j__free(var_134)
j__free(var_114)
j__free(var_148)
j__free(var_140)
j__free(var_144)
j__free(var_130)
sub_4c6c19(&var_158)
sub_745f2b(__security_cookie_1)
return result

// 函数: sub_4bb1e7
// 地址: 0x4bb1e7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_278 = edi
int32_t var_14c[0x18]
__builtin_memset(&var_14c, 0, 0x60)
int32_t var_74[0x2]
__builtin_memset(&var_74, 0, 0x18)
int32_t var_d4[0x7]
__builtin_memset(&var_d4, 0, 0x60)
int32_t var_5c[0x6]
__builtin_memset(&var_5c, 0, 0x18)
int32_t i = 0

if (*(arg1 + 8) u> 0)
    do
        void* eax_2 = *(*(arg1 + 0x14) + (i << 2))
        
        if (*(eax_2 + 4) == *(arg1 + 0x88))
            *(eax_2 + 0xc) = 0xffffffff
        
        i += 1
    while (i u< *(arg1 + 8))

int32_t var_280_1
char const* const var_27c_1
int32_t var_1ec[0x20]
void* i_5
int32_t var_28
int32_t var_24
int32_t k_2
void* k_3
void* i_4
void* var_c
int32_t __saved_ebp
int32_t result
int32_t eax_59
void* eax_60

if (*(arg1 + 0x22c) != 0)
    i_4 = nullptr
    
    if (*(arg1 + 0x220) u> 0)
        int32_t* esi_2 = nullptr
        
        while (true)
            int32_t* ecx = *(esi_2 + *(arg1 + 0x22c))
            
            if (ecx != 0)
                int32_t eax_5 = *ecx & 0xfff00000
                
                if (eax_5 != 0 && eax_5 != 0x11000000)
                    if (eax_5 == 0x60000000 || eax_5 == 0x60500000 || eax_5 == 0x60a00000
                            || eax_5 == 0x72e00000 || eax_5 == 0x60700000 || eax_5 == 0x60f00000
                            || eax_5 == 0x72100000)
                        void* eax_23 = *(esi_2 + *(arg1 + 0x22c))
                        int32_t var_284_7 = *(eax_23 + 0xc)
                        int32_t var_288_7 = *(eax_23 + 0x10)
                        int32_t var_28c_5 = *(arg1 + 0x224)
                        var_28 = 0
                        int32_t var_294_3 = *(arg1 + 0x230)
                        int32_t k_11 = 0
                        var_c = nullptr
                        sub_4ba3c2(arg1, var_294_3, nullptr, var_28c_5, var_288_7, var_284_7, 
                            &var_1ec, &var_c)
                        int32_t i_1 = 0
                        
                        if (*(*(*(arg1 + 0x22c) + esi_2) + 0xc) u> 0)
                            i_5 = i_4
                            void* eax_39
                            
                            do
                                void* edi_8 = *(*(arg1 + 0x14)
                                    + (*(*(*(*(arg1 + 0x22c) + esi_2) + 0x10) + (i_1 << 2)) << 2))
                                *(edi_8 + 0xc) = i_4
                                int32_t* eax_32 = *(arg1 + 0x22c)
                                k_2 = sub_4b8ad2(arg1, eax_32, i_4 + 1, *(arg1 + 0x220), 
                                    *(*(*(eax_32 + esi_2) + 0x10) + (i_1 << 2)), edi_8, &k_3)
                                int32_t eax_37 = sub_4b8ad2(arg1, *(arg1 + 0x230), 0, 
                                    *(arg1 + 0x224), 
                                    *(*(*(*(arg1 + 0x22c) + esi_2) + 0x10) + (i_1 << 2)), edi_8, 
                                    &k_3)
                                
                                if (eax_37 u> var_28)
                                    var_28 = eax_37
                                
                                int32_t k_8
                                
                                k_8 = k_3 == 0 ? k_2 : 0xffffffff
                                
                                if (k_8 u> k_11)
                                    k_11 = k_8
                                
                                *(edi_8 + 0x10)
                                i_1 += 1
                                var_d4[*(edi_8 + 0x10) + esi_2] = eax_37
                                eax_39 = *(*(arg1 + 0x22c) + esi_2)
                                var_14c[*(edi_8 + 0x10) + esi_2] = k_8
                            while (i_1 u< *(eax_39 + 0xc))
                        
                        int32_t var_8_2 = 0
                        bool cond:5_1 = var_c u<= 0
                        var_74[i_5] = k_11
                        var_5c[i_5] = var_28
                        
                        if (not(cond:5_1))
                            i_5 = i_4
                            
                            do
                                int32_t eax_44 = var_1ec[var_8_2]
                                void* edi_9 = *(*(arg1 + 0x14) + (eax_44 << 2))
                                *(edi_9 + 0xc) = i_4
                                int32_t eax_45 = sub_4b8ad2(arg1, *(arg1 + 0x230), 0, 
                                    *(arg1 + 0x224), eax_44, edi_9, &k_3)
                                
                                if (eax_45 u> var_28)
                                    var_28 = eax_45
                                
                                var_8_2 += 1
                                var_d4[*(edi_9 + 0x10) + esi_2] = eax_45
                            while (var_8_2 u< var_c)
                        
                        var_5c[i_5] = var_28
                    else
                        int32_t i_7 = ecx[3]
                        k_2 = 0
                        var_c = nullptr
                        
                        if (i_7 u<= 0)
                        label_4bb339:
                            int32_t* ecx_2 = *(arg1 + 0x22c)
                            void* eax_6 = *(ecx_2 + esi_2)
                            var_24 = 0
                            void var_26c
                            sub_4ba3c2(arg1, ecx_2, i_4 + 1, *(arg1 + 0x220), *(eax_6 + 0x10), 
                                *(eax_6 + 0xc), &var_26c, &var_24)
                            void* eax_8 = *(esi_2 + *(arg1 + 0x22c))
                            void* const edi_3 = nullptr
                            sub_4ba3c2(arg1, *(arg1 + 0x230), nullptr, *(arg1 + 0x224), 
                                *(eax_8 + 0x10), *(eax_8 + 0xc), &var_26c, &var_24)
                            void* eax_10 = *(esi_2 + *(arg1 + 0x22c))
                            
                            if (*(eax_10 + 0xc) == 1)
                                edi_3 = *(*(arg1 + 0x14) + (**(eax_10 + 0x10) << 2))
                                
                                if (*(edi_3 + 0x10) != 4)
                                    edi_3 = nullptr
                            
                            void* i_9 = nullptr
                            var_c = &var_14c
                            
                            while (true)
                                void* eax_14 = *(esi_2 + *(arg1 + 0x22c))
                                result = sub_4babc9(arg1, i_9, *(arg1 + 0x230), *(arg1 + 0x224), 
                                    *(eax_14 + 0x10), *(eax_14 + 0xc))
                                
                                if (result s< 0)
                                    return result
                                
                                int32_t i_6
                                
                                if (result == 1)
                                label_4bb42b:
                                    i_9 += 1
                                    var_c += 0x10
                                    
                                    if (i_9 u< 6)
                                        continue
                                else
                                    int32_t i_2 = 0
                                    
                                    if (edi_3 == 0)
                                        if (var_74[i_9] u<= i_4)
                                            break
                                        
                                        goto label_4bb42b
                                    
                                    void* ecx_7 = var_c
                                    
                                    do
                                        if (*ecx_7 u<= i_4)
                                            i_6 = i_2
                                            break
                                        
                                        i_2 += 1
                                        ecx_7 += 4
                                    while (i_2 u< 3)
                                    
                                    if (i_2 == 3)
                                        goto label_4bb42b
                                
                                if (edi_3 == 0)
                                    break
                                
                                *(edi_3 + 0x10) = i_6
                                break
                            
                            if (i_9 == 6)
                                if (arg2 != 0 || arg3 != 0)
                                    return 0x80004005
                                
                                eax_59 = *(arg1 + 0x22c)
                            label_4bb927:
                                eax_60 = *(eax_59 + (i_4 << 2))
                            label_4bc16c:
                                sub_4a4100(arg1, *(eax_60 + 0x3c), 0x11a9, 
                                    "program too complex: out of temporary registers")
                                return 0x80004005
                            
                            bool cond:9_1 = var_24 u<= 0
                            int32_t k_10 = 0
                            var_28 = 0
                            int32_t var_8_1 = 0
                            
                            if (not(cond:9_1))
                                i_5 = i_9
                                bool cond:13_1
                                
                                do
                                    int32_t eax_16 = (&__saved_ebp)[var_8_1 - 0x9a]
                                    void* ecx_11 = *(*(arg1 + 0x14) + (eax_16 << 2))
                                    *(ecx_11 + 0xc) = i_9
                                    int32_t var_288_5 = *(arg1 + 0x220)
                                    var_c = ecx_11
                                    k_2 = sub_4b8ad2(arg1, *(arg1 + 0x22c), i_4 + 1, var_288_5, 
                                        eax_16, ecx_11, &k_3)
                                    int32_t eax_18 = sub_4b8ad2(arg1, *(arg1 + 0x230), 0, 
                                        *(arg1 + 0x224), (&__saved_ebp)[var_8_1 - 0x9a], var_c, 
                                        &k_3)
                                    
                                    if (eax_18 u> var_28)
                                        var_28 = eax_18
                                    
                                    int32_t var_ec[0x6]
                                    
                                    if (eax_18 u>= *(arg1 + 0x4c) && *(var_c + 0x10) == 3)
                                        var_ec[i_9] = 1
                                    
                                    if (k_3 != 0)
                                        var_ec[i_9] = 1
                                    
                                    int32_t k_7
                                    
                                    if (var_28 != 0 || k_3 != 0)
                                        k_7 = 0xffffffff
                                    else
                                        k_7 = k_2
                                    
                                    if (k_7 u> k_10)
                                        k_10 = k_7
                                    
                                    *(var_c + 0x10)
                                    var_8_1 += 1
                                    var_d4[*(var_c + 0x10) + (i_9 << 2)] = eax_18
                                    cond:13_1 = var_8_1 u< var_24
                                    var_14c[*(var_c + 0x10) + (i_9 << 2)] = k_7
                                while (cond:13_1)
                            
                            var_74[i_9] = k_10
                            var_5c[i_9] = var_28
                            sub_4ba521(arg1)
                        else
                            int32_t edx_1 = *(arg1 + 0x14)
                            int32_t* ecx_1 = ecx[4]
                            int32_t i_3
                            
                            do
                                if (*(*(edx_1 + (*ecx_1 << 2)) + 0xc) != 0xffffffff)
                                    var_c = 1
                                else
                                    k_2 = 1
                                
                                ecx_1 = &ecx_1[1]
                                i_3 = i_7
                                i_7 -= 1
                            while (i_3 != 1)
                            
                            if (var_c == 0)
                                goto label_4bb339
                            
                            if (k_2 != 0)
                                var_27c_1 = "internal error: unvectorized register found"
                                var_280_1 = 0x12c8
                            label_4bb324:
                                sub_4a4100(arg1, nullptr, var_280_1, var_27c_1)
                                return 0x80004005
            
            i_4 += 1
            esi_2 = &esi_2[1]
            
            if (i_4 u>= *(arg1 + 0x220))
                break

if (*(arg1 + 0x230) != 0)
    i_4 = nullptr
    
    if (*(arg1 + 0x224) u> 0)
        do
            int32_t** ecx_46 = i_4 << 2
            int32_t* esi_3 = *(ecx_46 + *(arg1 + 0x230))
            int32_t** var_30 = ecx_46
            
            if (esi_3 != 0)
                int32_t eax_51 = *esi_3 & 0xfff00000
                
                if (eax_51 != 0 && eax_51 != 0x11000000)
                    uint32_t var_40
                    
                    if (eax_51 == 0x60000000 || eax_51 == 0x60500000 || eax_51 == 0x60a00000
                            || eax_51 == 0x60f00000 || eax_51 == 0x72e00000 || eax_51 == 0x60700000
                            || eax_51 == 0x72300000 || eax_51 == 0x72500000 || eax_51 == 0x72100000
                            || eax_51 == 0x72600000 || eax_51 == 0x72700000 || eax_51 == 0x72800000
                            || eax_51 == 0x72a00000 || eax_51 == 0x72900000
                            || eax_51 == 0x72b00000)
                        int32_t edx_38 = 0
                        int32_t var_10_3 = 0
                        int32_t j = 0
                        
                        if (esi_3[3] u> 0)
                            void* i_8 = i_4
                            
                            do
                                int32_t esi_23 = esi_3[4]
                                uint32_t eax_135 = j << 2
                                var_40 = eax_135
                                void* esi_25 = *(*(arg1 + 0x14) + (*(eax_135 + esi_23) << 2))
                                
                                if (zx.d((*(arg1 + 0xc8)).w) != 0x104)
                                    *(esi_25 + 0xc) = i_8 + 2
                                    i_5 = i_8 + 2
                                else
                                    *(esi_25 + 0xc) = i_8
                                    i_5 = i_8
                                
                                int32_t eax_140 = *(arg1 + 0x230)
                                int32_t eax_141 = sub_4b8ad2(arg1, eax_140, i_8 + 1, 
                                    *(arg1 + 0x224), *(*(*(ecx_46 + eax_140) + 0x10) + var_40), 
                                    esi_25, &k_3)
                                
                                if (eax_141 u> var_10_3)
                                    var_10_3 = eax_141
                                
                                int32_t ecx_119 = *(arg1 + 0x230)
                                var_d4[*(esi_25 + 0x10) + (i_5 << 2)] = eax_141
                                void* eax_143 = *(var_30 + ecx_119)
                                int32_t var_284_17 = *(eax_143 + 0xc)
                                int32_t var_288_17 = *(eax_143 + 0x10)
                                int32_t var_28c_12 = *(arg1 + 0x224)
                                k_2 = 0
                                sub_4ba3c2(arg1, ecx_119, i_4 + 1, var_28c_12, var_288_17, 
                                    var_284_17, &var_1ec, &k_2)
                                bool cond:6_1 = k_2 u<= 0
                                var_c = nullptr
                                
                                if (not(cond:6_1))
                                    do
                                        int32_t eax_147 = var_1ec[var_c]
                                        void* esi_26 = *(*(arg1 + 0x14) + (eax_147 << 2))
                                        *(esi_26 + 0xc) = i_5
                                        int32_t eax_150 = sub_4b8ad2(arg1, *(arg1 + 0x230), 
                                            i_4 + 1, *(arg1 + 0x224), eax_147, esi_26, &k_3)
                                        
                                        if (eax_150 u> var_10_3)
                                            var_10_3 = eax_150
                                        
                                        int32_t edx_42 = *(esi_26 + 0x10) + (i_5 << 2)
                                        var_c += 1
                                        var_d4[edx_42] = eax_150
                                    while (var_c u< k_2)
                                
                                sub_4ba521(arg1)
                                i_8 = i_4
                                j += 1
                                ecx_46 = i_8 << 2
                                esi_3 = *(ecx_46 + *(arg1 + 0x230))
                                var_30 = ecx_46
                            while (j u< esi_3[3])
                            
                            edx_38 = var_10_3
                        
                        if ((&__saved_ebp)[i_5 - 0x16] u< edx_38)
                            (&__saved_ebp)[i_5 - 0x16] = edx_38
                    else if (eax_51 != 0x72200000 && eax_51 != 0x72400000)
                        int32_t var_2c
                        
                        if (zx.d((*(arg1 + 0xc8)).w) == 0x101)
                            int32_t* eax_55 = *(ecx_46 + *(arg1 + 0x230))
                            int32_t ecx_48 = *eax_55 & 0xfffff
                            uint32_t j_1 = divu.dp.d(0:(eax_55[1]), ecx_48)
                            k_2 = 0
                            var_2c = 0
                            
                            if (j_1 u> 0)
                                int32_t eax_58 = *(arg1 + 0x14)
                                int32_t* ecx_50 = esi_3[2]
                                int32_t* var_18_1 = ecx_50
                                int32_t edi_11
                                
                                do
                                    int32_t ecx_51 = *ecx_50
                                    var_24 = 0
                                    void* edx_13 = *(eax_58 + (ecx_51 << 2))
                                    
                                    if (var_2c u> 0)
                                        var_c = esi_3[2]
                                        
                                        do
                                            void* edi_10 = *(eax_58 + (*var_c << 2))
                                            
                                            if (*(edx_13 + 4) == *(edi_10 + 4)
                                                    && *(edx_13 + 8) == *(edi_10 + 8)
                                                    && *(edx_13 + 0xc) == *(edi_10 + 0xc))
                                                break
                                            
                                            var_24 += 1
                                            var_c += ecx_48 << 2
                                        while (var_24 u< var_2c)
                                    
                                    edi_11 = var_2c
                                    
                                    if (edi_11 == var_24 && *(edx_13 + 4) == *(arg1 + 0x88)
                                            && *(edx_13 + 0xc) u>= 2)
                                        k_2 += 1
                                    
                                    ecx_50 = &var_18_1[ecx_48]
                                    var_2c = edi_11 + 1
                                    var_18_1 = ecx_50
                                while (edi_11 + 1 u< j_1)
                                
                                if (k_2 u> 2)
                                    if (arg2 != 0)
                                        return 0x80004005
                                    
                                    if (arg3 != 0)
                                        return 0x80004005
                                    
                                    eax_59 = *(arg1 + 0x230)
                                    goto label_4bb927
                        
                        int32_t j_6 = esi_3[3]
                        int32_t edx_14 = 0
                        var_c = nullptr
                        
                        if (j_6 u<= 0)
                        label_4bb955:
                            int32_t ecx_64 = *(arg1 + 0x230)
                            void* eax_61 = *(ecx_64 + (i_4 << 2))
                            var_2c = 0
                            int32_t var_16c[0x8]
                            sub_4ba3c2(arg1, ecx_64, i_4 + 1, *(arg1 + 0x224), *(eax_61 + 0x10), 
                                *(eax_61 + 0xc), &var_16c, &var_2c)
                            int16_t eax_62 = (*(arg1 + 0xc8)).w
                            k_3 = 0xffffffff
                            int32_t var_10_1 = 0xffffffff
                            uint32_t eax_63 = zx.d(eax_62)
                            
                            if (eax_63 == 0x102 || eax_63 == 0x103)
                                int32_t* eax_65 = *(*(arg1 + 0x230) + (i_4 << 2))
                                
                                if (*eax_65 == 0x50000004)
                                    int32_t* eax_66 = eax_65[2]
                                    int32_t ecx_66 = *(arg1 + 0x14)
                                    void* edi_15 = *(ecx_66 + (*eax_66 << 2))
                                    int32_t edx_17 = *(arg1 + 0x88)
                                    
                                    if (*(edi_15 + 4) == edx_17)
                                        k_3 = *(edi_15 + 0xc)
                                    
                                    void* ecx_67 = *(ecx_66 + (eax_66[4] << 2))
                                    
                                    if (*(ecx_67 + 4) == edx_17)
                                        var_10_1 = *(ecx_67 + 0xc)
                            
                            bool cond:14_1 = var_2c u<= 0
                            int32_t var_34_2 = 0
                            var_24 = 0
                            
                            if (not(cond:14_1))
                                do
                                    int32_t edi_17 = *(arg1 + 0x224)
                                    
                                    if (i_4 + 1 u< edi_17)
                                        var_c = *(arg1 + 0x230) + ((i_4 + 1) << 2)
                                        void* j_7 = edi_17 - (i_4 + 1)
                                        void* j_2
                                        
                                        do
                                            int32_t* eax_71 = *var_c
                                            
                                            if (eax_71 != 0)
                                                int32_t ecx_70 = *eax_71
                                                
                                                if ((ecx_70 & 0xfff00000) == 0x70f00000)
                                                    int32_t k_9 = ecx_70 & 0xfffff
                                                    
                                                    if (k_9 u> 0)
                                                        int32_t ecx_72 = var_16c[var_24]
                                                        int32_t* eax_72 = eax_71[2]
                                                        k_2 = k_9
                                                        int32_t k
                                                        
                                                        do
                                                            if (*eax_72 == ecx_72)
                                                                var_34_2 = 1
                                                            
                                                            eax_72 = &eax_72[1]
                                                            k = k_2
                                                            k_2 -= 1
                                                        while (k != 1)
                                            
                                            var_c += 4
                                            j_2 = j_7
                                            j_7 -= 1
                                        while (j_2 != 1)
                                    
                                    var_24 += 1
                                while (var_24 u< var_2c)
                            
                            int32_t var_18_2
                            
                            if (cond:14_1 || var_34_2 == 0)
                                var_18_2 = 1
                            
                            if ((not(cond:14_1) && var_34_2 != 0) || *(arg1 + 0x44c) == 0)
                                var_18_2 = 0
                            
                            int32_t* eax_76 = *((i_4 << 2) + *(arg1 + 0x230))
                            int32_t ecx_74 = *eax_76
                            void* j_3
                            int32_t edi_19
                            
                            if ((ecx_74 & 0xfffff) != 1 || (ecx_74 & 0xfff00000) == 0x50000000
                                    || var_2c != 1
                                    || *(*(*(arg1 + 0x14) + (var_16c[0] << 2)) + 0x10) != 3
                                    || var_18_2 == 0)
                                j_3 = i_4
                            label_4bbb06:
                                int32_t eax_77
                                eax_77.b = var_18_2 != 0
                                edi_19 = eax_77
                                
                                while (true)
                                    var_24 = edi_19
                                    
                                    if (edi_19 u>= 6)
                                        break
                                    
                                    if (var_5c[edi_19] u<= j_3 && edi_19 != k_3
                                            && edi_19 != var_10_1)
                                        break
                                    
                                    edi_19 += 1
                            else
                                j_3 = i_4
                                edi_19 = 1
                                var_24 = 1
                                void var_b8
                                int32_t* esi_12 = &var_b8
                                
                                while (var_5c[edi_19] u<= j_3 || *esi_12 u> j_3)
                                    edi_19 += 1
                                    esi_12 = &esi_12[4]
                                    var_24 = edi_19
                                    
                                    if (edi_19 u>= 6)
                                        break
                                
                                if (edi_19 == 6)
                                    goto label_4bbb06
                            
                            if (edi_19 != 0 && var_18_2 == 0 && *(arg1 + 0x44c) != 0)
                                if (arg2 != 0)
                                    return 0x80004005
                                
                                if (arg3 != 0)
                                    return 0x80004005
                                
                                eax_60 = *(*(arg1 + 0x22c) + (j_3 << 2))
                                goto label_4bc16c
                            
                            if (edi_19 == 6)
                                uint32_t eax_161 = zx.d((*(arg1 + 0xc8)).w)
                                
                                if (eax_161 == 0x104 && arg3 != 0 && eax_161 == 0x104)
                                    return 0x80004005
                                
                                eax_60 = *(*(arg1 + 0x230) + (j_3 << 2))
                                goto label_4bc16c
                            
                            int32_t var_3c_2 = 0
                            
                            if ((ecx_74 & 0xfff00000) != 0x50000000 || eax_63 u>= 0x104
                                    || eax_76[3] != 1)
                                goto label_4bbed2
                            
                            int32_t edx_21 = *(arg1 + 0x230)
                            void** esi_14 = i_4 << 2
                            void* eax_78 = *(esi_14 + edx_21)
                            int32_t var_44
                            sub_4ba560(arg1, edx_21, i_4 + 1, *(arg1 + 0x224), *(eax_78 + 0x10), 
                                *(eax_78 + 0xc), &var_28, &var_44, &var_40)
                            
                            if (var_44 != 0)
                                var_28 = 4
                            
                            int32_t temp7_1 = var_28
                            bool cond:25_1 = temp7_1 u<= 4
                            
                            if (temp7_1 u< 4)
                                var_28 = 3
                                cond:25_1 = var_28 u<= 4
                            
                            if (not(cond:25_1))
                                var_28 = 4
                            
                            void* eax_80 = sub_49ec23(0x74)
                            int32_t* var_8_4
                            
                            if (eax_80 == 0)
                                var_8_4 = nullptr
                            else
                                var_8_4 = sub_49e789(eax_80)
                            
                            if (var_8_4 == 0)
                                return 0x8007000e
                            
                            int32_t* eax_83 = *(esi_14 + *(arg1 + 0x230))
                            result = sub_49ec6e(var_8_4, *eax_83, eax_83[1], var_28, 0)
                            
                            if (result s< 0)
                                return result
                            
                            result = sub_49e7bf(var_8_4, *(*(arg1 + 0x230) + esi_14))
                            
                            if (result s< 0)
                                return result
                            
                            int32_t ecx_82 = var_8_4[1] << 2
                            void** edx_23 = i_4 << 2
                            int32_t esi_18
                            int32_t edi_21
                            edi_21, esi_18 = __builtin_memcpy(var_8_4[2], 
                                *(*(*(arg1 + 0x230) + edx_23) + 8), ecx_82 u>> 2 << 2)
                            __builtin_memcpy(edi_21, esi_18, ecx_82 & 3)
                            void* eax_88 = *(edx_23 + *(arg1 + 0x230))
                            int32_t ecx_86 = *(eax_88 + 0xc)
                            int32_t var_6c[0x4]
                            __builtin_memcpy(&var_6c, *(eax_88 + 0x10), ecx_86 << 2)
                            *(edx_23 + *(arg1 + 0x230)) = var_8_4
                            result = sub_49f431(arg1, var_8_4)
                            
                            if (result s< 0)
                                return result
                            
                            int32_t edi_22 = 0
                            void* k_12 = nullptr
                            void* k_4 = nullptr
                            var_c = nullptr
                            
                            if (ecx_86 u> 0)
                                do
                                    int32_t j_4 = 0
                                    
                                    if (*(arg1 + 8) u> 0)
                                        do
                                            void* esi_20 = *(*(arg1 + 0x14) + (j_4 << 2))
                                            int32_t eax_92 = var_6c[var_c]
                                            
                                            if (j_4 == eax_92 || *(esi_20 + 0x38) == eax_92)
                                                if (var_28 u> 0)
                                                    bool cond:28_1
                                                    
                                                    do
                                                        void* k_14 = k_12
                                                        void* k_13 = k_12
                                                        k_13.q = fconvert.d(float.t(0))
                                                        *(var_8_4[4] + (edi_22 << 2)) = sub_49f544(
                                                            arg1, *(arg1 + 0x88), var_24, edi_22, 
                                                            k_13)
                                                        
                                                        if (*(var_8_4[4] + (edi_22 << 2))
                                                                == 0xffffffff)
                                                            return 0x8007000e
                                                        
                                                        void* eax_99 = *(*(arg1 + 0x14)
                                                            + (*(var_8_4[4] + (edi_22 << 2)) << 2))
                                                        *(eax_99 + 0x48) = *(esi_20 + 0x48)
                                                        *(eax_99 + 0x54) = *(esi_20 + 0x54)
                                                        *(eax_99 + 0x58) = *(esi_20 + 0x58)
                                                        k_12 = *(esi_20 + 0x3c)
                                                        edi_22 += 1
                                                        cond:28_1 = edi_22 u< var_28
                                                        *(eax_99 + 0x3c) = k_12
                                                    while (cond:28_1)
                                                
                                                void* k_1 = i_4 + 1
                                                k_3 = k_1
                                                
                                                for (; k_1 u< *(arg1 + 0x224); k_1 = k_3)
                                                    int32_t* esi_21 =
                                                        *(*(arg1 + 0x230) + (k_3 << 2))
                                                    
                                                    if (esi_21 != 0)
                                                        int32_t eax_102 = *esi_21
                                                        
                                                        if (eax_102 != 0)
                                                            int32_t ecx_97 = eax_102 & 0xfffff
                                                            uint32_t temp0_1 =
                                                                divu.dp.d(0:(esi_21[1]), ecx_97)
                                                            k_2 = 0
                                                            int32_t var_3c_3 = ecx_97
                                                            var_40 = temp0_1
                                                            
                                                            if (temp0_1 u> 0)
                                                                int32_t var_34_3 = 0
                                                                
                                                                do
                                                                    if (ecx_97 u>= 3)
                                                                        int32_t edi_23 = 0
                                                                        
                                                                        if (ecx_97 u> 0)
                                                                            int32_t eax_106 = var_34_3
                                                                            
                                                                            do
                                                                                int32_t* edx_27 = esi_21[2] + eax_106
                                                                                
                                                                                if (*edx_27 == j_4)
                                                                                    *edx_27 = *(var_8_4[4] + (edi_23 << 2))
                                                                                    void* k_5 = k_3
                                                                                    
                                                                                    if (k_5 u> k_4)
                                                                                        k_4 = k_5
                                                                                
                                                                                ecx_97 = var_3c_3
                                                                                edi_23 += 1
                                                                                eax_106 += 4
                                                                            while (edi_23 u< ecx_97)
                                                                    else if (ecx_97 != 1)
                                                                        int32_t edi_24 = 0
                                                                        
                                                                        if (ecx_97 u> 0)
                                                                            int32_t eax_114 = var_34_3
                                                                            
                                                                            do
                                                                                int32_t* edx_30 = esi_21[2] + eax_114
                                                                                
                                                                                if (*edx_30 == j_4)
                                                                                    *edx_30 = *(var_8_4[4] + (edi_24 << 2))
                                                                                    void* k_6 = k_3
                                                                                    
                                                                                    if (k_6 u> k_4)
                                                                                        k_4 = k_6
                                                                                
                                                                                ecx_97 = var_3c_3
                                                                                edi_24 += 1
                                                                                eax_114 += 4
                                                                            while (edi_24 u< ecx_97)
                                                                    else
                                                                        int32_t* edx_29 = esi_21[2] + (k_2 << 2)
                                                                        
                                                                        if (*edx_29 == j_4)
                                                                            int32_t* eax_110 = var_8_4[4]
                                                                            int32_t eax_111
                                                                            
                                                                            if (var_28 != 4)
                                                                                eax_111 = *eax_110
                                                                            else
                                                                                eax_111 = eax_110[3]
                                                                            
                                                                            *edx_29 = eax_111
                                                                            
                                                                            if (k_3 u> k_4)
                                                                                k_4 = k_3
                                                                    
                                                                    k_2 += 1
                                                                    var_34_3 += ecx_97 << 2
                                                                while (k_2 u< var_40)
                                                    
                                                    k_3 += 1
                                                
                                                k_12 = k_4
                                                var_3c_2 = 1
                                                edi_22 = 0
                                            
                                            j_4 += 1
                                        while (j_4 u< *(arg1 + 8))
                                    
                                    var_c += 1
                                while (var_c u< ecx_86)
                            
                            int32_t edx_31 = var_24
                            
                            if ((&__saved_ebp)[edx_31 - 0x16] u< k_12)
                                (&__saved_ebp)[edx_31 - 0x16] = k_12
                            
                            if ((&__saved_ebp)[edx_31 * 4 - 0x34] u< k_12)
                                (&__saved_ebp)[edx_31 * 4 - 0x34] = k_12
                            
                            if ((&__saved_ebp)[edx_31 * 4 - 0x33] u< k_12)
                                (&__saved_ebp)[edx_31 * 4 - 0x33] = k_12
                            
                            if ((&__saved_ebp)[edx_31 * 4 - 0x32] u< k_12)
                                (&__saved_ebp)[edx_31 * 4 - 0x32] = k_12
                            
                            if ((&__saved_ebp)[edx_31 * 4 - 0x31] u< k_12)
                                (&__saved_ebp)[edx_31 * 4 - 0x31] = k_12
                            
                            if (var_3c_2 == 0)
                                edi_19 = var_24
                            label_4bbed2:
                                int32_t var_10_2 = 0
                                
                                if (var_2c != 0)
                                    int32_t var_8_5 = 0
                                    
                                    if (var_2c u> 0)
                                        do
                                            int32_t eax_128 = var_16c[var_8_5]
                                            void* esi_22 = *(*(arg1 + 0x14) + (eax_128 << 2))
                                            *(esi_22 + 0xc) = edi_19
                                            int32_t eax_131 = sub_4b8ad2(arg1, *(arg1 + 0x230), 
                                                i_4 + 1, *(arg1 + 0x224), eax_128, esi_22, &k_3)
                                            
                                            if (eax_131 u> var_10_2)
                                                var_10_2 = eax_131
                                            
                                            var_8_5 += 1
                                            var_d4[*(esi_22 + 0x10) + (edi_19 << 2)] = eax_131
                                        while (var_8_5 u< var_2c)
                                    
                                    if ((&__saved_ebp)[edi_19 - 0x16] u< var_10_2)
                                        (&__saved_ebp)[edi_19 - 0x16] = var_10_2
                                    
                                    sub_4ba521(arg1)
                                else
                                    **((i_4 << 2) + *(arg1 + 0x230)) = 0
                        else
                            int32_t ecx_62 = *(arg1 + 0x14)
                            int32_t* esi_4 = esi_3[4]
                            int32_t j_5
                            
                            do
                                if (*(*(ecx_62 + (*esi_4 << 2)) + 0xc) != 0xffffffff)
                                    edx_14 = 1
                                else
                                    var_c = 1
                                
                                esi_4 = &esi_4[1]
                                j_5 = j_6
                                j_6 -= 1
                            while (j_5 != 1)
                            
                            if (edx_14 == 0)
                                goto label_4bb955
                            
                            if (var_c != 0)
                                var_27c_1 = "internal error: unvectorized register found"
                                var_280_1 = 0x12c9
                                goto label_4bb324
            
            i_4 += 1
        while (i_4 u< *(arg1 + 0x224))

if (*(arg1 + 0x22c) != 0 && zx.d((*(arg1 + 0xc8)).w) == 0x104 && arg2 == 0)
    result = sub_4bb169(arg1)
    
    if (result s< 0)
        return result

return 0

// 函数: sub_4c9d4c
// 地址: 0x4c9d4c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = *(arg1 + 0x100)
void* eax = *ebx
int32_t i_35 = *ebx & 0xfffff
void* var_c = eax
var_c &= 0xfffff
bool cond:0 = var_c u> i_35
int32_t edi
int32_t var_2dc = edi
int32_t i_29 = i_35
int32_t var_1c = 0
int32_t var_48 = 0
void* var_44 = nullptr
int32_t var_60 = 0
int32_t var_5c = 1
int32_t var_58 = 2
int32_t var_54 = 3
int32_t var_4c = 0
void var_2d0
int32_t var_230[0x28]
int32_t var_190[0x4]
int32_t var_f0[0x10]
int32_t var_b0[0x10]
int32_t var_70[0x4]
void* var_20
int32_t* var_8
int32_t __saved_ebp
int32_t eax_73

if (cond:0 || (eax & 0xfff00000) != 0x20000000)
label_4ca178:
    int32_t* eax_40 = *(arg1 + 0x100)
    var_8 = eax_40
    int32_t eax_41 = *eax_40
    void* ecx_23 = eax_41 & 0xfffff
    var_20 = ecx_23
    
    if (ecx_23 u<= i_29 && (eax_41 & 0xfff00000) == 0x20100000)
        int32_t var_38_3 = 0
        int32_t eax_44 = var_44 << 2
        
        while (true)
            int32_t var_28_4 = 0
            
            while (true)
                int32_t esi_7
                int32_t edi_12
                edi_12, esi_7 = __builtin_memcpy(&var_b0, &var_f0, eax_44 u>> 2 << 2)
                __builtin_memcpy(edi_12, esi_7, eax_44 & 3)
                __builtin_memset(&var_230, 0xffffffff, 0xa0)
                __builtin_memset(&var_2d0, 0xffffffff, 0xa0)
                void* ebx_1 = nullptr
                var_c = var_44
                int32_t var_14_2 = 0
                
                for (int32_t i = 0; i u< 2; )
                    int32_t i_24
                    
                    if (var_28_4 == 0)
                        i_24 = i
                    else
                        i_24 = 1 - i
                    
                    int32_t esi_8 = var_8[2]
                    int32_t ecx_28 = *((i_24 << 2) + &data_acb824)
                    int32_t* edx_10 = esi_8 + (ebx_1 << 2)
                    
                    if (ecx_28 u>= 0x10)
                        int32_t j = 0
                        void* ecx_36 = &(&__saved_ebp)[(ecx_28 - 0x10) * 4 - 0x8b]
                        
                        do
                            int32_t edx_11 = (&var_60)[j]
                            
                            if (edx_11 u>= var_20)
                                *ecx_36 = 0xffffffff
                            else
                                *ecx_36 = *(esi_8 + ((ebx_1 + edx_11) << 2))
                            
                            j += 1
                            ecx_36 += 4
                        while (j u< 4)
                    else
                        int32_t eax_49 = *(*(*(arg1 + 0x14) + (*edx_10 << 2)) + 0x48)
                        int32_t eax_50
                        int32_t ecx_29
                        int32_t* edi_16
                        
                        if (eax_49 != 0xffffffff)
                            ecx_29 = ecx_28 << 5
                            edi_16 = *(*(arg1 + 0x18) + (eax_49 << 2))
                            eax_50 = sub_4c721b(arg1, edi_16, edx_10, var_20, &var_60, &var_70, 
                                *(ecx_29 + 0xacb830), 0)
                        
                        if (eax_49 == 0xffffffff || eax_50 != 0)
                            var_14_2 = 1
                            break
                        
                        var_14_2 = sub_4c73cc(arg1, edi_16, ecx_29 + 0xacb818, &var_b0, &var_c, 
                            &var_2d0, &var_70, i_29, eax_50)
                    
                    if (var_14_2 == 1)
                        break
                    
                    i += 1
                    ebx_1 += var_20
                
                int32_t i_1 = 0
                void* var_1c_1 = nullptr
                
                do
                    int32_t i_25
                    
                    if (var_28_4 == 0)
                        i_25 = i_1
                    else
                        i_25 = 1 - i_1
                    
                    if (*((i_25 << 2) + &data_acb824) u>= 0x10)
                        int32_t var_2c_1 = 0
                        
                        if (var_c u> 0)
                            do
                                int32_t edi_17 = 0
                                
                                if (var_20 u> 0)
                                    void* edx_12 = var_b0[var_2c_1]
                                    int32_t ebx_2 = *(edx_12 + 0xc)
                                    
                                    do
                                        int32_t var_24_2 = 0
                                        
                                        if (ebx_2 u> 0)
                                            int32_t* ecx_39 = *(edx_12 + 0x10)
                                            
                                            while (*(var_8[2] + ((var_1c_1 + edi_17) << 2))
                                                    != *ecx_39)
                                                var_24_2 += 1
                                                ecx_39 = &ecx_39[1]
                                                
                                                if (var_24_2 u>= ebx_2)
                                                    goto label_4ca34d
                                            
                                            var_14_2 = 1
                                            break
                                        
                                    label_4ca34d:
                                        edi_17 += 1
                                    while (edi_17 u< var_20)
                                
                                var_2c_1 += 1
                            while (var_2c_1 u< var_c)
                    
                    i_1 += 1
                    var_1c_1 += var_20
                while (i_1 u< 2)
                
                if (var_14_2 == 0)
                    if (var_38_3 != 0)
                        goto label_4ca4fb
                    
                    int32_t eax_60 = 0
                    int32_t var_1c_2 = 0
                    
                    if (var_c u> 0)
                        do
                            int32_t eax_62 = *(var_b0[eax_60] + 0xc)
                            int32_t var_2c_2 = 0
                            
                            if (eax_62 u> 0)
                                do
                                    int32_t i_30 = *(arg1 + 0xc)
                                    
                                    if (i_30 u> 0)
                                        int32_t* ecx_41 = *(arg1 + 0x18)
                                        int32_t* var_24_3 = ecx_41
                                        int32_t i_22 = i_30
                                        int32_t i_2
                                        
                                        do
                                            int32_t* ecx_42 = *ecx_41
                                            
                                            if (ecx_42 != 0 && *ecx_42 != 0)
                                                int32_t j_20 = ecx_42[1]
                                                int32_t var_34_2 = 0
                                                
                                                if (j_20 u> 0)
                                                    int32_t esi_11 = *(*(var_b0[var_1c_2] + 0x10)
                                                        + (var_2c_2 << 2))
                                                    int32_t* edx_14 = ecx_42[2]
                                                    int32_t j_15 = j_20
                                                    int32_t j_1
                                                    
                                                    do
                                                        int32_t edi_18 = *edx_14
                                                        
                                                        if (edi_18 == esi_11 || *(
                                                                *(*(arg1 + 0x14) + (edi_18 << 2))
                                                                + 0x38) == esi_11)
                                                            var_34_2 = 1
                                                        
                                                        edx_14 = &edx_14[1]
                                                        j_1 = j_15
                                                        j_15 -= 1
                                                    while (j_1 != 1)
                                                
                                                int32_t eax_66
                                                
                                                eax_66 = ecx_42 != var_8 ? var_34_2 : 0
                                                
                                                if (eax_66 != 0)
                                                    int32_t edx_15 = 0
                                                    
                                                    do
                                                        if (ecx_42 == var_b0[edx_15])
                                                            eax_66 = 0
                                                        
                                                        edx_15 += 1
                                                    while (edx_15 u< var_c)
                                                    
                                                    if (eax_66 != 0)
                                                        var_14_2 = 1
                                            
                                            ecx_41 = &var_24_3[1]
                                            i_2 = i_22
                                            i_22 -= 1
                                            var_24_3 = ecx_41
                                        while (i_2 != 1)
                                    
                                    var_2c_2 += 1
                                while (var_2c_2 u< eax_62)
                            
                            eax_60 = var_1c_2 + 1
                            var_1c_2 = eax_60
                        while (eax_60 u< var_c)
                    
                    for (int32_t i_3 = 0; i_3 u< 0x28; i_3 += 1)
                        int32_t eax_70 = var_230[i_3]
                        
                        if (eax_70 != 0xffffffff)
                            int32_t edi_20 = 0
                            
                            if (var_c u> 0)
                                do
                                    void* ecx_46 = var_b0[edi_20]
                                    int32_t j_17 = *(ecx_46 + 0xc)
                                    
                                    if (j_17 u> 0)
                                        int32_t* ecx_47 = *(ecx_46 + 0x10)
                                        int32_t j_2
                                        
                                        do
                                            int32_t esi_12 = *ecx_47
                                            
                                            if (eax_70 == esi_12
                                                    || *(*(*(arg1 + 0x14) + (eax_70 << 2)) + 0x38)
                                                    == esi_12)
                                                var_14_2 = 1
                                            
                                            ecx_47 = &ecx_47[1]
                                            j_2 = j_17
                                            j_17 -= 1
                                        while (j_2 != 1)
                                    
                                    edi_20 += 1
                                while (edi_20 u< var_c)
                    
                    if (var_14_2 == 0)
                        goto label_4ca4fb
                
                var_28_4 += 1
                
                if (var_28_4 u>= 2)
                    if (var_14_2 == 0)
                    label_4ca4fb:
                        void* edx_16 = var_c
                        int32_t eax_72 = edx_16 << 2
                        int32_t esi_13
                        int32_t edi_21
                        edi_21, esi_13 = __builtin_memcpy(&var_f0, &var_b0, eax_72 u>> 2 << 2)
                        __builtin_memcpy(edi_21, esi_13, eax_72 & 3)
                        var_f0[edx_16] = var_8
                        var_44 = edx_16 + 1
                        
                        for (int32_t i_4 = 0; i_4 u< 0xa0; i_4 += 4)
                            int32_t ecx_53 = *(&var_230 + i_4)
                            
                            if (ecx_53 != 0xffffffff)
                                *(&var_190 + i_4) = ecx_53
                            else
                                ecx_53 = *(&var_2d0 + i_4)
                                
                                if (ecx_53 != 0xffffffff)
                                    *(&var_190 + i_4) = ecx_53
                        
                        var_14_2 = 0
                    else
                        var_38_3 += 1
                        
                        if (var_38_3 u< 1)
                            break
                    
                    eax_73 = var_14_2
                    goto label_4ca55f
    
    eax_73 = 1
label_4ca55f:
    var_1c = 1
else
    int32_t var_14_1
    
    for (int32_t i_5 = 0; i_5 u< 1; i_5 += 1)
        for (int32_t j_3 = 0; j_3 u< 2; j_3 += 1)
            __builtin_memset(&var_230, 0xffffffff, 0xa0)
            __builtin_memset(&var_2d0, 0xffffffff, 0xa0)
            var_20 = nullptr
            var_14_1 = 0
            int32_t k = 0
            void* var_28_1 = nullptr
            
            do
                int32_t k_15
                
                if (j_3 == 0)
                    k_15 = k
                else
                    k_15 = 1 - k
                
                int32_t esi_1 = ebx[2]
                int32_t ecx_1 = *((k_15 << 2) + &data_acb884)
                int32_t* edx_1 = esi_1 + (var_28_1 << 2)
                
                if (ecx_1 u>= 0x10)
                    int32_t eax_8 = 0
                    void* ecx_9 = &(&__saved_ebp)[(ecx_1 - 0x10) * 4 - 0x8b]
                    
                    do
                        void* edx_2 = (&var_60)[eax_8]
                        
                        if (edx_2 u>= var_c)
                            *ecx_9 = 0xffffffff
                        else
                            *ecx_9 = *(esi_1 + ((edx_2 + var_28_1) << 2))
                        
                        eax_8 += 1
                        ecx_9 += 4
                    while (eax_8 u< 4)
                else
                    int32_t eax_4 = *(*(*(arg1 + 0x14) + (*edx_1 << 2)) + 0x48)
                    int32_t eax_5
                    int32_t ecx_2
                    int32_t* edi_4
                    
                    if (eax_4 != 0xffffffff)
                        ecx_2 = ecx_1 << 5
                        edi_4 = *(*(arg1 + 0x18) + (eax_4 << 2))
                        eax_5 = sub_4c721b(arg1, edi_4, edx_1, var_c, &var_60, &var_70, 
                            *(ecx_2 + 0xacb890), 0)
                    
                    if (eax_4 == 0xffffffff || eax_5 != 0)
                        var_14_1 = 1
                        break
                    
                    var_14_1 = sub_4c73cc(arg1, edi_4, ecx_2 + 0xacb878, &var_b0, &var_20, 
                        &var_2d0, &var_70, i_29, eax_5)
                
                if (var_14_1 == 1)
                    break
                
                k += 1
                var_28_1 += var_c
            while (k u< 2)
            
            int32_t k_1 = 0
            void* var_38_1 = nullptr
            
            do
                int32_t k_16
                
                if (j_3 == 0)
                    k_16 = k_1
                else
                    k_16 = 1 - k_1
                
                if (*((k_16 << 2) + &data_acb884) u>= 0x10)
                    int32_t var_28_2 = 0
                    
                    if (var_20 u> 0)
                        do
                            int32_t esi_3 = 0
                            
                            if (var_c u> 0)
                                void* edx_5 = var_b0[var_28_2]
                                int32_t edi_6 = *(edx_5 + 0xc)
                                
                                do
                                    var_8 = nullptr
                                    
                                    if (edi_6 u> 0)
                                        int32_t* ecx_11 = *(edx_5 + 0x10)
                                        
                                        while (*(ebx[2] + ((var_38_1 + esi_3) << 2)) != *ecx_11)
                                            var_8 += 1
                                            edi_6 = *(edx_5 + 0xc)
                                            ecx_11 = &ecx_11[1]
                                            
                                            if (var_8 u>= edi_6)
                                                goto label_4c9f48
                                        
                                        var_14_1 = 1
                                        break
                                    
                                label_4c9f48:
                                    esi_3 += 1
                                while (esi_3 u< var_c)
                            
                            var_28_2 += 1
                        while (var_28_2 u< var_20)
                
                k_1 += 1
                var_38_1 += var_c
            while (k_1 u< 2)
            
            if (var_14_1 == 0)
                if (i_5 != 0)
                    goto label_4ca10d
                
                int32_t var_28_3 = 0
                
                if (var_20 u> 0)
                    do
                        int32_t eax_18 = *(var_b0[var_28_3] + 0xc)
                        int32_t var_38_2 = 0
                        
                        if (eax_18 u> 0)
                            do
                                int32_t k_21 = *(arg1 + 0xc)
                                
                                if (k_21 u> 0)
                                    var_8 = *(arg1 + 0x18)
                                    int32_t k_12 = k_21
                                    int32_t k_2
                                    
                                    do
                                        int32_t* ecx_14 = *var_8
                                        
                                        if (ecx_14 != 0 && *ecx_14 != 0)
                                            int32_t edi_7 = ecx_14[1]
                                            int32_t var_40_1 = 0
                                            
                                            if (edi_7 u> 0)
                                                int32_t esi_4 =
                                                    *(*(var_b0[var_28_3] + 0x10) + (var_38_2 << 2))
                                                int32_t* edx_7 = ecx_14[2]
                                                int32_t var_24_1 = edi_7
                                                int32_t temp9_1
                                                
                                                do
                                                    int32_t eax_24 = *edx_7
                                                    
                                                    if (eax_24 == esi_4 || *(
                                                            *(*(arg1 + 0x14) + (eax_24 << 2))
                                                            + 0x38) == esi_4)
                                                        var_40_1 = 1
                                                    
                                                    edx_7 = &edx_7[1]
                                                    temp9_1 = var_24_1
                                                    var_24_1 -= 1
                                                while (temp9_1 != 1)
                                            
                                            if (ecx_14 == ebx)
                                                var_40_1 = 0
                                            
                                            if (var_40_1 != 0)
                                                int32_t eax_26 = 0
                                                
                                                do
                                                    if (ecx_14 == var_b0[eax_26])
                                                        var_40_1 = 0
                                                    
                                                    eax_26 += 1
                                                while (eax_26 u< var_20)
                                                
                                                if (var_40_1 != 0)
                                                    var_14_1 = 1
                                        
                                        var_8 = &var_8[1]
                                        k_2 = k_12
                                        k_12 -= 1
                                    while (k_2 != 1)
                                
                                var_38_2 += 1
                            while (var_38_2 u< eax_18)
                        
                        var_28_3 += 1
                    while (var_28_3 u< var_20)
                
                for (int32_t k_3 = 0; k_3 u< 0x28; k_3 += 1)
                    int32_t esi_5 = var_230[k_3]
                    
                    if (esi_5 != 0xffffffff)
                        int32_t edi_10 = 0
                        
                        if (var_20 u> 0)
                            do
                                void* ecx_15 = var_b0[edi_10]
                                int32_t eax_33 = *(ecx_15 + 0xc)
                                
                                if (eax_33 u> 0)
                                    int32_t* ecx_16 = *(ecx_15 + 0x10)
                                    int32_t var_34_1 = eax_33
                                    int32_t temp7_1
                                    
                                    do
                                        int32_t edx_8 = *ecx_16
                                        
                                        if (esi_5 == edx_8
                                                || *(*(*(arg1 + 0x14) + (esi_5 << 2)) + 0x38)
                                                == edx_8)
                                            var_14_1 = 1
                                        
                                        ecx_16 = &ecx_16[1]
                                        temp7_1 = var_34_1
                                        var_34_1 -= 1
                                    while (temp7_1 != 1)
                                
                                edi_10 += 1
                            while (edi_10 u< var_20)
                
                if (var_14_1 == 0)
                    goto label_4ca10d
        
        if (var_14_1 == 0)
        label_4ca10d:
            int32_t eax_36 = var_20 << 2
            int32_t esi_6
            int32_t edi_11
            edi_11, esi_6 = __builtin_memcpy(&var_f0, &var_b0, eax_36 u>> 2 << 2)
            __builtin_memcpy(edi_11, esi_6, eax_36 & 3)
            var_f0[var_20] = ebx
            var_44 = var_20 + 1
            
            for (int32_t j_4 = 0; j_4 u< 0xa0; j_4 += 4)
                int32_t ecx_21 = *(&var_230 + j_4)
                
                if (ecx_21 != 0xffffffff)
                    *(&var_190 + j_4) = ecx_21
                else
                    ecx_21 = *(&var_2d0 + j_4)
                    
                    if (ecx_21 != 0xffffffff)
                        *(&var_190 + j_4) = ecx_21
            
            var_14_1 = 0
            break
    
    eax_73 = var_14_1
    
    if (eax_73 == 1)
        goto label_4ca178

int32_t var_180[0x4]
int32_t var_170[0x4]

if (eax_73 != 0)
    int32_t* eax_88 = *(arg1 + 0x100)
    void* eax_89 = *eax_88
    int32_t i_36 = *eax_88 & 0xfffff
    var_c = eax_89
    var_c &= 0xfffff
    i_29 = i_36
    int32_t var_3c_4 = 1
    int32_t esi_24
    
    if (var_c u> i_36 || (eax_89 & 0xfff00000) != 0x30000000)
    label_4caa9e:
        int32_t* eax_123 = *(arg1 + 0x100)
        int32_t eax_124 = *eax_123
        void* ecx_89 = eax_124 & 0xfffff
        var_20 = ecx_89
        
        if (ecx_89 u<= i_29 && (eax_124 & 0xfff00000) == 0x30000000)
            int32_t var_2c_3 = 0
            int32_t eax_127 = var_44 << 2
            
            while (true)
                int32_t var_28_5 = 0
                
                while (true)
                    int32_t esi_25
                    int32_t edi_38
                    edi_38, esi_25 = __builtin_memcpy(&var_b0, &var_f0, eax_127 u>> 2 << 2)
                    __builtin_memcpy(edi_38, esi_25, eax_127 & 3)
                    __builtin_memset(&var_230, 0xffffffff, 0xa0)
                    __builtin_memset(&var_2d0, 0xffffffff, 0xa0)
                    void* ebx_17 = nullptr
                    var_c = var_44
                    int32_t var_14_4 = 0
                    
                    for (int32_t i_6 = 0; i_6 u< 3; )
                        int32_t i_26
                        
                        if (var_28_5 == 0)
                            i_26 = i_6
                        else
                            i_26 = 1 - i_6
                        
                        int32_t esi_26 = eax_123[2]
                        int32_t ecx_94 = *((i_26 << 2) + &data_acb784)
                        int32_t* edx_30 = esi_26 + (ebx_17 << 2)
                        
                        if (ecx_94 u>= 0x10)
                            int32_t j_5 = 0
                            void* ecx_102 = &(&__saved_ebp)[(ecx_94 - 0x10) * 4 - 0x8b]
                            
                            do
                                void* edx_31 = (&var_60)[j_5]
                                
                                if (edx_31 u>= var_20)
                                    *ecx_102 = 0xffffffff
                                else
                                    *ecx_102 = *(esi_26 + ((edx_31 + ebx_17) << 2))
                                
                                j_5 += 1
                                ecx_102 += 4
                            while (j_5 u< 4)
                        else
                            int32_t eax_132 = *(*(*(arg1 + 0x14) + (*edx_30 << 2)) + 0x48)
                            int32_t eax_133
                            int32_t ecx_95
                            int32_t* edi_42
                            
                            if (eax_132 != 0xffffffff)
                                ecx_95 = ecx_94 << 5
                                edi_42 = *(*(arg1 + 0x18) + (eax_132 << 2))
                                eax_133 = sub_4c721b(arg1, edi_42, edx_30, var_20, &var_60, 
                                    &var_70, *(ecx_95 + 0xacb790), 0)
                            
                            if (eax_132 == 0xffffffff || eax_133 != 0)
                                var_14_4 = 1
                                break
                            
                            var_14_4 = sub_4c73cc(arg1, edi_42, ecx_95 + 0xacb778, &var_b0, &var_c, 
                                &var_2d0, &var_70, i_29, eax_133)
                        
                        if (var_14_4 == 1)
                            break
                        
                        i_6 += 1
                        ebx_17 += var_20
                    
                    int32_t i_7 = 0
                    void* var_24_7 = nullptr
                    
                    do
                        int32_t i_27
                        
                        if (var_28_5 == 0)
                            i_27 = i_7
                        else
                            i_27 = 1 - i_7
                        
                        if (*((i_27 << 2) + &data_acb784) u>= 0x10)
                            int32_t var_8_4 = 0
                            
                            if (var_c u> 0)
                                do
                                    int32_t edi_43 = 0
                                    
                                    if (var_20 u> 0)
                                        void* edx_33 = var_b0[var_8_4]
                                        int32_t ebx_18 = *(edx_33 + 0xc)
                                        
                                        do
                                            int32_t var_1c_5 = 0
                                            
                                            if (ebx_18 u> 0)
                                                int32_t* ecx_105 = *(edx_33 + 0x10)
                                                
                                                while (*(eax_123[2] + ((var_24_7 + edi_43) << 2))
                                                        != *ecx_105)
                                                    var_1c_5 += 1
                                                    ecx_105 = &ecx_105[1]
                                                    
                                                    if (var_1c_5 u>= ebx_18)
                                                        goto label_4cac72
                                                
                                                var_14_4 = 1
                                                break
                                            
                                        label_4cac72:
                                            edi_43 += 1
                                        while (edi_43 u< var_20)
                                    
                                    var_8_4 += 1
                                while (var_8_4 u< var_c)
                        
                        i_7 += 1
                        var_24_7 += var_20
                    while (i_7 u< 3)
                    
                    if (var_14_4 == 0)
                        if (var_2c_3 != 0)
                            goto label_4cae20
                        
                        int32_t eax_142 = 0
                        int32_t var_1c_6 = 0
                        
                        if (var_c u> 0)
                            do
                                int32_t eax_144 = *(var_b0[eax_142] + 0xc)
                                int32_t var_8_5 = 0
                                
                                if (eax_144 u> 0)
                                    do
                                        int32_t i_31 = *(arg1 + 0xc)
                                        
                                        if (i_31 u> 0)
                                            int32_t* ecx_107 = *(arg1 + 0x18)
                                            int32_t* var_24_8 = ecx_107
                                            int32_t i_23 = i_31
                                            int32_t i_8
                                            
                                            do
                                                int32_t* ecx_108 = *ecx_107
                                                
                                                if (ecx_108 != 0 && *ecx_108 != 0)
                                                    int32_t j_21 = ecx_108[1]
                                                    int32_t var_34_5 = 0
                                                    
                                                    if (j_21 u> 0)
                                                        int32_t esi_29 = *(
                                                            *(var_b0[var_1c_6] + 0x10)
                                                            + (var_8_5 << 2))
                                                        int32_t* edx_35 = ecx_108[2]
                                                        int32_t j_16 = j_21
                                                        int32_t j_6
                                                        
                                                        do
                                                            int32_t edi_44 = *edx_35
                                                            
                                                            if (edi_44 == esi_29 || *(
                                                                    *(*(arg1 + 0x14) + (edi_44 << 2))
                                                                    + 0x38) == esi_29)
                                                                var_34_5 = 1
                                                            
                                                            edx_35 = &edx_35[1]
                                                            j_6 = j_16
                                                            j_16 -= 1
                                                        while (j_6 != 1)
                                                    
                                                    int32_t eax_148
                                                    
                                                    eax_148 = ecx_108 != eax_123 ? var_34_5 : 0
                                                    
                                                    if (eax_148 != 0)
                                                        int32_t edx_36 = 0
                                                        
                                                        do
                                                            if (ecx_108 == var_b0[edx_36])
                                                                eax_148 = 0
                                                            
                                                            edx_36 += 1
                                                        while (edx_36 u< var_c)
                                                        
                                                        if (eax_148 != 0)
                                                            var_14_4 = 1
                                                
                                                ecx_107 = &var_24_8[1]
                                                i_8 = i_23
                                                i_23 -= 1
                                                var_24_8 = ecx_107
                                            while (i_8 != 1)
                                        
                                        var_8_5 += 1
                                    while (var_8_5 u< eax_144)
                                
                                eax_142 = var_1c_6 + 1
                                var_1c_6 = eax_142
                            while (eax_142 u< var_c)
                        
                        for (int32_t i_9 = 0; i_9 u< 0x28; i_9 += 1)
                            int32_t eax_152 = var_230[i_9]
                            
                            if (eax_152 != 0xffffffff)
                                int32_t edi_46 = 0
                                
                                if (var_c u> 0)
                                    do
                                        void* ecx_112 = var_b0[edi_46]
                                        int32_t j_18 = *(ecx_112 + 0xc)
                                        
                                        if (j_18 u> 0)
                                            int32_t* ecx_113 = *(ecx_112 + 0x10)
                                            int32_t j_7
                                            
                                            do
                                                int32_t esi_30 = *ecx_113
                                                
                                                if (eax_152 == esi_30 ||
                                                        *(*(*(arg1 + 0x14) + (eax_152 << 2)) + 0x38)
                                                        == esi_30)
                                                    var_14_4 = 1
                                                
                                                ecx_113 = &ecx_113[1]
                                                j_7 = j_18
                                                j_18 -= 1
                                            while (j_7 != 1)
                                        
                                        edi_46 += 1
                                    while (edi_46 u< var_c)
                        
                        if (var_14_4 == 0)
                            goto label_4cae20
                    
                    var_28_5 += 1
                    
                    if (var_28_5 u>= 1)
                        if (var_14_4 == 0)
                        label_4cae20:
                            void* edx_37 = var_c
                            int32_t eax_154 = edx_37 << 2
                            int32_t esi_31
                            int32_t edi_47
                            edi_47, esi_31 = __builtin_memcpy(&var_f0, &var_b0, eax_154 u>> 2 << 2)
                            __builtin_memcpy(edi_47, esi_31, eax_154 & 3)
                            var_f0[edx_37] = eax_123
                            var_44 = edx_37 + 1
                            
                            for (int32_t i_10 = 0; i_10 u< 0xa0; i_10 += 4)
                                int32_t ecx_119 = *(&var_230 + i_10)
                                
                                if (ecx_119 != 0xffffffff)
                                    *(&var_190 + i_10) = ecx_119
                                else
                                    ecx_119 = *(&var_2d0 + i_10)
                                    
                                    if (ecx_119 != 0xffffffff)
                                        *(&var_190 + i_10) = ecx_119
                            
                            var_14_4 = 0
                        else
                            var_2c_3 += 1
                            
                            if (var_2c_3 u< 1)
                                break
                        
                        esi_24 = var_14_4
                        goto label_4cae84
        
        esi_24 = 1
    label_4cae84:
        var_3c_4 = 0
    else
        int32_t i_11 = 0
        int32_t eax_92 = var_44 << 2
        int32_t var_14_3
        
        do
            for (int32_t j_8 = 0; j_8 u< 1; j_8 += 1)
                int32_t esi_17
                int32_t edi_26
                edi_26, esi_17 = __builtin_memcpy(&var_b0, &var_f0, eax_92 u>> 2 << 2)
                __builtin_memcpy(edi_26, esi_17, eax_92 & 3)
                __builtin_memset(&var_230, 0xffffffff, 0xa0)
                __builtin_memset(&var_2d0, 0xffffffff, 0xa0)
                void* ebx_11 = nullptr
                var_20 = var_44
                var_14_3 = 0
                
                for (int32_t k_4 = 0; k_4 u< 3; )
                    int32_t k_17
                    
                    if (j_8 == 0)
                        k_17 = k_4
                    else
                        k_17 = 1 - k_4
                    
                    int32_t esi_18 = eax_88[2]
                    int32_t ecx_62 = *((k_17 << 2) + &data_acb624)
                    int32_t* edx_21 = esi_18 + (ebx_11 << 2)
                    
                    if (ecx_62 u>= 0x10)
                        int32_t edi_31 = 0
                        void* ecx_70 = &(&__saved_ebp)[(ecx_62 - 0x10) * 4 - 0x8b]
                        
                        do
                            int32_t edx_22 = (&var_60)[edi_31]
                            
                            if (edx_22 u>= var_c)
                                *ecx_70 = 0xffffffff
                            else
                                *ecx_70 = *(esi_18 + ((ebx_11 + edx_22) << 2))
                            
                            edi_31 += 1
                            ecx_70 += 4
                        while (edi_31 u< 4)
                    else
                        int32_t eax_97 = *(*(*(arg1 + 0x14) + (*edx_21 << 2)) + 0x48)
                        int32_t eax_98
                        int32_t ecx_63
                        int32_t* edi_30
                        
                        if (eax_97 != 0xffffffff)
                            ecx_63 = ecx_62 << 5
                            edi_30 = *(*(arg1 + 0x18) + (eax_97 << 2))
                            eax_98 = sub_4c721b(arg1, edi_30, edx_21, var_c, &var_60, &var_70, 
                                *(ecx_63 + 0xacb630), 0)
                        
                        if (eax_97 == 0xffffffff || eax_98 != 0)
                            var_14_3 = 1
                            break
                        
                        var_14_3 = sub_4c73cc(arg1, edi_30, ecx_63 + 0xacb618, &var_b0, &var_20, 
                            &var_2d0, &var_70, i_29, eax_98)
                    
                    if (var_14_3 == 1)
                        break
                    
                    k_4 += 1
                    ebx_11 += var_c
                
                int32_t k_5 = 0
                void* var_24_5 = nullptr
                
                do
                    int32_t k_18
                    
                    if (j_8 == 0)
                        k_18 = k_5
                    else
                        k_18 = 1 - k_5
                    
                    if (*((k_18 << 2) + &data_acb624) u>= 0x10)
                        int32_t var_8_2 = 0
                        
                        if (var_20 u> 0)
                            do
                                int32_t edi_32 = 0
                                
                                if (var_c u> 0)
                                    void* edx_23 = var_b0[var_8_2]
                                    int32_t ebx_12 = *(edx_23 + 0xc)
                                    
                                    do
                                        int32_t var_1c_3 = 0
                                        
                                        if (ebx_12 u> 0)
                                            int32_t* ecx_73 = *(edx_23 + 0x10)
                                            
                                            while (*(eax_88[2] + ((var_24_5 + edi_32) << 2))
                                                    != *ecx_73)
                                                var_1c_3 += 1
                                                ecx_73 = &ecx_73[1]
                                                
                                                if (var_1c_3 u>= ebx_12)
                                                    goto label_4ca880
                                            
                                            var_14_3 = 1
                                            break
                                        
                                    label_4ca880:
                                        edi_32 += 1
                                    while (edi_32 u< var_c)
                                
                                var_8_2 += 1
                            while (var_8_2 u< var_20)
                    
                    k_5 += 1
                    var_24_5 += var_c
                while (k_5 u< 3)
                
                if (var_14_3 == 0)
                    if (i_11 != 0)
                        goto label_4caa2e
                    
                    int32_t eax_108 = 0
                    int32_t var_1c_4 = 0
                    
                    if (var_20 u> 0)
                        do
                            int32_t eax_110 = *(var_b0[eax_108] + 0xc)
                            int32_t var_8_3 = 0
                            
                            if (eax_110 u> 0)
                                do
                                    int32_t k_22 = *(arg1 + 0xc)
                                    
                                    if (k_22 u> 0)
                                        int32_t* ecx_75 = *(arg1 + 0x18)
                                        int32_t* var_24_6 = ecx_75
                                        int32_t k_14 = k_22
                                        int32_t k_6
                                        
                                        do
                                            int32_t* ecx_76 = *ecx_75
                                            
                                            if (ecx_76 != 0 && *ecx_76 != 0)
                                                int32_t edi_33 = ecx_76[1]
                                                int32_t var_34_4 = 0
                                                
                                                if (edi_33 u> 0)
                                                    int32_t esi_21 = *(*(var_b0[var_1c_4] + 0x10)
                                                        + (var_8_3 << 2))
                                                    int32_t* edx_25 = ecx_76[2]
                                                    int32_t eax_114 = edi_33
                                                    int32_t temp16_1
                                                    
                                                    do
                                                        int32_t edi_34 = *edx_25
                                                        
                                                        if (edi_34 == esi_21 || *(
                                                                *(*(arg1 + 0x14) + (edi_34 << 2))
                                                                + 0x38) == esi_21)
                                                            var_34_4 = 1
                                                        
                                                        edx_25 = &edx_25[1]
                                                        temp16_1 = eax_114
                                                        eax_114 -= 1
                                                    while (temp16_1 != 1)
                                                
                                                int32_t eax_115
                                                
                                                eax_115 = ecx_76 != eax_88 ? var_34_4 : 0
                                                
                                                if (eax_115 != 0)
                                                    int32_t edx_26 = 0
                                                    
                                                    do
                                                        if (ecx_76 == var_b0[edx_26])
                                                            eax_115 = 0
                                                        
                                                        edx_26 += 1
                                                    while (edx_26 u< var_20)
                                                    
                                                    if (eax_115 != 0)
                                                        var_14_3 = 1
                                            
                                            ecx_75 = &var_24_6[1]
                                            k_6 = k_14
                                            k_14 -= 1
                                            var_24_6 = ecx_75
                                        while (k_6 != 1)
                                    
                                    var_8_3 += 1
                                while (var_8_3 u< eax_110)
                            
                            eax_108 = var_1c_4 + 1
                            var_1c_4 = eax_108
                        while (eax_108 u< var_20)
                    
                    for (int32_t k_7 = 0; k_7 u< 0x28; k_7 += 1)
                        int32_t eax_119 = var_230[k_7]
                        
                        if (eax_119 != 0xffffffff)
                            int32_t edi_36 = 0
                            
                            if (var_20 u> 0)
                                do
                                    void* ecx_80 = var_b0[edi_36]
                                    int32_t edx_27 = *(ecx_80 + 0xc)
                                    
                                    if (edx_27 u> 0)
                                        int32_t* ecx_81 = *(ecx_80 + 0x10)
                                        int32_t temp14_1
                                        
                                        do
                                            int32_t esi_22 = *ecx_81
                                            
                                            if (eax_119 == esi_22
                                                    || *(*(*(arg1 + 0x14) + (eax_119 << 2)) + 0x38)
                                                    == esi_22)
                                                var_14_3 = 1
                                            
                                            ecx_81 = &ecx_81[1]
                                            temp14_1 = edx_27
                                            edx_27 -= 1
                                        while (temp14_1 != 1)
                                    
                                    edi_36 += 1
                                while (edi_36 u< var_20)
                    
                    if (var_14_3 == 0)
                        goto label_4caa2e
            
            if (var_14_3 == 0)
            label_4caa2e:
                void* edx_28 = var_20
                int32_t eax_121 = edx_28 << 2
                int32_t esi_23
                int32_t edi_37
                edi_37, esi_23 = __builtin_memcpy(&var_f0, &var_b0, eax_121 u>> 2 << 2)
                __builtin_memcpy(edi_37, esi_23, eax_121 & 3)
                var_f0[edx_28] = eax_88
                var_44 = edx_28 + 1
                
                for (int32_t j_9 = 0; j_9 u< 0xa0; j_9 += 4)
                    int32_t ecx_87 = *(&var_230 + j_9)
                    
                    if (ecx_87 != 0xffffffff)
                        *(&var_190 + j_9) = ecx_87
                    else
                        ecx_87 = *(&var_2d0 + j_9)
                        
                        if (ecx_87 != 0xffffffff)
                            *(&var_190 + j_9) = ecx_87
                
                var_14_3 = 0
                break
            
            i_11 += 1
        while (i_11 u< 1)
        
        esi_24 = var_14_3
        
        if (esi_24 == 1)
            goto label_4caa9e
    
    if (esi_24 == 0)
        int32_t var_8_6 = 0
        
        if (i_29 u> 0)
            do
                int32_t ecx_120 = *(arg1 + 0x14)
                void* esi_32 = *(ecx_120 + (var_190[var_8_6] << 2))
                int32_t edi_48 = var_170[var_8_6]
                void* ecx_121 = *(ecx_120 + (var_180[var_8_6] << 2))
                int32_t var_140[0x4]
                
                if (edi_48 != var_140[var_8_6])
                    return 1
                
                int32_t var_160[0x4]
                int32_t ecx_122 = var_160[var_8_6]
                int32_t var_130[0x4]
                
                if (ecx_122 != var_130[var_8_6])
                    return 1
                
                int32_t var_150[0x4]
                int32_t edx_41 = var_150[var_8_6]
                int32_t var_120[0xc]
                
                if (edx_41 != var_120[var_8_6])
                    return 1
                
                if (edi_48 != ecx_122)
                    return 1
                
                int32_t ecx_123 = *(arg1 + 0x14)
                int32_t eax_157 = *(arg1 + 0x10)
                void* edx_42 = *(ecx_123 + (edx_41 << 2))
                
                if ((*(*(eax_157 + (*(esi_32 + 4) << 2)) + 5) & 1) == 0)
                    return 1
                
                if ((*(*(eax_157 + (*(ecx_121 + 4) << 2)) + 5) & 1) == 0)
                    return 1
                
                if ((*(*(eax_157 + (*(edx_42 + 4) << 2)) + 5) & 1) == 0)
                    return 1
                
                long double x87_r7_3 = fconvert.t(1.0)
                long double x87_r6_3 = fconvert.t(*(esi_32 + 0x20))
                x87_r6_3 - x87_r7_3
                void* eax_158
                eax_158.w = (x87_r6_3 < x87_r7_3 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_3, x87_r7_3) ? 1 : 0) << 0xa
                    | (x87_r6_3 == x87_r7_3 ? 1 : 0) << 0xe
                bool p_3 = unimplemented  {test ah, 0x44}
                
                if (p_3)
                    return 1
                
                int32_t eax_159
                eax_159.b = var_3c_4 == 0
                long double x87_r7_4 = float.t(eax_159 * 2 - 1)
                long double x87_r6_4 = fconvert.t(*(ecx_121 + 0x20))
                x87_r6_4 - x87_r7_4
                void* eax_161
                eax_161.w = (x87_r6_4 < x87_r7_4 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_4, x87_r7_4) ? 1 : 0) << 0xa
                    | (x87_r6_4 == x87_r7_4 ? 1 : 0) << 0xe
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (p_4)
                    return 1
                
                long double x87_r7_5 = fconvert.t(0.0)
                long double x87_r6_5 = fconvert.t(*(edx_42 + 0x20))
                x87_r6_5 - x87_r7_5
                eax_161.w = (x87_r6_5 < x87_r7_5 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_5, x87_r7_5) ? 1 : 0) << 0xa
                    | (x87_r6_5 == x87_r7_5 ? 1 : 0) << 0xe
                bool p_5 = unimplemented  {test ah, 0x44}
                
                if (p_5)
                    return 1
                
                void* ecx_124 = *(ecx_123 + (edi_48 << 2))
                
                if (*(ecx_124 + 4) != *(arg1 + 0x88))
                    var_4c = 1
                
                int32_t eax_163 = 0
                
                if (var_48 u> 0)
                    while (*(ecx_124 + 0x48) != (&var_60)[eax_163])
                        eax_163 += 1
                        
                        if (eax_163 u>= var_48)
                            break
                
                if (eax_163 == var_48 && var_4c == 0)
                    (&var_60)[var_48] = *(ecx_124 + 0x48)
                    var_48 += 1
                
                var_8_6 += 1
            while (var_8_6 u< i_29)
        
        var_20 = &var_170
        goto label_4cb824
    
    if (esi_24 != 1)
        goto label_4cb81c
    
    int32_t* eax_167 = *(arg1 + 0x100)
    int32_t eax_168 = *eax_167
    void* ecx_126 = eax_168 & 0xfffff
    var_20 = ecx_126
    
    if (ecx_126 u> i_29 || (eax_168 & 0xfff00000) != 0x30000000)
        esi_24 = 1
    else
        int32_t var_14_5
        
        for (int32_t i_12 = 0; i_12 u< 1; i_12 += 1)
            for (int32_t j_10 = 0; j_10 u< 1; j_10 += 1)
                void* edx_45 = var_44
                int32_t ecx_130 = edx_45 << 2
                int32_t esi_35
                int32_t edi_50
                edi_50, esi_35 = __builtin_memcpy(&var_b0, &var_f0, ecx_130 u>> 2 << 2)
                __builtin_memcpy(edi_50, esi_35, ecx_130 & 3)
                __builtin_memset(&var_230, 0xffffffff, 0xa0)
                void* ebx_30 = nullptr
                __builtin_memset(&var_2d0, 0xffffffff, 0xa0)
                var_c = edx_45
                var_14_5 = 0
                
                for (int32_t k_8 = 0; k_8 u< 3; )
                    int32_t k_19
                    
                    if (j_10 == 0)
                        k_19 = k_8
                    else
                        k_19 = 1 - k_8
                    
                    int32_t esi_36 = eax_167[2]
                    int32_t ecx_134 = *((k_19 << 2) + &data_acb6c4)
                    int32_t* edx_46 = esi_36 + (ebx_30 << 2)
                    
                    if (ecx_134 u>= 0x10)
                        int32_t edi_55 = 0
                        void* ecx_142 = &(&__saved_ebp)[(ecx_134 - 0x10) * 4 - 0x8b]
                        
                        do
                            void* edx_47 = (&var_60)[edi_55]
                            
                            if (edx_47 u>= var_20)
                                *ecx_142 = 0xffffffff
                            else
                                *ecx_142 = *(esi_36 + ((edx_47 + ebx_30) << 2))
                            
                            edi_55 += 1
                            ecx_142 += 4
                        while (edi_55 u< 4)
                    else
                        int32_t eax_175 = *(*(*(arg1 + 0x14) + (*edx_46 << 2)) + 0x48)
                        int32_t eax_176
                        int32_t ecx_135
                        int32_t* edi_54
                        
                        if (eax_175 != 0xffffffff)
                            ecx_135 = ecx_134 << 5
                            edi_54 = *(*(arg1 + 0x18) + (eax_175 << 2))
                            eax_176 = sub_4c721b(arg1, edi_54, edx_46, var_20, &var_60, &var_70, 
                                *(ecx_135 + 0xacb6d0), 0)
                        
                        if (eax_175 == 0xffffffff || eax_176 != 0)
                            var_14_5 = 1
                            break
                        
                        var_14_5 = sub_4c73cc(arg1, edi_54, ecx_135 + 0xacb6b8, &var_b0, &var_c, 
                            &var_2d0, &var_70, i_29, eax_176)
                    
                    if (var_14_5 == 1)
                        break
                    
                    k_8 += 1
                    ebx_30 += var_20
                
                int32_t k_9 = 0
                void* var_24_9 = nullptr
                
                do
                    int32_t k_20
                    
                    if (j_10 == 0)
                        k_20 = k_9
                    else
                        k_20 = 1 - k_9
                    
                    if (*((k_20 << 2) + &data_acb6c4) u>= 0x10)
                        int32_t var_8_7 = 0
                        
                        if (var_c u> 0)
                            do
                                int32_t edi_56 = 0
                                
                                if (var_20 u> 0)
                                    void* edx_49 = var_b0[var_8_7]
                                    int32_t ebx_31 = *(edx_49 + 0xc)
                                    
                                    do
                                        int32_t var_1c_7 = 0
                                        
                                        if (ebx_31 u> 0)
                                            int32_t* ecx_145 = *(edx_49 + 0x10)
                                            
                                            while (*(eax_167[2] + ((var_24_9 + edi_56) << 2))
                                                    != *ecx_145)
                                                var_1c_7 += 1
                                                ecx_145 = &ecx_145[1]
                                                
                                                if (var_1c_7 u>= ebx_31)
                                                    goto label_4cb21e
                                            
                                            var_14_5 = 1
                                            break
                                        
                                    label_4cb21e:
                                        edi_56 += 1
                                    while (edi_56 u< var_20)
                                
                                var_8_7 += 1
                            while (var_8_7 u< var_c)
                    
                    k_9 += 1
                    var_24_9 += var_20
                while (k_9 u< 3)
                
                if (var_14_5 == 0)
                    if (i_12 != 0)
                        goto label_4cb3cc
                    
                    int32_t eax_185 = 0
                    int32_t var_1c_8 = 0
                    
                    if (var_c u> 0)
                        do
                            int32_t eax_187 = *(var_b0[eax_185] + 0xc)
                            int32_t var_8_8 = 0
                            
                            if (eax_187 u> 0)
                                do
                                    int32_t k_23 = *(arg1 + 0xc)
                                    
                                    if (k_23 u> 0)
                                        int32_t* ecx_147 = *(arg1 + 0x18)
                                        int32_t* var_34_8 = ecx_147
                                        int32_t k_13 = k_23
                                        int32_t k_10
                                        
                                        do
                                            int32_t* ecx_148 = *ecx_147
                                            
                                            if (ecx_148 != 0 && *ecx_148 != 0)
                                                int32_t edi_57 = ecx_148[1]
                                                int32_t var_3c_5 = 0
                                                
                                                if (edi_57 u> 0)
                                                    int32_t esi_39 = *(*(var_b0[var_1c_8] + 0x10)
                                                        + (var_8_8 << 2))
                                                    int32_t* edx_51 = ecx_148[2]
                                                    int32_t eax_191 = edi_57
                                                    int32_t temp20_1
                                                    
                                                    do
                                                        int32_t edi_58 = *edx_51
                                                        
                                                        if (edi_58 == esi_39 || *(
                                                                *(*(arg1 + 0x14) + (edi_58 << 2))
                                                                + 0x38) == esi_39)
                                                            var_3c_5 = 1
                                                        
                                                        edx_51 = &edx_51[1]
                                                        temp20_1 = eax_191
                                                        eax_191 -= 1
                                                    while (temp20_1 != 1)
                                                
                                                int32_t eax_192
                                                
                                                eax_192 = ecx_148 != eax_167 ? var_3c_5 : 0
                                                
                                                if (eax_192 != 0)
                                                    int32_t edx_52 = 0
                                                    
                                                    do
                                                        if (ecx_148 == var_b0[edx_52])
                                                            eax_192 = 0
                                                        
                                                        edx_52 += 1
                                                    while (edx_52 u< var_c)
                                                    
                                                    if (eax_192 != 0)
                                                        var_14_5 = 1
                                            
                                            ecx_147 = &var_34_8[1]
                                            k_10 = k_13
                                            k_13 -= 1
                                            var_34_8 = ecx_147
                                        while (k_10 != 1)
                                    
                                    var_8_8 += 1
                                while (var_8_8 u< eax_187)
                            
                            eax_185 = var_1c_8 + 1
                            var_1c_8 = eax_185
                        while (eax_185 u< var_c)
                    
                    for (int32_t k_11 = 0; k_11 u< 0x28; k_11 += 1)
                        int32_t eax_196 = var_230[k_11]
                        
                        if (eax_196 != 0xffffffff)
                            int32_t edi_60 = 0
                            
                            if (var_c u> 0)
                                do
                                    void* ecx_152 = var_b0[edi_60]
                                    int32_t edx_53 = *(ecx_152 + 0xc)
                                    
                                    if (edx_53 u> 0)
                                        int32_t* ecx_153 = *(ecx_152 + 0x10)
                                        int32_t temp19_1
                                        
                                        do
                                            int32_t esi_40 = *ecx_153
                                            
                                            if (eax_196 == esi_40
                                                    || *(*(*(arg1 + 0x14) + (eax_196 << 2)) + 0x38)
                                                    == esi_40)
                                                var_14_5 = 1
                                            
                                            ecx_153 = &ecx_153[1]
                                            temp19_1 = edx_53
                                            edx_53 -= 1
                                        while (temp19_1 != 1)
                                    
                                    edi_60 += 1
                                while (edi_60 u< var_c)
                    
                    if (var_14_5 == 0)
                        goto label_4cb3cc
            
            if (var_14_5 == 0)
            label_4cb3cc:
                void* edx_54 = var_c
                int32_t eax_198 = edx_54 << 2
                int32_t esi_41
                int32_t edi_61
                edi_61, esi_41 = __builtin_memcpy(&var_f0, &var_b0, eax_198 u>> 2 << 2)
                __builtin_memcpy(edi_61, esi_41, eax_198 & 3)
                var_f0[edx_54] = eax_167
                var_44 = edx_54 + 1
                
                for (int32_t j_11 = 0; j_11 u< 0xa0; j_11 += 4)
                    int32_t ecx_159 = *(&var_230 + j_11)
                    
                    if (ecx_159 != 0xffffffff)
                        *(&var_190 + j_11) = ecx_159
                    else
                        ecx_159 = *(&var_2d0 + j_11)
                        
                        if (ecx_159 != 0xffffffff)
                            *(&var_190 + j_11) = ecx_159
                
                var_14_5 = 0
                break
        
        esi_24 = var_14_5
        int32_t eax_199 = 0
        
        if (esi_24 == 0)
            int32_t var_24_10 = 0
            
            if (i_29 u> 0)
                do
                    int32_t var_8_9 = 0
                    int32_t ecx_160 = (&__saved_ebp)[eax_199 - 0x5f]
                    
                    if (ecx_160 != (&__saved_ebp)[eax_199 - 0x57])
                        return 1
                    
                    int32_t ecx_161 = (&__saved_ebp)[eax_199 - 0x5b]
                    
                    if (ecx_161 != (&__saved_ebp)[eax_199 - 0x53])
                        return 1
                    
                    int32_t esi_42 = (&__saved_ebp)[eax_199 - 0x4f]
                    
                    if (esi_42 != (&__saved_ebp)[eax_199 - 0x47])
                        return 1
                    
                    int32_t edi_62 = (&__saved_ebp)[eax_199 - 0x4b]
                    
                    if (edi_62 != (&__saved_ebp)[eax_199 - 0x43])
                        return 1
                    
                    int32_t eax_201 = *(arg1 + 0x14)
                    void* ecx_162 = *(eax_201 + (esi_42 << 2))
                    void* edx_56 = *(eax_201 + (edi_62 << 2))
                    int32_t eax_202 = *(arg1 + 0x10)
                    void* ebx_38 = *(eax_202 + (*(ecx_162 + 4) << 2))
                    var_c = nullptr
                    void* ebx_40 = *(eax_202 + (*(edx_56 + 4) << 2))
                    bool p_6
                    
                    if (esi_42 == ecx_161 && (*(ebx_40 + 5) & 1) != 0)
                        long double x87_r7_7 = fconvert.t(-1.0)
                        long double x87_r6_6 = fconvert.t(*(edx_56 + 0x20))
                        x87_r6_6 - x87_r7_7
                        eax_202.w = (x87_r6_6 < x87_r7_7 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_6, x87_r7_7) ? 1 : 0) << 0xa
                            | (x87_r6_6 == x87_r7_7 ? 1 : 0) << 0xe
                        p_6 = unimplemented  {test ah, 0x44}
                    
                    if (esi_42 == ecx_161 && (*(ebx_40 + 5) & 1) != 0 && not(p_6))
                        var_c = 1
                    else if (edi_62 == ecx_161 && (*(ebx_38 + 5) & 1) != 0)
                        long double x87_r7_8 = fconvert.t(-1.0)
                        long double x87_r6_7 = fconvert.t(*(ecx_162 + 0x20))
                        x87_r6_7 - x87_r7_8
                        void* eax_203
                        eax_203.w = (x87_r6_7 < x87_r7_8 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_7, x87_r7_8) ? 1 : 0) << 0xa
                            | (x87_r6_7 == x87_r7_8 ? 1 : 0) << 0xe
                        bool p_7 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_7))
                            var_c = 1
                    
                    bool cond:55_1 = var_c != 0
                    var_20 = &var_170
                    
                    if (not(cond:55_1))
                        void* esi_43 = *(*(arg1 + 0x14) + (ecx_160 << 2))
                        int32_t eax_206 = *(ecx_162 + 0x38)
                        
                        if (eax_206 == ecx_160)
                        label_4cb524:
                            
                            if (*(ecx_162 + 0x3c) == (*(esi_43 + 0x3c) ^ 0x80000)
                                    && (*(ebx_40 + 5) & 1) != 0)
                                long double x87_r7_9 = fconvert.t(1.0)
                                long double x87_r6_8 = fconvert.t(*(edx_56 + 0x20))
                                x87_r6_8 - x87_r7_9
                                int32_t eax_208
                                eax_208.w = (x87_r6_8 < x87_r7_9 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_8, x87_r7_9) ? 1 : 0) << 0xa
                                    | (x87_r6_8 == x87_r7_9 ? 1 : 0) << 0xe
                                bool p_8 = unimplemented  {test ah, 0x44}
                                
                                if (not(p_8))
                                    var_c = 1
                        else if (eax_206 != 0xffffffff && *(esi_43 + 0x38) == eax_206)
                            goto label_4cb524
                        
                        int32_t eax_209 = *(edx_56 + 0x38)
                        bool p_9
                        
                        if ((eax_209 == ecx_160
                                || (eax_209 != 0xffffffff && *(esi_43 + 0x38) == eax_209))
                                && *(edx_56 + 0x3c) == (*(esi_43 + 0x3c) ^ 0x80000)
                                && (*(ebx_38 + 5) & 1) != 0)
                            long double x87_r7_10 = fconvert.t(1.0)
                            long double x87_r6_9 = fconvert.t(*(ecx_162 + 0x20))
                            x87_r6_9 - x87_r7_10
                            void* eax_212
                            eax_212.w = (x87_r6_9 < x87_r7_10 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_9, x87_r7_10) ? 1 : 0) << 0xa
                                | (x87_r6_9 == x87_r7_10 ? 1 : 0) << 0xe
                            p_9 = unimplemented  {test ah, 0x44}
                        
                        int32_t eax_213
                        
                        if ((eax_209 != ecx_160
                                && (eax_209 == 0xffffffff || *(esi_43 + 0x38) != eax_209))
                                || *(edx_56 + 0x3c) != (*(esi_43 + 0x3c) ^ 0x80000)
                                || (*(ebx_38 + 5) & 1) == 0 || p_9)
                            eax_213 = 1
                        else
                            eax_213 = 1
                            var_c = 1
                        
                        var_8_9 = 1
                        
                        if (var_c == 0)
                            return eax_213
                        
                        var_20 = &var_180
                    
                    int32_t ecx_163 = *(arg1 + 0x14)
                    void* eax_217 = *(ecx_163 + ((&__saved_ebp)[var_24_10 - 0x63] << 2))
                    void* edi_64
                    
                    if (var_8_9 == 0)
                        edi_64 = *(ecx_163 + (ecx_160 << 2))
                    else
                        edi_64 = *(ecx_163 + (ecx_161 << 2))
                    
                    int32_t edx_58 = *(arg1 + 0x10)
                    
                    if ((*(*(edx_58 + (*(eax_217 + 4) << 2)) + 5) & 1) == 0)
                        return 1
                    
                    long double x87_r7_11 = fconvert.t(0.0)
                    long double x87_r6_10 = fconvert.t(*(eax_217 + 0x20))
                    x87_r6_10 - x87_r7_11
                    eax_217.w = (x87_r6_10 < x87_r7_11 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_10, x87_r7_11) ? 1 : 0) << 0xa
                        | (x87_r6_10 == x87_r7_11 ? 1 : 0) << 0xe
                    bool p_10 = unimplemented  {test ah, 0x44}
                    
                    if (p_10)
                        return 1
                    
                    if ((*(*(edx_58 + (*(edi_64 + 4) << 2)) + 5) & 1) == 0)
                        return 1
                    
                    long double x87_r7_12 = fconvert.t(1.0)
                    long double x87_r6_11 = fconvert.t(*(edi_64 + 0x20))
                    x87_r6_11 - x87_r7_12
                    void* eax_219
                    eax_219.w = (x87_r6_11 < x87_r7_12 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_11, x87_r7_12) ? 1 : 0) << 0xa
                        | (x87_r6_11 == x87_r7_12 ? 1 : 0) << 0xe
                    bool p_11 = unimplemented  {test ah, 0x44}
                    
                    if (p_11)
                        return 1
                    
                    void* ecx_164 = *(ecx_163 + (*(var_20 + (var_24_10 << 2)) << 2))
                    
                    if (*(ecx_164 + 4) != *(arg1 + 0x88))
                        var_4c = 1
                    
                    int32_t edx_62 = 0
                    
                    if (var_48 u> 0)
                        while (*(ecx_164 + 0x48) != (&var_60)[edx_62])
                            edx_62 += 1
                            
                            if (edx_62 u>= var_48)
                                break
                    
                    if (edx_62 == var_48 && var_4c == 0)
                        (&var_60)[var_48] = *(ecx_164 + 0x48)
                        var_48 += 1
                    
                    eax_199 = var_24_10 + 1
                    var_24_10 = eax_199
                while (eax_199 u< i_29)
            
            goto label_4cb824
    
    bool cond:48_1 = (*(arg1 + 0x6e) & 0x40) == 0
    var_c = nullptr
    void* var_34_7 = nullptr
    int32_t eax_170
    int32_t eax_171
    int16_t top
    
    if (not(cond:48_1))
        int80_t st0_1
        st0_1, eax_170 = sub_4c93f1(arg1, &var_c, &var_f0, &var_44)
        top = 0xffff
        
        if (eax_170 != 0)
            eax_171 = sub_4c99ed(arg1, &var_c, &var_f0, &var_44)
    
    void* edx_63
    
    if (cond:48_1 || (eax_170 != 0 && eax_171 != 0))
        void* eax_221 = *(arg1 + 0x100)
        edx_63 = eax_221
        var_44 = 1
        var_f0[0] = eax_221
        var_c = edx_63
    else
        edx_63 = var_c
        var_34_7 = edx_63
    
    if (edx_63 == 0)
        goto label_4cb813
    
    int32_t eax_222 = *edx_63
    
    if ((eax_222 & 0xfff00000) != 0x70b00000)
        goto label_4cb813
    
    int32_t i_34 = eax_222 & 0xfffff
    i_29 = i_34
    int32_t eax_223 = i_34 << 2
    int32_t var_10_1 = 0
    int32_t* var_8_10 = nullptr
    int32_t var_3c_7 = eax_223
    
    while (true)
        int32_t var_24_11 = 0
        
        if (i_29 u> 0)
            int32_t edx_64 = *(edx_63 + 8)
            int32_t esi_47 = *(arg1 + 0x14)
            int32_t* edi_67 = var_8_10
            int32_t* var_1c_10 = eax_223 + edx_64
            bool cond:45_1
            
            do
                void* ecx_172 = *(esi_47 + (*(edi_67 + edx_64) << 2))
                void* eax_228 = *(esi_47 + (*var_1c_10 << 2))
                bool cond:35_1
                
                if ((*(ecx_172 + 0x3e) & 8) == 0)
                    cond:35_1 = (*ecx_172 & 4) == 0
                else
                    cond:35_1 = (*ecx_172 & 8) == 0
                
                if (cond:35_1)
                    break
                
                if ((*(*(*(arg1 + 0x10) + (*(eax_228 + 4) << 2)) + 5) & 1) == 0)
                    break
                
                unimplemented  {fld st0, qword [0xb0d850]}
                unimplemented  {fld st0, qword [ebx+0x20]}
                unimplemented  {fucompp } f- unimplemented  {fucompp }
                bool c0_12 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                bool c2_12 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                bool c3_12 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                unimplemented  {fucompp }
                unimplemented  {fucompp }
                void* eax_230
                eax_230.w = (c0_12 ? 1 : 0) << 8 | (c2_12 ? 1 : 0) << 0xa | (c3_12 ? 1 : 0) << 0xe
                    | (top & 7) << 0xb
                bool p_12 = unimplemented  {test ah, 0x44}
                
                if (p_12)
                    break
                
                if (*(eax_228 + 8) != 0xffffffff)
                    break
                
                int32_t ecx_173 = *(ecx_172 + 4)
                var_70[var_24_11] = *(edi_67 + *(var_c + 8))
                
                if (ecx_173 != *(arg1 + 0x88))
                    var_4c = 1
                
                var_1c_10 = &var_1c_10[1]
                edi_67 = &edi_67[1]
                cond:45_1 = var_24_11 + 1 u< i_29
                var_24_11 += 1
            while (cond:45_1)
        
        if (var_24_11 == i_29)
            if (i_29 u> 0)
                int32_t esi_48 = *(arg1 + 0x14)
                int32_t* ecx_177 = *(var_c + 8) + ((var_10_1 * i_29) << 2)
                int32_t i_28 = i_29
                int32_t i_13
                
                do
                    void* eax_239 = *(esi_48 + (*ecx_177 << 2))
                    
                    if (*(eax_239 + 0x38) != 0xffffffff)
                        var_4c = 1
                    else
                        int32_t edx_67 = 0
                        
                        if (var_48 u> 0)
                            while (*(eax_239 + 0x48) != (&var_60)[edx_67])
                                edx_67 += 1
                                
                                if (edx_67 u>= var_48)
                                    break
                        
                        if (edx_67 == var_48 && var_4c == 0)
                            int32_t edx_68 = var_48
                            var_48 += 1
                            (&var_60)[edx_68] = *(eax_239 + 0x48)
                    
                    ecx_177 = &ecx_177[1]
                    i_13 = i_28
                    i_28 -= 1
                while (i_13 != 1)
            
            break
        
        var_10_1 += 1
        var_8_10 = &var_8_10[i_29]
        eax_223 = var_3c_7 + (neg.d(i_34) << 2)
        var_3c_7 = eax_223
        
        if (var_10_1 u>= 2)
            break
        
        edx_63 = var_c
    
    if (var_10_1 != 2)
        var_20 = &var_70
        esi_24 = 0
    label_4cb813:
        
        if (var_34_7 != 0)
            sub_46cb59(var_34_7, 1)
        
    label_4cb81c:
        
        if (esi_24 != 0)
            return esi_24
        
    label_4cb824:
        int32_t var_8_11 = 0
        
        if (var_48 u<= 0)
        label_4cb8a6:
            int32_t edx_70 = 0
            
            if (var_4c == 0)
                int32_t edi_70 = 0
                int32_t ebx_47 = 0xffffffff
                
                if (i_29 u> 0)
                    do
                        void* eax_248 = *(*(arg1 + 0x14) + (*(var_20 + (edx_70 << 2)) << 2))
                        int32_t ecx_185 = *(eax_248 + 0x58)
                        
                        if (edi_70 u< ecx_185)
                            edi_70 = ecx_185
                        
                        int32_t eax_249 = *(eax_248 + 0x54)
                        
                        if (ebx_47 u> eax_249)
                            ebx_47 = eax_249
                        
                        edx_70 += 1
                    while (edx_70 u< i_29)
                
                int32_t i_32 = *(arg1 + 0xc)
                
                if (i_32 u> 0)
                    int32_t* var_1c_12 = *(arg1 + 0x18)
                    int32_t i_20 = i_32
                    int32_t i_14
                    
                    do
                        int32_t* j_12 = *var_1c_12
                        
                        if (*j_12 != 0)
                            int32_t ecx_188 = 0
                            void* temp2_1 = var_44
                            bool cond:27_1 = 0 != temp2_1
                            
                            if (0 u< temp2_1)
                                while (j_12 != var_f0[ecx_188])
                                    ecx_188 += 1
                                    
                                    if (ecx_188 u>= var_44)
                                        break
                                
                                cond:27_1 = ecx_188 != var_44
                            
                            if (not(cond:27_1))
                                int32_t j_19 = j_12[1]
                                
                                if (j_19 u> 0)
                                    int32_t* eax_252 = j_12[2]
                                    int32_t j_14 = j_19
                                    int32_t j_13
                                    
                                    do
                                        int32_t ecx_189 = *eax_252
                                        int32_t esi_50 = 0
                                        
                                        if (i_29 u> 0)
                                            do
                                                int32_t edi_72 = *(var_20 + (esi_50 << 2))
                                                
                                                if (edi_72 == ecx_189 ||
                                                        *(*(*(arg1 + 0x14) + (ecx_189 << 2)) + 0x38)
                                                        == edi_72)
                                                    var_4c = 1
                                                
                                                esi_50 += 1
                                            while (esi_50 u< i_29)
                                        
                                        eax_252 = &eax_252[1]
                                        j_13 = j_14
                                        j_14 -= 1
                                    while (j_13 != 1)
                        
                        var_1c_12 = &var_1c_12[1]
                        i_14 = i_20
                        i_20 -= 1
                    while (i_14 != 1)
                
                if (i_32 u<= 0 || var_4c == 0)
                    int32_t eax_265 = 0
                    int32_t var_3c_8 = 0
                    
                    if (var_48 u> 0)
                        do
                            void* eax_267 = *(*(arg1 + 0x18) + ((&var_60)[eax_265] << 2))
                            int32_t ecx_210 = *(*(arg1 + 0x100) + 0xc)
                            void* esi_57 = nullptr
                            var_c = nullptr
                            
                            if (ecx_210 u> 0)
                                do
                                    int32_t i_15 = 0
                                    int32_t i_21 = 0
                                    
                                    if (*(eax_267 + 0xc) u> 0)
                                        void* esi_58 = var_20 + (esi_57 << 2)
                                        
                                        do
                                            if (*(*(eax_267 + 0x10) + (i_15 << 2)) == *esi_58)
                                                *(*(eax_267 + 0x10) + (i_21 << 2)) =
                                                    *(*(*(arg1 + 0x100) + 0x10) + (var_c << 2))
                                                i_15 = i_21
                                                void* ecx_219 = *(*(arg1 + 0x14)
                                                    + (*(*(eax_267 + 0x10) + (i_15 << 2)) << 2))
                                                *(ecx_219 + 0x3d) |= 2
                                            
                                            i_15 += 1
                                            i_21 = i_15
                                        while (i_15 u< *(eax_267 + 0xc))
                                    
                                    esi_57 = var_c + 1
                                    var_c = esi_57
                                while (esi_57 u< ecx_210)
                            
                            eax_265 = var_3c_8 + 1
                            var_3c_8 = eax_265
                        while (eax_265 u< var_48)
                    
                    int32_t eax_269 = 0
                    
                    if (var_44 u> 0)
                        do
                            *var_f0[eax_269] = 0
                            eax_269 += 1
                        while (eax_269 u< var_44)
                    
                    return 0
        else
            while (true)
                int32_t eax_242 = (&var_60)[var_8_11]
                
                if (eax_242 == 0xffffffff)
                    break
                
                int32_t* eax_243 = *(*(arg1 + 0x18) + (eax_242 << 2))
                
                if ((*eax_243 & 0xf0000000) == 0x60000000)
                    break
                
                int32_t i_33 = eax_243[3]
                int32_t edx_69 = 0
                int32_t var_1c_11 = 0
                
                if (i_29 u> 0)
                    do
                        if (i_33 u> 0)
                            int32_t* ecx_184 = eax_243[4]
                            int32_t i_18 = i_33
                            int32_t i_16
                            
                            do
                                if (*ecx_184 == *(var_20 + (edx_69 << 2)))
                                    var_1c_11 += 1
                                
                                ecx_184 = &ecx_184[1]
                                i_16 = i_18
                                i_18 -= 1
                            while (i_16 != 1)
                        
                        edx_69 += 1
                    while (edx_69 u< i_29)
                
                if (var_1c_11 != i_33)
                    var_4c = 1
                    goto label_4cb8a6
                
                var_8_11 += 1
                
                if (var_8_11 u>= var_48)
                    goto label_4cb8a6
        
        void* eax_253 = sub_49ec23(0x74)
        int32_t* ebx_49
        
        if (eax_253 == 0)
            ebx_49 = nullptr
        else
            ebx_49 = sub_49e789(eax_253)
        
        if (ebx_49 != 0)
            esi_24 = sub_49ec6e(ebx_49, (i_29 & 0xfffff) | 0x10000000, i_29, i_29, 0)
            int32_t* ecx_192 = ebx_49
            
            if (esi_24 s>= 0)
                esi_24 = sub_49e7bf(ecx_192, *(arg1 + 0x100))
                
                if (esi_24 s>= 0)
                    int32_t eax_262 = i_29 << 2
                    int32_t esi_52
                    int32_t edi_74
                    edi_74, esi_52 = __builtin_memcpy(ebx_49[2], var_20, eax_262 u>> 2 << 2)
                    __builtin_memcpy(edi_74, esi_52, eax_262 & 3)
                    void* eax_263 = arg1
                    int32_t esi_54
                    int32_t edi_76
                    edi_76, esi_54 = __builtin_memcpy(ebx_49[4], *(*(eax_263 + 0x100) + 0x10), 
                        eax_262 u>> 2 << 2)
                    __builtin_memcpy(edi_76, esi_54, eax_262 & 3)
                    int32_t edx_76 = 0
                    
                    if (i_29 u> 0)
                        do
                            void* ecx_203 =
                                *(*(eax_263 + 0x14) + (*(ebx_49[4] + (edx_76 << 2)) << 2))
                            *(ecx_203 + 0x3d) |= 2
                            edx_76 += 1
                        while (edx_76 u< i_29)
                    
                    int32_t ecx_204 = 0
                    
                    if (var_44 u> 0)
                        bool cond:37_1
                        
                        do
                            int32_t* edx_77 = var_f0[ecx_204]
                            ecx_204 += 1
                            cond:37_1 = ecx_204 u< var_44
                            *edx_77 = 0
                        while (cond:37_1)
                    
                    void* esi_56 = eax_263 + 0xfc
                    void* ecx_206 = *(*(eax_263 + 0x18) + (*esi_56 << 2))
                    
                    if (ecx_206 != 0)
                        sub_46cb59(ecx_206, 1)
                        eax_263 = arg1
                    
                    *(*(eax_263 + 0x18) + (*esi_56 << 2)) = ebx_49
                    return 0
                
                ecx_192 = ebx_49
            
            sub_46cb59(ecx_192, 1)
            return esi_24
else
    void* var_8_1 = var_8 & eax_73
    var_c &= eax_73
    int32_t (* edi_22)[0x4] = &var_180
    void* ebx_9
    
    while (true)
        int32_t var_24_4 = 0
        
        if (i_29 u> 0)
            int32_t (* esi_14)[0x4] = edi_22
            int32_t i_19 = i_29
            int32_t i_17
            
            do
                void* eax_77 = *(*(arg1 + 0x14) + (*esi_14 << 2))
                
                if ((*(*(*(arg1 + 0x10) + (*(eax_77 + 4) << 2)) + 5) & 1) == 0
                        || *(eax_77 + 8) != 0xffffffff)
                    var_24_4 = 1
                else
                    long double x87_r7_1 = float.t(var_1c)
                    long double x87_r6_1 = fconvert.t(*(eax_77 + 0x20))
                    x87_r6_1 - x87_r7_1
                    eax_77.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
                    bool p_1 = unimplemented  {test ah, 0x44}
                    
                    if (p_1)
                        var_24_4 = 1
                
                esi_14 = &(*esi_14)[1]
                i_17 = i_19
                i_19 -= 1
            while (i_17 != 1)
            
            if (var_24_4 != 0)
                var_c += 1
                edi_22 = &edi_22[1]
                
                if (var_c u< 2)
                    continue
                
                ebx_9 = var_8_1
                break
        
        ebx_9 = &var_170 - (var_c << 4)
        var_8_1 = ebx_9
        break
    
    int32_t esi_15 = 0
    int32_t var_34_3 = 0
    
    if (i_29 u> 0)
        do
            void* eax_82 = *(*(arg1 + 0x14) + (var_190[esi_15] << 2))
            
            if ((*(*(*(arg1 + 0x10) + (*(eax_82 + 4) << 2)) + 5) & 1) != 0
                    && *(eax_82 + 8) == 0xffffffff)
                long double x87_r7_2 = float.t(var_1c)
                long double x87_r6_2 = fconvert.t(*(eax_82 + 0x20))
                x87_r6_2 - x87_r7_2
                eax_82.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (not(p_2))
                    var_34_3 = 1
            
            esi_15 += 1
        while (esi_15 u< i_29)
        
        if (var_34_3 != 0)
            ebx_9 = nullptr
            var_8_1 = nullptr
    
    int32_t edx_20 = 0
    
    if (ebx_9 != 0)
        if (i_29 u> 0)
            int32_t esi_16 = *(arg1 + 0x14)
            int32_t edi_25 = var_48
            
            do
                void* eax_85 = *(esi_16 + (*(ebx_9 + (edx_20 << 2)) << 2))
                int32_t ecx_56 = 0
                
                if (edi_25 u> 0)
                    while (*(eax_85 + 0x48) != (&var_60)[ecx_56])
                        ecx_56 += 1
                        
                        if (ecx_56 u>= edi_25)
                            break
                    
                    ebx_9 = var_8_1
                
                if (ecx_56 == edi_25)
                    (&var_60)[edi_25] = *(eax_85 + 0x48)
                    edi_25 += 1
                
                edx_20 += 1
            while (edx_20 u< i_29)
            
            var_48 = edi_25
        
        var_20 = ebx_9
        goto label_4cb824
return 1

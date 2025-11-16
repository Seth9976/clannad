// 函数: sub_4c7be2
// 地址: 0x4c7be2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
int32_t edi
int32_t var_28 = edi
uint32_t var_14 = 0
int32_t var_1c = 0

if (*(arg1 + 4) u> 0)
    do
        void* eax_2 = *(*(arg1 + 0x10) + (i << 2))
        int32_t edx_1 = *(eax_2 + 4)
        *(eax_2 + 0x10) = 0
        
        if ((edx_1:1.b & 4) == 0)
            int32_t j = 0
            *(eax_2 + 8) = 0
            
            if (*(arg1 + 8) u> 0)
                do
                    void* ecx_1 = *(*(arg1 + 0x14) + (j << 2))
                    
                    if (*(ecx_1 + 4) == i)
                        int32_t ecx_3 = *(ecx_1 + 0xc) + 1
                        
                        if (ecx_3 u> *(eax_2 + 8))
                            *(eax_2 + 8) = ecx_3
                    
                    j += 1
                while (j u< *(arg1 + 8))
            
            if ((edx_1:1.b & 1) != 0 && (edx_1:1.b & 8) == 0)
                *(eax_2 + 4) = edx_1 & 0xffffffbf
            
            int32_t ecx_4 = *(eax_2 + 4)
            
            if ((ecx_4.b & 0x10) != 0 && (ecx_4:1.b & 0xa) == 0)
                *(eax_2 + 4) = ecx_4 & 0xffffffbf
            
            int32_t ecx_6 = *(eax_2 + 4)
            
            if (ecx_6.b s< 0 && (ecx_6:1.b & 8) == 0 && *(eax_2 + 8) == 1)
                *(eax_2 + 4) = ecx_6 & 0xffffffbf
        
        i += 1
    while (i u< *(arg1 + 4))

int32_t edi_2 = arg3 << 3
int32_t eax_3 = sub_745f3f(edi_2)
int32_t result

if (eax_3 == 0)
label_4c8183:
    result = 0x8007000e
else
    int32_t var_8_1 = 0
    __builtin_memset(__builtin_memset(eax_3, 0, edi_2 u>> 2 << 2), 0, edi_2 & 3)
    int32_t var_30_5
    char* var_2c_10
    char* var_18
    
    if (*(arg1 + 4) u<= 0)
    label_4c7dda:
        int32_t i_10 = *(arg1 + 4)
        int32_t var_8_2 = 0
        
        if (i_10 u> 0)
            int32_t* edx_4 = *(arg1 + 0x10)
            int32_t i_9 = i_10
            int32_t i_1
            
            do
                void* eax_23 = *edx_4
                int32_t ecx_24 = *(eax_23 + 4)
                
                if ((ecx_24 & arg4) == arg4 && (arg5 & ecx_24) == 0 && (ecx_24.b & 0x40) != 0
                        && (ecx_24:1.b & 8) == 0 && *(eax_23 + 8) != 0)
                    var_8_2 += 1
                
                edx_4 = &edx_4[1]
                i_1 = i_9
                i_9 -= 1
            while (i_1 != 1)
        
        uint32_t eax_26 = sub_745f3f(var_8_2 << 2)
        int32_t i_2 = 0
        var_14 = eax_26
        
        if (eax_26 == 0)
        label_4c8183_1:
            result = 0x8007000e
        else
            int32_t var_8_3 = 0
            
            if (*(arg1 + 4) u> 0)
                do
                    void* eax_28 = *(*(arg1 + 0x10) + (i_2 << 2))
                    int32_t edx_5 = *(eax_28 + 4)
                    
                    if ((edx_5 & arg4) == arg4 && (arg5 & edx_5) == 0 && (edx_5.b & 0x40) != 0
                            && (edx_5:1.b & 8) == 0 && *(eax_28 + 8) != 0)
                        int32_t edx_6 = var_8_3
                        var_8_3 += 1
                        *(var_14 + (edx_6 << 2)) = i_2
                    
                    i_2 += 1
                while (i_2 u< *(arg1 + 4))
            
            sub_458e55(sub_4c70b8, var_14, var_8_3, arg1)
            var_18 = nullptr
            
            if (var_8_3 u<= 0)
            label_4c7fbb:
                int32_t i_3 = 0
                
                if (*(arg1 + 8) u> 0)
                    do
                        void* eax_43 = *(*(arg1 + 0x14) + (i_3 << 2))
                        *(eax_43 + 0xc) += *(*(*(arg1 + 0x10) + (*(eax_43 + 4) << 2)) + 0x10)
                        i_3 += 1
                    while (i_3 u< *(arg1 + 8))
                
                int32_t i_4 = 0
                
                if (*(arg1 + 4) u> 0)
                    do
                        void* eax_45 = *(*(arg1 + 0x10) + (i_4 << 2))
                        *(eax_45 + 8) += *(eax_45 + 0x10)
                        i_4 += 1
                        *(eax_45 + 0x10) = 0
                    while (i_4 u< *(arg1 + 4))
                
                int32_t i_5 = 0
                
                if (*(arg1 + 4) u> 0)
                    do
                        void* edi_12 = *(*(arg1 + 0x10) + (i_5 << 2))
                        int32_t eax_47 = *(edi_12 + 4)
                        
                        if ((eax_47 & arg4) == arg4 && (arg5 & eax_47) == 0
                                && (eax_47.b & 0x40) == 0 && (eax_47:1.b & 8) == 0)
                            int32_t eax_48 = *(edi_12 + 8)
                            
                            if (eax_48 != 0)
                                int32_t eax_50 = sub_745f3f(eax_48 << 2)
                                var_1c = eax_50
                                
                                if (eax_50 == 0)
                                    goto label_4c8183_1
                                
                                int32_t ecx_36 = *(edi_12 + 8) << 2
                                __builtin_memset(
                                    __builtin_memset(eax_50, 0xffffffff, ecx_36 u>> 2 << 2), 0xff, 
                                    ecx_36 & 3)
                                int32_t var_10_4 = 0
                                
                                if (*(arg1 + 8) u> 0)
                                    void* eax_52
                                    
                                    while (true)
                                        eax_52 = *(*(arg1 + 0x14) + (var_10_4 << 2))
                                        
                                        if (*(eax_52 + 4) == i_5)
                                            if (*(eax_50 + (*(eax_52 + 0xc) << 2)) == 0xffffffff)
                                                int32_t ecx_43 = 0
                                                
                                                if (arg3 u<= 0)
                                                    break
                                                
                                                while (*(eax_3 + (ecx_43 << 3)) != 0)
                                                    ecx_43 += 1
                                                    
                                                    if (ecx_43 u>= arg3)
                                                        break
                                                
                                                if (ecx_43 u>= arg3)
                                                    break
                                                
                                                int32_t* edi_16 = eax_3 + (ecx_43 << 3)
                                                *edi_16 = i_5
                                                edi_16[1] = *(eax_52 + 0xc)
                                                *(eax_50 + (*(eax_52 + 0xc) << 2)) = ecx_43
                                            
                                            *(eax_52 + 0xc) = *(eax_50 + (*(eax_52 + 0xc) << 2))
                                        
                                        var_10_4 += 1
                                        
                                        if (var_10_4 u>= *(arg1 + 8))
                                            goto label_4c80e8
                                    
                                    eax_52.b = arg6
                                    
                                    if (eax_52.b == 0x76)
                                        goto label_4c8194
                                    
                                    if (eax_52.b == 0x63)
                                        goto label_4c81a4
                                    
                                    if (eax_52.b == 0x73)
                                        goto label_4c81b4
                                    
                                    if (eax_52.b == 0x62)
                                        goto label_4c81c4
                                    
                                    if (eax_52.b != 0x69)
                                        goto label_4c81e9_2
                                    
                                    var_2c_10 = "maximum iterator register index exceeded - Try "
                                    "reducing number of loops and depth of loops"
                                    goto label_4c81d9
                                
                            label_4c80e8:
                                j__free(eax_50)
                                var_1c = 0
                        
                        i_5 += 1
                    while (i_5 u< *(arg1 + 4))
                
                if (arg2 != 0xffffffff)
                    int32_t i_6 = 0
                    
                    if (*(arg1 + 8) u> 0)
                        do
                            void* eax_56 = *(*(arg1 + 0x14) + (i_6 << 2))
                            int32_t ecx_49 = *(*(*(arg1 + 0x10) + (*(eax_56 + 4) << 2)) + 4)
                            
                            if ((ecx_49 & arg4) == arg4 && (arg5 & ecx_49) == 0)
                                if ((ecx_49:1.b & 1) == 0)
                                    *(eax_56 + 4) = arg2
                                else if ((ecx_49 & 0x40000) != 0)
                                    *(eax_56 + 4) = *(arg1 + 0x184)
                                else if ((ecx_49:1.b & 8) == 0)
                                    *(eax_56 + 4) = *(arg1 + 0x78)
                            
                            i_6 += 1
                        while (i_6 u< *(arg1 + 8))
                    
                    *(*(*(arg1 + 0x10) + (arg2 << 2)) + 0x10) = 0
                    *(*(*(arg1 + 0x10) + (arg2 << 2)) + 8) = arg3
                    
                    if (arg2 == *(arg1 + 0x7c))
                        *(*(*(arg1 + 0x10) + (*(arg1 + 0x78) << 2)) + 0x10) = 0
                        *(*(*(arg1 + 0x10) + (*(arg1 + 0x78) << 2)) + 8) = arg3
                
                result = 0
            else
                int32_t* var_10_3 = var_14
                int32_t eax_32
                
                while (true)
                    void* ecx_26 = *(*(arg1 + 0x10) + (*var_10_3 << 2))
                    eax_32 = 0
                    
                    if (arg3 u> 0)
                        while (true)
                            if (eax_32 u< arg3 && *(eax_3 + (eax_32 << 3)) != 0)
                                eax_32 += 1
                                continue
                            
                            int32_t edx_9 = eax_32
                            
                            if (eax_32 u< arg3)
                                while (*(eax_3 + (edx_9 << 3)) == 0)
                                    edx_9 += 1
                                    
                                    if (edx_9 u>= arg3)
                                        break
                            
                            if (edx_9 - eax_32 u>= *(ecx_26 + 8))
                                break
                            
                            eax_32 = edx_9
                            
                            if (edx_9 u>= arg3)
                                break
                    
                    int32_t edx_10 = *(ecx_26 + 8)
                    
                    if (edx_10 + eax_32 u> arg3)
                        break
                    
                    int32_t i_7 = 0
                    
                    if (edx_10 u> 0)
                        void* edx_12 = eax_3 + (eax_32 << 3)
                        
                        do
                            int32_t ebx_10 = *var_10_3
                            *(edx_12 + 4) = i_7
                            *edx_12 = ebx_10
                            i_7 += 1
                            edx_12 += 8
                        while (i_7 u< *(ecx_26 + 8))
                    
                    var_18 = &var_18[1]
                    var_10_3 = &var_10_3[1]
                    *(ecx_26 + 0x10) = eax_32
                    
                    if (var_18 u>= var_8_3)
                        goto label_4c7fbb
                
                eax_32.b = arg6
                
                if (eax_32.b == 0x76)
                label_4c8194:
                    var_2c_10 = "maximum input register index exceeded"
                    var_30_5 = 0x119a
                label_4c81e1:
                    sub_4a4100(arg1, nullptr, var_30_5, var_2c_10)
                label_4c81e9:
                    result = 0x80004005
                else
                    if (eax_32.b == 0x63)
                    label_4c81a4:
                        var_2c_10 = "maximum constant register index exceeded - Try reducing number "
                        "of constants referenced"
                        var_30_5 = 0x119b
                        goto label_4c81e1
                    
                    if (eax_32.b == 0x73)
                    label_4c81b4:
                        var_2c_10 = "maximum sampler register index exceeded"
                        var_30_5 = 0x11c2
                        goto label_4c81e1
                    
                    if (eax_32.b == 0x62)
                        goto label_4c81c4
                    
                    if (eax_32.b == 0x69)
                    label_4c817c:
                        var_2c_10 = "
                            maximum iterator register index exceeded - Try reducing number of loops"
                    label_4c81d9:
                        var_30_5 = 0x11c7
                        goto label_4c81e1
                    
                label_4c81e9_1:
                    result = 0x80004005
    else
        int32_t var_10_2
        int32_t* edi_5
        
        while (true)
            edi_5 = *(*(arg1 + 0x10) + (var_8_1 << 2))
            int32_t eax_5 = edi_5[1]
            
            if ((eax_5 & arg4) == arg4 && (arg5 & eax_5) == 0 && (eax_5.b & 0x40) != 0
                    && (eax_5:1.b & 8) != 0 && edi_5[2] != 0)
                edi_5[4] = 0xffffffff
                result = sub_4c7b3b(arg1, *edi_5, &var_18, arg6, var_8_1)
                
                if (result s< 0)
                    goto label_4c8243
                
                char* ebx = var_18
                
                if (ebx != 0 && sx.d(arg6) == _tolower(sx.d(*ebx)) && _isdigit(sx.d(ebx[1])) != 0)
                    void* ebx_1 = &ebx[2]
                    
                    while (_isdigit(sx.d(*ebx_1)) != 0)
                        ebx_1 += 1
                    
                    ebx_1.b = *ebx_1
                    
                    if (ebx_1.b == 0 || ebx_1.b == 0x3b)
                        void* var_2c_5 = &ebx[1]
                        edi_5[4] = sub_75efed()
                
                if (edi_5[4] u>= arg3)
                    int32_t ecx_27 = *(arg1 + 8)
                    void* const edx_7 = nullptr
                    
                    if (ecx_27 u> 0)
                        void** eax_33 = *(arg1 + 0x14)
                        arg3 = ecx_27
                        int32_t i_8
                        
                        do
                            void* ecx_28 = *eax_33
                            
                            if (*(ecx_28 + 4) == var_8_1)
                                edx_7 = ecx_28
                            
                            eax_33 = &eax_33[1]
                            i_8 = arg3
                            arg3 -= 1
                        while (i_8 != 1)
                    
                    void* const eax_34
                    
                    if (ecx_27 u<= 0 || edx_7 == 0)
                        eax_34 = nullptr
                    else
                        eax_34 = *(edx_7 + 0x60)
                    
                    int32_t var_2c_9 = sx.d(arg6)
                    int32_t var_30_4 = *edi_5
                    sub_4a4100(arg1, eax_34, 0x119d, 
                        "invalid register semantic '%s', or variable must be bound to multiple register "
                    "banks (%c register binding required)")
                    goto label_4c81e9_2
                
                var_10_2 = 0
                
                if (edi_5[2] u> 0)
                    break
            
        label_4c7dcb:
            var_8_1 += 1
            
            if (var_8_1 u>= *(arg1 + 4))
                goto label_4c7dda
        
        while (true)
            int32_t eax_17 = edi_5[4] + var_10_2
            
            if (eax_17 u>= arg3)
                break
            
            int32_t* ebx_2 = eax_3 + (eax_17 << 3)
            
            if (*ebx_2 != 0)
                int32_t var_2c_6 = eax_17
                int32_t var_30_2 = sx.d(arg6)
                sub_4a4100(arg1, nullptr, 0x1194, 
                    "overlapping register semantics not yet implemented '%c%u'")
            
            *ebx_2 = var_8_1
            ebx_2[1] = var_10_2
            bool cond:9_1 = var_10_2 + 1 u< edi_5[2]
            var_10_2 += 1
            
            if (not(cond:9_1))
                goto label_4c7dcb
        
        int32_t eax_35 = sx.d(arg6)
        
        if (eax_35 == 0x62)
        label_4c81c4:
            var_2c_10 =
                "maximum boolean register index exceeded - Try reducing number of constant branches"
            var_30_5 = 0x11c6
            goto label_4c81e1
        
        if (eax_35 == 0x63)
            goto label_4c81a4
        
        if (eax_35 == 0x69)
            goto label_4c817c
        
        if (eax_35 == 0x73)
            var_2c_10 = "maximum sampler register index exceeded"
            var_30_5 = 0x119e
            goto label_4c81e1
        
        if (eax_35 == 0x76)
            goto label_4c8194
        
    label_4c81e9_2:
        result = 0x80004005

label_4c8243:
j__free(eax_3)
j__free(var_14)
j__free(var_1c)
return result

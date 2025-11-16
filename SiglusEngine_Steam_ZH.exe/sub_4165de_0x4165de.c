// 函数: sub_4165de
// 地址: 0x4165de
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg3 u< 4)
    return 0x80004005

int32_t* i_2 = arg2
int32_t eax = *i_2
int32_t* i_4 = i_2

if (arg3 u>= eax)
    if (eax == 0xc)
        int32_t var_84_1 = sx.d(i_2[1].w)
        int32_t var_80_1 = sx.d(*(i_2 + 6))
        int32_t eax_2
        eax_2.w = i_2[2].w
        int16_t var_7c_1 = eax_2.w
        eax_2.w = *(i_2 + 0xa)
        int32_t var_88
        i_2 = &var_88
        var_88 = 0xc
        int16_t var_7a_1 = eax_2.w
        int32_t var_78
        __builtin_memset(&var_78, 0, 0x18)
        i_4 = &var_88
    label_416663:
        int32_t i_6 = i_2[1]
        int32_t eax_3 = i_2[2]
        
        if (eax_3 s<= 0)
            eax_3 = neg.d(eax_3)
        
        int32_t edi
        int32_t var_a4_1 = edi
        int32_t edi_1 = *i_2
        int16_t edx_1 = *(i_2 + 0xe)
        int32_t ecx
        ecx.b = edi_1 != 0xc
        int32_t eax_4 = i_2[8]
        int32_t var_c_1 = ecx + 3
        
        if (edx_1 u<= 8 && eax_4 == 0)
            int32_t ecx_1
            ecx_1.b = edx_1.b
            eax_4 = (eax_4 + 1) << ecx_1.b
        
        void* ecx_4 = var_c_1 * eax_4 + edi_1
        void* var_24_1 = ecx_4
        int32_t result
        
        if (ecx_4 u> arg3 || i_2[3].w != 1)
        labelid_8:
            result = 0x80004005
        else
            int32_t eax_6 = i_2[4]
            int32_t var_34
            char var_2c_1
            int32_t var_28
            int32_t var_14
            int32_t var_10
            int32_t var_8_1
            
            if (eax_6 u<= 2)
                uint32_t eax_10 = zx.d(edx_1)
                var_2c_1 = eax_10.b
                
                if (eax_10 == 1 || eax_10 == 4 || eax_10 == 8)
                    var_8_1 = 0x29
                label_416a49:
                    
                    if (arg1[0x10] == 0 || var_8_1 != 0x29)
                    label_416aff:
                        uint32_t eax_22 = zx.d(*(i_2 + 0xe))
                        int32_t i_7
                        int32_t i_8
                        
                        if (eax_22 == 1)
                            i_7 = i_6
                            i_8 = (i_6 + 7) u>> 3
                        else if (eax_22 == 4)
                            i_7 = i_6
                            i_8 = (i_6 + 1) u>> 1
                        else
                            i_8 = (eax_22 u>> 3) * i_6
                            i_7 = i_8
                        
                        if (var_8_1 == 0x74)
                            i_7 = i_6 << 4
                        
                        int32_t edx_11 = i_2[4]
                        int32_t ecx_16 = (i_8 + 3) & 0xfffffffc
                        int32_t edx_12
                        
                        if (edx_11 == 0 || edx_11 == 3)
                            edx_12 = eax_3
                            
                            if ((edx_12 - 1) * ecx_16 + i_8 + var_24_1 u<= arg3)
                                goto label_416b79
                            
                        labelid_8:
                            result = 0x80004005
                        else
                            edx_12 = eax_3
                        label_416b79:
                            
                            if (i_2[4] == 0 && var_8_1 == 0x16)
                                int32_t var_1c_1 = 0
                                
                                if (edx_12 u> 0)
                                    void* var_c_2 = var_24_1 + arg2
                                    
                                    do
                                        int32_t eax_29 = 0
                                        
                                        if (i_6 u> 0)
                                            do
                                                if ((*(var_c_2 + (eax_29 << 2) + 3) & 0xff) != 0)
                                                    var_8_1 = 0x15
                                                    break
                                                
                                                eax_29 += 1
                                            while (eax_29 u< i_6)
                                            
                                            if (eax_29 u< i_6)
                                                break
                                        
                                        var_1c_1 += 1
                                        var_c_2 += ecx_16
                                    while (var_1c_1 u< edx_12)
                            
                            arg1[0xd] = 0
                            int32_t eax_32 = (i_7 + 3) & 0xfffffffc
                            bool cond:10_1 = arg1[0x10] == 0
                            *arg1 = var_8_1
                            arg1[0xc] = eax_32
                            arg1[3] = i_6
                            arg1[4] = edx_12
                            arg1[5] = 1
                            
                            if (cond:10_1)
                                result = 0
                            else
                                int32_t ecx_18 = i_2[4]
                                
                                if (ecx_18 == 0)
                                    if (i_2[2] s>= 0 || *(i_2 + 0xe) u< 8 || var_8_1 == 0x74)
                                        goto label_416c22
                                    
                                    goto label_416c0d
                                
                                if (ecx_18 != 3 || i_2[2] s>= 0 || *(i_2 + 0xe) u< 8
                                    || var_8_1 == 0x74)
                                label_416c22:
                                    arg1[0xe] = 1
                                    uint32_t edi_13 = sub_745f3f(eax_32 * eax_3)
                                    uint32_t var_1c_2 = edi_13
                                    arg1[1] = edi_13
                                    
                                    if (edi_13 == 0)
                                        result = 0x8007000e
                                    else
                                        int32_t esi_1 = arg1[0xc]
                                        void* eax_37 = var_24_1 + arg2
                                        uint32_t ecx_23 = arg2 + arg3
                                        void* var_3c_1 = eax_37
                                        void* var_40_1 = eax_37
                                        int32_t var_c_3
                                        uint32_t edx_14
                                        
                                        if (i_2[2] s>= 0)
                                            var_c_3 = neg.d(esi_1)
                                            edx_14 = (eax_3 - 1) * esi_1 + edi_13
                                        else
                                            var_c_3 = esi_1
                                            edx_14 = edi_13
                                        
                                        int32_t ecx_26 = i_2[4]
                                        uint32_t esi_3 = esi_1 * eax_3 + edi_13
                                        arg3 = edx_14
                                        
                                        if (ecx_26 != 2)
                                            if (ecx_26 != 1)
                                                i_2.w = *(i_2 + 0xe)
                                                
                                                if (i_2.w != 1)
                                                    if (i_2.w != 4)
                                                        if (var_8_1 == 0x74)
                                                            int32_t var_50 = var_10
                                                            int32_t var_4c_1 = var_14
                                                            int32_t var_48_1 = var_34
                                                            int32_t var_44_1 = var_28
                                                            float var_60
                                                            
                                                            for (int32_t i = 0; i u< 0x10; i += 4)
                                                                int32_t __saved_ebp
                                                                int32_t ebx_3 =
                                                                    *(&__saved_ebp + i - 0x4c)
                                                                *(&__saved_ebp + i - 0x94) = 0
                                                                
                                                                if (ebx_3 != 0)
                                                                    if ((ebx_3 & 1) == 0)
                                                                        int32_t ebx_4 = 0
                                                                        
                                                                        do
                                                                            *(&__saved_ebp + i - 0x4c) u>>= 1
                                                                            ebx_4 += 1
                                                                        while ((*(&__saved_ebp + i - 0x4c) & 1)
                                                                            == 0)
                                                                        
                                                                        *(&__saved_ebp + i - 0x94) = ebx_4
                                                                    
                                                                    uint32_t ecx_88 =
                                                                        *(&__saved_ebp + i - 0x4c)
                                                                    arg3 = ecx_88
                                                                    long double x87_r7_1 = float.t(arg3)
                                                                    
                                                                    if (ecx_88 s< 0)
                                                                        x87_r7_1 =
                                                                            x87_r7_1 + fconvert.t(4.2949673e+09f)
                                                                    
                                                                    *(&var_60 + i) =
                                                                        fconvert.s(fconvert.t(1f) / x87_r7_1)
                                                            
                                                            if (var_10 == 0 && var_14 == 0
                                                                    && var_34 == 0)
                                                                float var_58_1 = fconvert.s(float.t(0))
                                                                int32_t var_48_2 = 1
                                                                int32_t var_4c_2 = 1
                                                                float var_5c_1 = fconvert.s(float.t(0))
                                                                var_50 = 1
                                                                var_60 = fconvert.s(float.t(0))
                                                            
                                                            while (edx_14 u>= var_1c_2)
                                                                if (edx_14 u>= esi_3)
                                                                    break
                                                                
                                                                uint32_t var_18_2 = edx_14
                                                                void* edi_23 = eax_37
                                                                
                                                                if (i_6 u> 0)
                                                                    int32_t i_5 = i_6
                                                                    int32_t i_1
                                                                    
                                                                    do
                                                                        uint32_t ecx_91 = zx.d(*(i_4 + 0xe))
                                                                        uint32_t ecx_92
                                                                        
                                                                        if (ecx_91 == 0x10)
                                                                            ecx_92 = zx.d(*edi_23)
                                                                            edi_23 += 2
                                                                            arg3 = ecx_92
                                                                        else if (ecx_91 == 0x18)
                                                                            int32_t ecx_93
                                                                            ecx_93:1.b = *(edi_23 + 2)
                                                                            ecx_93.b = *(edi_23 + 1)
                                                                            ecx_92 = ecx_93 << 8 | zx.d(*edi_23)
                                                                            edi_23 += 3
                                                                            arg3 = ecx_92
                                                                        else if (ecx_91 == 0x20)
                                                                            ecx_92 = *edi_23
                                                                            edi_23 += 4
                                                                            arg3 = ecx_92
                                                                        
                                                                        for (int32_t j = 0; j u< 0x10; j += 4)
                                                                            long double x87_r7_7
                                                                            
                                                                            if (*(&var_50 + j) == 0)
                                                                                x87_r7_7 = float.t(1)
                                                                            else
                                                                                void var_98
                                                                                int32_t ebx_7 =
                                                                                    arg3 u>> (*(&var_98 + j)).b
                                                                                    & *(&var_50 + j)
                                                                                long double x87_r7_6 = float.t(ebx_7)
                                                                                
                                                                                if (ebx_7 s< 0)
                                                                                    x87_r7_6 =
                                                                                        x87_r7_6 + fconvert.t(4.2949673e+09f)
                                                                                
                                                                                x87_r7_7 =
                                                                                    x87_r7_6 * fconvert.t(*(&var_60 + j))
                                                                            
                                                                            *(var_18_2 + j) = fconvert.s(x87_r7_7)
                                                                        
                                                                        var_18_2 += 0x10
                                                                        i_1 = i_5
                                                                        i_5 -= 1
                                                                    while (i_1 != 1)
                                                                
                                                                edx_14 += var_c_3
                                                                eax_37 += ecx_16
                                                        else if (edx_14 u>= edi_13)
                                                            while (edx_14 u< esi_3)
                                                                void* esi_24 = eax_37
                                                                eax_37 += ecx_16
                                                                uint32_t edi_20 = edx_14
                                                                edx_14 += var_c_3
                                                                int32_t esi_25
                                                                int32_t edi_21
                                                                edi_21, esi_25 = __builtin_memcpy(
                                                                    edi_20, esi_24, i_7 u>> 2 << 2)
                                                                __builtin_memcpy(edi_21, esi_25, 
                                                                    i_7 & 3)
                                                                
                                                                if (edx_14 u< var_1c_2)
                                                                    break
                                                    else if (edx_14 u>= edi_13)
                                                        while (edx_14 u< esi_3)
                                                            int32_t ebx_1 = 0
                                                            
                                                            if (i_6 u> 0)
                                                                do
                                                                    uint32_t ecx_77 =
                                                                        zx.d(*((ebx_1 u>> 1) + eax_37))
                                                                    uint8_t ecx_78
                                                                    
                                                                    if ((ebx_1.b & 1) == 0)
                                                                        ecx_78 = (ecx_77 u>> 4).b
                                                                    else
                                                                        ecx_78 = ecx_77.b & 0xf
                                                                    
                                                                    *(ebx_1 + edx_14) = ecx_78
                                                                    ebx_1 += 1
                                                                while (ebx_1 u< i_6)
                                                            
                                                            edx_14 += var_c_3
                                                            eax_37 += ecx_16
                                                            
                                                            if (edx_14 u< var_1c_2)
                                                                break
                                                else if (edx_14 u>= edi_13)
                                                    while (edx_14 u< esi_3)
                                                        arg3 = 0
                                                        
                                                        if (i_6 u> 0)
                                                            bool cond:14_1
                                                            
                                                            do
                                                                i_2.b = arg3.b
                                                                i_2.b &= 7
                                                                ecx_26.b = 7
                                                                ecx_26.b = 7 - i_2.b
                                                                i_2.b = *((arg3 u>> 3) + eax_37)
                                                                i_2.b u>>= ecx_26.b
                                                                i_2.b &= 1
                                                                *(arg3 + edx_14) = i_2.b
                                                                cond:14_1 = arg3 + 1 u< i_6
                                                                arg3 += 1
                                                            while (cond:14_1)
                                                        
                                                        edx_14 += var_c_3
                                                        eax_37 += ecx_16
                                                        
                                                        if (edx_14 u< var_1c_2)
                                                            break
                                            else if (edx_14 u>= edi_13)
                                                while (arg3 u< esi_3)
                                                    if (eax_37 u< var_40_1)
                                                        goto label_416a36_2
                                                    
                                                    if (eax_37 + 1 u>= ecx_23)
                                                        goto label_416a36_2
                                                    
                                                    uint32_t ecx_56
                                                    ecx_56.b = *eax_37
                                                    
                                                    if (ecx_56.b != 0)
                                                        if (edx_14 u< edi_13)
                                                            goto label_416a36_2
                                                        
                                                        uint32_t ecx_68 = zx.d(ecx_56.b)
                                                        
                                                        if (ecx_68 + edx_14 u> esi_3)
                                                            goto label_416a36_2
                                                        
                                                        i_2.b = *(eax_37 + 1)
                                                        i_2:1.b = i_2.b
                                                        int32_t eax_42
                                                        eax_42.w = i_2.w
                                                        int32_t ecx_70
                                                        int32_t edi_18
                                                        edi_18, ecx_70 = __memfill_u32(edx_14, 
                                                            eax_42, ecx_68 u>> 2)
                                                        int32_t ecx_73
                                                        int32_t edi_19
                                                        edi_19, ecx_73 = __memfill_u8(edi_18, 
                                                            eax_42.b, ecx_68 & 3)
                                                        eax_37 = var_3c_1
                                                        edx_14 += zx.d(*eax_37)
                                                        edi_13 = var_1c_2
                                                    else
                                                        uint32_t ecx_57 = zx.d(*(eax_37 + 1))
                                                        
                                                        if (ecx_57 == 0)
                                                            edx_14 = arg3 + var_c_3
                                                            arg3 = edx_14
                                                        else if (ecx_57 == 1)
                                                            arg3 = esi_3
                                                        else if (ecx_57 == 2)
                                                            if (eax_37 + 3 u>= ecx_23)
                                                                goto label_416a36_2
                                                            
                                                            int32_t ecx_66 =
                                                                zx.d(*(eax_37 + 3)) * var_c_3
                                                            eax_37 += 2
                                                            edx_14 = zx.d(*eax_37) + edx_14 + ecx_66
                                                        else
                                                            if (edx_14 u< edi_13)
                                                                goto label_416a36_2
                                                            
                                                            if (ecx_57 + edx_14 u> esi_3)
                                                                goto label_416a36_2
                                                            
                                                            if (ecx_57 + eax_37 + 2 u> ecx_23)
                                                                goto label_416a36_2
                                                            
                                                            int32_t esi_16
                                                            int32_t edi_16
                                                            edi_16, esi_16 = __builtin_memcpy(
                                                                edx_14, eax_37 + 2, ecx_57 u>> 2 << 2)
                                                            __builtin_memcpy(edi_16, esi_16, 
                                                                ecx_57 & 3)
                                                            uint32_t ecx_61 = zx.d(*(eax_37 + 1))
                                                            edx_14 += ecx_61
                                                            eax_37 += (ecx_61 + 1) & 0xfffffffe
                                                            edi_13 = var_1c_2
                                                    
                                                    eax_37 += 2
                                                    var_3c_1 = eax_37
                                                    
                                                    if (arg3 u< edi_13)
                                                        break
                                        else if (edx_14 u>= edi_13)
                                            while (arg3 u< esi_3)
                                                if (eax_37 u< var_40_1)
                                                    goto label_416a36_2
                                                
                                                if (eax_37 + 1 u>= ecx_23)
                                                    goto label_416a36_2
                                                
                                                uint32_t ecx_27
                                                ecx_27.b = *eax_37
                                                
                                                if (ecx_27.b != 0)
                                                    if (edx_14 u< var_1c_2)
                                                        goto label_416a36_2
                                                    
                                                    uint32_t esi_7 = zx.d(ecx_27.b)
                                                    
                                                    if (esi_7 + edx_14 u> esi_3)
                                                        goto label_416a36_2
                                                    
                                                    i_2 = nullptr
                                                    
                                                    if (esi_7 s> 0)
                                                        do
                                                            uint8_t ecx_51
                                                            
                                                            if ((i_2.b & 1) == 0)
                                                                ecx_51 = *(eax_37 + 1) u>> 4
                                                            else
                                                                ecx_51 = *(eax_37 + 1) & 0xf
                                                            
                                                            *(i_2 + edx_14) = ecx_51
                                                            i_2 += 1
                                                        while (i_2 s< zx.d(*eax_37))
                                                    
                                                    edx_14 += zx.d(*eax_37)
                                                else
                                                    i_2.b = *(eax_37 + 1)
                                                    uint32_t esi_4 = zx.d(i_2.b)
                                                    
                                                    if (esi_4 == 0)
                                                        edx_14 = arg3 + var_c_3
                                                        arg3 = edx_14
                                                    else if (esi_4 == 1)
                                                        arg3 = esi_3
                                                    else if (esi_4 == 2)
                                                        if (eax_37 + 3 u>= ecx_23)
                                                            goto label_416a36_2
                                                        
                                                        int32_t ecx_47 =
                                                            zx.d(*(eax_37 + 3)) * var_c_3
                                                        eax_37 += 2
                                                        edx_14 = zx.d(*eax_37) + edx_14 + ecx_47
                                                    else
                                                        if (edx_14 u< var_1c_2)
                                                            goto label_416a36_2
                                                        
                                                        if (esi_4 + edx_14 u> esi_3)
                                                            goto label_416a36_2
                                                        
                                                        if (i_2.b != 0
                                                                && ((esi_4 - 1) s>> 1) + eax_37 + 2
                                                                u>= ecx_23)
                                                            goto label_416a36_2
                                                        
                                                        i_2 = nullptr
                                                        
                                                        if (esi_4 s> 0)
                                                            do
                                                                uint32_t ecx_38 =
                                                                    zx.d(*((i_2 s>> 1) + eax_37 + 2))
                                                                uint8_t ecx_39
                                                                
                                                                if ((i_2.b & 1) == 0)
                                                                    ecx_39 = (ecx_38 u>> 4).b
                                                                else
                                                                    ecx_39 = ecx_38.b & 0xf
                                                                
                                                                *(i_2 + edx_14) = ecx_39
                                                                i_2 += 1
                                                            while (i_2 s< zx.d(*(eax_37 + 1)))
                                                        
                                                        uint32_t ecx_41 = zx.d(*(eax_37 + 1))
                                                        edx_14 += ecx_41
                                                        eax_37 += ((ecx_41 u>> 1) + 1) & 0xfffffffe
                                                
                                                eax_37 += 2
                                                
                                                if (arg3 u< var_1c_2)
                                                    break
                                        
                                        result = 0
                                else
                                label_416c0d:
                                    arg1[0xe] = 0
                                    arg1[1] = var_24_1 + arg2
                                    result = 0
                    else
                        int32_t i_3 = i_2[8]
                        
                        if (i_3 == 0)
                            i_3 = (i_3 + 1) << var_2c_1
                        
                        arg1[0xf] = 1
                        int32_t eax_17 = sub_745f3f(0x400)
                        arg1[2] = eax_17
                        
                        if (eax_17 != 0)
                            void* eax_19 = *i_2 + arg2
                            int32_t var_18_1 = 0
                            
                            if (i_3 u> 0)
                                do
                                    i_2.b = *(eax_19 + 2)
                                    int32_t ecx_9 = var_18_1 << 2
                                    *(ecx_9 + arg1[2]) = i_2.b
                                    i_2.b = *(eax_19 + 1)
                                    *(ecx_9 + arg1[2] + 1) = i_2.b
                                    i_2.b = *eax_19
                                    eax_19 += var_c_1
                                    var_18_1 += 1
                                    *(ecx_9 + arg1[2] + 2) = i_2.b
                                    *(ecx_9 + arg1[2] + 3) = 0xff
                                while (var_18_1 u< i_3)
                                
                                i_2 = i_4
                            
                            for (; i_3 u< 0x100; i_3 += 1)
                                int32_t eax_21 = i_3 << 2
                                *(eax_21 + arg1[2]) = 0xff
                                *(eax_21 + arg1[2] + 1) = 0xff
                                *(eax_21 + arg1[2] + 2) = 0xff
                                *(eax_21 + arg1[2] + 3) = 0xff
                            
                            goto label_416aff
                        
                        result = 0x8007000e
                else
                    if (eax_10 == 0x10)
                    label_41695b:
                        var_8_1 = 0x18
                        goto label_416a49
                    
                    if (eax_10 == 0x18)
                    label_4168cf:
                        var_8_1 = 0x14
                        goto label_416a49
                    
                    if (eax_10 == 0x20)
                    label_41674d:
                        var_8_1 = 0x16
                        goto label_416a49
                    
                label_416a36:
                    result = 0x80004005
            else if (eax_6 != 3 || edi_1 u< 0x34)
            label_416a36_1:
                result = 0x80004005
            else
                int32_t edx_2 = i_2[0xc]
                var_14 = i_2[0xb]
                var_34 = edx_2
                var_10 = i_2[0xa]
                int32_t edi_2
                
                if (edi_1 u< 0x38)
                    var_28 = 0
                    edi_2 = 0
                else
                    edi_2 = i_2[0xd]
                    var_28 = edi_2
                
                uint32_t eax_9 = zx.d(*(i_2 + 0xe))
                var_8_1 = 0x74
                var_2c_1 = eax_9.b
                
                if (eax_9 == 0x10)
                    if (edx_2 == 0xff)
                        if (var_14 == 0xff && var_10 == 0xff && edi_2 == 0xff00)
                            var_8_1 = 0x33
                        
                        goto label_416a49
                    
                    if (edx_2 == 0x1f)
                        if (var_14 != 0x7e0)
                            if (var_14 != 0x3e0 || var_10 != 0x7c00)
                                goto label_416a49
                            
                            if (edi_2 == 0)
                                goto label_41695b
                            
                            if (edi_2 == 0x8000)
                                var_8_1 = 0x19
                            
                            goto label_416a49
                        
                        if (var_10 == 0xf800 && edi_2 == 0)
                            var_8_1 = 0x17
                        
                        goto label_416a49
                    
                    if (edx_2 != 0xf)
                        if (edx_2 != 3)
                            if (edx_2 == 0xffff && var_14 == 0xffff && var_10 == 0xffff
                                    && edi_2 == 0)
                                var_8_1 = 0x51
                        else if (var_14 == 0x1c && var_10 == 0xe0 && edi_2 == 0xff00)
                            var_8_1 = 0x1d
                    else if (var_14 == 0xf0 && var_10 == 0xf00)
                        if (edi_2 == 0xf000)
                            var_8_1 = 0x1a
                        else if (edi_2 == 0)
                            var_8_1 = 0x1e
                    
                    goto label_416a49
                
                if (eax_9 == 0x18)
                    if (edx_2 != 0xff || var_14 != 0xff00 || var_10 != 0xff0000 || edi_2 != 0)
                        goto label_416a49
                    
                    goto label_4168cf
                
                if (eax_9 == 0x20)
                    if (edx_2 == 0xff)
                        if (var_14 != 0xff00 || var_10 != 0xff0000)
                            goto label_416a49
                        
                        if (edi_2 != 0)
                            if (edi_2 == 0xff000000)
                                var_8_1 = 0x15
                            
                            goto label_416a49
                        
                        goto label_41674d
                    
                    if (edx_2 != 0x3ff00000)
                        if (edx_2 != 0xff0000)
                            if (edx_2 != 0)
                                if (edx_2 != 0x3ff)
                                    if (edx_2 == 0xff00 && var_14 == 0xff0000
                                            && var_10 == 0xff000000 && var_28 == 0)
                                        var_8_1 = 0x16
                                        var_24_1 = ecx_4 + 1
                                else if (var_14 == 0xffc00 && var_10 == 0x3ff00000
                                        && var_28 == 0xc0000000)
                                    var_8_1 = 0x23
                            else if (var_14 == 0xffff0000 && var_10 == 0xffff && var_28 == edx_2)
                                var_8_1 = 0x22
                        else if (var_14 == 0xff00 && var_10 == 0xff)
                            if (var_28 == 0xff000000)
                                var_8_1 = 0x20
                            else if (var_28 == 0)
                                var_8_1 = 0x21
                    else if (var_14 == 0xffc00 && var_10 == 0x3ff && var_28 == 0xc0000000)
                        var_8_1 = 0x1f
                    
                    goto label_416a49
                
            label_416a36_2:
                result = 0x80004005
        
        return result
    
    if (eax u>= 0x28)
        goto label_416663

return 0x80004005

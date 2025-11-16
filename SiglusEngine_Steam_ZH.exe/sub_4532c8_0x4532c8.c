// 函数: sub_4532c8
// 地址: 0x4532c8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg2
void* ebx = arg1
int32_t edi
int32_t var_2c = edi
int32_t* edi_1 = arg4
void* var_1c = ebx
int32_t var_c = 0
int32_t* var_8 = nullptr
int32_t var_10 = 0

if (arg3 != 0)
    int32_t eax_2 = (*(*arg3 + 0x10))(arg3)
    
    if (*edi_1 + 1 u<= eax_2)
        esi[0xa] = *((*(*arg3 + 0xc))(arg3) + (*edi_1 << 2))

*edi_1 += 1

if (arg3 != 0)
    int32_t eax_7 = (*(*arg3 + 0x10))(arg3)
    
    if (*edi_1 + 1 u<= eax_7)
        esi[0xb] = *((*(*arg3 + 0xc))(arg3) + (*edi_1 << 2))

*edi_1 += 1

if (arg3 != 0)
    int32_t eax_12 = (*(*arg3 + 0x10))(arg3)
    
    if (*edi_1 + 1 u<= eax_12)
        esi[0xd] = *((*(*arg3 + 0xc))(arg3) + (*edi_1 << 2))

*edi_1 += 1

if (arg3 != 0 && (*(*arg3 + 0x10))(arg3) u>= *edi_1)
    int32_t* eax_18
    int32_t* ecx_17
    eax_18, ecx_17 = sub_44383a(ebx, esi[0xa])
    arg2 = eax_18
    
    if (eax_18 s>= 0)
        int32_t* var_14_1 = nullptr
        arg4 = nullptr
        
        if (esi[0xb] u> 0)
            while (true)
                int32_t* eax_19 = sub_745f3f(0x50)
                
                if (eax_19 == 0)
                    var_8 = nullptr
                else
                    var_8 = sub_44cb3f(eax_19)
                
                if (var_8 == 0)
                    return 0x8007000e
                
                int32_t* var_30_9 = edi_1
                int32_t* var_34_1 = arg3
                int32_t* eax_21 = sub_45222f(ebx, var_8)
                arg2 = eax_21
                
                if (eax_21 s< 0)
                    break
                
                int32_t* eax_22 = var_8
                
                if (var_14_1 != 0)
                    var_14_1[0xf] = eax_22
                else
                    esi[0xc] = eax_22
                
                var_8 = nullptr
                arg4 += 1
                var_14_1 = eax_22
                
                if (arg4 u>= esi[0xb])
                    goto label_4533ff
            
            goto label_453876
        
    label_4533ff:
        void* eax_24 = esi[0xd]
        
        if (eax_24 u> 0)
            int32_t* eax_27 = sub_745f3f(eax_24 * 0x38 + 4)
            void* eax_29
            
            if (eax_27 == 0)
                eax_29 = nullptr
            else
                *eax_27 = eax_24
                sub_61cdd0(&eax_27[1], 0x38, eax_24, sub_44bb92)
                eax_29 = &eax_27[1]
            
            esi[0xe] = eax_29
            
            if (eax_29 == 0)
                return 0x8007000e
        
        arg4 = nullptr
        
        if (esi[0xd] u> 0)
            do
                ecx_17.w = *(ebx + 0x30)
                
                if (*(ebx + 0x34) u<= zx.d(ecx_17.w))
                    return 0x80004005
                
                int32_t eax_32 = zx.d(arg4.w) * 0x38
                *(eax_32 + esi[0xe] + 0x34) = ecx_17.w
                *(ebx + 0x30) += 1
                int32_t edx_1
                edx_1.w = esi[5].w
                *(eax_32 + esi[0xe] + 0x14) = edx_1.w
                edx_1.w = arg4.w
                *(eax_32 + esi[0xe] + 0x18) = edx_1.w
                int32_t* eax_33
                eax_33, ecx_17 = sub_45236a(ebx, esi[0xe] + eax_32, arg3, edi_1)
                arg2 = eax_33
                
                if (eax_33 s< 0)
                    return arg2
                
                arg4 += 1
            while (zx.d(arg4.w) u< esi[0xd])
        
        uint32_t i = 0
        arg3 = nullptr
        arg4 = nullptr
        
        if (esi[0xd] u> 0)
            int32_t edx_2 = *(ebx + 0x2c)
            
            do
                int32_t eax_38 = zx.d(*(i * 0x38 + esi[0xe] + 0x34)) * 0x64
                
                if (*(edx_2 + eax_38 + 0x36) u> 0)
                    int16_t* ecx_28 = *(edx_2 + eax_38 + 4) + 0x54
                    uint32_t j_2 = zx.d(*(eax_38 + *(ebx + 0x2c) + 0x36))
                    uint32_t j
                    
                    do
                        if ((*(zx.d(ecx_28[-1]) * 0x1c + 0xac1bc4) & 0xff000000) == 0x8000000)
                            uint32_t eax_44 = zx.d(*ecx_28)
                            
                            if (arg3 u< eax_44)
                                arg3 = eax_44
                        
                        ecx_28 = &ecx_28[0x32]
                        j = j_2
                        j_2 -= 1
                    while (j != 1)
                
                arg4 += 1
                i = zx.d(arg4.w)
            while (i u< esi[0xd])
        
        int32_t eax_45 = sub_745f3f(arg3 * 2 + 2)
        var_c = eax_45
        uint32_t i_1
        int32_t eax_59
        
        if (eax_45 != 0)
            __builtin_memset(__builtin_memset(var_c, 0, (arg3 * 2 + 2) u>> 2 << 2), 0, 
                (arg3 * 2 + 2) & 3)
            esi[0xf].w = 0
            arg4 = nullptr
            
            if (esi[0xd] u> 0)
                i_1 = 0
                
                do
                    void* eax_47 = i_1 * 0x38 + esi[0xe]
                    int32_t eax_49 = zx.d(*(eax_47 + 0x34)) * 0x64
                    int32_t j_1 = 0
                    
                    if (*(eax_49 + *(ebx + 0x2c) + 0x36) u> 0)
                        arg3 = nullptr
                        
                        do
                            void* eax_51 = *(eax_49 + *(ebx + 0x2c) + 4) + arg3
                            
                            if ((*(zx.d(*(eax_51 + 0x52)) * 0x1c + 0xac1bc4) & 0xff000000)
                                    == 0x8000000 && *(var_c + (zx.d(*(eax_51 + 0x54)) << 1)) == 0)
                                esi[0xf].w += 1
                                uint32_t edx_9
                                edx_9.w = esi[0xf].w
                                *(var_c + (zx.d(*(eax_51 + 0x54)) << 1)) = edx_9.w
                            
                            eax_49 = zx.d(*(eax_47 + 0x34)) * 0x64
                            j_1 += 1
                            arg3 = &arg3[0x19]
                        while (j_1 u< zx.d(*(eax_49 + *(ebx + 0x2c) + 0x36)))
                    
                    arg4 += 1
                    i_1 = zx.d(arg4.w)
                while (i_1 u< esi[0xd])
            
            i_1.w = esi[0xf].w
            
            if (i_1.w u> 0)
                esi[0x10] = sub_745f3f(zx.d(i_1.w) * 0x68)
                eax_59 = sub_745f3f(zx.d(esi[0xf].w) << 2)
                var_10 = eax_59
        
        if (eax_45 == 0 || (i_1.w u> 0 && (esi[0x10] == 0 || eax_59 == 0)))
            arg2 = 0x8007000e
        else
            arg4 = nullptr
            esi[0x29] = 0
            void* edi_10 = &esi[0x2a]
            *edi_10 = 0
            void* edi_11 = edi_10 + 4
            *edi_11 = 0
            *(edi_11 + 4) = 0
            
            if (esi[0xd] u> 0)
                uint32_t eax_60 = 0
                
                while (true)
                    void* edx_14 = zx.d(*(eax_60 * 0x38 + esi[0xe] + 0x34)) * 0x64 + *(ebx + 0x2c)
                    int32_t var_14_2 = 0
                    uint32_t ecx_38 = zx.d(esi[0xf].w) << 2
                    __builtin_memset(__builtin_memset(var_10, 0, ecx_38 u>> 2 << 2), 0, ecx_38 & 3)
                    int16_t i_5 = *(edx_14 + 0x36)
                    
                    if (i_5 != 0)
                        uint32_t i_4 = zx.d(i_5)
                        arg3 = i_4 * 0x64
                        uint32_t i_3 = i_4
                        uint32_t i_2
                        
                        do
                            arg3 -= 0x64
                            void* eax_63 = *(edx_14 + 4) + arg3
                            int32_t edi_16 = *(zx.d(*(eax_63 + 0x52)) * 0x1c + 0xac1bc4)
                            uint32_t ecx_47 = edi_16 u>> 0x18
                            void* eax_65
                            uint32_t ecx_55
                            
                            if (ecx_47 == 3)
                            label_4536fc:
                                int32_t ecx_48
                                ecx_48.w = *(eax_63 + 0x54)
                                
                                if (ecx_48.w u< 0x100)
                                    ecx_55 = zx.d(ecx_48.w) + zx.d(*(eax_63 + 0x56))
                                    eax_65 = esi + 0xb2
                                label_45384e:
                                    uint32_t edi_18 = zx.d(*eax_65)
                                    
                                    if (edi_18 s> ecx_55)
                                        ecx_55 = edi_18
                                    
                                    *eax_65 = ecx_55.w
                                else if (ecx_48.w u>= 0x101)
                                    ecx_55 = zx.d(*(eax_63 + 0x56)) + zx.d(ecx_48.w) - 0x101
                                    eax_65 = esi + 0xaa
                                    goto label_45384e
                            else if (ecx_47 == 7)
                                bool cond:15_1 = var_14_2 == 0
                                var_14_2 = 1
                                int32_t ecx_64
                                ecx_64.b = cond:15_1
                                *(eax_63 + 0x30) ^= (ecx_64 ^ *(eax_63 + 0x30)) & 1
                            else if (ecx_47 == 8)
                                uint32_t ecx_62
                                ecx_62.w = *(var_c + (zx.d(*(eax_63 + 0x54)) << 1))
                                ecx_62.w -= 1
                                bool cond:16_1 = *(eax_63 + 0x58) != 0x800000d
                                *(eax_63 + 0x4c) = ecx_62.w
                                
                                if (cond:16_1)
                                    int32_t edx_15
                                    edx_15.b = *(var_10 + (zx.d(ecx_62.w) << 2)) == 0
                                    *(eax_63 + 0x30) ^= (edx_15 ^ *(eax_63 + 0x30)) & 1
                                    *(var_10 + (zx.d(*(eax_63 + 0x4c)) << 2)) = 1
                                else
                                    *(eax_63 + 0x30) |= 1
                            else
                                if (ecx_47 == 9)
                                    goto label_4536fc
                                
                                if (ecx_47 == 0xc)
                                    if (edi_16 == 0xc000000)
                                        ecx_55 = zx.d(*(eax_63 + 0x56)) + zx.d(*(eax_63 + 0x54))
                                        eax_65 = &esi[0x29]
                                        goto label_45384e
                                    
                                    if (edi_16 == 0xc010000)
                                        ecx_55 = zx.d(*(eax_63 + 0x56)) + zx.d(*(eax_63 + 0x54))
                                        eax_65 = esi + 0xa6
                                        goto label_45384e
                                    
                                    if (edi_16 == 0xc020000)
                                        ecx_55 = zx.d(*(eax_63 + 0x56)) + zx.d(*(eax_63 + 0x54))
                                        eax_65 = &esi[0x2a]
                                        goto label_45384e
                                else if (ecx_47 == 0xd)
                                    if (edi_16 == 0xd000000)
                                        ecx_55 = zx.d(*(eax_63 + 0x56)) + zx.d(*(eax_63 + 0x54))
                                        eax_65 = &esi[0x2b]
                                        goto label_45384e
                                    
                                    if (edi_16 == 0xd010000)
                                        ecx_55 = zx.d(*(eax_63 + 0x56)) + zx.d(*(eax_63 + 0x54))
                                        eax_65 = esi + 0xae
                                        goto label_45384e
                                    
                                    if (edi_16 == 0xd020000)
                                        ecx_55 = zx.d(*(eax_63 + 0x56)) + zx.d(*(eax_63 + 0x54))
                                        eax_65 = &esi[0x2c]
                                        goto label_45384e
                                else if (ecx_47 == 0xf)
                                    goto label_4536fc
                            i_2 = i_3
                            i_3 -= 1
                        while (i_2 != 1)
                    
                    arg4 += 1
                    eax_60 = zx.d(arg4.w)
                    
                    if (eax_60 u>= esi[0xd])
                        break
                    
                    ebx = var_1c
                
            label_453876:
                
                if (var_8 != 0)
                    sub_44cbb2(var_8, 1)
        
        if (var_c != 0)
            j__free(var_c)
        
        if (var_10 != 0)
            j__free(var_10)
    
    return arg2

return 0x80004005

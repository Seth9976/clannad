// 函数: sub_4b7dc3
// 地址: 0x4b7dc3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = arg5
int32_t edi
int32_t var_58 = edi
int32_t var_8 = 0
void var_4c
__builtin_memset(&var_4c, 0, 0x18)
int32_t esi = edx + arg7

if (esi u> 0)
    int32_t** edi_2 = arg6 - (edx << 2)
    int32_t** var_10_1 = edi_2
    
    do
        int32_t* eax_4
        
        if (var_8 u>= edx)
            eax_4 = *edi_2
        else
            eax_4 = *(arg4 + (var_8 << 2))
        
        if (eax_4 != 0)
            int32_t ecx_2 = *eax_4 & 0xfff00000
            
            if (ecx_2 != 0 && eax_4[9] != 1)
                if (ecx_2 == 0x60000000 || ecx_2 == 0x60500000 || ecx_2 == 0x60a00000
                        || ecx_2 == 0x60f00000 || ecx_2 == 0x11000000 || ecx_2 == 0x72c00000)
                    if (var_8 u>= edx)
                    label_4b7e69:
                        int32_t ecx_3 = eax_4[1]
                        int32_t var_c_1 = 0
                        
                        if (ecx_3 u> 0)
                            int32_t* edi_3 = eax_4[2]
                            
                            do
                                void* eax_6 = *(*(arg1 + 0x14) + (*edi_3 << 2))
                                
                                if (*(eax_6 + 4) == *(arg1 + 0x80))
                                    uint32_t ecx_6 = zx.d(*(eax_6 + 0x6d))
                                    
                                    if (ecx_6 u> 5)
                                        break
                                    
                                    if (*(eax_6 + 0x6c) == 3)
                                        int32_t __saved_ebp
                                        
                                        if (var_8 u< arg5)
                                            int32_t eax_8 = *(eax_6 + 0x10) + 1
                                            
                                            if (eax_8 u> (&__saved_ebp)[ecx_6 - 0x12])
                                                (&__saved_ebp)[ecx_6 - 0x12] = eax_8
                                        else
                                            int32_t edx_3 = *(eax_6 + 0x10) + 1
                                            
                                            if (edx_3 u> (&__saved_ebp)[ecx_6 - 0x12]
                                                    && *(eax_6 + 0x3c) != 0)
                                                (&__saved_ebp)[ecx_6 - 0x12] = edx_3
                                
                                var_c_1 += 1
                                edi_3 = &edi_3[1]
                            while (var_c_1 u< ecx_3)
                            
                            edx = arg5
                            edi_2 = var_10_1
                else if (ecx_2 != 0x72d00000 || var_8 u>= edx)
                    goto label_4b7e69
        
        var_8 += 1
        edi_2 = &edi_2[1]
        var_10_1 = edi_2
    while (var_8 u< esi)

int32_t i = 0

if (*(arg1 + 0x3c) u> 0)
    void* edi_4 = &var_4c
    
    do
        int32_t esi_1 = *edi_4
        
        if (esi_1 != 0)
            void* eax_12 = sub_49ec23(0x74)
            int32_t* eax_13
            
            if (eax_12 == 0)
                eax_13 = nullptr
            else
                eax_13 = sub_49e789(eax_12)
            
            if (eax_13 == 0)
                return 0x8007000e
            
            int32_t eax_14
            int32_t ecx_10
            eax_14, ecx_10 = sub_49ec6e(eax_13, (esi_1 & 0xfffff) | 0x72100000, esi_1, esi_1, 0)
            
            if (eax_14 s< 0)
            label_4b808d:
                sub_46cb59(eax_13, 1)
                return eax_14
            
            int32_t esi_4 = 0
            int32_t var_24[0x4]
            
            if (*edi_4 u> 0)
                while (true)
                    int32_t var_5c_1 = ecx_10
                    int32_t var_60_2 = ecx_10
                    var_60_2.q = fconvert.d(float.t(0))
                    int32_t eax_15 = sub_49f544(arg1, *(arg1 + 0x88), i, esi_4, var_60_2)
                    var_24[esi_4] = eax_15
                    
                    if (eax_15 == 0xffffffff)
                    label_4b8091:
                        break
                    
                    *(eax_13[4] + (esi_4 << 2)) = eax_15
                    void* eax_16 = *(*(arg1 + 0x14) + (eax_15 << 2))
                    *(eax_16 + 0x3c) = 0
                    *(eax_16 + 0x38) = 0xffffffff
                    ecx_10 = i << 8 | 3
                    esi_4 += 1
                    bool cond:6_1 = esi_4 u< *edi_4
                    *(eax_16 + 0x6c) = ecx_10
                    
                    if (not(cond:6_1))
                        goto label_4b7fa3
                
                sub_46cb59(eax_13, 1)
                return 0x8007000e
            
        label_4b7fa3:
            int32_t esi_5 = *edi_4
            eax_14 = sub_4b794d(arg1, arg4, arg5, 3, i, esi_5, &var_24)
            
            if (eax_14 s< 0)
                goto label_4b808d
            
            int32_t ecx_19
            eax_14, ecx_19 = sub_4b7aa4(arg1, arg6, arg7, 3, i, esi_5, &var_24)
            
            if (eax_14 s< 0)
                goto label_4b808d
            
            int32_t j = 0
            
            if (*edi_4 u> 0)
                do
                    int32_t var_5c_4 = ecx_19
                    int32_t var_60_5 = ecx_19
                    var_60_5.q = fconvert.d(float.t(0))
                    int32_t eax_17 = sub_49f544(arg1, *(arg1 + 0x80), i, j, var_60_5)
                    int32_t var_34[0x4]
                    var_34[j] = eax_17
                    
                    if (eax_17 == 0xffffffff)
                        goto label_4b8091
                    
                    void* ecx_22 = *(*(arg1 + 0x14) + (eax_17 << 2))
                    *(ecx_22 + 0x3c) = 0
                    *(ecx_22 + 0x6c) = i << 8 | 3
                    ecx_19 = eax_13[2]
                    *(ecx_19 + (j << 2)) = eax_17
                    j += 1
                while (j u< *edi_4)
            
            int32_t* esi_6 = arg2 - &var_4c + edi_4
            
            if (*esi_6 != 0)
                uint32_t var_5c_6 = zx.d((*(arg1 + 0xc8)).b)
                sub_4a4100(arg1, nullptr, 0x11a4, 
                    "cannot read from a texcoord which was used as input in a sampler")
                sub_46cb59(eax_13, 1)
                return 0x80004005
            
            int32_t eax_19 = sub_49f431(arg1, eax_13)
            
            if (eax_19 s< 0)
                return eax_19
            
            *esi_6 = eax_13
        
        i += 1
        edi_4 += 4
    while (i u< *(arg1 + 0x3c))

for (arg6 = 1; arg6 u< 3; arg6 += 1)
    int32_t var_8_1 = 0
    
    if (arg5 u> 0)
        int32_t** eax_25 = arg4 - (arg5 << 2)
        int32_t** var_c_3 = eax_25
        
        while (true)
            if (var_8_1 u>= 0x200)
                sub_4a4100(arg1, nullptr, 0x11a2, "program too big")
                return 0x80004005
            
            int32_t* edi_5
            
            if (var_8_1 u>= arg5)
                edi_5 = *eax_25
            else
                edi_5 = *(arg4 + (var_8_1 << 2))
            
            if (edi_5 != 0 && edi_5[9] != 1)
                int32_t eax_29 = *edi_5
                int32_t ecx_29 = eax_29 & 0xfff00000
                
                if (ecx_29 == 0x60000000 || ecx_29 == 0x60500000 || ecx_29 == 0x60a00000
                        || ecx_29 == 0x60f00000 || ecx_29 == 0x72e00000 || ecx_29 == 0x60700000
                        || ecx_29 == 0x11000000 || ecx_29 == 0x72c00000 || ecx_29 == 0x72d00000)
                    int32_t* esi_8 = eax_29 & 0xfffff
                    
                    if (ecx_29 == 0x11000000)
                        esi_8 = nullptr
                    
                    int32_t* ecx_30 = edi_5[2]
                    int32_t eax_31 = *(arg1 + 0x14)
                    void* edx_8 = *(eax_31 + (ecx_30[esi_8] << 2))
                    
                    if (esi_8 != 0)
                        esi_8 = *(eax_31 + (*ecx_30 << 2))
                    
                    int32_t eax_32 = *(edx_8 + 4)
                    
                    if (eax_32 == *(arg1 + 0x80) && zx.d((*(arg1 + 0xc8)).w) != 0x104 && arg6 == 1)
                        uint32_t ecx_32 = zx.d(*(edx_8 + 0x6d))
                        
                        if (ecx_32 u>= 6)
                            break
                        
                        if (esi_8 == 0)
                            goto label_4b8207
                        
                        void* eax_36 = *(*(arg1 + 0x10) + (esi_8[1] << 2))
                        int32_t var_64_7
                        char* var_60_6
                        
                        if ((*(eax_36 + 4) & 0x840) != 0)
                            if (ecx_32 == esi_8[3])
                                goto label_4b8207
                            
                            char eax_37 = (*(arg1 + 0xc8)).b
                            
                            if ((*(eax_36 + 5) & 8) == 0)
                                uint32_t var_5c_14 = zx.d(eax_37)
                                var_60_6 = "cannot bind sampler to sampler array. In ps_1_%i, "
                                "samplers must be bound to the same stage as their TEXCOORD"
                            else
                                uint32_t var_5c_7 = zx.d(eax_37)
                                var_60_6 = "cannot bind sampler to user specified stage. In ps_1_%i, "
                                "samplers must be bound to the same stage as their TEXCOORD"
                            
                            var_64_7 = 0x11a3
                            goto label_4b8497
                        
                        esi_8[3] = ecx_32
                    label_4b8207:
                        int32_t** ecx_33
                        
                        if (*(arg1 + (ecx_32 << 2) + 0x424) == 0xffffffff)
                            ecx_33 = arg2 + (ecx_32 << 2)
                        
                        if (*(arg1 + (ecx_32 << 2) + 0x424) != 0xffffffff || *ecx_33 != 0)
                            uint32_t var_5c_15 = zx.d((*(arg1 + 0xc8)).b)
                            var_60_6 = "cannot read from same texcoord. In ps_1_%i, each sampler "
                            "must have a unique TEXCOORD"
                            var_64_7 = 0x11a4
                        label_4b8497:
                            sub_4a4100(arg1, edi_5[0xf], var_64_7, var_60_6)
                            return 0x80004005
                        
                        if (esi_8 != 0)
                            *(arg1 + (ecx_32 << 2) + 0x40c) = esi_8[1]
                            int32_t ecx_36 = *edi_5[2]
                            int32_t var_5c_8 = ecx_36
                            *(arg1 + (ecx_32 << 2) + 0x424) = ecx_36
                            int32_t var_60_7 = ecx_36
                            var_60_7.q = fconvert.d(fconvert.t(*(esi_8 + 0x20)))
                            int32_t eax_40 =
                                sub_49f544(arg1, esi_8[1], esi_8[3], esi_8[4], var_60_7)
                            int32_t j_1 = 0
                            
                            if ((*edi_5 & 0xfffff) u> 0)
                                do
                                    *(edi_5[2] + (j_1 << 2)) = eax_40
                                    j_1 += 1
                                while (j_1 u< (*edi_5 & 0xfffff))
                            
                            int32_t* eax_41 = *(*(arg1 + 0x14) + (eax_40 << 2))
                            sub_49f070(eax_41, esi_8)
                            eax_41[3] = ecx_32
                            esi_8[0x10] = 1
                            eax_41[0x10] = 0
                        
                        *ecx_33 = edi_5
                        *(*(arg4 + (var_8_1 << 2)) + 0x24) = 1
                    else if (arg6 == 2)
                        uint32_t j_2
                        
                        if (esi_8 == 0)
                        label_4b8332:
                            j_2 = 0
                            int32_t temp1_1 = *(arg1 + 0x4c)
                            bool cond:14_1 = 0 == temp1_1
                            
                            if (0 u< temp1_1)
                                arg7 = arg1 + 0x424
                                
                                do
                                    if (*(arg2 + (j_2 << 2)) == 0)
                                        int32_t edx_18 = *arg7
                                        
                                        if (edx_18 == *edi_5[2])
                                            break
                                        
                                        if (edx_18 == 0xffffffff)
                                            break
                                    
                                    arg7 += 4
                                    j_2 += 1
                                while (j_2 u< *(arg1 + 0x4c))
                                
                                cond:14_1 = j_2 == *(arg1 + 0x4c)
                            
                            if (cond:14_1)
                                sub_4a4100(arg1, nullptr, 0x11a7, 
                                    "too many texture loads and reads from texcoords")
                                return 0x80004005
                            
                            if (esi_8 != 0)
                                int32_t ecx_51
                                
                                if (zx.d((*(arg1 + 0xc8)).w) != 0x104)
                                    ecx_51 = eax_32
                                
                                if (zx.d((*(arg1 + 0xc8)).w) == 0x104 || ecx_51 == *(arg1 + 0x80))
                                    *(arg1 + (j_2 << 2) + 0x40c) = esi_8[1]
                                    ecx_51 = *edi_5[2]
                                    *(arg1 + (j_2 << 2) + 0x424) = ecx_51
                                
                                int32_t var_5c_11 = ecx_51
                                int32_t var_60_8 = ecx_51
                                var_60_8.q = fconvert.d(fconvert.t(*(esi_8 + 0x20)))
                                int32_t eax_46 =
                                    sub_49f544(arg1, esi_8[1], esi_8[3], esi_8[4], var_60_8)
                                int32_t j_3 = 0
                                
                                if ((*edi_5 & 0xfffff) u> 0)
                                    do
                                        *(edi_5[2] + (j_3 << 2)) = eax_46
                                        j_3 += 1
                                    while (j_3 u< (*edi_5 & 0xfffff))
                                
                                int32_t* eax_47 = *(*(arg1 + 0x14) + (eax_46 << 2))
                                sub_49f070(eax_47, esi_8)
                                eax_47[3] = j_2
                                esi_8[0x10] = 1
                                eax_47[0x10] = 0
                        else
                            int32_t edx_15 = esi_8[1]
                            void* ecx_41 = *(*(arg1 + 0x10) + (edx_15 << 2))
                            j_2 = esi_8[3]
                            
                            if (j_2 u>= 6)
                                break
                            
                            if ((*(ecx_41 + 4) & 0x840) == 0)
                                goto label_4b8332
                            
                            uint32_t esi_9 = *(arg1 + (j_2 << 2) + 0x424)
                            
                            if (esi_9 != 0xffffffff || *(arg2 + (j_2 << 2)) != 0)
                                if (esi_9 != *edi_5[2])
                                    char* var_5c_13
                                    
                                    if ((*(ecx_41 + 5) & 8) == 0)
                                        var_5c_13 = "conflicting sampler array bindings"
                                    else
                                        var_5c_13 = "conflicting user defined sampler bindings. If "
                                        "two samplers have the same user binding, they cannot both "
                                        "be used in the same shader"
                                    
                                    sub_4a4100(arg1, nullptr, 0x11a5, var_5c_13)
                                    return 0x80004005
                                
                                if (*(arg2 + (j_2 << 2)) != 0)
                                    uint32_t var_5c_10 = zx.d((*(arg1 + 0xc8)).b)
                                    sub_4a4100(arg1, nullptr, 0x11a6, 
                                        "cannot perform texture lookup twice from a user bound or "
                                    "similar array access sampler in ps_1_%i")
                                    return 0x80004005
                            else
                                *(arg1 + (j_2 << 2) + 0x40c) = edx_15
                                *(arg1 + (j_2 << 2) + 0x424) = *edi_5[2]
                        
                        *(arg2 + (j_2 << 2)) = edi_5
                        *(*(arg4 + (var_8_1 << 2)) + 0x24) = 1
            
            var_8_1 += 1
            var_c_3 = &var_c_3[1]
            
            if (var_8_1 u>= arg5)
                break
            
            eax_25 = var_c_3

int32_t i_1 = 0

if (*(arg1 + 0x3c) u> 0)
    do
        int32_t* esi_11 = arg2 + (i_1 << 2)
        
        if (*esi_11 == 0)
            void* eax_53 = sub_49ec23(0x74)
            int32_t* eax_54
            
            if (eax_53 == 0)
                eax_54 = nullptr
            else
                eax_54 = sub_49e789(eax_53)
            
            *esi_11 = eax_54
            
            if (eax_54 == 0)
                return 0x8007000e
            
            sub_49ec6e(eax_54, 0, 0, 0, 0)
            sub_49f431(arg1, *esi_11)
        
        i_1 += 1
    while (i_1 u< *(arg1 + 0x3c))

int32_t esi_12 = 0
*arg3 = *(arg1 + 0x3c)

if (arg5 u> 0)
    do
        int32_t* eax_62 = arg4 + (esi_12 << 2)
        int32_t* edx_22 = *eax_62
        
        if (edx_22 != 0 && edx_22[9] != 1 && *edx_22 != 0)
            *(arg2 + (*arg3 << 2)) = *eax_62
            *arg3 += 1
            *(*eax_62 + 0x24) = 1
        
        esi_12 += 1
    while (esi_12 u< arg5)

return 0

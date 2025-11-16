// 函数: sub_450079
// 地址: 0x450079
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax
eax:1.b = 0x89
bool z

if (not(z))
    undefined

eax[2] = arg4
int32_t* esi = arg3[-8]
*eax = arg1
eax[1] = arg2
int32_t esi_2 = *esi + *arg5
arg3[-0x11] = eax
int32_t esi_3 = esi_2 << 2
eax[3] = esi_3

if (esi_3 != 0)
    eax[3] = esi_3 - 1

int32_t esi_8 = (*arg3[-4] + *arg3[-0x15]) << 2
eax[4] = esi_8

if (esi_8 != 0)
    eax[4] = esi_8 - 1

int32_t esi_13 = (*arg3[-0x10] + *arg3[-0x18]) << 2
eax[5] = esi_13

if (esi_13 != 0)
    eax[5] = esi_13 - 1

int32_t edi_2 = eax[3]
int32_t esi_17 = edi_2 u>> 1 | edi_2
int32_t edi_5 = esi_17 u>> 2 | esi_17
int32_t esi_20 = edi_5 u>> 4 | edi_5
int32_t edi_8 = esi_20 u>> 8 | esi_20
int32_t edi_9 = eax[4]
eax[3] = edi_8 u>> 0x10 | edi_8
int32_t esi_26 = edi_9 u>> 1 | edi_9
int32_t edi_12 = esi_26 u>> 2 | esi_26
int32_t esi_29 = edi_12 u>> 4 | edi_12
int32_t edi_15 = esi_29 u>> 8 | esi_29
int32_t edi_16 = eax[5]
eax[4] = edi_15 u>> 0x10 | edi_15
int32_t esi_35 = edi_16 u>> 1 | edi_16
int32_t edi_19 = esi_35 u>> 2 | esi_35
int32_t esi_38 = edi_19 u>> 4 | edi_19
int32_t edi_22 = esi_38 u>> 8 | esi_38
eax[5] = edi_22 u>> 0x10 | edi_22
int32_t* entry_ebx
int32_t esi_42 = entry_ebx[3]
int32_t esi_44 = (esi_42 & 7) + (esi_42 u>> 3 << 3)
entry_ebx[3] = esi_44
eax[7] = esi_44
int32_t ecx = entry_ebx[3] + (arg1 << 3)
int32_t ecx_2 = (ecx & 7) + (ecx u>> 3 << 3)
entry_ebx[3] = ecx_2
eax[8] = ecx_2
int32_t edx = entry_ebx[3] + (arg2 << 3)
int32_t ecx_6 = (edx & 7) + (edx u>> 3 << 3)
entry_ebx[3] = ecx_6
eax[9] = ecx_6
entry_ebx[3] += arg3[-0x17] << 3
int32_t ecx_9 = arg3[-6]
int32_t i = 0
eax[0xa] = 0
eax[0xb] = ecx_9
eax[0xc] = arg3[-0xa]
void* ecx_11 = arg3[-0xf]
*(ecx_11 + 0x56) = 0
*(ecx_11 + 0x54) = 0
void* eax_1 = &eax[0x10]

do
    *(eax_1 + 0xc) = *(arg3[-8] + (i << 2))
    *eax_1 = *(arg3[-0x13] + (i << 2))
    i += 1
    eax_1 += 4
while (i u< 3)

void* ecx_16 = arg3[-0x11]
int32_t eax_4 = arg3[-0x19] - arg3[-0x16] + 0x80
*(ecx_16 + 0x5c) = eax_4
int32_t eax_5 = eax_4 + (*(eax_4 + arg3[-0x16] - 0x68) << 3) + 4
*(ecx_16 + 0x60) = eax_5
*(ecx_16 + 0x64) = eax_5 + (*(eax_5 + arg3[-0x16] - 0x68) << 3) + 4
int32_t ecx_17 = arg3[-0x1d]
int32_t esi_49
int32_t edi_26
edi_26, esi_49 = __builtin_memcpy(ecx_16 + 0x68, arg3[-0x16], ecx_17 u>> 2 << 2)
__builtin_memcpy(edi_26, esi_49, ecx_17 & 3)
void* ecx_21 = arg3[-0xf]
int32_t eax_8 = sub_4288c5(ecx_16 + 0x68, ecx_21 + 0x40, ecx_21 + 0x44)
arg3[-0x12] = eax_8

if (eax_8 s>= 0)
    int32_t eax_11 = sub_448bce(arg3[-0x1c], arg3[2], zx.d(*(entry_ebx + 0x36)) - 1, arg3[-0x11])
    arg3[-0x12] = eax_11
    
    if (eax_11 s>= 0)
        void* eax_12 = arg3[-0xf]
        *(eax_12 + 0x52) = 0xb5
        *(eax_12 + 0x58) = 0x11000000
        entry_ebx[2] |= 1
        arg3[-0x13] = &entry_ebx[9]
        arg3[-0xf] = arg3[-0x11] + 0x5c
        
        for (int32_t i_1 = 0; i_1 u< 6; i_1 += 2)
            int32_t edi_27
            edi_27.w = *(arg3 + i_1 - 0xc)
            
            if (edi_27.w != 0)
                int32_t* eax_18 = *arg3[-0xf] + arg3[-0x11]
                int32_t edx_8 = 0
                int32_t j_1 = *eax_18
                
                if (j_1 u> 0)
                    void* eax_20 = &eax_18[2]
                    int32_t j
                    
                    do
                        edx_8 += *eax_20
                        eax_20 += 8
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                
                int16_t eax_22 = *arg3[-0x13]
                int16_t ecx_24 = eax_22
                
                if (eax_22 u<= edi_27.w)
                    ecx_24 = edi_27.w
                
                eax_22 = *(arg3 + i_1 - 0x34)
                
                if (zx.d(eax_22) + edx_8 != zx.d(ecx_24))
                    entry_ebx[2] &= 0xfffffffe
                    break
                
                if (edx_8 u> 0 && eax_22 == 0)
                    entry_ebx[2] |= 0x10
            
            arg3[-0xf] += 4
            arg3[-0x13] += 2
        
        if ((entry_ebx[2].b & 1) != 0)
            int16_t eax_23 = entry_ebx[9].w
            
            if (eax_23 u<= arg3[-3].w)
                eax_23 = (arg3[-3]).w
            
            entry_ebx[0x14].w = eax_23
            int16_t eax_24 = entry_ebx[0xa].w
            
            if (eax_24 u<= arg3[-2].w)
                eax_24 = (arg3[-2]).w
            
            *(entry_ebx + 0x56) = eax_24
            int16_t eax_25 = *(entry_ebx + 0x26)
            
            if (eax_25 u<= *(arg3 - 0xa))
                eax_25 = (*(arg3 - 0xa)).w
            
            entry_ebx[0x17].w = eax_25
        
        int32_t eax_26 = sub_44330f(entry_ebx)
        arg3[-0x12] = eax_26
        
        if (eax_26 s>= 0)
            entry_ebx[0xd].w = 0
            void* esi_51 = arg3[-0x14]
            char* eax_29 = sub_745f3f(*(esi_51 + 0xc) << 2)
            arg3[-0x1b] = eax_29
            
            if (eax_29 == 0)
            label_450890:
                arg3[-0x12] = 0x8007000e
            else
                int32_t i_2 = 0
                void* ecx_29 = *(esi_51 + 0x10) + esi_51
                
                if (*(esi_51 + 0xc) u> 0)
                    do
                        *(eax_29 + (i_2 << 2)) = ecx_29
                        i_2 += 1
                        ecx_29 += 0x14
                    while (i_2 u< *(esi_51 + 0xc))
                
                sub_761c30(eax_29, *(esi_51 + 0xc), 4, sub_443227)
                int32_t ecx_30 = *(esi_51 + 0xc)
                int32_t edx_9 = 0
                int32_t edi_29 = 0
                void* eax_31 = *(esi_51 + 0x10) + esi_51
                arg3[-0x15] = 0
                
                if (ecx_30 u> 0)
                    void* eax_32 = eax_31 + 4
                    arg3[-0x10] = ecx_30
                    int32_t i_3
                    
                    do
                        uint32_t ecx_31 = zx.d(*eax_32)
                        
                        if (ecx_31 == 0)
                            edi_29 += 1
                        else if (ecx_31 == 1)
                            arg3[-0x15] += 1
                        else if (ecx_31 == 2)
                            edx_9 += 1
                        
                        eax_32 += 0x14
                        i_3 = arg3[-0x10]
                        arg3[-0x10] -= 1
                    while (i_3 != 1)
                
                int32_t ecx_35 = arg3[-0x15]
                arg3[-0x18] = 0
                int32_t eax_33
                eax_33.w = *(entry_ebx + 0x36)
                int32_t edx_10 = edx_9 + eax_33
                int32_t ecx_36 = ecx_35 + edx_10
                arg3[-0x11] = edi_29 + ecx_36
                int32_t edi_30
                edi_30.w = *(esi_51 + 0xc)
                edi_30.w += eax_33.w
                *(entry_ebx + 0x36) = edi_30.w
                edi_30.w = arg3[-0x11].w
                entry_ebx[0x13].w = eax_33.w
                *(entry_ebx + 0x52) = edx_10.w
                entry_ebx[0x16].w = ecx_36.w
                *(entry_ebx + 0x5e) = edi_30.w
                bool cond:9_1 = *(esi_51 + 0xc) u<= 0
                arg3[-0xf] = eax_33
                arg3[-0x13] = edx_10
                arg3[-0x15] = ecx_36
                
                if (not(cond:9_1))
                    do
                        int32_t* edi_31 = *(arg3[-0x1b] + (arg3[-0x18] << 2))
                        uint32_t eax_35 = zx.d(edi_31[1].w)
                        arg3[-0xe] = 0
                        arg3[-8] = edi_31
                        uint32_t eax_39
                        
                        if (eax_35 == 0)
                            eax_39 = zx.d(arg3[-0x15].w)
                            arg3[-0x15] += 1
                            arg3[-0xe] = eax_39
                        else if (eax_35 == 1)
                            eax_39 = zx.d(arg3[-0x13].w)
                            arg3[-0x13] += 1
                            arg3[-0xe] = eax_39
                        else if (eax_35 == 2)
                            eax_39 = zx.d(arg3[-0xf].w)
                            arg3[-0xf] += 1
                            arg3[-0xe] = eax_39
                        else if (eax_35 == 3)
                            eax_39 = zx.d(arg3[-0x11].w)
                            arg3[-0x11] += 1
                            arg3[-0xe] = eax_39
                        
                        eax_39.w = *(edi_31 + 6)
                        int32_t* esi_54 = arg3[-0xe] * 0x64 + entry_ebx[1]
                        void* ecx_38 = arg3[-0x1c]
                        esi_54[0x15].w = eax_39.w
                        eax_39.w = edi_31[2].w
                        esi_54[0xc] |= 9
                        *(esi_54 + 0x56) = eax_39.w
                        char* eax_41 = *edi_31 + arg3[-0x14]
                        int32_t var_4_3 = 0xa
                        arg3[-0x17] = esi_54
                        void* eax_42 = sub_4439e9(ecx_38, eax_41)
                        arg3[-2] = eax_42
                        int32_t* eax_46
                        int32_t* edx_11
                        
                        if (eax_42 == 0)
                            *esi_54 = 0
                            eax_46 = arg3[-2]
                            edx_11 = arg3[-0x17]
                        else
                            if (esi_54[0x14].w u< 1)
                                int32_t* eax_43 = sub_745f3f(0x24)
                                int32_t eax_45
                                
                                if (eax_43 == 0)
                                    eax_45 = 0
                                else
                                    *eax_43 = 1
                                    arg3[-4] = &eax_43[1]
                                    sub_61cdd0(&eax_43[1], 0x20, 1, sub_44325c)
                                    eax_45 = arg3[-4]
                                
                                esi_54[0xd] = eax_45
                                
                                if (eax_45 == 0)
                                    goto label_450890
                                
                                esi_54[0x14].w = 1
                            
                            sub_4438fa(arg3[-0x1c], arg3[2], arg3[-0xe], 0, arg3[-2], edi_31)
                            arg3[-0x12] = 0
                            edx_11 = arg3[-0x17]
                            eax_46 = arg3[-2]
                            *(edx_11 + 0x4e) = 1
                            __builtin_memcpy(&edx_11[2], eax_46, 0x28)
                            edx_11[0xc] &= 0xfffffffd
                            edx_11[0xa] = 0
                            edx_11[0xb] = 0
                            *edx_11 = 1
                        
                        void* edi_33 = arg3[-8]
                        edx_11[0xf] = arg3[-0x14]
                        uint32_t esi_57 = zx.d(*(edi_33 + 4))
                        
                        if (esi_57 == 0)
                            int32_t esi_85 = arg3[-6]
                            *(edx_11 + 0x52) = 0x9d
                            edx_11[0x16] = 0xd010000
                            int32_t eax_80 = esi_85 + (zx.d(*(edi_33 + 6)) << 2)
                            edx_11[0x12] = eax_80
                            int32_t esi_86 = *(edi_33 + 0x10)
                            uint32_t ecx_67 = zx.d(*(edi_33 + 8))
                            arg3[-4] = eax_80
                            
                            if (esi_86 == 0)
                                uint32_t ecx_72 = ecx_67 << 2
                                __builtin_memset(
                                    __builtin_memset(*entry_ebx + arg3[-4], 0, ecx_72 u>> 2 << 2), 
                                    0, ecx_72 & 3)
                            else
                                uint32_t ecx_68 = ecx_67 << 2
                                int32_t esi_88
                                int32_t edi_47
                                edi_47, esi_88 = __builtin_memcpy(*entry_ebx + eax_80, 
                                    esi_86 + arg3[-0x14], ecx_68 u>> 2 << 2)
                                __builtin_memcpy(edi_47, esi_88, ecx_68 & 3)
                            
                            if (*(entry_ebx + 0x31) != 0)
                                void* eax_82 = arg3[-0x20]
                                
                                if (eax_82 != 0)
                                    *(eax_82 + 0x30) &= 0xfffffffe
                                
                                arg3[-0x20] = edx_11
                        else if (esi_57 == 1)
                            *(edx_11 + 0x52) = 0x9e
                            edx_11[0x16] = 0xd020000
                            int32_t eax_66 = (zx.d(*(edi_33 + 6)) << 4) + arg3[-0xa]
                            arg3[-0x10] = 0
                            edx_11[0x12] = eax_66
                            
                            if (*(edi_33 + 8) u> 0)
                                arg3[-0xe] = 0
                                
                                do
                                    *(*entry_ebx + arg3[-0xe] + edx_11[0x12]) = 0
                                    *(*entry_ebx + arg3[-0xe] + edx_11[0x12] + 4) = 0
                                    *(*entry_ebx + arg3[-0xe] + edx_11[0x12] + 8) = 1
                                    int32_t eax_74 = *entry_ebx + arg3[-0xe]
                                    int32_t esi_81 = edx_11[0x12]
                                    arg3[-0x10] += 1
                                    arg3[-0xe] += 0x10
                                    *(eax_74 + esi_81 + 0xc) = 0
                                while (arg3[-0x10] u< zx.d(*(edi_33 + 8)))
                            
                            int32_t eax_76 = *(edi_33 + 0x10)
                            
                            if (eax_76 != 0)
                                uint32_t ecx_63 = zx.d(*(edi_33 + 8)) << 4
                                int32_t esi_84
                                int32_t edi_43
                                edi_43, esi_84 = __builtin_memcpy(*entry_ebx + edx_11[0x12], 
                                    arg3[-0x14] + eax_76, ecx_63 u>> 2 << 2)
                                __builtin_memcpy(edi_43, esi_84, ecx_63 & 3)
                            
                            if (*(entry_ebx + 0x32) != 0)
                                void* eax_78 = arg3[-0x1f]
                                
                                if (eax_78 != 0)
                                    *(eax_78 + 0x30) &= 0xfffffffe
                                
                                arg3[-0x1f] = edx_11
                        else if (esi_57 == 2)
                            if (eax_46 != 0)
                                int32_t* ecx_46 = eax_46[1]
                                arg3[-4] = *ecx_46
                                
                                if (ecx_46[4] u>= 1)
                                    arg3[-0xe] = *(eax_46[1] + 0x10)
                                else
                                    arg3[-0xe] = 1
                                
                                void* ecx_49 = eax_46[1]
                                int32_t ecx_50 = *(ecx_49 + 4)
                                arg3[-0x10] = *(ecx_49 + 0x18)
                                
                                if (ecx_50 s>= 0)
                                    uint32_t eax_56
                                    
                                    if (ecx_50 s<= 1)
                                        if (arg3[-4] == 3)
                                            edx_11[0xc] |= 0x10
                                            edx_11[0x17] = *eax_46
                                            eax_56 = zx.d(*(edi_33 + 8))
                                            
                                            if (arg3[-0xe] u< eax_56)
                                                eax_56 = arg3[-0xe]
                                            
                                            edx_11[0x18] = eax_56 << 4
                                    else if (ecx_50 == 2)
                                        if (arg3[-4] == 3 && *(*(edi_33 + 0xc) + arg3[-0x14]) == 3)
                                            int32_t ecx_52 = arg3[-0xe]
                                            
                                            if (ecx_52 == 1)
                                                edx_11[0xc] |= 0x10
                                                edx_11[0x17] = *eax_46
                                                eax_56 = zx.d(*(edi_33 + 8))
                                                
                                                if (arg3[-0x10] u< eax_56)
                                                    eax_56 = arg3[-0x10]
                                                
                                                edx_11[0x18] = eax_56 << 4
                                            else if (arg3[-0x10] == 4)
                                                edx_11[0xc] |= 0x10
                                                edx_11[0x17] = *eax_46
                                                uint32_t ecx_53 = zx.d(*(edi_33 + 8))
                                                eax_56 = ecx_52 << 2
                                                
                                                if (eax_56 u>= ecx_53)
                                                    eax_56 = ecx_53
                                                
                                                edx_11[0x18] = eax_56 << 4
                                    else if (ecx_50 == 5)
                                        int32_t esi_71 = eax_46[1]
                                        arg3[-4] = esi_71
                                        int32_t eax_52
                                        eax_52, edx_11 = sub_442c74(&arg3[-4])
                                        
                                        if (eax_52 != 0)
                                            arg3[-4] = esi_71
                                            uint32_t eax_54 = sub_442bf5(&arg3[-4], 4)
                                            void* ecx_51 = arg3[-0x17]
                                            *(ecx_51 + 0x30) |= 0x10
                                            *(ecx_51 + 0x5c) = *arg3[-2]
                                            uint32_t edx_15 = zx.d(*(arg3[-8] + 8))
                                            
                                            if (eax_54 u< edx_15)
                                                edx_15 = eax_54
                                            
                                            edi_33 = arg3[-8]
                                            *(ecx_51 + 0x60) = edx_15 << 4
                                            edx_11 = arg3[-0x17]
                            
                            *(edx_11 + 0x52) = 0x9c
                            edx_11[0x16] = 0xd000000
                            uint32_t esi_73 = zx.d(*(edi_33 + 6)) << 4
                            edx_11[0x12] = esi_73
                            int32_t eax_61 = *(edi_33 + 0x10)
                            int32_t edi_36 = *entry_ebx
                            uint32_t ecx_55 = zx.d(*(edi_33 + 8)) << 4
                            arg3[-4] = esi_73
                            
                            if (eax_61 == 0)
                                __builtin_memset(
                                    __builtin_memset(edi_36 + esi_73, 0, ecx_55 u>> 2 << 2), 0, 
                                    ecx_55 & 3)
                            else
                                int32_t esi_76
                                int32_t edi_38
                                edi_38, esi_76 = __builtin_memcpy(edi_36 + arg3[-4], 
                                    arg3[-0x14] + eax_61, ecx_55 u>> 2 << 2)
                                __builtin_memcpy(edi_38, esi_76, ecx_55 & 3)
                            
                            if (entry_ebx[0xc].b != 0)
                                void* eax_63 = arg3[-0x21]
                                
                                if (eax_63 != 0)
                                    *(eax_63 + 0x30) &= 0xfffffffe
                                
                                arg3[-0x21] = edx_11
                        else if (esi_57 == 3)
                            *(edx_11 + 0x52) = 0xb2
                            edx_11[0x16] = 0xf000000
                            uint32_t esi_62 = zx.d(*(edi_33 + 6))
                            int32_t edi_34 = arg3[-0x1a]
                            edx_11[0xc] &= 0xfffffffd
                            edx_11[0x12] = edi_34 + (esi_62 << 2)
                            *edx_11 = 0
                            
                            if (eax_46 == 0)
                                *(*entry_ebx + edx_11[0x12]) = 0
                                *(*entry_ebx + edx_11[0x12] + 2) = 0
                            else
                                *(*entry_ebx + edx_11[0x12]) = eax_46[0x11].w + 1
                                *(*entry_ebx + edx_11[0x12] + 2) = 0
                                eax_46.w = *(eax_46 + 0x46)
                                int32_t* ecx_43
                                ecx_43.w = *(edx_11 + 0x56)
                                
                                if (ecx_43.w u< eax_46.w)
                                    eax_46 = ecx_43
                                
                                *(edx_11 + 0x56) = eax_46.w
                            
                            edx_11.w = arg3[-0xe].w
                            *(entry_ebx[5] + (zx.d(entry_ebx[0xd].w) << 1) + *entry_ebx) = edx_11.w
                            entry_ebx[0xd].w += 1
                        
                        arg3[-0x18] += 1
                    while (arg3[-0x18] u< *(arg3[-0x14] + 0xc))
                    
                    ecx_36 = arg3[-0x15]
                    edx_10 = arg3[-0x13]
                    eax_33 = arg3[-0xf]
                
                *(entry_ebx + 0x4e) = eax_33.w
                eax_33.w = arg3[-0x11].w
                entry_ebx[0x15].w = edx_10.w
                *(entry_ebx + 0x5a) = ecx_36.w
                entry_ebx[0x18].w = eax_33.w

j__free(arg3[-0x1b])
int32_t result = arg3[-0x12]
sub_745f2b(arg3[-1])
*arg3
return result

// 函数: sub_45004d
// 地址: 0x45004d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eflags
__out_dx_oeax(arg2.w, arg1, eflags)
char* entry_ebx
bool c
*entry_ebx = adc.b(*entry_ebx, arg3.b, c)
arg1.b = *(entry_ebx + arg1)
int32_t esi = arg5 | arg5 u>> 1
arg1[6] = 0
int32_t esi_1 = esi | esi u>> 2
int32_t esi_2 = esi_1 | esi_1 u>> 4
int32_t esi_3 = esi_2 | esi_2 u>> 8
int32_t esi_4 = esi_3 | esi_3 u>> 0x10
int32_t edi_10 = arg4[-0x13]
arg4[-0x17] = esi_4
arg1[2] = esi_4
int32_t* esi_5 = arg4[-8]
*arg1 = arg3
arg1[1] = arg2
int32_t esi_7 = *esi_5 + *edi_10
arg4[-0x11] = arg1
int32_t esi_8 = esi_7 << 2
arg1[3] = esi_8

if (esi_8 != 0)
    arg1[3] = esi_8 - 1

int32_t esi_13 = (*arg4[-4] + *arg4[-0x15]) << 2
arg1[4] = esi_13

if (esi_13 != 0)
    arg1[4] = esi_13 - 1

int32_t esi_18 = (*arg4[-0x10] + *arg4[-0x18]) << 2
arg1[5] = esi_18

if (esi_18 != 0)
    arg1[5] = esi_18 - 1

int32_t edi_13 = arg1[3]
int32_t esi_22 = edi_13 u>> 1 | edi_13
int32_t edi_16 = esi_22 u>> 2 | esi_22
int32_t esi_25 = edi_16 u>> 4 | edi_16
int32_t edi_19 = esi_25 u>> 8 | esi_25
int32_t edi_20 = arg1[4]
arg1[3] = edi_19 u>> 0x10 | edi_19
int32_t esi_31 = edi_20 u>> 1 | edi_20
int32_t edi_23 = esi_31 u>> 2 | esi_31
int32_t esi_34 = edi_23 u>> 4 | edi_23
int32_t edi_26 = esi_34 u>> 8 | esi_34
int32_t edi_27 = arg1[5]
arg1[4] = edi_26 u>> 0x10 | edi_26
int32_t esi_40 = edi_27 u>> 1 | edi_27
int32_t edi_30 = esi_40 u>> 2 | esi_40
int32_t esi_43 = edi_30 u>> 4 | edi_30
int32_t edi_33 = esi_43 u>> 8 | esi_43
arg1[5] = edi_33 u>> 0x10 | edi_33
int32_t esi_47 = *(entry_ebx + 0xc)
int32_t esi_49 = (esi_47 & 7) + (esi_47 u>> 3 << 3)
*(entry_ebx + 0xc) = esi_49
arg1[7] = esi_49
int32_t ecx = *(entry_ebx + 0xc) + (arg3 << 3)
int32_t ecx_2 = (ecx & 7) + (ecx u>> 3 << 3)
*(entry_ebx + 0xc) = ecx_2
arg1[8] = ecx_2
int32_t edx = *(entry_ebx + 0xc) + (arg2 << 3)
int32_t ecx_6 = (edx & 7) + (edx u>> 3 << 3)
*(entry_ebx + 0xc) = ecx_6
arg1[9] = ecx_6
*(entry_ebx + 0xc) += arg4[-0x17] << 3
int32_t ecx_9 = arg4[-6]
int32_t i = 0
arg1[0xa] = 0
arg1[0xb] = ecx_9
arg1[0xc] = arg4[-0xa]
void* ecx_11 = arg4[-0xf]
*(ecx_11 + 0x56) = 0
*(ecx_11 + 0x54) = 0
void* eax = &arg1[0x10]

do
    *(eax + 0xc) = *(arg4[-8] + (i << 2))
    *eax = *(arg4[-0x13] + (i << 2))
    i += 1
    eax += 4
while (i u< 3)

void* ecx_16 = arg4[-0x11]
int32_t eax_3 = arg4[-0x19] - arg4[-0x16] + 0x80
*(ecx_16 + 0x5c) = eax_3
int32_t eax_4 = eax_3 + (*(eax_3 + arg4[-0x16] - 0x68) << 3) + 4
*(ecx_16 + 0x60) = eax_4
*(ecx_16 + 0x64) = eax_4 + (*(eax_4 + arg4[-0x16] - 0x68) << 3) + 4
int32_t ecx_17 = arg4[-0x1d]
int32_t esi_54
int32_t edi_37
edi_37, esi_54 = __builtin_memcpy(ecx_16 + 0x68, arg4[-0x16], ecx_17 u>> 2 << 2)
__builtin_memcpy(edi_37, esi_54, ecx_17 & 3)
void* ecx_21 = arg4[-0xf]
int32_t eax_7 = sub_4288c5(ecx_16 + 0x68, ecx_21 + 0x40, ecx_21 + 0x44)
arg4[-0x12] = eax_7

if (eax_7 s>= 0)
    int32_t eax_10 = sub_448bce(arg4[-0x1c], arg4[2], zx.d(*(entry_ebx + 0x36)) - 1, arg4[-0x11])
    arg4[-0x12] = eax_10
    
    if (eax_10 s>= 0)
        void* eax_11 = arg4[-0xf]
        *(eax_11 + 0x52) = 0xb5
        *(eax_11 + 0x58) = 0x11000000
        *(entry_ebx + 8) |= 1
        arg4[-0x13] = &entry_ebx[0x24]
        arg4[-0xf] = arg4[-0x11] + 0x5c
        
        for (int32_t i_1 = 0; i_1 u< 6; i_1 += 2)
            int32_t edi_38
            edi_38.w = *(arg4 + i_1 - 0xc)
            
            if (edi_38.w != 0)
                int32_t* eax_17 = *arg4[-0xf] + arg4[-0x11]
                int32_t edx_8 = 0
                int32_t j_1 = *eax_17
                
                if (j_1 u> 0)
                    void* eax_19 = &eax_17[2]
                    int32_t j
                    
                    do
                        edx_8 += *eax_19
                        eax_19 += 8
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                
                int16_t eax_21 = *arg4[-0x13]
                int16_t ecx_24 = eax_21
                
                if (eax_21 u<= edi_38.w)
                    ecx_24 = edi_38.w
                
                eax_21 = *(arg4 + i_1 - 0x34)
                
                if (zx.d(eax_21) + edx_8 != zx.d(ecx_24))
                    *(entry_ebx + 8) &= 0xfffffffe
                    break
                
                if (edx_8 u> 0 && eax_21 == 0)
                    *(entry_ebx + 8) |= 0x10
            
            arg4[-0xf] += 4
            arg4[-0x13] += 2
        
        if ((entry_ebx[8] & 1) != 0)
            int16_t eax_22 = *(entry_ebx + 0x24)
            
            if (eax_22 u<= arg4[-3].w)
                eax_22 = (arg4[-3]).w
            
            *(entry_ebx + 0x50) = eax_22
            int16_t eax_23 = *(entry_ebx + 0x28)
            
            if (eax_23 u<= arg4[-2].w)
                eax_23 = (arg4[-2]).w
            
            *(entry_ebx + 0x56) = eax_23
            int16_t eax_24 = *(entry_ebx + 0x26)
            
            if (eax_24 u<= *(arg4 - 0xa))
                eax_24 = (*(arg4 - 0xa)).w
            
            *(entry_ebx + 0x5c) = eax_24
        
        int32_t eax_25 = sub_44330f(entry_ebx)
        arg4[-0x12] = eax_25
        
        if (eax_25 s>= 0)
            *(entry_ebx + 0x34) = 0
            void* esi_56 = arg4[-0x14]
            char* eax_28 = sub_745f3f(*(esi_56 + 0xc) << 2)
            arg4[-0x1b] = eax_28
            
            if (eax_28 == 0)
            label_450890:
                arg4[-0x12] = 0x8007000e
            else
                int32_t i_2 = 0
                void* ecx_29 = *(esi_56 + 0x10) + esi_56
                
                if (*(esi_56 + 0xc) u> 0)
                    do
                        *(eax_28 + (i_2 << 2)) = ecx_29
                        i_2 += 1
                        ecx_29 += 0x14
                    while (i_2 u< *(esi_56 + 0xc))
                
                sub_761c30(eax_28, *(esi_56 + 0xc), 4, sub_443227)
                int32_t ecx_30 = *(esi_56 + 0xc)
                int32_t edx_9 = 0
                int32_t edi_40 = 0
                void* eax_30 = *(esi_56 + 0x10) + esi_56
                arg4[-0x15] = 0
                
                if (ecx_30 u> 0)
                    void* eax_31 = eax_30 + 4
                    arg4[-0x10] = ecx_30
                    int32_t i_3
                    
                    do
                        uint32_t ecx_31 = zx.d(*eax_31)
                        
                        if (ecx_31 == 0)
                            edi_40 += 1
                        else if (ecx_31 == 1)
                            arg4[-0x15] += 1
                        else if (ecx_31 == 2)
                            edx_9 += 1
                        
                        eax_31 += 0x14
                        i_3 = arg4[-0x10]
                        arg4[-0x10] -= 1
                    while (i_3 != 1)
                
                int32_t ecx_35 = arg4[-0x15]
                arg4[-0x18] = 0
                int32_t eax_32
                eax_32.w = *(entry_ebx + 0x36)
                int32_t edx_10 = edx_9 + eax_32
                int32_t ecx_36 = ecx_35 + edx_10
                arg4[-0x11] = edi_40 + ecx_36
                int32_t edi_41
                edi_41.w = *(esi_56 + 0xc)
                edi_41.w += eax_32.w
                *(entry_ebx + 0x36) = edi_41.w
                edi_41.w = arg4[-0x11].w
                *(entry_ebx + 0x4c) = eax_32.w
                *(entry_ebx + 0x52) = edx_10.w
                *(entry_ebx + 0x58) = ecx_36.w
                *(entry_ebx + 0x5e) = edi_41.w
                bool cond:9_1 = *(esi_56 + 0xc) u<= 0
                arg4[-0xf] = eax_32
                arg4[-0x13] = edx_10
                arg4[-0x15] = ecx_36
                
                if (not(cond:9_1))
                    do
                        int32_t* edi_42 = *(arg4[-0x1b] + (arg4[-0x18] << 2))
                        uint32_t eax_34 = zx.d(edi_42[1].w)
                        arg4[-0xe] = 0
                        arg4[-8] = edi_42
                        uint32_t eax_38
                        
                        if (eax_34 == 0)
                            eax_38 = zx.d(arg4[-0x15].w)
                            arg4[-0x15] += 1
                            arg4[-0xe] = eax_38
                        else if (eax_34 == 1)
                            eax_38 = zx.d(arg4[-0x13].w)
                            arg4[-0x13] += 1
                            arg4[-0xe] = eax_38
                        else if (eax_34 == 2)
                            eax_38 = zx.d(arg4[-0xf].w)
                            arg4[-0xf] += 1
                            arg4[-0xe] = eax_38
                        else if (eax_34 == 3)
                            eax_38 = zx.d(arg4[-0x11].w)
                            arg4[-0x11] += 1
                            arg4[-0xe] = eax_38
                        
                        eax_38.w = *(edi_42 + 6)
                        int32_t* esi_59 = arg4[-0xe] * 0x64 + *(entry_ebx + 4)
                        void* ecx_38 = arg4[-0x1c]
                        esi_59[0x15].w = eax_38.w
                        eax_38.w = edi_42[2].w
                        esi_59[0xc] |= 9
                        *(esi_59 + 0x56) = eax_38.w
                        char* eax_40 = *edi_42 + arg4[-0x14]
                        int32_t var_4_3 = 0xa
                        arg4[-0x17] = esi_59
                        void* eax_41 = sub_4439e9(ecx_38, eax_40)
                        arg4[-2] = eax_41
                        int32_t* eax_45
                        int32_t* edx_11
                        
                        if (eax_41 == 0)
                            *esi_59 = 0
                            eax_45 = arg4[-2]
                            edx_11 = arg4[-0x17]
                        else
                            if (esi_59[0x14].w u< 1)
                                int32_t* eax_42 = sub_745f3f(0x24)
                                int32_t eax_44
                                
                                if (eax_42 == 0)
                                    eax_44 = 0
                                else
                                    *eax_42 = 1
                                    arg4[-4] = &eax_42[1]
                                    sub_61cdd0(&eax_42[1], 0x20, 1, sub_44325c)
                                    eax_44 = arg4[-4]
                                
                                esi_59[0xd] = eax_44
                                
                                if (eax_44 == 0)
                                    goto label_450890
                                
                                esi_59[0x14].w = 1
                            
                            sub_4438fa(arg4[-0x1c], arg4[2], arg4[-0xe], 0, arg4[-2], edi_42)
                            arg4[-0x12] = 0
                            edx_11 = arg4[-0x17]
                            eax_45 = arg4[-2]
                            *(edx_11 + 0x4e) = 1
                            __builtin_memcpy(&edx_11[2], eax_45, 0x28)
                            edx_11[0xc] &= 0xfffffffd
                            edx_11[0xa] = 0
                            edx_11[0xb] = 0
                            *edx_11 = 1
                        
                        void* edi_44 = arg4[-8]
                        edx_11[0xf] = arg4[-0x14]
                        uint32_t esi_62 = zx.d(*(edi_44 + 4))
                        
                        if (esi_62 == 0)
                            int32_t esi_90 = arg4[-6]
                            *(edx_11 + 0x52) = 0x9d
                            edx_11[0x16] = 0xd010000
                            int32_t eax_79 = esi_90 + (zx.d(*(edi_44 + 6)) << 2)
                            edx_11[0x12] = eax_79
                            int32_t esi_91 = *(edi_44 + 0x10)
                            uint32_t ecx_67 = zx.d(*(edi_44 + 8))
                            arg4[-4] = eax_79
                            
                            if (esi_91 == 0)
                                uint32_t ecx_72 = ecx_67 << 2
                                __builtin_memset(
                                    __builtin_memset(*entry_ebx + arg4[-4], 0, ecx_72 u>> 2 << 2), 
                                    0, ecx_72 & 3)
                            else
                                uint32_t ecx_68 = ecx_67 << 2
                                int32_t esi_93
                                int32_t edi_58
                                edi_58, esi_93 = __builtin_memcpy(*entry_ebx + eax_79, 
                                    esi_91 + arg4[-0x14], ecx_68 u>> 2 << 2)
                                __builtin_memcpy(edi_58, esi_93, ecx_68 & 3)
                            
                            if (entry_ebx[0x31] != 0)
                                void* eax_81 = arg4[-0x20]
                                
                                if (eax_81 != 0)
                                    *(eax_81 + 0x30) &= 0xfffffffe
                                
                                arg4[-0x20] = edx_11
                        else if (esi_62 == 1)
                            *(edx_11 + 0x52) = 0x9e
                            edx_11[0x16] = 0xd020000
                            int32_t eax_65 = (zx.d(*(edi_44 + 6)) << 4) + arg4[-0xa]
                            arg4[-0x10] = 0
                            edx_11[0x12] = eax_65
                            
                            if (*(edi_44 + 8) u> 0)
                                arg4[-0xe] = 0
                                
                                do
                                    *(*entry_ebx + arg4[-0xe] + edx_11[0x12]) = 0
                                    *(*entry_ebx + arg4[-0xe] + edx_11[0x12] + 4) = 0
                                    *(*entry_ebx + arg4[-0xe] + edx_11[0x12] + 8) = 1
                                    int32_t eax_73 = *entry_ebx + arg4[-0xe]
                                    int32_t esi_86 = edx_11[0x12]
                                    arg4[-0x10] += 1
                                    arg4[-0xe] += 0x10
                                    *(eax_73 + esi_86 + 0xc) = 0
                                while (arg4[-0x10] u< zx.d(*(edi_44 + 8)))
                            
                            int32_t eax_75 = *(edi_44 + 0x10)
                            
                            if (eax_75 != 0)
                                uint32_t ecx_63 = zx.d(*(edi_44 + 8)) << 4
                                int32_t esi_89
                                int32_t edi_54
                                edi_54, esi_89 = __builtin_memcpy(*entry_ebx + edx_11[0x12], 
                                    arg4[-0x14] + eax_75, ecx_63 u>> 2 << 2)
                                __builtin_memcpy(edi_54, esi_89, ecx_63 & 3)
                            
                            if (entry_ebx[0x32] != 0)
                                void* eax_77 = arg4[-0x1f]
                                
                                if (eax_77 != 0)
                                    *(eax_77 + 0x30) &= 0xfffffffe
                                
                                arg4[-0x1f] = edx_11
                        else if (esi_62 == 2)
                            if (eax_45 != 0)
                                int32_t* ecx_46 = eax_45[1]
                                arg4[-4] = *ecx_46
                                
                                if (ecx_46[4] u>= 1)
                                    arg4[-0xe] = *(eax_45[1] + 0x10)
                                else
                                    arg4[-0xe] = 1
                                
                                void* ecx_49 = eax_45[1]
                                int32_t ecx_50 = *(ecx_49 + 4)
                                arg4[-0x10] = *(ecx_49 + 0x18)
                                
                                if (ecx_50 s>= 0)
                                    uint32_t eax_55
                                    
                                    if (ecx_50 s<= 1)
                                        if (arg4[-4] == 3)
                                            edx_11[0xc] |= 0x10
                                            edx_11[0x17] = *eax_45
                                            eax_55 = zx.d(*(edi_44 + 8))
                                            
                                            if (arg4[-0xe] u< eax_55)
                                                eax_55 = arg4[-0xe]
                                            
                                            edx_11[0x18] = eax_55 << 4
                                    else if (ecx_50 == 2)
                                        if (arg4[-4] == 3 && *(*(edi_44 + 0xc) + arg4[-0x14]) == 3)
                                            int32_t ecx_52 = arg4[-0xe]
                                            
                                            if (ecx_52 == 1)
                                                edx_11[0xc] |= 0x10
                                                edx_11[0x17] = *eax_45
                                                eax_55 = zx.d(*(edi_44 + 8))
                                                
                                                if (arg4[-0x10] u< eax_55)
                                                    eax_55 = arg4[-0x10]
                                                
                                                edx_11[0x18] = eax_55 << 4
                                            else if (arg4[-0x10] == 4)
                                                edx_11[0xc] |= 0x10
                                                edx_11[0x17] = *eax_45
                                                uint32_t ecx_53 = zx.d(*(edi_44 + 8))
                                                eax_55 = ecx_52 << 2
                                                
                                                if (eax_55 u>= ecx_53)
                                                    eax_55 = ecx_53
                                                
                                                edx_11[0x18] = eax_55 << 4
                                    else if (ecx_50 == 5)
                                        int32_t esi_76 = eax_45[1]
                                        arg4[-4] = esi_76
                                        int32_t eax_51
                                        eax_51, edx_11 = sub_442c74(&arg4[-4])
                                        
                                        if (eax_51 != 0)
                                            arg4[-4] = esi_76
                                            uint32_t eax_53 = sub_442bf5(&arg4[-4], 4)
                                            void* ecx_51 = arg4[-0x17]
                                            *(ecx_51 + 0x30) |= 0x10
                                            *(ecx_51 + 0x5c) = *arg4[-2]
                                            uint32_t edx_15 = zx.d(*(arg4[-8] + 8))
                                            
                                            if (eax_53 u< edx_15)
                                                edx_15 = eax_53
                                            
                                            edi_44 = arg4[-8]
                                            *(ecx_51 + 0x60) = edx_15 << 4
                                            edx_11 = arg4[-0x17]
                            
                            *(edx_11 + 0x52) = 0x9c
                            edx_11[0x16] = 0xd000000
                            uint32_t esi_78 = zx.d(*(edi_44 + 6)) << 4
                            edx_11[0x12] = esi_78
                            int32_t eax_60 = *(edi_44 + 0x10)
                            int32_t edi_47 = *entry_ebx
                            uint32_t ecx_55 = zx.d(*(edi_44 + 8)) << 4
                            arg4[-4] = esi_78
                            
                            if (eax_60 == 0)
                                __builtin_memset(
                                    __builtin_memset(edi_47 + esi_78, 0, ecx_55 u>> 2 << 2), 0, 
                                    ecx_55 & 3)
                            else
                                int32_t esi_81
                                int32_t edi_49
                                edi_49, esi_81 = __builtin_memcpy(edi_47 + arg4[-4], 
                                    arg4[-0x14] + eax_60, ecx_55 u>> 2 << 2)
                                __builtin_memcpy(edi_49, esi_81, ecx_55 & 3)
                            
                            if (entry_ebx[0x30] != 0)
                                void* eax_62 = arg4[-0x21]
                                
                                if (eax_62 != 0)
                                    *(eax_62 + 0x30) &= 0xfffffffe
                                
                                arg4[-0x21] = edx_11
                        else if (esi_62 == 3)
                            *(edx_11 + 0x52) = 0xb2
                            edx_11[0x16] = 0xf000000
                            uint32_t esi_67 = zx.d(*(edi_44 + 6))
                            int32_t edi_45 = arg4[-0x1a]
                            edx_11[0xc] &= 0xfffffffd
                            edx_11[0x12] = edi_45 + (esi_67 << 2)
                            *edx_11 = 0
                            
                            if (eax_45 == 0)
                                *(*entry_ebx + edx_11[0x12]) = 0
                                *(*entry_ebx + edx_11[0x12] + 2) = 0
                            else
                                *(*entry_ebx + edx_11[0x12]) = eax_45[0x11].w + 1
                                *(*entry_ebx + edx_11[0x12] + 2) = 0
                                eax_45.w = *(eax_45 + 0x46)
                                int32_t* ecx_43
                                ecx_43.w = *(edx_11 + 0x56)
                                
                                if (ecx_43.w u< eax_45.w)
                                    eax_45 = ecx_43
                                
                                *(edx_11 + 0x56) = eax_45.w
                            
                            edx_11.w = arg4[-0xe].w
                            *(*(entry_ebx + 0x14) + (zx.d(*(entry_ebx + 0x34)) << 1)
                                + *entry_ebx) = edx_11.w
                            *(entry_ebx + 0x34) += 1
                        
                        arg4[-0x18] += 1
                    while (arg4[-0x18] u< *(arg4[-0x14] + 0xc))
                    
                    ecx_36 = arg4[-0x15]
                    edx_10 = arg4[-0x13]
                    eax_32 = arg4[-0xf]
                
                *(entry_ebx + 0x4e) = eax_32.w
                eax_32.w = arg4[-0x11].w
                *(entry_ebx + 0x54) = edx_10.w
                *(entry_ebx + 0x5a) = ecx_36.w
                *(entry_ebx + 0x60) = eax_32.w

j__free(arg4[-0x1b])
int32_t result = arg4[-0x12]
sub_745f2b(arg4[-1])
*arg4
return result

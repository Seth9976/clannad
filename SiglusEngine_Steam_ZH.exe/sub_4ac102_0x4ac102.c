// 函数: sub_4ac102
// 地址: 0x4ac102
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg2
*(arg1 + 0xbc) = esi
int32_t edi
int32_t var_2c = edi
esi[0x18] ^= ((arg3 * 2) ^ esi[0x18]) & 2
sub_4a39e3(arg1)
int32_t i = 0

if (*(arg1 + 8) u> 0)
    do
        void* eax_5 = *(*(arg1 + 0x14) + (i << 2))
        
        if (*esi == *(eax_5 + 4) && *(eax_5 + 0x38) == 0xffffffff)
            int32_t edx_2 = *(eax_5 + 0x48)
            
            if (*(eax_5 + 0x58) u<= edx_2)
                *(eax_5 + 0x58) = edx_2 + 1
        
        i += 1
    while (i u< *(arg1 + 8))

int32_t ecx_1 = esi[0xa] << 2
__builtin_memset(__builtin_memset(esi[4], 0xffffffff, ecx_1 u>> 2 << 2), 0xff, ecx_1 & 3)
int32_t ecx_6 = esi[0xa] << 4
__builtin_memset(__builtin_memset(esi[5], 0xffffffff, ecx_6 u>> 2 << 2), 0xff, ecx_6 & 3)
int32_t ecx_11 = esi[0xa] << 4
__builtin_memset(__builtin_memset(esi[6], 0xffffffff, ecx_11 u>> 2 << 2), 0xff, ecx_11 & 3)
int32_t i_1 = 0

if (*(arg1 + 8) u> 0)
    do
        void* eax_7 = *(*(arg1 + 0x14) + (i_1 << 2))
        *(eax_7 + 0x30) = 0xffffffff
        
        if (*esi == *(eax_7 + 4) && *(eax_7 + 0x38) == 0xffffffff)
            *(esi[6] + ((*(eax_7 + 0x10) + (*(eax_7 + 0xc) << 2)) << 2)) = i_1
        
        i_1 += 1
    while (i_1 u< *(arg1 + 8))

int32_t ecx_16 = esi[0xa] << 2
__builtin_memset(__builtin_memset(esi[2], 0, ecx_16 u>> 2 << 2), 0, ecx_16 & 3)
int32_t i_2 = 0

if (esi[0xa] u> 0)
    arg2 = nullptr
    
    do
        int32_t edx_11 = 0
        int32_t* eax_11 = esi[6] + arg2
        int32_t j_5 = 4
        int32_t j
        
        do
            if (*eax_11 != 0xffffffff)
                edx_11 += 1
            
            eax_11 = &eax_11[1]
            j = j_5
            j_5 -= 1
        while (j != 1)
        arg2 = &arg2[4]
        *(esi[2] + (i_2 << 2)) = edx_11
        i_2 += 1
    while (i_2 u< esi[0xa])

arg2 = nullptr
int32_t ecx_21 = esi[0xa] << 2
__builtin_memset(__builtin_memset(esi[3], 0, ecx_21 u>> 2 << 2), 0, ecx_21 & 3)

if (*(arg1 + 0xc) u> 0)
    do
        int32_t* edi_11 = *(*(arg1 + 0x18) + (arg2 << 2))
        int32_t* var_c_1 = edi_11
        
        if (sub_49e8a9(edi_11) != 0)
            void* eax_17 = *(*(arg1 + 0x14) + (*edi_11[4] << 2))
            
            if (*esi == *(eax_17 + 4))
                int32_t j_3 = 2
                int32_t j_1
                
                do
                    int32_t k = 0
                    int32_t k_4 = 0
                    
                    if (edi_11[1] u> 0)
                        do
                            int32_t eax_18 = *(edi_11[2] + (k << 2))
                            
                            if (eax_18 != 0xffffffff)
                                int32_t ecx_32 = *(*(*(arg1 + 0x14) + (eax_18 << 2)) + 0x38)
                                
                                if (ecx_32 != 0xffffffff)
                                    eax_18 = ecx_32
                            
                            void* eax_19 = *(*(arg1 + 0x14) + (eax_18 << 2))
                            
                            if ((*(*(*(arg1 + 0x10) + (*(eax_19 + 4) << 2)) + 6) & 2) != 0)
                                eax_19 = *(*(arg1 + 0x14)
                                    + (**(*(*(arg1 + 0x18) + (*(eax_19 + 0x48) << 2)) + 8) << 2))
                            
                            if (*esi == *(eax_19 + 4))
                                int32_t* ecx_40 = esi[3] + (*(eax_19 + 0xc) << 2)
                                int32_t edx_17 = *(esi[2] + (*(eax_17 + 0xc) << 2))
                                
                                if (*ecx_40 u< edx_17)
                                    *ecx_40 = edx_17
                                
                                edi_11 = var_c_1
                                int32_t* ecx_43 = esi[3] + (*(eax_17 + 0xc) << 2)
                                int32_t eax_25 = *(esi[2] + (*(eax_19 + 0xc) << 2))
                                
                                if (*ecx_43 u< eax_25)
                                    *ecx_43 = eax_25
                            
                            k = k_4 + edi_11[3]
                            k_4 = k
                        while (k u< edi_11[1])
                    
                    j_1 = j_3
                    j_3 -= 1
                while (j_1 != 1)
        
        arg2 += 1
    while (arg2 u< *(arg1 + 0xc))

arg2 = nullptr
int32_t ecx_45 = esi[0x12] << 2
__builtin_memset(__builtin_memset(esi[0x13], 0, ecx_45 u>> 2 << 2), 0, ecx_45 & 3)

if (*(arg1 + 0xc) u> 0)
    do
        int32_t* edi_15 = *(*(arg1 + 0x18) + (arg2 << 2))
        
        if ((*(edi_15 + 2) & 0xfff0) != 0)
            arg3 = nullptr
            
            if (edi_15[3] u> 0)
                do
                    sub_4a36b0(arg1, esi, *(edi_15[4] + (arg3 << 2)), arg2)
                    arg3 += 1
                while (arg3 u< edi_15[3])
            
            arg3 = nullptr
            
            if (edi_15[1] u> 0)
                do
                    sub_4a352d(arg1, esi, *(edi_15[2] + (arg3 << 2)), arg2)
                    arg3 += 1
                while (arg3 u< edi_15[1])
            
            if (sub_49e81b(edi_15) != 0)
                arg3 = nullptr
                
                if (edi_15[3] u> 0)
                    do
                        sub_4a352d(arg1, esi, *(edi_15[4] + (arg3 << 2)), arg2)
                        arg3 += 1
                    while (arg3 u< edi_15[3])
        
        arg2 += 1
    while (arg2 u< *(arg1 + 0xc))

int32_t i_3 = 0
int32_t i_8 = 0

if (esi[0x12] u> 0)
    do
        uint32_t edi_16 = esi[0x15] + (*(esi[0x14] + (i_3 << 2)) << 2)
        void* ecx_60 = *(esi[0x13] + (i_3 << 2))
        
        if (ecx_60 u> 1)
            sub_458e55(sub_49fcd1, edi_16, ecx_60, arg1)
            int32_t eax_37 = 1
            arg2 = 1
            int32_t var_10_1 = 1
            
            if (ecx_60 u> 1)
                do
                    int32_t edx_22 = *(edi_16 + (eax_37 << 2))
                    
                    if (sub_49fc58(arg1, edx_22, *(edi_16 + (arg2 << 2) - 4)) != 0)
                        int32_t* ecx_63 = arg2
                        arg2 += 1
                        *(edi_16 + (ecx_63 << 2)) = edx_22
                    
                    eax_37 = var_10_1 + 1
                    var_10_1 = eax_37
                while (eax_37 u< ecx_60)
            
            *(esi[0x13] + (i_8 << 2)) = arg2
            sub_458e55(sub_49fc99, edi_16, arg2, arg1)
            i_3 = i_8
        
        i_3 += 1
        i_8 = i_3
    while (i_3 u< esi[0x12])

int32_t ecx_66 = esi[0xb] << 4
__builtin_memset(__builtin_memset(esi[7], 0xffffffff, ecx_66 u>> 2 << 2), 0xff, ecx_66 & 3)
int32_t i_4 = 0

if (esi[0xb] u> 0)
    do
        *(esi[8] + (i_4 << 2)) = i_4
        i_4 += 1
    while (i_4 u< esi[0xb])

uint32_t eax_44 = esi[0xb] u>> 1
esi[1] = 0
esi[9] = eax_44
int32_t i_5 = *(arg1 + 0xc)
int32_t result

while (i_5 u> 0)
    i_5 -= 1
    int32_t* edi_19 = *(*(arg1 + 0x18) + (i_5 << 2))
    
    if ((*edi_19 & 0xfff00000) == 0x20900000)
        arg2 = nullptr
        
        if (edi_19[3] u> 0)
            do
                esi[0x17] = edi_19
                int32_t eax_46 = *(edi_19[2] + (arg2 << 2))
                
                if (eax_46 != 0xffffffff)
                    int32_t ecx_77 = *(*(*(arg1 + 0x14) + (eax_46 << 2)) + 0x38)
                    
                    if (ecx_77 != 0xffffffff)
                        eax_46 = ecx_77
                
                result = sub_4ab740(arg1, esi, eax_46, 0, 0xffffffff, 0xffffffff)
                
                if (result s< 0)
                    return result
                
                int32_t k_1 = *(edi_19[2] + ((edi_19[3] + arg2) << 2))
                void* ecx_83 = *(*(arg1 + 0x18) + (*(*(*(arg1 + 0x14) + (k_1 << 2)) + 0x48) << 2))
                int32_t edx_26 = *(ecx_83 + 0xc)
                arg3 = nullptr
                
                if (edx_26 u> 0)
                    int32_t* ecx_84 = *(ecx_83 + 0x10)
                    int32_t* var_10_2 = ecx_84
                    
                    while (*ecx_84 != k_1)
                        arg3 += 1
                        ecx_84 = &var_10_2[1]
                        var_10_2 = ecx_84
                        
                        if (arg3 u>= edx_26)
                            break
                
                esi[0x17] = ecx_83
                int32_t eax_50 = arg3 << 2
                result = sub_4ab740(arg1, esi, *(edi_19[4] + (arg2 << 2)), 0, 
                    *(eax_50 + *(ecx_83 + 8)), 0xffffffff)
                
                if (result s< 0)
                    return result
                
                result = sub_4ab740(arg1, esi, *(eax_50 + *(ecx_83 + 8)), 0, 
                    *(edi_19[4] + (arg2 << 2)), 0xffffffff)
                
                if (result s< 0)
                    return result
                
                arg2 += 1
            while (arg2 u< edi_19[3])

int32_t i_7 = 4
int32_t i_6

do
    esi[1] = i_7
    int32_t j_4 = *(arg1 + 0xc)
    int32_t j_2 = j_4
    
    if (j_4 u> 0)
        do
            j_2 -= 1
            int32_t* edi_20 = *(*(arg1 + 0x18) + (j_2 << 2))
            esi[0x17] = edi_20
            
            if ((*(edi_20 + 2) & 0xfff0) != 0)
                arg2 = nullptr
                
                if (edi_20[3] u> 0)
                    do
                        result = sub_4aba08(arg1, esi, *(edi_20[4] + (arg2 << 2)))
                        
                        if (result s< 0)
                            return result
                        
                        arg2 += 1
                    while (arg2 u< edi_20[3])
                
                int32_t ecx_97 = *edi_20 & 0xfffff
                uint32_t k_5 = divu.dp.d(0:(edi_20[1]), ecx_97)
                arg3 = nullptr
                int32_t var_1c_1 = ecx_97
                
                if (edi_20[1] u> 0)
                    while (true)
                        arg2 = nullptr
                        
                        if ((*(arg1 + 0x70) & 1) != 0 && k_5 u> 0)
                            int32_t edx_29 = *(arg1 + 0x14)
                            int32_t* eax_64 = edi_20[2]
                            int32_t* var_14_1 = eax_64
                            uint32_t k_3 = k_5
                            uint32_t k_2
                            
                            do
                                int32_t eax_65 = *eax_64
                                
                                if (eax_65 != 0xffffffff)
                                    int32_t ecx_100 = *(*(edx_29 + (eax_65 << 2)) + 0x38)
                                    
                                    if (ecx_100 != 0xffffffff)
                                        eax_65 = ecx_100
                                
                                void* eax_66 = *(edx_29 + (eax_65 << 2))
                                
                                if (*esi == *(eax_66 + 4))
                                    int32_t eax_68 = *(esi[4] + (*(eax_66 + 0xc) << 2))
                                    
                                    if (eax_68 != 0xffffffff)
                                        if ((eax_68.b & 1) == 0)
                                            arg2 += 1
                                        else
                                            arg2 -= 1
                                
                                eax_64 = &var_14_1[ecx_97]
                                k_2 = k_3
                                k_3 -= 1
                                var_14_1 = eax_64
                            while (k_2 != 1)
                        
                        int32_t eax_71 = *(edi_20[2] + (arg3 << 2))
                        
                        if (eax_71 != 0xffffffff)
                            int32_t ecx_106 = *(*(*(arg1 + 0x14) + (eax_71 << 2)) + 0x38)
                            
                            if (ecx_106 != 0xffffffff)
                                eax_71 = ecx_106
                        
                        result = sub_4ab740(arg1, esi, eax_71, arg2, 0xffffffff, 0xffffffff)
                        
                        if (result s< 0)
                            return result
                        
                        arg3 += 1
                        
                        if (arg3 u>= edi_20[1])
                            break
                        
                        ecx_97 = var_1c_1
        while (j_2 u> 0)
    
    i_6 = i_7
    i_7 -= 1
while (i_6 != 1)

if ((esi[0x18].b & 2) != 0)
    arg2 = nullptr
    
    if (*(arg1 + 8) u> 0)
        do
            void* eax_74 = *(*(arg1 + 0x14) + (arg2 << 2))
            
            if (*esi == *(eax_74 + 4))
                int32_t ecx_111 = *(eax_74 + 0xc) << 2
                *(eax_74 + 0x10) = *(esi[5] + ((*(eax_74 + 0x10) + ecx_111) << 2))
                *(eax_74 + 0xc) = *(ecx_111 + esi[4])
            
            arg2 += 1
        while (arg2 u< *(arg1 + 8))

*(*(*(arg1 + 0x10) + (*esi << 2)) + 8) = 0xffffffff
return 0

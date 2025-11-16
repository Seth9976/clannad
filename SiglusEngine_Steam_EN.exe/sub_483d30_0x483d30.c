// 函数: sub_483d30
// 地址: 0x483d30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = data_71929c
int32_t edi
int32_t var_14 = edi

if (esi != 1)
    if (esi == 2)
        data_1af1780 = 1
    else if (esi != 3)
        if (data_7037c8 == 0 || data_703744 == 0)
            data_1b14e5c = 0
        else
            data_1b14e5c = data_187c600
        
        int32_t eax
        eax.b = 0
        char var_5_1 = 0
        
        if (data_1af1740 != 0)
            eax.b = 1
            data_1af1740 = 0
            var_5_1 = 1
        
        int32_t edx_1 = data_131923c
        char ecx = 0
        
        if (data_641aec != edx_1)
            ecx = 1
            data_641aec = edx_1
        
        if (eax.b != 0 || ecx != 0)
            int32_t eax_1 = sub_485a70()
            
            if (esi != 0x22)
                if (esi != 0x24)
                    data_13740f0 = 0
                    sub_460c30(eax_1, 0, 1, nullptr, 0)
                else if (var_5_1 != 0)
                    sub_422b60()
            else if (var_5_1 != 0)
                int32_t edx_2 = data_1311170
                data_13740f0 = 0
                
                if (edx_2 s>= 0)
                    sub_460c30(eax_1, edx_2, 0, 1, 1)
            
            sub_4176a0()
            sub_467960()
            esi = data_71929c
        
        sub_485c80()
        int32_t eax_4
        
        if (esi != 0x20)
            data_1320e5c = 0xffffffff
            data_1320e60 = 0xffffffff
            data_1320e64 = 0xffffffff
            eax_4 = *((esi << 4) + 0x63f39c)
            
            if (eax_4 != 2)
                if (eax_4 != 0)
                    __builtin_memset(&data_1320e68, 0xff, 0x18)
                else
                    int32_t eax_5 = data_1320e68
                    
                    if (eax_5 != 0xd)
                        if (eax_5 != 0xe)
                            eax_5 = 0xffffffff
                        
                        data_1320e68 = eax_5
                    
                    int32_t eax_6 = data_1320e6c
                    
                    if (eax_6 != 0xd)
                        if (eax_6 != 0xe)
                            eax_6 = 0xffffffff
                        
                        data_1320e6c = eax_6
                    
                    int32_t eax_7 = data_1320e70
                    
                    if (eax_7 != 0xd)
                        if (eax_7 != 0xe)
                            eax_7 = 0xffffffff
                        
                        data_1320e70 = eax_7
                    
                    int32_t eax_8 = data_1320e74
                    
                    if (eax_8 != 0xd)
                        if (eax_8 != 0xe)
                            eax_8 = 0xffffffff
                        
                        data_1320e74 = eax_8
                    
                    int32_t eax_9 = data_1320e78
                    
                    if (eax_9 != 0xd)
                        if (eax_9 != 0xe)
                            eax_9 = 0xffffffff
                        
                        data_1320e78 = eax_9
                    
                    data_1320e7c
        
        eax_4.b = 0
        
        if (esi == 0x22 || esi == 0x23 || esi == 0x24)
            eax_4.b = 1
        
        if (data_70367c == 0 && eax_4.b == 0 && esi != 0x13 && esi != 0x15 && esi != 0xb
                && esi != 0x20 && esi != 0x21)
            sub_485cd0()
        
        sub_484280()
        sub_485a70()
        sub_485a30()
        sub_49b000()
        sub_482640()
        int32_t ecx_2 = data_71929c
        
        if (ecx_2 != 0x25)
            sub_57ff50(0)
            ecx_2 = data_71929c
            
            if (ecx_2 != 0x25)
                sub_57ccf0()
                ecx_2 = data_71929c
                
                if (ecx_2 != 0x25)
                    sub_57ff50(1)
                    ecx_2 = data_71929c
        
        int32_t eax_10 = data_1af1780
        
        if (ecx_2 != 4)
            eax_10 = 0
        
        data_1af1780 = eax_10
        int32_t ecx_7
        int32_t edx_3
        
        for (int32_t i = 0; i s< 0x400; i += 4)
            int32_t ecx_3 = *(i + &data_107f154)
            edx_3 = data_1392710
            
            if (ecx_3 == 1)
                *(i + &data_91e904) = edx_3
                *(i + &data_91f104) = 0
                *(i + &data_107f154) = 0
            else if (ecx_3 != 2)
                int32_t ecx_5 = edx_3 - *(i + &data_91e904)
                *(i + &data_91e904) = edx_3
                *(i + &data_91f104) += ecx_5
            else
                *(i + &data_91e904) = edx_3
                *(i + &data_107f154) = 0
            
            int32_t ecx_6 = *(i + &data_107f554)
            
            if (ecx_6 == 1)
                ecx_7 = data_131310c
                *(i + &data_91ed04) = ecx_7
                *(i + &data_91f504) = 0
                *(i + &data_107f554) = 0
            else if (ecx_6 != 2)
                int32_t esi_1 = data_131310c
                int32_t ecx_9 = esi_1 - *(i + &data_91ed04)
                *(i + &data_91ed04) = esi_1
                *(i + &data_91f504) += ecx_9
                ecx_7 = esi_1
            else
                ecx_7 = data_131310c
                *(i + &data_91ed04) = ecx_7
                *(i + &data_107f554) = 0
        
        void* i_1 = &data_1080564
        void* esi_2 = &data_922118
        
        do
            int32_t eax_11 = *(i_1 - 0x400)
            
            if (eax_11 == 1)
                uint32_t eax_12 = zx.d(*(esi_2 - 0x280c))
                sub_4d1c70(eax_12, *(esi_2 - 0x2808), esi_2 - 0x2814, *(esi_2 - 0x27f4), 
                    *(esi_2 - 0x2804), *(esi_2 - 0x2800), eax_12.b, *(esi_2 - 0x27f0))
                *(i_1 - 0x400) = 0
            else if (eax_11 == 2)
                int32_t eax_13 = *(esi_2 - 0x27f0)
                
                if (eax_13 != 1)
                    edx_3 = ecx_7
                    
                    if (eax_13 == 2)
                        edx_3 = data_1392ccc
                
                *(esi_2 - 0x27fc) = edx_3
                *(i_1 - 0x400) = 0
            
            int32_t eax_16 = *i_1
            
            if (eax_16 == 1)
                uint32_t eax_17 = zx.d(*(esi_2 - 0xc))
                sub_4d1c70(eax_17, *(esi_2 - 8), esi_2 - 0x14, *(esi_2 + 0xc), *(esi_2 - 4), 
                    *esi_2, eax_17.b, *(esi_2 + 0x10))
                *i_1 = 0
            else if (eax_16 == 2)
                int32_t eax_18 = *(esi_2 + 0x10)
                int32_t eax_21
                
                if (eax_18 == 1)
                    eax_21 = data_1392710
                else if (eax_18 == 2)
                    eax_21 = data_1392ccc
                else
                    eax_21 = data_131310c
                
                *(esi_2 + 4) = eax_21
                *i_1 = 0
            
            edx_3 = data_1392710
            i_1 += 4
            ecx_7 = data_131310c
            esi_2 += 0x28
        while (i_1 s< 0x1080964)
        
        int32_t eax_22 = data_71929c
        data_70383c = 0
        
        if (eax_22 == 0x11 || eax_22 == 0x13 || eax_22 == 0x15 || eax_22 == 6 || eax_22 == 7
                || eax_22 == 8 || eax_22 == 9 || eax_22 == 0xa || eax_22 == 0xb || eax_22 == 0xc
                || eax_22 == 0xd || eax_22 == 0xe || eax_22 == 0xf || eax_22 == 0x10)
            int32_t* eax_23 = &data_8c4ca4
            int32_t* ecx_12 = &data_ef08e8
            int32_t edx_6 = 0
            
            while (*eax_23 == 0 || *ecx_12 != 2)
                edx_6 += 1
                eax_23 = &eax_23[0x22]
                ecx_12 = &ecx_12[0x60]
                
                if (edx_6 s>= 2)
                    if (sub_475690() == 0)
                        int32_t* eax_25 = &data_8d02b4
                        int32_t ecx_13 = 0
                        
                        while (*eax_25 == 0 || eax_25[1] != 0)
                            ecx_13 += 1
                            eax_25 = &eax_25[0x1640]
                            
                            if (ecx_13 s>= 8)
                                if (sub_492b70() == 0)
                                    int32_t eax_27 = data_1b14a2c
                                    
                                    if (data_925224 == 0)
                                        eax_27 = 5
                                    
                                    data_1b14a2c = eax_27
                                
                                break
                    
                    break
        
        sub_487f80()

if (data_1af177c == 0)
    sub_482e20()

data_1af0f38 = data_1332b54
sub_488070()
return sub_484690()

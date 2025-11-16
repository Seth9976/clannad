// 函数: sub_578200
// 地址: 0x578200
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg4
int32_t i_10 = 0x10
int32_t* eax = &esi[0x199]
int32_t* var_40 = eax
int32_t i

do
    *eax = 0xffffffff
    eax = &eax[0x4a]
    eax[-0x35] = 0
    i = i_10
    i_10 -= 1
while (i != 1)
int32_t eax_1 = esi[0xb1a]

if (eax_1 == 2 && data_12a2988 == i_10)
    return sub_578010(esi)

if (eax_1 == 1)
    esi[0xb1a] = 2

bool cond:0 = esi[0xb1a] != 0
esi[0x28] = 0

if ((cond:0 || data_1320e74 != 0xffffffff) && data_12a2984 != 0)
    esi[0x28] = 0x40

eax_1.b = esi[0x29].b
int32_t edi = esi[0x2a]
esi[0x6f].b = eax_1.b
esi[0x6e] = esi[0x28]
int32_t eax_4 = esi[0x34]
esi[0x70] = edi

if (eax_4 != esi[0x57])
    esi[0x7a] += 1

esi[0xb3c] = edi
eax_4.b = esi[0x29].b
esi[0xb3b].b = eax_4.b
esi[0xb3a] = esi[0x28]

if (esi[0x34] != esi[0x57])
    esi[0xb46] += 1

esi[0xb29] = *(arg2 + 0x94)
esi[0xb6f] = *(arg2 + 0x98) + esi[0xa5]
esi[0xb70] = *(arg2 + 0x9c) + esi[0xa6]
esi[0xb86] = esi[0x2a]
int32_t eax_12
eax_12.b = esi[0x29].b
esi[0xb85].b = eax_12.b
esi[0xb84] = esi[0x28]

if (esi[0x34] != esi[0x57])
    esi[0xb90] += 1

esi[0xb73] = *(arg2 + 0xd4)
esi[0xbb9] = *(arg2 + 0xd8) + esi[0xa5]
esi[0xbba] = *(arg2 + 0xdc) + esi[0xa6]
esi[0xbd0] = esi[0x2a]
int32_t eax_20
eax_20.b = esi[0x29].b
esi[0xbcf].b = eax_20.b
esi[0xbce] = esi[0x28]

if (esi[0x34] != esi[0x57])
    esi[0xbda] += 1

esi[0xbbd] = *(arg2 + 0x114)
esi[0xc03] = *(arg2 + 0x118) + esi[0xa5]
esi[0xc04] = *(arg2 + 0x11c) + esi[0xa6]
esi[0xc1a] = esi[0x2a]
int32_t eax_28
eax_28.b = esi[0x29].b
esi[0xc19].b = eax_28.b
esi[0xc18] = esi[0x28]

if (esi[0x34] != esi[0x57])
    esi[0xc24] += 1

esi[0xc07] = *(arg2 + 0x154)
esi[0xc4d] = *(arg2 + 0x158) + esi[0xa5]
esi[0xc4e] = *(arg2 + 0x15c) + esi[0xa6]
esi[0xc64] = esi[0x2a]
int32_t eax_36
eax_36.b = esi[0x29].b
esi[0xc63].b = eax_36.b
esi[0xc62] = esi[0x28]

if (esi[0x34] != esi[0x57])
    esi[0xc6e] += 1

esi[0xc51] = *(arg2 + 0x194)
esi[0xc97] = *(arg2 + 0x198) + esi[0xa5]
esi[0xc98] = *(arg2 + 0x19c) + esi[0xa6]
esi[0xcae] = esi[0x2a]
int32_t eax_44
eax_44.b = esi[0x29].b
esi[0xcad].b = eax_44.b
esi[0xcac] = esi[0x28]

if (esi[0x34] != esi[0x57])
    esi[0xcb8] += 1

esi[0xc9b] = *(arg2 + 0x1d4)
esi[0xce1] = *(arg2 + 0x1d8) + esi[0xa5]
esi[0xce2] = *(arg2 + 0x1dc) + esi[0xa6]
esi[0xcf8] = esi[0x2a]
int32_t eax_52
eax_52.b = esi[0x29].b
esi[0xcf7].b = eax_52.b
esi[0xcf6] = esi[0x28]

if (esi[0x34] != esi[0x57])
    esi[0xd02] += 1

esi[0xce5] = *(arg2 + 0x214)
esi[0xd2b] = *(arg2 + 0x218) + esi[0xa5]
esi[0xd2c] = *(arg2 + 0x21c) + esi[0xa6]
esi[0xd42] = esi[0x2a]
int32_t eax_60
eax_60.b = esi[0x29].b
esi[0xd41].b = eax_60.b
esi[0xd40] = esi[0x28]

if (esi[0x34] != esi[0x57])
    esi[0xd4c] += 1

esi[0xd2f] = *(arg2 + 0x254)
esi[0xd75] = *(arg2 + 0x258) + esi[0xa5]
esi[0xd76] = *(arg2 + 0x25c) + esi[0xa6]
int32_t* eax_68 = data_71929c
char var_6 = 0

if (eax_68 == 0x22 || eax_68 == 0x23 || eax_68 == 0x24)
    var_6 = 1

int32_t* edi_1 = arg5
char var_7 = 0
int32_t ecx_2 = edi_1[0x22]
void* var_30
void* var_2c
int32_t i_7
void* var_20

if (ecx_2 != 0xffffffff)
    int32_t eax_72
    
    if (arg3 u<= 0x3f)
        if (*(arg3 * 0x2d0 + 0x8fcd90) != 0)
            eax_72 = *(arg3 * 0x2d0 + &data_8fcd8c)
        else
            eax_72 = data_1313290
    
    if (arg3 u> 0x3f || eax_72 s< 0 || eax_72 s>= 8)
        eax_72 = 0
    
    int32_t eax_73 = eax_72 + (ecx_2 << 3)
    var_7 = 1
    void* edi_2 = &esi[0x199]
    eax_68 = arg5
    void* ecx_6 = eax_73 * 0xff8 + &data_109a7e4
    void* i_1 = nullptr
    void* var_c_1 = ecx_6
    void* i_8 = nullptr
    
    do
        if (*(eax_68 + i_1 + 0xcc) != 0)
            void* eax_74 = i_1 * 5
            int32_t edx = esi[0xa5]
            char eax_75
            void var_48
            void var_44
            
            if (*(ecx_6 + (eax_74 << 2) + 0x2fc) != 0xffffffff)
                void* var_58_1 = ecx_6 + (eax_74 << 2) + 0x2fc
                eax_75 = sub_576b90(&var_2c, edx, ecx_6 + (eax_74 << 2) + 0x2fc, esi[0xa6], 
                    esi[0xa7], esi[0xa8], &var_2c, &var_30)
            else
                eax_75 = sub_576a80(eax_74, edx, var_c_1 + (eax_74 << 2) + 0x7c, esi[0xa6], 
                    esi[0xa7], esi[0xa8], &var_2c, &var_30, &var_48, &var_44, 0)
            
            if (eax_75 == 0)
                i_1 = i_8
                ecx_6 = var_c_1
            else
                *(edi_2 + 0x54) = esi[0x2a]
                int32_t eax_77
                eax_77.b = esi[0x29].b
                *(edi_2 + 0x50) = eax_77.b
                *(edi_2 + 0x4c) = esi[0x28]
                
                if (esi[0x34] != esi[0x57])
                    *(edi_2 + 0x7c) += 1
                
                int32_t ecx_12 = 0
                i_1 = i_8
                *(edi_2 + 0x120) = var_2c
                *(edi_2 + 0x124) = var_30
                char var_5_1 = 0
                int32_t var_10_1 = 0
                int32_t eax_84
                
                if (i_1 u> 0xf)
                label_5787e1:
                    
                    if (i_1 - 5 u<= 7)
                        uint32_t eax_93 = zx.d(*(i_1 + 0x703768))
                        
                        if (eax_93 u<= 7)
                            esi = arg4
                            *edi_2 =
                                *(eax_73 * 0x374 + 0x1b1bd90 + ((eax_93 + (i_1 << 3)) << 2) - 0x3c)
                else
                    switch (i_1)
                        case nullptr
                            *edi_2 = *(eax_73 * 0x374 + 0x1b1bdcc)
                        case 1
                            *edi_2 = *(eax_73 * 0x374 + 0x1b1bdd0)
                        case 2
                            *edi_2 = *(eax_73 * 0x374 + 0x1b1bdd4)
                        case 3
                            *edi_2 = *(eax_73 * 0x374 + 0x1b1bdd8)
                        case 4
                            *edi_2 = *(eax_73 * 0x374 + 0x1b1bddc)
                        case 5, 6, 7, 8, 9, 0xa, 0xb, 0xc
                            goto label_5787e1
                        case 0xd
                            if (data_1af17b8 == 0)
                                eax_84 = *(eax_73 * 0x374 + 0x1b1bde0)
                            else
                                eax_84 = *(eax_73 * 0x374 + 0x1b1bde4)
                            
                            *edi_2 = eax_84
                        case 0xe
                            if (data_13132f8 == 0)
                                eax_84 = *(eax_73 * 0x374 + 0x1b1bde8)
                            else
                                eax_84 = *(eax_73 * 0x374 + 0x1b1bdec)
                            
                            *edi_2 = eax_84
                        case 0xf
                            *edi_2 = *(eax_73 * 0x374 + 0x1b1bdf0)
                
                if (*edi_2 == 0xffffffff)
                    int32_t eax_96 = *(eax_73 * 0x374 + 0x1b1bdc8)
                    
                    if (eax_96 != 0xffffffff)
                        ecx_12 = i_1 << 3
                        var_5_1 = 1
                        var_10_1 = ecx_12
                        *edi_2 = eax_96
                
                int32_t* eax_97 = *edi_2
                
                if (*(edi_2 + 4) != eax_97)
                    *(edi_2 + 0x7c) += 1
                    *(edi_2 + 4) = eax_97
                
                if (eax_97 == 0xffffffff)
                    ecx_6 = var_c_1
                else
                    *(edi_2 + 8) = ecx_12
                    
                    if (*(i_1 + &data_703748) == 0)
                        *(edi_2 + 8) = ecx_12 + 3
                        ecx_6 = var_c_1
                    else
                        int32_t eax_98 = sub_4881f0(esi, i_1)
                        
                        if (eax_98 == 0)
                            if (i_1 != 2 && i_1 != 3 && i_1 != 4)
                                *(edi_2 + 8) = var_10_1 + 3
                                ecx_6 = var_c_1
                            else if (var_6 == 0)
                                ecx_6 = var_c_1
                                
                                if (data_12a298c != 0)
                                    *(edi_2 + 8) = var_10_1 + 3
                            else
                                *(edi_2 + 8) = var_10_1 + 3
                                ecx_6 = var_c_1
                        else if (eax_98 != 2)
                            if (data_1320e5c == 1 && data_1320e64 == arg3 && data_1320e74 == i_1)
                                int32_t eax_102 = var_10_1 + 2
                                
                                if (data_1320e78 != i_1)
                                    eax_102 = var_10_1 + 1
                                
                                *(edi_2 + 8) = eax_102
                            
                            if (var_5_1 == 0)
                                ecx_6 = var_c_1
                            else
                                bool cond:18_1
                                
                                if (i_1 != 0xd)
                                    if (i_1 == 0xe)
                                        cond:18_1 = data_13132f8 == 0
                                        goto label_5788a9
                                    
                                    ecx_6 = var_c_1
                                else
                                    cond:18_1 = data_1af17b8 == 0
                                label_5788a9:
                                    
                                    if (cond:18_1)
                                        ecx_6 = var_c_1
                                    else
                                        sub_4267c0(var_10_1 + 4, var_10_1 + 4, eax_97, &var_20, 
                                            &i_7)
                                        
                                        if (var_20 s> 0 && i_7 s> 0)
                                            *(edi_2 + 8) = var_10_1 + 4
                                        
                                        i_1 = i_8
                                        ecx_6 = var_c_1
                        else if (i_1 != 0xd)
                            *(edi_2 + 8) = var_10_1 + 3
                            ecx_6 = var_c_1
                        else
                            int32_t var_3c_2
                            
                            if (var_5_1 == 0)
                                var_3c_2 = var_10_1 + 4
                            else
                                var_3c_2 = var_10_1 + 5
                            
                            var_20 = nullptr
                            i_7 = 0
                            
                            if (eax_97 u> 0x1ff)
                                *(edi_2 + 8) = var_10_1 + 3
                                ecx_6 = var_c_1
                            else
                                sub_425430(eax_97, 1)
                                
                                if (*(eax_97 * 0x74 + 0x13747b0) != 0)
                                    sub_4269f0(&var_20, var_3c_2, eax_97 * 0x74 + 0x13747b0, 
                                        &var_20, &i_7)
                                
                                if (*(eax_97 * 0x74 + 0x13747b0) == 0 || var_20 s<= 0 || i_7 s<= 0)
                                    i_1 = i_8
                                    *(edi_2 + 8) = var_10_1 + 3
                                    ecx_6 = var_c_1
                                else
                                    *(edi_2 + 8) = var_3c_2
                                    i_1 = i_8
                                    ecx_6 = var_c_1
            
            eax_68 = arg5
        
        i_1 += 1
        edi_2 += 0x128
        i_8 = i_1
    while (i_1 s< 0x10)
    
    edi_1 = arg5

if (esi[0x2a] != 0)
    eax_68.b = esi[0x29].b
    char var_18_1 = eax_68.b
    
    if (eax_68.b != 0)
        if (edi_1[0x22] != 0xffffffff)
            void* ecx_23 = esi[0xa5]
            void* eax_126 = esi[0xa7]
            int32_t i_13 = esi[0xa6]
            void* edi_4 = esi[0xab] - 1
            i_7 = i_13
            void* ecx_25 = esi[0xa9]
            void* edi_5 = edi_4 + ecx_25
            var_20 = eax_126 + ecx_23 - 1
            int32_t eax_129 = esi[0xa8] + i_13 - 1
            int32_t i_16 = esi[0xaa]
            int32_t eax_132 = esi[0xac] - 1 + i_16
            void* esi_2 = ecx_23
            
            if (ecx_25 s< esi[0xa5])
                esi_2 = ecx_25
            
            int32_t i_11 = i_7
            esi = arg4
            
            if (i_16 s< i_11)
                i_11 = i_16
            
            i_7 = i_11
            void* ecx_26 = var_20
            int32_t i_14 = i_7
            
            if (edi_5 s> ecx_26)
                ecx_26 = edi_5
            
            void* edi_6 = esi[0xb16]
            var_20 = ecx_26
            int32_t ecx_27 = eax_129
            var_2c = edi_6
            
            if (eax_132 s> ecx_27)
                ecx_27 = eax_132
            
            esi[0x30] = esi_2 - 4 + edi_6
            esi[0x31] = esi[0xb17] + i_14 - 4
            esi[0x32] = var_20 + 4 + edi_6
            bool cond:6_1 = esi[0x11].b == 0
            esi[0x33] = esi[0xb17] + 4 + ecx_27
            
            if (not(cond:6_1))
                void* ecx_28 = esi[0x121]
                int32_t i_15 = esi[0x122]
                int32_t i_17 = esi[0x128]
                void* eax_145 = esi[0x123] + ecx_28 - 1
                i_7 = i_15
                void* ecx_30 = esi[0x127]
                int32_t edi_8 = esi[0x129]
                var_30 = esi[0x124] + i_15 - 1
                void* edi_10 = edi_8 - 1 + ecx_30
                void* eax_150 = esi[0x12a] - 1 + i_17
                void* esi_3 = ecx_28
                
                if (ecx_30 s< esi[0x121])
                    esi_3 = ecx_30
                
                int32_t i_12 = i_7
                void* var_28_5 = esi_3
                
                if (i_17 s< i_12)
                    i_12 = i_17
                
                void* edx_6 = eax_145
                i_7 = i_12
                void* ecx_31 = var_30
                
                if (edi_10 s> edx_6)
                    edx_6 = edi_10
                
                if (eax_150 s> ecx_31)
                    ecx_31 = eax_150
                
                int32_t edi_12 = i_7 - 4
                esi = arg4
                esi[0x76] = esi_3 + var_2c - 4
                esi[0x77] = esi[0xb17] + edi_12
                esi[0x78] = esi[0xb16] + 4 + edx_6
                esi[0x79] = esi[0xb17] + 4 + ecx_31
            
            edi_1 = arg5
        else
            int32_t edx_2 = esi[0xb16]
            int32_t ecx_16 = esi[0xb17]
            esi[0x30] = edi_1[0x25] + edx_2
            esi[0x31] = edi_1[0x26] + ecx_16
            esi[0x32] = edi_1[0x27] + edx_2
            esi[0x33] = edi_1[0x28] + ecx_16
        
        int32_t eax_161 = 0xffffffff
        
        if (var_6 == 0 && edi_1[0x45] != 0)
            if (data_13130c0:0xc == arg3 && data_13130d8 != 0 && data_13130c0.d != 0)
                eax_161 = data_13130dc
            
            if (data_1b8ad80:0xc == arg3 && data_1b8ad98 != 0 && data_1b8ad80.d != 0)
                eax_161 = data_1b8ad9c
        
        int32_t eax_163 = esi[7] + esi[0xb19]
        sub_45e160(eax_163, esi[0xb18] + esi[6], &esi[8], eax_163, var_18_1, eax_161)
        int32_t eax_166 = esi[0xb17] + esi[0x11e] - 6 + edi_1[0x1b]
        sub_45e160(eax_166, esi[0xb16] + esi[0x11d] - 6 + edi_1[0x1a], &esi[0x12], eax_166, 
            esi[0x29].b, 0xffffffff)
        void* ecx_41 = &esi[0xb28]
        int32_t i_6 = 8
        void* var_28_6 = ecx_41
        int32_t i_2
        
        do
            *(ecx_41 + 8) = *(ecx_41 + 0x11c) + esi[0xb16]
            *(ecx_41 + 0xc) = *(ecx_41 + 0x120) + esi[0xb17]
            int32_t eax_171 = *ecx_41
            
            if (eax_171 u<= 0x1ff)
                void* edi_13 = eax_171 * 0x74
                
                if (*(edi_13 + 0x13747b0) != 0 || *(edi_13 + &data_1374760) != 0)
                    goto label_578db8
                
                int32_t ecx_42 = *(edi_13 + 0x137478c)
                
                if (ecx_42 != 0xffffffff)
                    *(edi_13 + 0x13747cc) = 0
                    var_30 = edi_13 + 0x13747c0
                    var_2c = edi_13 + 0x13747bc
                    int32_t var_58_5 = ecx_42
                    
                    if (sub_495d90(edi_13 + 0x13747b4, edi_13 + 0x13747b0, ecx_42, 
                            edi_13 + 0x13747b4, edi_13 + 0x13747bc, edi_13 + 0x13747c0, 
                            edi_13 + &data_1374790) != 0)
                        void* eax_180 = var_30
                        void* ecx_44 = var_2c
                        *(edi_13 + 0x13747c4) = 0
                        *(edi_13 + 0x13747cc) = (*eax_180 * *ecx_44) << 2
                else
                    sub_427370(edi_13 + 0x13747cc, edi_13 + 0x1374764, edi_13 + 0x13747b0, 
                        *(edi_13 + 0x1374788), *(edi_13 + 0x13747a0), 1, *(edi_13 + 0x13747a8), 
                        edi_13 + 0x13747cc, 1, 0)
                
                ecx_41 = var_28_6
                
                if (*(edi_13 + 0x13747b0) != 0)
                    sub_427c30(edi_13 + 0x13747b0, ecx_41 + 4)
                    ecx_41 = var_28_6
                else
                    *(edi_13 + &data_1374760) = 1
                label_578db8:
                    
                    if (*(edi_13 + 0x13747b0) != 0)
                        sub_427c30(edi_13 + 0x13747b0, ecx_41 + 4)
                        ecx_41 = var_28_6
            
            ecx_41 += 0x128
            i_2 = i_6
            i_6 -= 1
            var_28_6 = ecx_41
        while (i_2 != 1)
        
        if (var_7 != 0)
            int32_t* eax_184 = arg5
            void* ecx_46 = &esi[0x199]
            int32_t i_3 = 0
            void* var_28_7 = ecx_46
            i_7 = 0
            
            do
                if (*(eax_184 + i_3 + 0xcc) != 0)
                    *(ecx_46 + 0xc) = *(ecx_46 + 0x120) + esi[0xb16]
                    *(ecx_46 + 0x10) = *(ecx_46 + 0x124) + esi[0xb17]
                    int32_t eax_189 = *ecx_46
                    
                    if (eax_189 u<= 0x1ff)
                        void* edi_14 = eax_189 * 0x74
                        
                        if (*(edi_14 + 0x13747b0) != 0 || *(edi_14 + &data_1374760) != 0)
                            goto label_578f16
                        
                        int32_t ecx_47 = *(edi_14 + 0x137478c)
                        
                        if (ecx_47 != 0xffffffff)
                            *(edi_14 + 0x13747cc) = 0
                            var_30 = edi_14 + 0x13747c0
                            int32_t var_58_6 = ecx_47
                            
                            if (sub_495d90(edi_14 + 0x13747b4, edi_14 + 0x13747b0, ecx_47, 
                                    edi_14 + 0x13747b4, edi_14 + 0x13747bc, edi_14 + 0x13747c0, 
                                    edi_14 + &data_1374790) != 0)
                                void* ecx_49 = var_30
                                *(edi_14 + 0x13747c4) = 0
                                *(edi_14 + 0x13747cc) = (*(edi_14 + 0x13747bc) * *ecx_49) << 2
                        else
                            sub_427370(edi_14 + 0x13747cc, edi_14 + 0x1374764, edi_14 + 0x13747b0, 
                                *(edi_14 + 0x1374788), *(edi_14 + 0x13747a0), 1, 
                                *(edi_14 + 0x13747a8), edi_14 + 0x13747cc, 1, 0)
                        
                        ecx_46 = var_28_7
                        
                        if (*(edi_14 + 0x13747b0) != 0)
                            sub_427c30(edi_14 + 0x13747b0, ecx_46 + 8)
                            ecx_46 = var_28_7
                        else
                            *(edi_14 + &data_1374760) = 1
                        label_578f16:
                            
                            if (*(edi_14 + 0x13747b0) != 0)
                                sub_427c30(edi_14 + 0x13747b0, ecx_46 + 8)
                                ecx_46 = var_28_7
                        
                        i_3 = i_7
                    
                    eax_184 = arg5
                
                i_3 += 1
                ecx_46 += 0x128
                var_28_7 = ecx_46
                i_7 = i_3
            while (i_3 s< 0x10)
        
        int32_t eax_209 = arg3
        int32_t edi_15 = data_71929c
        
        if (data_107ee54 == eax_209 && edi_15 == 0x11)
            int32_t ecx_51 = data_7037c0
            
            if (data_108f2d0 == 0)
                ecx_51 = data_7037bc
            
            if (ecx_51 u<= 0x1f)
                data_107ee5c = esi[0xb18] + esi[6] + data_107ef98
                data_107ee60 = esi[7] + data_107ef9c + esi[0xb19]
                sub_427c30(ecx_51 * 0x28 + &data_1319240, &data_107ee58)
                eax_209 = arg3
        
        if (data_13130c0:0xc == eax_209 && data_13130c0.d != 0)
            data_107eff4 = 0
            
            if (edi_15 == 0x13 || edi_15 == 0x14)
                int32_t eax_210 = data_13130dc
                
                if (eax_210 != 0xffffffff)
                    int32_t* edi_17 = eax_210 * 0x2c + data_13130c0:4
                    int32_t edx_17 = edi_17[6]
                    
                    if (edx_17 s< 0 && edx_17 != 0xffffffff)
                        int32_t eax_211 = data_13130d0
                        edx_17 = 0xffffffff
                        
                        if (eax_211 s>= 0)
                            edx_17 = eax_211
                    
                    int32_t eax_212 = data_107efa0
                    
                    if (edx_17 == eax_212)
                        goto label_579045
                    
                    if (edx_17 s< 0)
                        data_107eff4 = 0
                        data_107eff0 = 0xff
                        data_107efa0 = 0xfffffffe
                        data_107efa4 = 0xffffffff
                    else
                        sub_57e0c0(arg3, edx_17)
                        eax_212 = data_107efa0
                    label_579045:
                        
                        if (eax_212 u<= 0x1f)
                            data_107eff4 = 1
                            int32_t edx_18 = *(eax_212 * 0x28 + &data_131925c)
                            int32_t ecx_56 = edi_17[3] - edi_17[1] + 1
                            var_30 = eax_212 * 0x28 + &data_1319240
                            int32_t eax_215
                            
                            if (edx_18 s< ecx_56)
                                int32_t eax_218
                                int32_t edx_19
                                edx_19:eax_218 = sx.q(ecx_56 - edx_18)
                                eax_215 = ((eax_218 - edx_19) s>> 1) + *edi_17
                            else
                                eax_215 = *edi_17
                            
                            data_107f0e8 = eax_215
                            void* ecx_58 = var_30
                            int32_t eax_223
                            int32_t edx_20
                            edx_20:eax_223 = sx.q(ecx_56 - *(var_30 + 0x20))
                            int32_t eax_226 = ((eax_223 - edx_20) s>> 1) + edi_17[1]
                            data_107f0ec = eax_226
                            data_107efac = esi[0xb18] + esi[6] + eax_215
                            data_107efb0 = esi[7] + eax_226 + esi[0xb19]
                            sub_427c30(ecx_58, &data_107efa8)
        
        eax_68 = sub_445a00(arg3)

if (esi[0xb14] != 0 || esi[0xb15] != 0)
    data_703008 = 1

sub_41cd30(sub_41cd30(eax_68, &esi[0x3a], &esi[0x17], nullptr, nullptr), &esi[0x80], &esi[0x5d], 
    nullptr, nullptr)
sub_45e1e0(&esi[8])
int32_t* result = sub_45e1e0(&esi[0x12])
void* edi_18 = &esi[0xb29]
int32_t i_9 = 8
int32_t i_4

do
    result = sub_41cd30(result, edi_18 + 0x8c, edi_18, nullptr, nullptr)
    edi_18 += 0x128
    i_4 = i_9
    i_9 -= 1
while (i_4 != 1)
int32_t* esi_6 = arg4

if (var_7 != 0)
    int32_t i_5 = 0
    result = arg5
    void* esi_8 = &var_40[2]
    
    do
        if (*(result + i_5 + 0xcc) != 0)
            sub_41cd30(result, esi_8 + 0x8c, esi_8, nullptr, nullptr)
            result = arg5
        
        i_5 += 1
        esi_8 += 0x128
    while (i_5 s< 0x10)
    
    esi_6 = arg4

if (data_107ee54 == arg3)
    result = sub_41cd30(result, 0x107eee4, &data_107ee58, nullptr, nullptr)

if (data_13130c0:0xc == arg3)
    result = sub_41cd30(result, 0x107f034, &data_107efa8, nullptr, nullptr)

if (esi_6[0xe0e].b != 0)
    int32_t var_58_7 = esi_6[0xe12]
    int32_t var_5c_9 = esi_6[0xe11]
    result = sub_494c90(esi_6[0xe0f], esi_6[0xe10])
    esi_6[0xe0e].b = 0
    esi_6[0xe0f] = 0xffffffff
    esi_6[0xe10] = 0xffffffff
    esi_6[0xe11] = 0xffffffff
    esi_6[0xe12] = 0xffffffff

if (esi_6[0xe13].b != 0)
    int32_t var_58_8 = esi_6[0xe17]
    int32_t var_5c_10 = esi_6[0xe16]
    result = sub_494c90(esi_6[0xe14], esi_6[0xe15])
    esi_6[0xe13].b = 0
    esi_6[0xe14] = 0xffffffff
    esi_6[0xe15] = 0xffffffff
    esi_6[0xe16] = 0xffffffff
    esi_6[0xe17] = 0xffffffff

if (data_13130c0:0xc == arg3 && data_13130c0.d != 0)
    result = data_13130dc
    int32_t ecx_68 = data_13130e4
    
    if (result != ecx_68)
        if (result != 0xffffffff)
            int32_t edx_33 = esi_6[0xb17]
            int32_t* eax_229 = result * 0x2c + data_13130c0:4
            int32_t var_58_9 = eax_229[3] + esi_6[7] + edx_33 + 2
            int32_t var_5c_11 = esi_6[0xb16] + eax_229[2] + 2 + esi_6[6]
            sub_494c90(*eax_229 + esi_6[6] + esi_6[0xb16] - 2, eax_229[1] - 2 + esi_6[7] + edx_33)
            ecx_68 = data_13130e4
            result = data_13130dc
        
        if (ecx_68 != 0xffffffff)
            int32_t edx_36 = esi_6[0xb17]
            int32_t* eax_247 = ecx_68 * 0x2c + data_13130c0:4
            int32_t var_58_10 = eax_247[3] + esi_6[7] + edx_36 + 2
            int32_t var_5c_12 = esi_6[0xb16] + eax_247[2] + 2 + esi_6[6]
            sub_494c90(*eax_247 + esi_6[6] + esi_6[0xb16] - 2, eax_247[1] - 2 + esi_6[7] + edx_36)
            result = data_13130dc
        
        data_13130e4 = result
    
    if (data_13130e8 != 0)
        data_13130e8 = 0
        
        if (result != 0xffffffff)
            int32_t* ecx_76 = esi_6[0xb16] + esi_6[6]
            int32_t edi_25 = esi_6[0xb17] + esi_6[7]
            arg4 = ecx_76
            int32_t var_58_11 = data_13130f8 + 2 + edi_25
            void* var_5c_13 = ecx_76 + data_13130f4 + 2
            return sub_494c90(data_13130ec - 2 + ecx_76, data_13130f0 - 2 + edi_25)

return result

// 函数: sub_5cfa20
// 地址: 0x5cfa20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0x138) == 0 || *data_bac458 != 0x11)
    return 

int32_t i = 0
int32_t i_2 = 0
int16_t var_28

if (*(arg1 + 0x108) s> 0)
    int32_t eax_1 = 0
    int32_t var_14_1 = 0
    
    do
        void* ebx_2 = *(arg1 + 0x10c) + eax_1
        sub_5f38a0(ebx_2 + 0x21c)
        int32_t* eax_2 = data_bac4e8
        
        if (*(eax_2 + 0x2a) != 0)
            int32_t eax_3 = *eax_2
            
            if (eax_3 s>= 0 && *(ebx_2 + 0x17b8) == eax_3 && *(ebx_2 + 0x2e14) != *(ebx_2 + 0x2e18))
                int32_t ecx_1 = *(ebx_2 + 0x2e2c)
                
                if (ecx_1 s< 0 || (*(ebx_2 + 0x2e18) - *(ebx_2 + 0x2e14)) s>> 2 s<= ecx_1)
                    *(ebx_2 + 0x2e2c) = 0
                
                int32_t ecx_2 = *(ebx_2 + 0x2e2c)
                int32_t* eax_9 = *(*(ebx_2 + 0x2e14) + (ecx_2 << 2))
                int32_t eax_11 = *(*(ebx_2 + 0x2e20) + (ecx_2 << 2))
                void* eax_12 = data_bac4e4
                int32_t var_8_1
                
                if (*(eax_12 + 0x156) == 0)
                    var_8_1 = 0x64
                else
                    var_8_1 = *(eax_12 + 0x158)
                
                void* esi_1 = data_bac468
                var_28.d = 1
                sub_6de670(*(esi_1 + 0x178), 1)
                *(esi_1 + 0x184) = eax_9
                *(esi_1 + 0x188) = eax_11
                *(esi_1 + 0x190) = 1
                sub_676f90(0)
                var_28.d = 0
                int64_t var_34
                var_34:4.d = 0
                var_34.d = var_8_1
                sub_6040f0(*(esi_1 + 0x178), eax_9, nullptr, var_34, nullptr, 0)
                *(ebx_2 + 0x2e2c) += 1
                i = i_2
        
        i += 1
        eax_1 = var_14_1 + 0x2e60
        i_2 = i
        var_14_1 = eax_1
    while (i s< *(arg1 + 0x108))

int32_t i_1 = 0

if (*(arg1 + 0x108) s> 0)
    int32_t eax_17 = 0
    int32_t var_8_2 = 0
    
    do
        void* esi_3 = *(arg1 + 0x10c) + eax_17
        
        if (*(esi_3 + 0x2e50) != 0 || *(esi_3 + 0x2e52) != 0 || *(esi_3 + 0x2e54) != 0
                || *(esi_3 + 0x2e56) != 0 || *(esi_3 + 0x2e58) != 0 || *(esi_3 + 0x2e5a) != 0
                || *(esi_3 + 0x2e5c) != 0)
            sub_5f38a0(esi_3 + 0x1818)
            int32_t* eax_18 = data_bac4e8
            
            if (*(eax_18 + 0x2a) != 0)
                int32_t eax_19 = *eax_18
                
                if (eax_19 s>= 0 && *(esi_3 + 0x2db4) == eax_19)
                    int32_t eax_20
                    eax_20.w = *(esi_3 + 0x2e5c)
                    sub_5d03b0(*(esi_3 + 0x2e50), *(esi_3 + 0x2e58), eax_20.w)
        
        var_8_2 += 0x2e60
        i_1 += 1
        eax_17 = var_8_2
    while (i_1 s< *(arg1 + 0x108))

sub_5f38a0(arg1 + 0x418)
int32_t* ecx_8 = data_bac4e8
void* esi_4 = data_bac510
int32_t* edx_1 = data_bac42c

if (*(ecx_8 + 0x29) != 0)
    int32_t eax_21 = *ecx_8
    
    if (eax_21 s>= 0 && *(arg1 + 0x19b4) == eax_21)
        int32_t eax_22 = *(arg1 + 0x14c)
        *(arg1 + 0x150) = 1
        *(arg1 + 0x154) = eax_22
        int32_t eax_23
        
        if (*(esi_4 + 0x10bd8) != 1)
            eax_23 = edx_1[1]
        else
            eax_23 = *edx_1
        
        *(arg1 + 0x158) = eax_23

if (*(ecx_8 + 0x2a) == 0)
label_5cfce1:
    int32_t eax_25 = *ecx_8
    
    if (eax_25 s< 0 || *(arg1 + 0x19b4) != eax_25 || ecx_8[3] != 2)
        *(arg1 + 0x150) = 0
else
    int32_t eax_24 = *ecx_8
    
    if (eax_24 s>= 0)
        if (*(arg1 + 0x19b4) == eax_24)
            *(arg1 + 0x150) = 0
            sub_5d4230(arg1)
            esi_4 = data_bac510
            edx_1 = data_bac42c
            ecx_8 = data_bac4e8
        
        goto label_5cfce1
    
    *(arg1 + 0x150) = 0

if (*(arg1 + 0x150) != 0 && *(arg1 + 0x118) s> 0)
    var_28.d = 0
    int32_t eax_30
    int32_t edx_3
    
    if (*(esi_4 + 0x10bd8) != 1)
        *(arg1 + 0x14c) = edx_1[1] - *(arg1 + 0x158) + *(arg1 + 0x154)
        int32_t eax_34 = sub_5ef9c0(arg1 + 0x418, 0)
        void* ecx_12 = data_bac510
        edx_3 = *(ecx_12 + 0xa47c98) - eax_34
        eax_30 = *(ecx_12 + 0xa47c90)
    else
        *(arg1 + 0x14c) = *(arg1 + 0x154) - *(arg1 + 0x158) + *edx_1
        int32_t eax_29 = sub_5ef850(arg1 + 0x418, 0)
        void* ecx_11 = data_bac510
        edx_3 = *(ecx_11 + 0xa47c98) - eax_29
        eax_30 = *(ecx_11 + &data_a47c8c)
    
    int32_t esi_5 = *(arg1 + 0x14c)
    
    if (esi_5 s>= eax_30)
        eax_30 = esi_5
        
        if (esi_5 s> edx_3)
            eax_30 = edx_3
    
    *(arg1 + 0x14c) = eax_30
    sub_5d3f10(arg1)
    sub_5d4120(arg1)

sub_5f38a0(arg1 + 0x1a14)
int32_t* eax_35 = data_bac4e8

if (*(eax_35 + 0x2a) != 0)
    int32_t eax_36 = *eax_35
    
    if (eax_36 s>= 0 && *(arg1 + 0x2fb0) == eax_36 && *(data_bac484 + 0x138) != 0)
        sub_5d2170()
        int32_t* ecx_16 = data_bac458
        var_28.d = ecx_16[0x57] - 0x158
        sub_62f9b0(ecx_16, var_28)
        void* esi_6 = data_bac458
        sub_54ae40(*(esi_6 + 0x15c) - 0xcc)
        *(esi_6 + 0x15c) -= 0x158

sub_5f38a0(arg1 + 0x3010)
int32_t* eax_40
int32_t ecx_20

if (*(arg1 + 0x184) == 0)
    eax_40 = data_bac4e8
    ecx_20 = *eax_40

if (*(arg1 + 0x184) == 0 && (ecx_20 s< 0 || *(arg1 + 0x45ac) != ecx_20 || eax_40[3] != 2))
    *(arg1 + 0x188) = 0
else
    sub_5d3c30(arg1)

*(arg1 + 0x184) = 0
sub_5f38a0(arg1 + 0x460c)
int32_t* eax_41
int32_t ecx_23

if (*(arg1 + 0x185) == 0)
    eax_41 = data_bac4e8
    ecx_23 = *eax_41

if (*(arg1 + 0x185) == 0 && (ecx_23 s< 0 || *(arg1 + 0x5ba8) != ecx_23 || eax_41[3] != 2))
    *(arg1 + 0x18c) = 0
else
    sub_5d3cc0(arg1)

*(arg1 + 0x185) = 0
sub_5f38a0(arg1 + 0x5c08)
int32_t* eax_42 = data_bac4e8

if (*(eax_42 + 0x2a) != 0)
    int32_t eax_43 = *eax_42
    
    if (eax_43 s>= 0 && *(arg1 + 0x71a4) == eax_43)
        sub_5d0590(1)

sub_5f38a0(arg1 + 0x7204)
int32_t* eax_44 = data_bac4e8

if (*(eax_44 + 0x2a) != 0)
    int32_t eax_45 = *eax_44
    
    if (eax_45 s>= 0 && *(arg1 + 0x87a0) == eax_45)
        sub_5d0590(2)

sub_5f38a0(arg1 + 0x8800)
int32_t* eax_46 = data_bac4e8

if (*(eax_46 + 0x2a) != 0)
    int32_t eax_47 = *eax_46
    
    if (eax_47 s>= 0 && *(arg1 + 0x9d9c) == eax_47)
        sub_5d0590(3)

sub_5f38a0(arg1 + 0x9dfc)
int32_t* eax_48 = data_bac4e8

if (*(eax_48 + 0x2a) != 0)
    int32_t eax_49 = *eax_48
    
    if (eax_49 s>= 0 && *(arg1 + 0xb398) == eax_49)
        sub_5d0590(4)

void* edx_5 = data_bac4c8

if (*(edx_5 + 0xc) == 1)
    int32_t* ecx_29 = data_bac42c
    *(edx_5 + 0xc) = 0
    *(edx_5 + 0x14) = 0
    *(arg1 + 0x15c) = 1
    *(arg1 + 0x160) = *ecx_29
    *(arg1 + 0x164) = ecx_29[1]
    *(arg1 + 0x168) = *(arg1 + 0x148)
    *(arg1 + 0x16c) = 0
    *(arg1 + 0x170) = timeGetTime()
    int32_t* eax_55 = data_bac42c
    int32_t eax_56
    
    if (*(data_bac510 + 0x10bd8) != 1)
        eax_56 = eax_55[1]
    else
        eax_56 = *eax_55
    
    edx_5 = data_bac4c8
    *(arg1 + 0x174) = eax_56
    *(arg1 + 0x178) = 0

if (*(arg1 + 0x15c) != 0)
    int32_t* ecx_30 = data_bac42c
    
    if (*(arg1 + 0x160) != *ecx_30 || *(arg1 + 0x164) != ecx_30[1])
        *(arg1 + 0x15d) = 1

if (*(edx_5 + 0x10) == 1)
    *(edx_5 + 0x10) = 0
    *(edx_5 + 0x14) = 0
    
    if (*(arg1 + 0x15c) == 0)
    label_5d0042:
        
        if (*(arg1 + 0x15d) != 0)
            goto label_5d004b
    else
        if (*(arg1 + 0x15d) == 0)
            if (*(arg1 + 0x144) s>= 0)
                sub_5cf8b0(arg1)
                edx_5 = data_bac4c8
            
            goto label_5d0042
        
    label_5d004b:
        int32_t eax_59 = *(arg1 + 0x178)
        
        if (eax_59 != 0)
            int32_t ecx_32 = *(arg1 + 0x148)
            *(arg1 + 0x16c) = 1
            *(arg1 + 0x17c) = ecx_32
            *(arg1 + 0x180) = ecx_32 + eax_59 * 0xa
            uint32_t eax_62 = timeGetTime()
            edx_5 = data_bac4c8
            *(arg1 + 0x170) = eax_62
    
    *(arg1 + 0x15c) = 0

int32_t* eax

if (data_bac4a0[0x33].b != 0)
    eax.b = 0
else if (data_bac484[0x4e].b == 0)
    eax.b = *(data_bac498 + 2) == 0
else
    eax.b = 0

if (*(edx_5 + 0x51c) != 2)
    if (*(edx_5 + 0x1c8c) == 2 && (eax.b == 0 || *(data_bac458 + 0x3e6) == 0)
            && sub_6b1fd0(edx_5 + 0x1c80).b != 0)
        goto label_5d0111
else if ((eax.b == 0 || *(data_bac458 + 0x39b) == 0) && sub_6b1fd0(edx_5 + 0x510).b != 0)
label_5d0111:
    
    if (*(arg1 + 0x144) s>= 0)
        sub_5cf8b0(arg1)
        edx_5 = data_bac4c8

if (*(arg1 + 0x15d) != 0)
    uint32_t eax_63 = timeGetTime()
    void* edx_6 = data_bac510
    int32_t* ecx_38 = data_bac42c
    
    if (eax_63 - *(arg1 + 0x170) s>= 0x19)
        *(arg1 + 0x170) = eax_63
        int32_t eax_66
        
        if (*(edx_6 + 0x10bd8) != 1)
            *(arg1 + 0x178) = ecx_38[1] - *(arg1 + 0x174)
            eax_66 = ecx_38[1]
        else
            *(arg1 + 0x178) = *ecx_38 - *(arg1 + 0x174)
            eax_66 = *ecx_38
        
        *(arg1 + 0x174) = eax_66
    
    int32_t eax_71
    
    if (*(edx_6 + 0x10bd8) != 1)
        eax_71 = ecx_38[1] - *(arg1 + 0x164) + *(arg1 + 0x168)
    else
        eax_71 = *(arg1 + 0x168) - *(arg1 + 0x160) + *ecx_38
    
    *(arg1 + 0x148) = eax_71
    sub_5d4120(arg1)
    sub_5d4230(arg1)
    edx_5 = data_bac4c8

if (*(edx_5 + 8) == 1 || *(edx_5 + 0x58) == 1 || *(edx_5 + 0xb50) == 1 || *(edx_5 + 0xba0) == 1)
    *(arg1 + 0x16c) = 0
else
    int32_t eax_74 = *(edx_5 + 0xf8)
    
    if (eax_74 s<= 0)
        eax = *(edx_5 + 0xfc)
        
        if (eax s> 0)
            *(edx_5 + 0xfc) = eax - 1
            *(arg1 + 0x16c) = 0
    else
        *(edx_5 + 0xf8) = eax_74 - 1
        *(arg1 + 0x16c) = 0

if (*(arg1 + 0x16c) != 0)
    int32_t eax_76 = timeGetTime() - *(arg1 + 0x170)
    uint64_t xmm4_1 = zx.q(*(arg1 + 0x17c))
    uint64_t xmm3_1 = zx.q(*(arg1 + 0x180))
    double xmm2_1 = 1750.0
    double xmm1_2 = _mm_cvtepi32_pd(zx.q(eax_76))
    double xmm4_2 = _mm_cvtepi32_pd(xmm4_1)
    double xmm3_2 = _mm_cvtepi32_pd(xmm3_1)
    
    if (not(0.0 <= xmm1_2))
        xmm1_2 = (zx.o(0)).q
    else if (not(xmm1_2 <= xmm2_1))
        xmm1_2 = xmm2_1
    
    double xmm1_3 = xmm1_2 - xmm2_1
    *(arg1 + 0x148) = int.d(xmm3_2 - (xmm3_2 - xmm4_2) * xmm1_3 * xmm1_3 / xmm2_1 / xmm2_1)
    sub_5d4120(arg1)
    sub_5d4230(arg1)
    
    if (*(arg1 + 0x148) == *(arg1 + 0x180))
        *(arg1 + 0x16c) = 0

void* esi_7 = data_bac510
*(arg1 + 0x144) = 0xffffffff

if (*(esi_7 + 0xa47f44) s<= 0 || *(arg1 + 0x15d) != 0)
    return 

int32_t ebx_3 = 0

if (*(arg1 + 0x118) s<= 0)
    return 

int32_t eax_78 = *(esi_7 + 0xa47f44)
int32_t edx_7 = 0
int32_t var_8_3 = eax_78

while (true)
    if (eax_78 == 1)
        int32_t ecx_41 = *(arg1 + 0x10c)
        
        if (*(ecx_41 + edx_7 + 0x2e14) != *(ecx_41 + edx_7 + 0x2e18))
            goto label_5d031b
        
        eax_78 = var_8_3
    else if (eax_78 == 2)
    label_5d031b:
        bool cond:5_1
        
        if (*(esi_7 + 0x10bd8) != 1)
            int32_t eax_81 = *(arg1 + 0x10c)
            int32_t ecx_46 = *(eax_81 + edx_7 + 0x214) + *(arg1 + 0x148) + *(arg1 + 0xd8)
            int32_t esi_12 = *(data_bac42c + 4)
            
            if (ecx_46 s<= esi_12)
                cond:5_1 = esi_12 s< *(eax_81 + edx_7 + 0x218) + ecx_46
            label_5d037e:
                
                if (cond:5_1)
                    break
        else
            int32_t ecx_42 = *(arg1 + 0x10c)
            int32_t esi_10 = *(arg1 + 0x148) - *(ecx_42 + edx_7 + 0x214) + *(arg1 + 0xdc)
            int32_t* ecx_43 = data_bac42c
            
            if (esi_10 - *(ecx_42 + edx_7 + 0x218) s<= *ecx_43)
                cond:5_1 = *ecx_43 s< esi_10
                goto label_5d037e
        esi_7 = data_bac510
        eax_78 = var_8_3
    
    ebx_3 += 1
    edx_7 += 0x2e60
    
    if (ebx_3 s>= *(arg1 + 0x118))
        return 

*(arg1 + 0x144) = ebx_3

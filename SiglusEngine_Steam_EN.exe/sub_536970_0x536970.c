// 函数: sub_536970
// 地址: 0x536970
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* edx = __chkstk(0x20c4)
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_8 = eax_1
int32_t var_a8 = 0
char const* const var_18 = "$$$$@"
int32_t var_a4 = 0
int32_t var_94 = 0
int32_t var_90 = 0
int32_t var_80 = 0
int32_t var_7c = 0
int32_t var_6c = 0
int32_t var_68 = 0
int32_t var_58 = 0
int32_t var_54 = 0
int32_t var_44 = 0
int32_t var_40 = 0
int32_t var_30 = 0
int32_t var_2c = 0
int32_t var_1c = 0
sub_4ef190(eax_1, edx + 0x20, *(edx + 0x20), nullptr, &data_1b8a720)
int32_t eax_2 = data_1b8a734
int32_t i_4 = 0
int32_t ecx_1 = data_1b8a748
int32_t esi = data_1b8a720
char* eax_3 = data_1b8a75c
int32_t var_20b4 = ecx_1
char* var_20b0 = eax_3
int32_t i_2 = 0
int32_t var_20ac[0x800]
var_20a8
var_20a4
var_20a0
var_209c
var_2094
var_2090
char* var_ac

if (data_1b8c884 s> 0)
    int32_t i
    
    do
        if (i_4 s> 0x100)
            i_4 = 0x100
        
        char* eax_4 = *(edx + 0x20)
        
        while (*eax_4 == 0xa)
            eax_4 = &eax_4[3]
            *(edx + 0x20) = eax_4
        
        *(edx + 0x20) += 1
        char* ecx_2 = *(edx + 0x20)
        int32_t esi_2 = i_4 << 5
        var_20ac[i_4 * 8] = zx.d(*ecx_2)
        *(edx + 0x20) = &ecx_2[2]
        uint32_t edx_2 = zx.d(ecx_2[2])
        int32_t eax_7 = var_20ac[i_4 * 8]
        *(edx + 0x20) = &ecx_2[3]
        char* ecx_3
        char* edx_4
        
        if (eax_7 != 0x31)
            var_2098
            
            if (eax_7 - 0x30 u<= 7)
                int32_t var_98
                int32_t var_84
                
                switch (eax_7)
                    case 0x30
                        char** eax_10 = &var_ac
                        uint32_t var_14_2 = &var_ac
                        
                        if (edx_2 != 0)
                            sub_4ef190(eax_10, edx + 0x20, &ecx_2[3], "$$$", var_14_2)
                            *(&var_2090 + esi_2) = var_84
                        else
                            sub_4ef190(eax_10, edx + 0x20, &ecx_2[3], "$$", var_14_2)
                            var_84 = 0
                            *(&var_2090 + esi_2) = 0
                        
                        goto label_536c74
                    case 0x32
                        sub_4ef190(&var_ac, edx + 0x20, &ecx_2[3], "$", &var_ac)
                        ecx_3 = var_20b0
                        *(&var_20a8 + esi_2) = var_20b4
                        *(&var_20a4 + esi_2) = var_ac
                        *(&var_209c + esi_2) = ecx_3
                        *(&var_2098 + esi_2) = ecx_3
                        __builtin_memset(&var_2094 + esi_2, 0, 8)
                    case 0x33, 0x36
                        sub_4ef190(&var_ac, edx + 0x20, &ecx_2[3], "$$$", &var_ac)
                        ecx_3 = var_20b0
                        *(&var_20a8 + esi_2) = var_20b4
                        *(&var_20a4 + esi_2) = var_ac
                        *(&var_209c + esi_2) = var_98
                        *(&var_2098 + esi_2) = ecx_3
                        *(&var_2094 + esi_2) = var_84
                        *(&var_2090 + esi_2) = 0
                    case 0x34, 0x35
                        sub_4ef190(&var_ac, edx + 0x20, &ecx_2[3], "$$$", &var_ac)
                        ecx_3 = var_20b0
                        *(&var_20a8 + esi_2) = var_20b4
                        *(&var_20a4 + esi_2) = var_ac
                        *(&var_209c + esi_2) = var_98
                        *(&var_2098 + esi_2) = var_98
                        *(&var_2094 + esi_2) = var_84
                        *(&var_2090 + esi_2) = 0
                    case 0x37
                        sub_4ef190(&var_ac, edx + 0x20, &ecx_2[3], "$$", &var_ac)
                        *(&var_2090 + esi_2) = 0
                    label_536c74:
                        ecx_3 = var_20b0
                        *(&var_20a8 + esi_2) = var_20b4
                        *(&var_20a4 + esi_2) = var_ac
                        *(&var_2098 + esi_2) = var_98
                        *(&var_209c + esi_2) = var_98
                        __builtin_memset(&var_2094 + esi_2, 0, 8)
                
                *(&var_20a0 + esi_2) = ecx_3
            
            if (data_1bfdd30 == 0x32b)
                *(&var_20a4 + esi_2) += *(&var_20a8 + esi_2)
            
            i_4 += 1
            edx_4 = *(&var_2098 + esi_2)
            var_20b4 = *(&var_20a4 + esi_2)
        else
            sub_4ef190(&var_ac, edx + 0x20, &ecx_2[3], "$", &var_ac)
            edx_4 = var_ac
        
        char* eax_30 = *(edx + 0x20)
        var_20b0 = edx_4
        
        while (true)
            ecx_3.b = *eax_30
            
            if (ecx_3.b != 0x2c && ecx_3.b != 0x20)
                break
            
            eax_30 = &eax_30[1]
        
        i = i_2 + 1
        *(edx + 0x20) = eax_30
        i_2 = i
    while (i s< data_1b8c884)

sub_4eef40(&var_ac, 8)
char* eax_31 = *(edx + 0x20)

while (*eax_31 == 0xa)
    eax_31 = &eax_31[3]
    *(edx + 0x20) = eax_31

*(edx + 0x20) += 1
int32_t entry_ebx

if (i_4 != 0)
    if (i_4 s> 0)
        eax_31 = &var_20a4
        int32_t i_3 = i_4
        int32_t i_1
        
        do
            *(eax_31 - 4) += eax_2
            eax_31 = &eax_31[0x20]
            *(eax_31 - 0x20) += eax_2
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    char* eax_32
    
    if (esi s< ecx_1)
        eax_32 = eax_3
    label_53712e:
        data_715e98 = eax_32
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return eax_32
    
    if (esi s< var_20b4)
        int32_t edx_12 = 0
        int32_t eax_33 = 0
        
        if (i_4 s> 0)
            void* ecx_10 = &var_20a4
            
            do
                if (esi s< *ecx_10)
                    edx_12 = eax_33
                    break
                
                eax_33 += 1
                ecx_10 += 0x20
            while (eax_33 s< i_4)
        
        int32_t edx_13 = edx_12 << 5
        int32_t eax_34 = *(&var_20a8 + edx_13)
        int32_t esi_3 = esi - eax_34
        int32_t ecx_11 = *(&var_20a0 + edx_13)
        int32_t ebx_2 = *(&var_20a4 + edx_13) - eax_34
        int32_t edi_2 = *(&var_209c + edx_13) - ecx_11
        int32_t ecx_12 = var_20ac[edx_12 * 8]
        int32_t eax_35 = 0
        
        if (ecx_12 == 0x30)
            int32_t eax_36 = *(&var_2090 + edx_13)
            
            if (eax_36 == 0)
                eax_35 = divs.dp.d(sx.q(esi_3 * edi_2), ebx_2)
            else if (eax_36 != 1)
                if (edi_2 == 0)
                    eax_35 = 0
                else if (ebx_2 s<= 0 || esi_3 s< 0 || esi_3 s>= ebx_2)
                    eax_35 = edi_2
                else
                    double xmm1_4 = _mm_cvtepi32_pd(zx.q(ebx_2))
                    double xmm0_15 = _mm_cvtepi32_pd(zx.q(esi_3 - ebx_2))
                    double xmm3_4 = _mm_cvtepi32_pd(zx.q(edi_2))
                    double xmm3_5 = xmm3_4 - xmm0_15 * xmm0_15 * xmm0_15 * xmm0_15 * xmm3_4
                        / (xmm1_4 * xmm1_4 * xmm1_4 * xmm1_4)
                    
                    if (xmm3_5 < 0.0)
                        eax_35 = int.d(-0.5 + xmm3_5)
                    else
                        eax_35 = int.d(0.5 + xmm3_5)
            else if (edi_2 == 0)
                eax_35 = 0
            else if (ebx_2 s<= 0 || esi_3 s< 0 || esi_3 s>= ebx_2)
                eax_35 = edi_2
            else
                double xmm0_2 = _mm_cvtepi32_pd(zx.q(esi_3 + ebx_2))
                double xmm1_2 = _mm_cvtepi32_pd(zx.q(ebx_2))
                double xmm3_2 = _mm_cvtepi32_pd(zx.q(edi_2))
                double xmm4_7 = xmm0_2 * xmm0_2 * xmm0_2 * xmm0_2 * xmm3_2
                    / (xmm1_2 * 15.0 * xmm1_2 * xmm1_2 * xmm1_2) + (0.0 - xmm3_2) / 15.0
                
                if (xmm4_7 f< 0)
                    eax_35 = int.d(-0.5 + xmm4_7)
                else
                    eax_35 = int.d(0.5 + xmm4_7)
        else if (ecx_12 != 0x31)
            switch (ecx_12)
                case 0x32
                    eax_35 = edi_2
                case 0x33
                    int32_t ecx_13 = *(&var_2094 + edx_13)
                    int32_t edx_16 = 1
                    int32_t ebx_3 = 1
                    
                    if (ecx_13 s> 1)
                        edx_16 = ecx_13
                    
                    int32_t temp0_2 = divs.dp.d(sx.q(ebx_2), edx_16 * 2)
                    
                    if (temp0_2 s> 1)
                        ebx_3 = temp0_2
                    
                    int32_t eax_44
                    int32_t edx_19
                    edx_19:eax_44 = sx.q(esi_3)
                    int32_t ecx_16 = divs.dp.d(edx_19:eax_44, ebx_3) & 0x80000001
                    
                    if (ecx_16 s< 0)
                        ecx_16 = ((ecx_16 - 1) | 0xfffffffe) + 1
                    
                    int32_t ecx_19 = neg.d(ecx_16)
                    eax_35 = divs.dp.d(sx.q(mods.dp.d(edx_19:eax_44, ebx_3) * edi_2), ebx_3)
                    
                    if (neg.d(sbb.d(ecx_19, ecx_19, ecx_16 != 0)) == 1)
                        eax_35 = edi_2 - eax_35
                case 0x34
                    int32_t esi_6 = 1
                    *(&var_2094 + edx_13)
                    int32_t ecx_22
                    int32_t temp0_5 = divs.dp.d(sx.q(ebx_2), (ecx_22 << 1) + 1)
                    
                    if (temp0_5 s> 1)
                        esi_6 = temp0_5
                    
                    int32_t eax_53
                    int32_t edx_26
                    edx_26:eax_53 = sx.q(esi_3)
                    int32_t ecx_25 = divs.dp.d(edx_26:eax_53, esi_6) & 0x80000001
                    
                    if (ecx_25 s< 0)
                        ecx_25 = ((ecx_25 - 1) | 0xfffffffe) + 1
                    
                    int32_t ecx_28 = neg.d(ecx_25)
                    eax_35 = divs.dp.d(sx.q(mods.dp.d(edx_26:eax_53, esi_6) * edi_2), esi_6)
                    
                    if (neg.d(sbb.d(ecx_28, ecx_28, ecx_25 != 0)) == 1)
                        eax_35 = edi_2 - eax_35
                case 0x35
                    int32_t eax_57 = *(&var_2094 + edx_13)
                    int32_t ecx_31 = 1
                    
                    if (eax_57 s> 1)
                        ecx_31 = eax_57
                    
                    int32_t temp0_8 = divs.dp.d(sx.q(ebx_2), ecx_31)
                    int32_t ecx_32 = 1
                    
                    if (temp0_8 s> 1)
                        ecx_32 = temp0_8
                    
                    eax_35 = divs.dp.d(sx.q(mods.dp.d(sx.q(esi_3), ecx_32) * edi_2), ecx_32)
                case 0x36
                    int32_t eax_65 = *(&var_2094 + edx_13)
                    int32_t ecx_33 = 1
                    
                    if (eax_65 s> 1)
                        ecx_33 = eax_65
                    
                    int32_t temp0_10 = divs.dp.d(sx.q(ebx_2), ecx_33 * 2)
                    int32_t ecx_35 = 1
                    
                    if (temp0_10 s> 1)
                        ecx_35 = temp0_10
                    
                    int32_t eax_70
                    int32_t edx_40
                    edx_40:eax_70 = sx.q(esi_3)
                    int32_t temp1_12 = mods.dp.d(edx_40:eax_70, ecx_35)
                    int32_t eax_72 = divs.dp.d(edx_40:eax_70, ecx_35) & 0x80000001
                    bool cond:3_1 = eax_72 != 0
                    
                    if (eax_72 s< 0)
                        cond:3_1 = ((eax_72 - 1) | 0xfffffffe) != 0xffffffff
                    
                    double xmm1_6 = _mm_cvtepi32_pd(zx.q(ecx_35))
                    double xmm1_7 = xmm1_6 * xmm1_6
                    
                    if (cond:3_1)
                        double xmm2_10 = _mm_cvtepi32_pd(zx.q(edi_2))
                        eax_35 = int.d(xmm2_10
                            - _mm_cvtepi32_pd(zx.q(temp1_12 * temp1_12)) * xmm2_10 / xmm1_7)
                    else
                        double xmm3_7 = _mm_cvtepi32_pd(zx.q(edi_2))
                        double xmm2_8 = _mm_cvtepi32_pd(zx.q(temp1_12 - ecx_35))
                        eax_35 = int.d(xmm3_7 - xmm2_8 * xmm3_7 * xmm2_8 / xmm1_7)
                case 0x37
                    eax_35 = 0
        
        eax_32 = eax_35 + ecx_11
        goto label_53712e

data_715e98 = var_20b0
sub_5f02dd(entry_ebx ^ &__saved_ebp)
return eax_31

// 函数: sub_5d69e0
// 地址: 0x5d69e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
sub_5d7d30(arg1)
int32_t result_2 = *(arg1 + 0x200)
char var_24 = 1
int32_t result_1 = 0
int32_t var_14 = 0xff

if (result_2 s>= 0)
    int32_t edx_1 = *(arg1 + 0x208)
    int32_t ecx_1 = *(arg1 + 0x204) + edx_1
    result_1 = result_2
    int32_t eax_2 = *(arg1 + 0x1d0)
    var_24 = 1
    
    if (eax_2 s>= ecx_1)
        var_14 = 0xff
        *(arg1 + 0x200) = 0xffffffff
    else if (eax_2 s> edx_1)
        int32_t temp0_1 = divs.dp.d(sx.q((eax_2 - edx_1) * 0xff), ecx_1 - edx_1)
        var_14 = temp0_1
        
        if (temp0_1 == 0xff)
            *(arg1 + 0x200) = 0xffffffff
    else
        var_14 = 0

int32_t result = *(arg1 + 0x20c)

if (result s>= 0)
    int32_t edx_4 = *(arg1 + 0x214)
    int32_t ecx_4 = *(arg1 + 0x210) + edx_4
    int32_t esi_1 = *(arg1 + 0x1d0)
    var_24 = 0
    result_1 = result
    
    if (esi_1 s>= ecx_4)
        var_14 = 0
        *(arg1 + 0x20c) = 0xffffffff
    else if (esi_1 s> edx_4)
        int32_t temp0_2 = divs.dp.d(sx.q((edx_4 - esi_1) * 0xff), ecx_4 - edx_4)
        var_14 = temp0_2 + 0xff
        
        if (temp0_2 == 0xffffff01)
            *(arg1 + 0x20c) = 0xffffffff
    else
        var_14 = 0xff

int32_t var_10 = 0

if (*(arg1 + 0x218) s>= 0)
    int32_t edx_7 = *(arg1 + 0x220)
    int32_t ecx_7 = *(arg1 + 0x21c) + edx_7
    int32_t edi_1 = *(arg1 + 0x1d0)
    int32_t esi_2 = *(arg1 + 0x224)
    var_10 = esi_2
    
    if (edi_1 s>= ecx_7)
        var_10 = 0
    else if (edi_1 s> edx_7)
        var_10 = esi_2 - divs.dp.d(sx.q((edi_1 - edx_7) * esi_2), ecx_7 - edx_7)
    
    if (edi_1 s>= ecx_7)
        var_10 = 0
        *(arg1 + 0x218) = 0xffffffff

if (*(arg1 + 0x1d6) != 0 || *(arg1 + 0x20c) s>= 0)
    int32_t edx_10 = *(arg1 + 0x13c)
    int32_t edi_2 = 0
    int32_t esi_4 = *(arg1 + 0x138)
    int32_t eax_17 = *(arg1 + 0x144) + edx_10
    int32_t result_3 = result_1
    int32_t var_6c = esi_4
    int32_t esi_5 = esi_4 + *(arg1 + 0x140)
    int32_t var_68_1 = edx_10
    int32_t var_64_1 = esi_5
    int32_t var_34 = 0
    int32_t var_30_1 = 0
    int32_t var_48 = 0
    int32_t var_44_1 = 0
    int32_t var_40 = 0x3e8
    int32_t var_3c_1 = 0x3e8
    int32_t i = 0
    char var_15 = 0xff
    int32_t var_5c
    
    if (result_3 != 0)
        var_5c.o = var_6c.o
        
        if (*(arg1 + 0x1d7) != 0 && *(arg1 + 0xcbc) != *(arg1 + 0xcc0))
            int32_t eax_19 = *(arg1 + 0x178)
            int32_t edi_3 = *(arg1 + 0x17c)
            int32_t ecx_11 = *(arg1 + 0x18c) + edi_3 + edx_10
            int32_t esi_8 = *(arg1 + 0x188) + eax_19 + esi_4
            int32_t edi_5 = esi_4 + *(arg1 + 0x190) + eax_19
            int32_t edx_14 = edx_10 + *(arg1 + 0x194) + edi_3
            int32_t var_58
            int32_t eax_22 = var_58
            
            if (edx_10 s> ecx_11)
                eax_22 = ecx_11
            
            result_3 = result_1
            int32_t var_58_1 = eax_22
            int32_t var_50
            int32_t eax_23 = var_50
            
            if (eax_23 s< edx_14)
                eax_23 = edx_14
            
            int32_t var_50_1 = eax_23
            int32_t eax_24 = var_5c
            
            if (eax_24 s> esi_8)
                eax_24 = esi_8
            
            var_5c = eax_24
            int32_t var_54
            int32_t eax_25 = var_54
            
            if (eax_25 s< edi_5)
                eax_25 = edi_5
            
            int32_t var_54_1 = eax_25
        
        int128_t var_164
        var_164:0xc.d = &var_15
        var_164:8.d = &i
        var_164:4.d = &var_40
        var_164.d = &var_48
        sub_5d72d0(var_24.d, result_3, var_14, &var_6c, &var_5c, &var_34, var_164)
        edi_2 = var_30_1
    
    int32_t var_144
    FI::`default constructor closure'(&var_144)
    uint128_t xmm0_2 = zx.o(var_48)
    float xmm1_2 = _mm_cvtepi32_ps(zx.o(var_40))
    int32_t ecx_13 = var_34
    int32_t var_13c_1 = *(arg1 + 0x124)
    int32_t eax_27 = *(arg1 + 0x128)
    int32_t xmm0_3 = _mm_cvtepi32_ps(xmm0_2)
    int32_t var_138_1 = eax_27
    uint32_t eax_28 = zx.d(var_15)
    uint32_t var_cc_1 = eax_28
    float xmm1_3 = xmm1_2 / 1000f
    var_144 = 1
    var_5c = esi_4 + ecx_13
    int32_t var_58_2 = edx_10 + edi_2
    int32_t var_54_2 = ecx_13 + esi_5
    bool cond:2_1 = *(arg1 + 0x134) != 0
    int32_t var_50_2 = eax_17 + edi_2
    int32_t var_124_1 = xmm0_3
    int32_t var_120_1 = _mm_cvtepi32_ps(zx.o(var_44_1))
    float var_10c_1 = xmm1_3
    float xmm0_8 = _mm_cvtepi32_ps(zx.o(i)) / 10f
    float xmm1_6 = _mm_cvtepi32_ps(zx.o(var_3c_1)) / 1000f
    float xmm0_9 = xmm0_8 * 0.0174532924f
    float var_108_1 = xmm1_6
    float var_f8_1 = xmm0_9
    int128_t xmm0_10 = var_5c.o
    uint32_t eax_36 = zx.d(*(arg1 + 0x1d7))
    int32_t* var_16c_2 = &var_144
    int32_t* var_170_2 = *(arg1 + 0x1d0)
    int128_t var_164_1
    
    if (cond:2_1)
        sub_5e2f60(arg1 + 0x234, var_170_2, var_16c_2, eax_36, xmm0_10)
        uint128_t xmm0_11 = *(arg1 + 0x150)
        int32_t eax_58 = _mm_bsrli_si128(xmm0_11, 4) + edx_10
        
        if (*(arg1 + 0x1e4) != 0)
            int32_t var_f0_2 = 0
            int32_t var_f4_2 = 1
            void* eax_60 = data_bac4a0
            int32_t var_ec_2 =
                *(arg1 + 0x14c) - *(*(arg1 + 0xa0) * 0xfc + data_bac510 + 0xa2ec04) + edx_10 + edi_2
            int32_t var_e8_2 = *(eax_60 + 8)
            int32_t var_e4_2 = *(eax_60 + 0xc)
        
        int32_t eax_63 = var_34 + xmm0_11 + esi_4
        i = 0
        var_24.d = eax_58 + edi_2
        
        if ((*(arg1 + 0x22c) - *(arg1 + 0x228)) s/ 0x1c0 s> 0)
            int32_t eax_70 = 0
            int32_t var_10_1 = 0
            int32_t var_2c_2 = 0
            int32_t ecx_34
            
            do
                var_164_1:0xc.d = var_24.d
                var_164_1:8.d = eax_63
                var_164_1:4.d = arg3
                var_164_1.d = arg2
                
                if (sub_5dcd30(*(arg1 + 0x228) + eax_70, &var_144, nullptr, var_10_1, 0, 0, 
                        var_164_1) == 0)
                    goto label_5d6eef
                
                ecx_34 = *(arg1 + 0x22c) - *(arg1 + 0x228)
                var_2c_2 += 0x1c0
                i += 1
                eax_70 = var_2c_2
            while (i s< ecx_34 s/ 0x1c0)
        
        var_164_1:0xc.d = var_24.d
        var_164_1:8.d = eax_63
    else
        sub_5e2f60(arg1 + 0x234, var_170_2, var_16c_2, eax_36, xmm0_10)
        int32_t edx_15 = *(arg1 + 0x14c)
        int32_t i_2 = edx_15 + edx_10
        int32_t esi_10
        
        if (*(data_bac510 + 0x10bd8) != 1)
            esi_10 = *(arg1 + 0x148) + esi_4
            i_2 += var_10
        else
            esi_10 = esi_5 - *(arg1 + 0x148) - var_10
        
        bool cond:6_1 = *(arg1 + 0x1e4) == 0
        i = i_2
        int32_t var_28_2 = esi_10
        
        if (not(cond:6_1))
            int32_t var_f4_1 = 1
            int32_t var_f0_1 = 0
            void* eax_39 = data_bac4a0
            esi_10 = var_28_2
            int32_t var_ec_1 =
                edx_15 - *(*(arg1 + 0xa0) * 0xfc + data_bac510 + 0xa2ec04) + edx_10 + edi_2
            int32_t var_e8_1 = *(eax_39 + 8)
            int32_t var_e4_1 = *(eax_39 + 0xc)
        
        var_24.d = 0
        
        if ((*(arg1 + 0x22c) - *(arg1 + 0x228)) s/ 0x1c0 s> 0)
            int32_t eax_46 = i + edi_2
            int32_t edx_23 = var_34 + esi_10
            int32_t eax_47 = 0
            int32_t var_3c_2 = edx_23
            int32_t var_14_1 = 0
            int32_t var_2c_1 = 0
            
            do
                var_164_1:0xc.d = eax_46
                var_164_1:8.d = edx_23
                var_164_1:4.d = arg3
                var_164_1.d = arg2
                
                if (sub_5dcd30(*(arg1 + 0x228) + eax_47, &var_144, nullptr, var_14_1, 0, 0, 
                    var_164_1) == 0)
                label_5d6eef:
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return 0
                
                var_2c_1 += 0x1c0
                var_24.d += 1
                edx_23 = var_3c_2
                eax_47 = var_2c_1
            while (var_24.d s< (*(arg1 + 0x22c) - *(arg1 + 0x228)) s/ 0x1c0)
            
            edi_2 = var_30_1
        
        var_164_1:0xc.d = i + edi_2
        var_164_1:8.d = var_34 + var_28_2
    
    var_164_1:4.d = arg3
    var_164_1.d = arg2
    sub_5e0680(arg1 + 0x1928, &var_144, var_164_1)
    
    if (*(arg1 + 0x168) == 0)
        result.b = *(arg1 + 0x1d7)
        i = result
        
        if (result.b != 0 && *(arg1 + 0xcbc) != *(arg1 + 0xcc0))
            if (*(arg1 + 0x1bc) == 1)
                result = sub_5e45e0(arg1 + 0x234)
            
            if (*(arg1 + 0x1bc) != 1 || result.b == 0)
                int32_t edi_7 = *(arg1 + 0x178) + esi_4
                int32_t var_c_2 = edx_10 + *(arg1 + 0x17c)
                FI::`default constructor closure'(&var_144)
                int32_t var_13c_2 = *(arg1 + 0x124)
                int32_t var_138_2 = *(arg1 + 0x128)
                int32_t esi_15 = *(arg1 + 0x18c) + var_c_2
                int32_t edx_38 = *(arg1 + 0x190) + edi_7
                int32_t ecx_39 = *(arg1 + 0x194) + var_c_2
                int32_t xmm0_14 = _mm_cvtepi32_ps(zx.o(var_48))
                var_144 = 1
                int32_t var_124_2 = xmm0_14
                uint32_t var_cc_2 = eax_28
                var_6c = *(arg1 + 0x188) + edi_7 + var_34
                int32_t xmm0_16 = _mm_cvtepi32_ps(zx.o(var_44_1))
                int32_t var_68_2 = var_30_1 + esi_15
                int32_t var_64_2 = var_34 + edx_38
                int32_t var_60_2 = ecx_39 + var_30_1
                int32_t var_120_2 = xmm0_16
                int32_t i_1 = i
                float var_10c_2 = xmm1_3
                float var_108_2 = xmm1_6
                int32_t eax_89
                int32_t ecx_41
                
                if (*(arg1 + 0x170) != 0)
                    float var_f8_3 = xmm0_8
                    sub_5e2f60(arg1 + 0xf28, *(arg1 + 0x1d0), &var_144, i_1, var_6c.o)
                    int32_t edx_40 = *(arg1 + 0x174)
                    ecx_41 = 0
                    eax_89 = 0
                    int32_t ecx_43
                    
                    if (edx_40 != 0)
                        if (edx_40 == 1)
                            ecx_43 = *(arg1 + 0x1a0)
                            goto label_5d728c
                        
                        if (edx_40 == 2)
                            ecx_43 = *(arg1 + 0x1a0) - *(arg1 + 0x1b0)
                            goto label_5d728c
                    else
                        ecx_43 = *(arg1 + 0x1a8) + *(arg1 + 0x1a0)
                    label_5d728c:
                        ecx_41 = ecx_43 + edi_7
                        eax_89 = *(arg1 + 0x1ac) + *(arg1 + 0x1a4) + var_c_2
                else
                    float var_f8_2 = xmm0_9
                    sub_5e2f60(arg1 + 0xf28, *(arg1 + 0x1d0), &var_144, i_1, var_6c.o)
                    int32_t edx_39 = *(arg1 + 0x174)
                    ecx_41 = 0
                    eax_89 = 0
                    
                    if (edx_39 == 0)
                        ecx_41 = *(arg1 + 0x1a0) + *(arg1 + 0x198) + edi_7
                        eax_89 = *(arg1 + 0x1a4) + *(arg1 + 0x19c) + var_c_2
                    else if (edx_39 == 1)
                        ecx_41 = *(arg1 + 0x1a0) + edi_7
                        eax_89 = *(arg1 + 0x1a4) + *(arg1 + 0x19c) + var_c_2
                    else if (edx_39 == 2)
                        ecx_41 = *(arg1 + 0x1a0) - *(arg1 + 0x198) + edi_7
                        eax_89 = *(arg1 + 0x1a4) + *(arg1 + 0x19c) + var_c_2
                
                int128_t var_164_2
                var_164_2:0xc.d = eax_89 + var_30_1
                var_164_2:8.d = ecx_41 + var_34
                var_164_2:4.d = arg3
                var_164_2.d = arg2
                sub_5df9d0(arg1 + 0xc34, &var_144, var_164_2)

result.b = 1
sub_745f2b(eax_1 ^ &__saved_ebp)
return result

// 函数: sub_5ceaf0
// 地址: 0x5ceaf0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* ebx = arg1
void* var_2c = ebx
void var_4c
int32_t* eax_2 = sub_6f12f0(ebx + 0x198, &var_4c, 0)
int32_t* var_48
int32_t* esi = var_48
bool edx = *eax_2 != 0

if (esi != 0)
    bool cond:1_1 = esi[1] != 1
    esi[1]
    esi[1] -= 1
    
    if (not(cond:1_1))
        (*(*esi + 4))()
        bool cond:2_1 = esi[2] != 1
        esi[2]
        esi[2] -= 1
        
        if (not(cond:2_1))
            (*(*esi + 8))()
        
        edx = edx

void* edx_1 = data_bac510

if (edx != 0)
    int32_t ecx_4 = *(edx_1 + 0xa2eba4)
    *(ebx + 0x2b8) = *(edx_1 + 0x17360)
    *(ebx + 0x2bc) = ecx_4
    *(ebx + 0x19c) = 0x101
    *(ebx + 0x1a3) = 0x101
    uint128_t xmm0_1 = zx.o(*(edx_1 + 0xa47bd0))
    float xmm1_2[0x4] = _mm_cvtepi32_ps(zx.o(*(edx_1 + &data_a47bcc)))
    *(ebx + 0x1b0) = 0
    *(ebx + 0x1b4) = _mm_unpacklo_ps(xmm1_2, _mm_cvtepi32_ps(xmm0_1))
    *(ebx + 0x1bc) = 0x3f000000

int32_t ecx_5 = *(edx_1 + 0xa2eba0)
*(ebx + 0x3f0) = *(edx_1 + 0x17360)
*(ebx + 0x3f4) = ecx_5
void* ecx_6 = data_bac4e4
*(ebx + 0x2d4) = 0x101
*(ebx + 0x2db) = 0x101
int32_t* var_64 = 0x3f000000
*(ebx + 0x2ec) = _mm_unpacklo_ps(_mm_cvtepi32_ps(zx.o(*(edx_1 + &data_a47bcc))), 
    _mm_cvtepi32_ps(zx.o(*(edx_1 + 0xa47bd0))))
*(ebx + 0x2f4) = 0x3f000000
*(ebx + 0x34c) = *(ecx_6 + 0x118)
*(ebx + 0x357) = *(ecx_6 + 0x115)
*(ebx + 0x356) = *(ecx_6 + 0x116)
*(ebx + 0x355) = *(ecx_6 + 0x117)
void var_68
bool edx_2 = *sub_6f12f0(ebx + 0x2d0, &var_68, 0) != 0

if (var_64 != 0)
    bool cond:3_1 = var_64[1] != 1
    var_64[1]
    var_64[1] -= 1
    
    if (not(cond:3_1))
        (*(*var_64 + 4))()
        int32_t edi_1 = var_64[2]
        var_64[2] -= 1
        
        if (edi_1 == 1)
            (*(*var_64 + 8))()

void* esi_2 = data_bac510

if (edx_2 == 0)
    int32_t ecx_12 = *(esi_2 + &data_a47bcc) + *(esi_2 + 0xa47c60)
    int32_t eax_16 = *(esi_2 + 0xa47bd0) + *(esi_2 + 0xa47c64)
    var_48 = 0x3f000000
    float xmm1_8[0x4] = _mm_cvtepi32_ps(zx.o(ecx_12))
    int32_t* eax_17 = var_48
    *(ebx + 0x2ec) = _mm_unpacklo_ps(xmm1_8, _mm_cvtepi32_ps(zx.o(eax_16)))
    *(ebx + 0x2f4) = eax_17
    uint128_t xmm1_10 = zx.o(*(esi_2 + 0xa47bd4))
    float xmm0_8 = _mm_cvtepi32_ps(zx.o(*(esi_2 + 0xa47c60)))
    *(ebx + 0x2e0) = _mm_cvtepi32_ps(xmm1_10) - xmm0_8 - _mm_cvtepi32_ps(zx.o(*(esi_2 + 0xa47c68)))
    uint128_t xmm1_14 = zx.o(*(esi_2 + 0xa47bd8))
    float xmm0_12 = _mm_cvtepi32_ps(zx.o(*(esi_2 + 0xa47c64)))
    *(ebx + 0x2e4) = _mm_cvtepi32_ps(xmm1_14) - xmm0_12 - _mm_cvtepi32_ps(zx.o(*(esi_2 + 0xa47c6c)))
    *(ebx + 0x370) = *(esi_2 + sub_a47c70)
else
    *(ebx + 0x2e8) = 0

int32_t var_28 = 0
int32_t var_60
int32_t var_54

if ((*(ebx + 0x130) - *(ebx + 0x12c)) s/ 0x138 s> 0)
    int32_t edi_3 = 0
    var_48 = 0x3f000000
    int32_t var_24_1 = 0
    
    while (true)
        int32_t ecx_15 = *(ebx + 0x12c)
        int32_t edx_6 = *(esi_2 + 0xa2eba4)
        *(ecx_15 + edi_3 + 0x128) = *(esi_2 + 0x17360)
        *(ecx_15 + edi_3 + 0x12c) = edx_6
        *(*(ebx + 0x12c) + edi_3 + 0xc) = 1
        *(*(ebx + 0x12c) + edi_3 + 0xd) = 1
        *(*(ebx + 0x12c) + edi_3 + 0x13) = 1
        *(*(ebx + 0x12c) + edi_3 + 0x14) = 1
        int32_t* ecx_16 = *(ebx + 0x12c)
        float xmm1_19[0x4] = _mm_cvtepi32_ps(zx.o(*(ebx + 0xd4)))
        int32_t* eax_31 = var_48
        *(ecx_16 + edi_3 + 0x24) = _mm_unpacklo_ps(xmm1_19, 
            _mm_cvtepi32_ps(zx.o(*(ecx_16 + edi_3) + *(ebx + 0x148) + *(ebx + 0xd8))))
        *(ecx_16 + edi_3 + 0x2c) = eax_31
        *(*(ebx + 0x12c) + edi_3 + 0x20) = 0
        int32_t ebx_2 = *(ebx + 0xe0) - *(var_2c + 0xf0)
        int32_t edi_5 = *(ebx + 0xdc) - *(var_2c + 0xec)
        int32_t esi_3 = *(var_2c + 0xe8)
        int32_t ecx_18 = *(var_2c + 0xd8)
        var_60 = *(var_2c + 0xd4) + *(var_2c + 0xe4)
        var_54 = ebx_2
        ebx = var_2c
        int32_t var_58_1 = edi_5
        int32_t esi_5 = var_28 + 1
        int32_t var_5c_1 = ecx_18 + esi_3
        int128_t xmm0_17 = var_60.o
        var_28 = esi_5
        *(*(ebx + 0x12c) + var_24_1 + 0x10) = 1
        *(*(ebx + 0x12c) + var_24_1 + 0x64) = xmm0_17
        edi_3 = var_24_1 + 0x138
        var_24_1 = edi_3
        
        if (esi_5 s>= (*(ebx + 0x130) - *(ebx + 0x12c)) s/ 0x138)
            break
        
        esi_2 = data_bac510

int32_t eax_41 = *(ebx + 0x118)

if (eax_41 s> 0)
    int32_t i = 0
    int32_t i_1 = 0
    
    if (eax_41 s> 0)
        do
            int32_t temp1_1 = mods.dp.d(sx.q(*(ebx + 0x11c) + i), *(ebx + 0x108))
            int32_t ecx_23 = *(ebx + 0xe0) - *(ebx + 0xf0)
            char* edi_7 = temp1_1 * 0x2e60
            char* var_28_1 = edi_7
            int32_t eax_47 = *(edi_7 + *(ebx + 0x10c) + 0x214)
            int32_t eax_49 = *(ebx + 0xdc) - *(ebx + 0xec)
            int32_t eax_51 = *(ebx + 0xd4) + *(ebx + 0xe4)
            int32_t edx_13
            edx_13.b = 0
            int32_t eax_52 = *(ebx + 0xd8) + *(ebx + 0xe8)
            void* ecx_25 = data_bac510
            int32_t esi_7 = *(ebx + 0x148)
            
            if (*(ecx_25 + 0x10bd8) != 1)
                if (*(edi_7 + *(ebx + 0x10c) + 0x218) + esi_7 + eax_47 s> *(ebx + 0xe8))
                    edx_13 = 0
                    
                    if (eax_47 + esi_7 s< *(ebx + 0xe0) - *(ebx + 0xd8) - *(ebx + 0xf0))
                        edx_13 = 1
                    
                    ecx_25 = data_bac510
            else if (eax_47 - esi_7 s>= *(ebx + 0xdc) - *(ebx + 0xec) - *(ebx + 0xd4))
                ecx_25 = data_bac510
            else
                ecx_25 = data_bac510
                
                if (*(edi_7 + *(ebx + 0x10c) + 0x218) - esi_7 + eax_47 s> *(ebx + 0xe4))
                    edx_13.b = 1
            
            if (edx_13.b == 0)
                sub_5dd120(*(ebx + 0x10c) + 0x4c + edi_7)
            else
                int32_t* edx_14 = data_bac4c0
                void* var_24_2 = nullptr
                int24_t var_40_1
                int32_t esi_10
                int32_t edi_9
                
                if (*data_bac4a0 == 0 || temp1_1 != *(ebx + 0x140))
                    edi_9 = 0
                    esi_10 = 0
                    var_40_1 = 0
                else
                    int32_t esi_8 = *(ecx_25 + 0xa47c1c)
                    int32_t eax_70 = ((edx_14[1] - *edx_14) s>> 2) - 1
                    var_24_2 = 0xff
                    
                    if (esi_8 s< 0)
                        esi_8 = 0
                    else if (esi_8 s> eax_70)
                        esi_8 = eax_70
                    
                    int32_t edi_8 = *(ecx_25 + 0xa47c20)
                    int32_t eax_72 = *(*edx_14 + (esi_8 << 2))
                    var_40_1 = eax_72.3
                    int32_t var_20_1 = eax_72
                    int32_t eax_76 = ((edx_14[1] - *edx_14) s>> 2) - 1
                    
                    if (edi_8 s< 0)
                        edi_8 = 0
                    else if (edi_8 s> eax_76)
                        edi_8 = eax_76
                    
                    int32_t esi_9 = *(ecx_25 + 0xa47c24)
                    edi_9 = *(*edx_14 + (edi_8 << 2))
                    int32_t eax_81 = ((edx_14[1] - *edx_14) s>> 2) - 1
                    int32_t var_1c_1 = edi_9
                    
                    if (esi_9 s>= 0)
                        if (esi_9 s> eax_81)
                            esi_9 = eax_81
                        
                        esi_10 = *(*edx_14 + (esi_9 << 2))
                        int32_t var_18_2 = esi_10
                    else
                        esi_10 = **edx_14
                        int32_t var_18_1 = esi_10
                
                if (temp1_1 == *(ebx + 0x144))
                    int32_t esi_11 = *(ecx_25 + sub_a47c10)
                    int32_t eax_88 = ((edx_14[1] - *edx_14) s>> 2) - 1
                    var_24_2 = 0xff
                    
                    if (esi_11 s< 0)
                        esi_11 = 0
                    else if (esi_11 s> eax_88)
                        esi_11 = eax_88
                    
                    int32_t edi_10 = *(ecx_25 + 0xa47c14)
                    int32_t eax_90 = *(*edx_14 + (esi_11 << 2))
                    var_40_1 = eax_90.3
                    int32_t var_20_2 = eax_90
                    int32_t eax_94 = ((edx_14[1] - *edx_14) s>> 2) - 1
                    
                    if (edi_10 s< 0)
                        edi_10 = 0
                    else if (edi_10 s> eax_94)
                        edi_10 = eax_94
                    
                    int32_t esi_12 = *(ecx_25 + 0xa47c18)
                    edi_9 = *(*edx_14 + (edi_10 << 2))
                    int32_t eax_99 = ((edx_14[1] - *edx_14) s>> 2) - 1
                    int32_t var_1c_2 = edi_9
                    
                    if (esi_12 s< 0)
                        esi_12 = 0
                    else if (esi_12 s> eax_99)
                        esi_12 = eax_99
                    
                    esi_10 = *(*edx_14 + (esi_12 << 2))
                    int32_t var_18_3 = esi_10
                
                int32_t var_134
                FI::`default constructor closure'(&var_134)
                void* ecx_33 = data_bac510
                var_134 = 1
                int32_t var_128_1 = 0
                int32_t var_12c_1 = *(ecx_33 + 0x17360)
                uint128_t xmm0_22
                float xmm1_26
                
                if (*(ecx_33 + 0x10bd8) != 1)
                    float xmm1_29 =
                        _mm_cvtepi32_ps(zx.o(*(ebx + 0xf4))) + _mm_cvtepi32_ps(zx.o(*(ebx + 0xd4)))
                    float xmm0_26 = _mm_cvtepi32_ps(zx.o(eax_47))
                    float var_120_2 = xmm1_29
                    xmm1_26 = _mm_cvtepi32_ps(zx.o(*(ebx + 0xd8))) + xmm0_26
                    xmm0_22 = zx.o(*(ebx + 0x148))
                else
                    float xmm1_24 = _mm_cvtepi32_ps(zx.o(*(ebx + 0xdc)))
                        - _mm_cvtepi32_ps(zx.o(eax_47)) + _mm_cvtepi32_ps(zx.o(*(ebx + 0x148)))
                    xmm0_22 = zx.o(*(ebx + 0xd8))
                    float var_120_1 = xmm1_24
                    xmm1_26 = _mm_cvtepi32_ps(zx.o(*(ebx + 0xf4)))
                
                void* ecx_34 = *(ebx + 0x10c)
                int32_t var_e0_1 = eax_51
                int32_t var_dc_1 = eax_52
                int32_t var_d8_1 = eax_49
                edi_7 = var_28_1
                int32_t var_d4_1 = ecx_23
                float var_11c_1 = xmm1_26 + _mm_cvtepi32_ps(xmm0_22)
                int32_t var_e4_1 = 1
                sub_5dcd30(ecx_34 + 0x4c + edi_7, &var_134, var_24_2, var_40_1, edi_9.3, esi_10.3, 
                    arg2, arg3, 0, 0)
            
            int32_t ecx_40 = *(ebx + 0x10c)
            
            if (edi_7[ecx_40] != 0)
                int32_t edx_16 = *(ebx + 0xf4) + *(ebx + 0xd4)
                int32_t esi_15 = *(ebx + 0x148) + eax_47 + *(ebx + 0xd8)
                *(edi_7 + ecx_40 + 0x578) = 1
                *(edi_7 + *(ebx + 0x10c) + 0x5a8) = *(data_bac510 + 0x17360)
                int32_t ecx_42 = *(ebx + 0x10c)
                *(edi_7 + ecx_42 + 0x5bc) = *(edi_7 + ecx_42 + 0x20c) + edx_16
                int32_t ecx_43 = *(ebx + 0x10c)
                *(edi_7 + ecx_43 + 0x5e8) = *(edi_7 + ecx_43 + 0x210) + esi_15
            label_5cf3c1:
                *(edi_7 + *(ebx + 0x10c) + 0x84c) = 1
                *(edi_7 + *(ebx + 0x10c) + 0x854) = eax_51
                *(edi_7 + *(ebx + 0x10c) + 0x880) = eax_52
                *(edi_7 + *(ebx + 0x10c) + 0x8ac) = eax_49
                *(edi_7 + *(ebx + 0x10c) + 0x8d8) = ecx_23
                *(ebx + 0x10c)
                std::num_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::do_put(
                    0, 0, 0)
            else if (*(edi_7 + ecx_40 + 0x2e14) != *(edi_7 + ecx_40 + 0x2e18))
                void* eax_114 = data_bac510
                int32_t edx_19
                int32_t esi_17
                
                if (*(eax_114 + 0x10bd8) != 1)
                    edx_19 = *(ebx + 0xf4) + *(ebx + 0xd4)
                    esi_17 = *(edi_7 + ecx_40 + 0x214) + *(ebx + 0xd8) + *(ebx + 0x148)
                else
                    edx_19 = *(ebx + 0xdc) - *(edi_7 + ecx_40 + 0x214) + *(ebx + 0x148)
                    esi_17 = *(ebx + 0xf4) + *(ebx + 0xd8)
                
                *(edi_7 + ecx_40 + 0x578) = 1
                *(edi_7 + *(ebx + 0x10c) + 0x5a8) = *(eax_114 + 0x17360)
                *(edi_7 + *(ebx + 0x10c) + 0x5bc) = *(ebx + 0xc4) + edx_19
                *(edi_7 + *(ebx + 0x10c) + 0x5e8) = *(ebx + 0xc8) + esi_17
                goto label_5cf3c1
            
            int32_t ecx_56 = *(ebx + 0x10c)
            
            if (*(edi_7 + ecx_56 + 0x2e50) != 0 || *(edi_7 + ecx_56 + 0x2e52) != 0
                    || *(edi_7 + ecx_56 + 0x2e54) != 0 || *(edi_7 + ecx_56 + 0x2e56) != 0
                    || *(edi_7 + ecx_56 + 0x2e58) != 0 || *(edi_7 + ecx_56 + 0x2e5a) != 0
                    || *(edi_7 + ecx_56 + 0x2e5c) != 0)
                int32_t* ebx_3 = data_bac4a8
                int32_t var_58_2 = *(edi_7 + ecx_56 + 0x2e58)
                int32_t eax_123
                eax_123.w = *(edi_7 + ecx_56 + 0x2e5c)
                int32_t* edi_11 = *ebx_3
                var_54.w = eax_123.w
                var_60.q = *(edi_7 + ecx_56 + 0x2e50)
                int32_t* esi_20 = sub_5d48a0(ebx_3, &var_60)
                char eax_125
                
                if (esi_20 != edi_11)
                    eax_125 = sub_5cd6f0(&var_60, &esi_20[4])
                
                int32_t** eax_126
                
                if (esi_20 == edi_11 || eax_125 != 0)
                    var_48 = edi_11
                    eax_126 = &var_48
                else
                    int32_t* var_70 = esi_20
                    eax_126 = &var_70
                
                ebx = var_2c
                
                if (*eax_126 != edi_11)
                    int32_t esi_23
                    int32_t edi_13
                    
                    if (*(data_bac510 + 0x10bd8) != 1)
                        esi_23 = *(ebx + 0xf4) + *(ebx + 0xd4)
                        edi_13 = *(var_28_1 + ecx_56 + 0x214) + *(ebx + 0xd8) + *(ebx + 0x148)
                    else
                        esi_23 = *(ebx + 0xdc) - *(var_28_1 + ecx_56 + 0x214) + *(ebx + 0x148)
                        edi_13 = *(ebx + 0xf4) + *(ebx + 0xd8)
                    
                    *(var_28_1 + ecx_56 + 0x1b74) = 1
                    *(var_28_1 + *(ebx + 0x10c) + 0x1ba4) = *(data_bac510 + 0x17360)
                    *(var_28_1 + *(ebx + 0x10c) + 0x1bb8) = *(ebx + 0xcc) + esi_23
                    *(var_28_1 + *(ebx + 0x10c) + 0x1be4) = *(ebx + 0xd0) + edi_13
                    *(var_28_1 + *(ebx + 0x10c) + 0x1e48) = 1
                    *(var_28_1 + *(ebx + 0x10c) + 0x1e50) = eax_51
                    *(var_28_1 + *(ebx + 0x10c) + 0x1e7c) = eax_52
                    *(var_28_1 + *(ebx + 0x10c) + 0x1ea8) = eax_49
                    *(var_28_1 + *(ebx + 0x10c) + 0x1ed4) = ecx_23
                    *(ebx + 0x10c)
                    std::num_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::do_put(
                        0, 0, 0)
            
            i = i_1 + 1
            i_1 = i
        while (i s< *(ebx + 0x118))

void* ecx_72 = data_bac510
int32_t eax_140

if (*(ecx_72 + 0x10bd8) != 1)
    *(ebx + 0x7b8) = *(ecx_72 + &data_a47c8c) + *(ebx + 0xd4)
    eax_140 = *(ebx + 0x14c)
else
    *(ebx + 0x7b8) = *(ebx + 0x14c) + *(ebx + 0xd4)
    eax_140 = *(ecx_72 + 0xa47c90)

*(ebx + 0x7e4) = eax_140 + *(ebx + 0xd8)
std::num_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::do_put(
    0, 0, 0)
std::num_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::do_put(
    0, 0, 0)
std::num_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::do_put(
    0, 0, 0)
std::num_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::do_put(
    0, 0, 0)
std::num_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::do_put(
    0, 0, 0)
std::num_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::do_put(
    0, 0, 0)
std::num_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::do_put(
    0, 0, 0)
int32_t result = std::num_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::do_put(
    0, 0, 0)
sub_745f2b(eax_1 ^ &__saved_ebp)
return result

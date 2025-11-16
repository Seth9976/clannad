// 函数: sub_61e720
// 地址: 0x61e720
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edx = data_bac450
float xmm0_1 = _mm_cvtepi32_ps(zx.o(arg3))
int32_t eax = *edx
float xmm0_2 = xmm0_1 * 1.52587891e-05f
float var_c = xmm0_2
int32_t ecx

if (eax == 0xf0 || eax == 0xf1)
    ecx = edx[4]
else
    ecx = edx[2]

int32_t esi

if (eax == 0xf0 || eax == 0xf1)
    esi = edx[5]
else
    esi = edx[3]

if (ecx == 0)
    float xmm3_8 = xmm0_2
    
    if (not(0f <= xmm0_2))
        xmm3_8 = (zx.o(0)).d
    else if (not(xmm0_2 <= 1f))
        xmm3_8 = 1f
    
    xmm0_2 = var_c
    ecx.b = int.d((1f - (xmm3_8 - 0f)) * 255f).b
else if (ecx == 0xa)
    float xmm3_4 = xmm0_2
    
    if (not(0f <= xmm0_2))
        xmm3_4 = (zx.o(0)).d
    else if (not(xmm0_2 <= 1f))
        xmm3_4 = 1f
    
    ecx = int.d((xmm3_4 - 0f + 0f) * 255f)
else
    float xmm4_1 = xmm0_2
    float xmm3_2 = _mm_cvtepi32_ps(zx.o(ecx)) / 10f
    
    if (xmm3_2 <= xmm0_2)
        xmm3_2 - 1f
        eax:1.b = (xmm3_2 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm3_2, 1f) ? 1 : 0) << 2
            | (xmm3_2 < 1f ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            if (1f <= xmm3_2)
                if (not(xmm3_2 <= 1f))
                    if (not(1f <= xmm0_2))
                        xmm4_1 = 1f
                    else if (not(xmm0_2 <= xmm3_2))
                        xmm4_1 = xmm3_2
            else if (xmm3_2 > xmm0_2)
                xmm4_1 = xmm3_2
            else if (not(xmm0_2 <= 1f))
                xmm4_1 = 1f
            
            xmm0_2 = var_c
            eax = int.d((1f - (xmm4_1 - xmm3_2) / (1f - xmm3_2)) * 255f)
        else
            eax = int.d(0f * 255f)
        
        ecx.b = eax.b
    else
        0 f- xmm3_2
        eax:1.b = (0f == xmm3_2 ? 1 : 0) << 6 | (is_unordered.d(0f, xmm3_2) ? 1 : 0) << 2
            | (0f < xmm3_2 ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            if (xmm3_2 f<= 0)
                if (not(0 f<= xmm3_2))
                    xmm4_1 = xmm3_2
            else if (not(0 f<= xmm0_2))
                xmm4_1 = (zx.o(0)).d
            
            ecx = int.d(((xmm4_1 - 0f) / (xmm3_2 - 0f) + 0f) * 255f)
        else
            ecx = int.d(1f * 255f)

float edi = arg2

if (esi == 0)
    *(edi i+ 0x7c) = ecx.b
else
    eax.b = 0xff
    eax.b = 0xff - ecx.b
    *(edi i+ 0x7c) = eax.b

int32_t eax_1 = *edx
int32_t ecx_1

if (eax_1 == 0xf0 || eax_1 == 0xf1)
    ecx_1 = edx[6]
else
    ecx_1 = edx[4]

int32_t edx_1

if (eax_1 == 0xf0 || eax_1 == 0xf1)
    edx_1 = edx[7]
else
    edx_1 = edx[5]

float xmm3_11

if (ecx_1 == 0)
    float xmm4_13 = xmm0_2
    
    if (not(0f <= xmm0_2))
        xmm4_13 = (zx.o(0)).d
    else if (not(xmm0_2 <= 1f))
        xmm4_13 = 1f
    
    xmm3_11 = 1f - (xmm4_13 - 0f)
else if (ecx_1 == 0xa)
    float xmm3_14 = xmm0_2
    
    if (0f <= xmm0_2)
        if (not(xmm0_2 <= 1f))
            xmm3_14 = 1f
        
        xmm3_11 = xmm3_14 - 0f + 0f
    else
        xmm3_11 = 0f - 0f + 0f
else
    float xmm4_11 = _mm_cvtepi32_ps(zx.o(ecx_1)) / 10f
    
    if (xmm4_11 <= xmm0_2)
        float xmm5_1 = xmm0_2
        xmm4_11 - 1f
        eax_1:1.b = (xmm4_11 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm4_11, 1f) ? 1 : 0) << 2
            | (xmm4_11 < 1f ? 1 : 0)
        bool p_8 = unimplemented  {test ah, 0x44}
        
        if (p_8)
            if (1f <= xmm4_11)
                if (not(xmm4_11 <= 1f))
                    if (not(1f <= xmm0_2))
                        xmm5_1 = 1f
                    else if (not(xmm0_2 <= xmm4_11))
                        xmm5_1 = xmm4_11
            else if (xmm4_11 > xmm0_2)
                xmm5_1 = xmm4_11
            else if (not(xmm0_2 <= 1f))
                xmm5_1 = 1f
            
            xmm3_11 = 1f - (xmm5_1 - xmm4_11) / (1f - xmm4_11)
        else
            xmm3_11 = (zx.o(0)).d
    else
        0 f- xmm4_11
        float xmm3_10 = xmm0_2
        eax_1:1.b = (0f == xmm4_11 ? 1 : 0) << 6 | (is_unordered.d(0f, xmm4_11) ? 1 : 0) << 2
            | (0f < xmm4_11 ? 1 : 0)
        bool p_6 = unimplemented  {test ah, 0x44}
        
        if (p_6)
            if (xmm4_11 f<= 0)
                if (not(0 f<= xmm4_11))
                    xmm3_10 = xmm4_11
            else if (not(0 f<= xmm0_2))
                xmm3_10 = (zx.o(0)).d
            
            xmm3_11 = (xmm3_10 - 0f) / (xmm4_11 - 0f) + 0f
        else
            xmm3_11 = 1f

float var_8 = xmm3_11

if (edx_1 != 0)
    var_8 = 1f - xmm3_11

void var_20
int32_t* eax_2 = sub_6f12f0(edi, &var_20, 0)
arg2:3.b = *eax_2 == 0
int32_t* var_1c

if (var_1c != 0)
    eax_2 = &var_1c[1]
    bool cond:4_1 = *eax_2 != 1
    *eax_2
    *eax_2 -= 1
    
    if (not(cond:4_1))
        (*(*var_1c + 4))()
        eax_2 = &var_1c[2]
        bool cond:5_1 = *eax_2 != 1
        *eax_2
        *eax_2 -= 1
        
        if (not(cond:5_1))
            eax_2 = (*(*var_1c + 8))()

if (arg2:3.b == 0)
    void var_14
    float xmm2_1 = 1f / _mm_cvtepi32_ps(zx.o(*(*sub_6f12f0(edi, &var_14, 0) + 0xc)))
    int32_t* var_10
    
    if (var_10 != 0)
        bool cond:6_1 = var_10[1] != 1
        var_10[1]
        var_10[1] -= 1
        
        if (not(cond:6_1))
            (*(*var_10 + 4))()
            bool cond:8_1 = var_10[2] != 1
            var_10[2]
            var_10[2] -= 1
            
            if (not(cond:8_1))
                (*(*var_10 + 8))()
    
    float xmm1_4 = 1f / _mm_cvtepi32_ps(zx.o(*(*sub_6f12f0(edi, &var_14, 0) + 0x10)))
    
    if (var_10 != 0)
        bool cond:7_1 = var_10[1] != 1
        var_10[1]
        var_10[1] -= 1
        
        if (not(cond:7_1))
            (*(*var_10 + 4))()
            bool cond:10_1 = var_10[2] != 1
            var_10[2]
            var_10[2] -= 1
            
            if (not(cond:10_1))
                (*(*var_10 + 8))()
    
    void* eax_18 = *sub_6f12f0(edi, &var_14, 0)
    arg2 = _mm_cvtepi32_ps(zx.o(*(data_bac450 + 8))) / _mm_cvtepi32_ps(zx.o(*(eax_18 + 0xc)))
    
    if (var_10 != 0)
        bool cond:9_1 = var_10[1] != 1
        var_10[1]
        var_10[1] -= 1
        
        if (not(cond:9_1))
            (*(*var_10 + 4))()
            bool cond:12_1 = var_10[2] != 1
            var_10[2]
            var_10[2] -= 1
            
            if (not(cond:12_1))
                (*(*var_10 + 8))()
    
    void var_28
    int32_t* eax_23 = sub_6f12f0(edi, &var_28, 0)
    int32_t* ecx_20 = data_bac450
    float var_10_1 = _mm_cvtepi32_ps(zx.o(ecx_20[3])) / _mm_cvtepi32_ps(zx.o(*(*eax_23 + 0x10)))
    int32_t* var_24
    
    if (var_24 != 0)
        bool cond:11_1 = var_24[1] != 1
        var_24[1]
        var_24[1] -= 1
        
        if (not(cond:11_1))
            (*(*var_24 + 4))()
            bool cond:13_1 = var_24[2] != 1
            var_24[2]
            var_24[2] -= 1
            
            if (not(cond:13_1))
                (*(*var_24 + 8))()
        
        ecx_20 = data_bac450
    
    int32_t eax_29 = *ecx_20
    
    if (eax_29 == 0xf2 || eax_29 == 0xf3)
        int32_t esi_6 = *(*sub_6f12f0(edi, &var_14, 0) + 0xc)
        int32_t eax_32 = sub_746b2c()
        int32_t ecx_25 = int.d(fconvert.t(*(edi i+ 0x10)))
        float xmm0_17 = _mm_cvtepi32_ps(zx.o(esi_6))
        arg2 = _mm_cvtepi32_ps(zx.o(mods.dp.d(sx.q(eax_32), ecx_25))) / xmm0_17
        
        if (var_10_1 != 0)
            bool cond:14_1 = *(var_10_1 i+ 4) != 1
            *(var_10_1 i+ 4)
            *(var_10_1 i+ 4) -= 1
            
            if (not(cond:14_1))
                (*(*var_10_1 + 4))()
                bool cond:16_1 = *(var_10_1 i+ 8) != 1
                *(var_10_1 i+ 8)
                *(var_10_1 i+ 8) -= 1
                
                if (not(cond:16_1))
                    (*(*var_10_1 + 8))()
        
        void var_30
        int32_t esi_8 = *(*sub_6f12f0(edi, &var_30, 0) + 0x10)
        int32_t eax_41 = sub_746b2c()
        int32_t ecx_30 = int.d(fconvert.t(*(edi i+ 0x14)))
        float xmm0_19 = _mm_cvtepi32_ps(zx.o(esi_8))
        var_10_1 = _mm_cvtepi32_ps(zx.o(mods.dp.d(sx.q(eax_41), ecx_30))) / xmm0_19
        int32_t* var_2c
        
        if (var_2c != 0)
            bool cond:15_1 = var_2c[1] != 1
            var_2c[1]
            var_2c[1] -= 1
            
            if (not(cond:15_1))
                (*(*var_2c + 4))()
                int32_t ebx_1 = var_2c[2]
                var_2c[2] -= 1
                
                if (ebx_1 == 1)
                    (*(*var_2c + 8))()
        
        ecx_20 = data_bac450
    
    int32_t eax_48 = *ecx_20
    uint128_t xmm2_2
    
    if (eax_48 == 0xf0 || eax_48 == 0xf1)
        xmm2_2 = zx.o(ecx_20[8])
    else
        xmm2_2 = zx.o(ecx_20[6])
    
    *(edi i+ 0x100) = xmm2_1
    *(edi i+ 0x108) = arg2
    *(edi i+ 0x10c) = var_10_1
    int32_t xmm2_3 = _mm_cvtepi32_ps(xmm2_2)
    *(edi i+ 0x118) = 0
    *(edi i+ 0x110) = var_8
    *(edi i+ 0x104) = xmm1_4
    *(edi i+ 0x114) = xmm2_3
    *(edi i+ 0x11c) = var_c
    eax_2 = *ecx_20
    
    if (eax_2 == 0xf0 || eax_2 == 0xf2)
        eax_2 = *(arg1 + 0x1948)
        *(edi i+ 0xfc) = eax_2
    else if (eax_2 == 0xf1 || eax_2 == 0xf3)
        int32_t eax_50 = *(arg1 + 0x194c)
        *(edi i+ 0xfc) = eax_50
        return eax_50

return eax_2

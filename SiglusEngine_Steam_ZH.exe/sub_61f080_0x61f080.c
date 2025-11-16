// 函数: sub_61f080
// 地址: 0x61f080
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bfad0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg3
int32_t* edx = data_bac450
float ebx = arg2
int32_t eax_3 = *edx
float xmm4_2 = _mm_cvtepi32_ps(zx.o(ecx)) * 1.52587891e-05f

if (eax_3 == 0xe6)
    *(ebx i+ 0x7c) = 0xff
else if (eax_3 == 0xe7)
    float xmm0_1
    
    if (edx[3] != 0)
        float xmm0_2 = xmm4_2
        
        if (not(0f <= xmm4_2))
            xmm0_2 = (zx.o(0)).d
        else if (not(xmm4_2 <= 1f))
            xmm0_2 = 1f
        
        xmm0_1 = xmm0_2 - 0f + 0f
    else
        float xmm1_1 = xmm4_2
        
        if (0f <= xmm4_2)
            if (not(xmm4_2 <= 1f))
                xmm1_1 = 1f
            
            xmm0_1 = 1f - (xmm1_1 - 0f)
        else
            xmm0_1 = 1f - (0f - 0f)
    
    *(ebx i+ 0x7c) = (int.d(xmm0_1 * 255f)).b

int128_t xmm2 = 0x3f800000
int32_t eax_5 = *edx
int128_t xmm3 = 0x3f800000
arg2 = 0.100000001f

if (eax_5 == 0xe6)
    switch (edx[2])
        case 0
            xmm2 = 0x3a83126f
            xmm3 = 0x3ccccccd
        case 1
            xmm2 = 0x3b03126f
            xmm3 = 0x3d23d70a
        case 2
            xmm2 = 0x3b449ba6
            xmm3 = 0x3d75c28f
        case 3
            xmm2 = 0x3b83126f
            xmm3 = 0x3da3d70a
        case 4
            xmm2 = 0x3ba3d70a
            xmm3 = 0x3dcccccd
        case 5
            xmm2 = 0x3bc49ba6
            xmm3 = 0x3e19999a
        case 6
            xmm2 = 0x3be56042
            xmm3 = 0x3e4ccccd
        case 7
            xmm2 = 0x3c03126f
            xmm3 = 0x3e99999a
        case 8
            xmm2 = 0x3c1374bc
            xmm3 = 0x3ecccccd
        case 9
            xmm2 = 0x3c23d70a
            xmm3 = 0x3f000000
    
    float xmm1_6 = _mm_cvtepi32_ps(zx.o(int.d(xmm4_2 * 50f))) / 50f
    int32_t esi_1 = int.d(xmm1_6 * 65536f)
    float xmm0_13
    
    if (esi_1 s>= 0x8000)
        int32_t eax_11 = int.d(xmm3 f* 10000f)
        
        if (not(0.949999988f <= xmm1_6))
            ecx = esi_1
        
        xmm0_13 = _mm_cvtepi32_ps(zx.o(sub_5ad8c0(eax_11, 0x8000, ecx, eax_11, 0x10000, 
            int.d(xmm2 f* 10000f)))) / 10000f
    else
        double xmm0_8 = _mm_cvtepi32_pd(zx.q(esi_1))
        double xmm5_2 = _mm_cvtepi32_pd(zx.q(int.d(xmm2 f* 10000f)))
        double xmm1_8 = _mm_cvtepi32_pd(zx.q(int.d(xmm3 f* 10000f)))
        
        if (0.0 <= xmm0_8)
            double xmm2_2 = 32768.0
            
            if (not(xmm0_8 <= xmm2_2))
                xmm0_8 = xmm2_2
        else
            xmm0_8 = (zx.o(0)).q
        
        double xmm0_9 = xmm0_8 - 0.0
        xmm0_13 = _mm_cvtepi32_ps(zx.o(int.d(
            (xmm1_8 - xmm5_2) * xmm0_9 * xmm0_9 * 3.0517578125e-05 * 3.0517578125e-05 + xmm5_2)))
            / 10000f
    
    arg2 = xmm0_13
else if (eax_5 == 0xe7)
    switch (edx[2])
        case 0
            xmm2 = 0x3a83126f
            xmm3 = 0x3ccccccd
        case 1
            xmm2 = 0x3b03126f
            xmm3 = 0x3d23d70a
        case 2
            xmm2 = 0x3b449ba6
            xmm3 = 0x3d75c28f
        case 3
            xmm2 = 0x3b83126f
            xmm3 = 0x3da3d70a
        case 4
            xmm2 = 0x3ba3d70a
            xmm3 = 0x3dcccccd
        case 5
            xmm2 = 0x3bc49ba6
            xmm3 = 0x3e19999a
        case 6
            xmm2 = 0x3be56042
            xmm3 = 0x3e4ccccd
        case 7
            xmm2 = 0x3c03126f
            xmm3 = 0x3e99999a
        case 8
            xmm2 = 0x3c1374bc
            xmm3 = 0x3ecccccd
        case 9
            xmm2 = 0x3c23d70a
            xmm3 = 0x3f000000
    
    int32_t eax_14 = edx[3]
    
    if (eax_14 == 1)
        int128_t xmm0_16 = xmm2
        xmm2 = xmm3
        xmm3 = xmm0_16
    
    float xmm0_19
    
    if (eax_14 != 0)
        float xmm7_3 = _mm_cvtepi32_ps(zx.o(int.d(xmm4_2 * 25f))) / 25f
        
        if (0.949999988f <= xmm7_3)
            if (not(0 f<= xmm4_2))
                xmm4_2 = (zx.o(0)).d
            else if (not(xmm4_2 <= 1f))
                xmm4_2 = 1f
            
            xmm0_19 = (xmm3.d f- xmm2) * (xmm4_2 - 0f)
        else
            if (not(0 f<= xmm7_3))
                xmm7_3 = (zx.o(0)).d
            else if (not(xmm7_3 <= 1f))
                xmm7_3 = 1f
            
            xmm0_19 = (xmm3.d f- xmm2) * (xmm7_3 - 0f)
    else
        float xmm1_16 = _mm_cvtepi32_ps(zx.o(int.d(xmm4_2 * 25f))) / 25f
        
        if (not(0 f<= xmm1_16))
            xmm1_16 = (zx.o(0)).d
        else if (not(xmm1_16 <= 1f))
            xmm1_16 = 1f
        
        xmm0_19 = (xmm3.d f- xmm2) * (xmm1_16 - 0f)
    
    arg2 = xmm0_19 f+ xmm2

void var_1c
int32_t* result = sub_6f12f0(ebx, &var_1c, 0)
char edx_1 = *result == 0
arg3:3.b = edx_1
int32_t* var_18

if (var_18 != 0)
    result = &var_18[1]
    bool cond:2_1 = *result != 1
    *result
    *result -= 1
    
    if (not(cond:2_1))
        (*(*var_18 + 4))(eax_2)
        result = &var_18[2]
        bool cond:5_1 = *result != 1
        *result
        *result -= 1
        
        if (not(cond:5_1))
            result = (*(*var_18 + 8))()
        
        edx_1 = arg3:3.b

if (edx_1 == 0)
    void var_24
    sub_6f12f0(ebx, &var_24, 0)
    int32_t var_8_1 = 0
    sub_6f12f0(ebx, &var_1c, 0)
    
    if (var_18 != 0)
        bool cond:6_1 = var_18[1] != 1
        var_18[1]
        var_18[1] -= 1
        
        if (not(cond:6_1))
            (*(*var_18 + 4))(eax_2)
            bool cond:8_1 = var_18[2] != 1
            var_18[2]
            var_18[2] -= 1
            
            if (not(cond:8_1))
                (*(*var_18 + 8))()
    
    int32_t var_8_2 = 0xffffffff
    int32_t* var_20
    
    if (var_20 != 0)
        bool cond:7_1 = var_20[1] != 1
        var_20[1]
        var_20[1] -= 1
        
        if (not(cond:7_1))
            (*(*var_20 + 4))(eax_2)
            bool cond:10_1 = var_20[2] != 1
            var_20[2]
            var_20[2] -= 1
            
            if (not(cond:10_1))
                (*(*var_20 + 8))()
    
    void var_34
    int32_t* eax_27 = sub_6f12f0(ebx, &var_34, 0)
    int32_t var_8_3 = 1
    void var_2c
    void* eax_29 = *sub_6f12f0(ebx, &var_2c, 0)
    float xmm1_20 = _mm_cvtepi32_ps(zx.o(*(*eax_27 + 4))) / _mm_cvtepi32_ps(zx.o(*(eax_29 + 8)))
    int32_t* var_28
    
    if (var_28 != 0)
        bool cond:9_1 = var_28[1] != 1
        var_28[1]
        var_28[1] -= 1
        
        if (not(cond:9_1))
            (*(*var_28 + 4))(eax_2)
            bool cond:12_1 = var_28[2] != 1
            var_28[2]
            var_28[2] -= 1
            
            if (not(cond:12_1))
                (*(*var_28 + 8))()
    
    int32_t var_8_4 = 0xffffffff
    int32_t* var_30
    
    if (var_30 != 0)
        bool cond:11_1 = var_30[1] != 1
        var_30[1]
        var_30[1] -= 1
        
        if (not(cond:11_1))
            (*(*var_30 + 4))(eax_2)
            int32_t edi_1 = var_30[2]
            var_30[2] -= 1
            
            if (edi_1 == 1)
                (*(*var_30 + 8))()
    
    int32_t** eax_38 = data_bac450
    *(ebx i+ 0x100) = arg2
    *(ebx i+ 0x104) = xmm1_20
    *(ebx i+ 0x108) = 0
    *(ebx i+ 0x10c) = 0
    result = *eax_38
    
    if (result == 0xe6 || result == 0xe7)
        result = *(arg1 + 0x1954)
        *(ebx i+ 0xfc) = result

fsbase->NtTib.ExceptionList = ExceptionList
return result

// 函数: sub_5e2f60
// 地址: 0x5e2f60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t* ebx = arg3
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t* var_1c = ebx
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1

if (*arg1 s< 0)
    return 

int32_t var_f4_1 = 0
int32_t var_14
int32_t* var_f8_1 = &var_14
bool edx_1 = *sub_6f12f0(&arg1[0x1e8]) != 0
int32_t* var_10

if (var_10 != 0)
    bool cond:0_1 = var_10[1] != 1
    var_10[1]
    var_10[1] -= 1
    
    if (not(cond:0_1))
        (*(*var_10 + 4))()
        bool cond:2_1 = var_10[2] != 1
        var_10[2]
        var_10[2] -= 1
        
        if (not(cond:2_1))
            (*(*var_10 + 8))()
        
        edx_1 = edx_1

int32_t var_e0

if (edx_1 != 0)
    FI::`default constructor closure'(&var_e0)
    void* eax_6 = data_bac510
    int32_t xmm0_2 = _mm_cvtepi32_ps(zx.o(arg5))
    var_e0 = 1
    int32_t var_d8_1 = 0
    int32_t var_d4_1 = *(eax_6 + 0xa2eba4)
    int32_t var_cc_1 = xmm0_2
    int32_t var_c8_1 = _mm_cvtepi32_ps(zx.o(arg6))
    sub_6289b0(&var_e0, ebx)
    sub_628eb0(&arg1[0x1e9], &arg1[0x230], &var_e0, &arg1[0x1e9])
    *(arg1 + 0x7a5) = 1
    arg1[0x1ee] = 0

FI::`default constructor closure'(&var_e0)
bool cond:1_1 = *(arg1 + 0xe5) == 0
void* eax_9 = data_bac510
float xmm1_2 = _mm_cvtepi32_ps(zx.o(arg1[0x3a]))
void* ecx_8 = data_bac4e4
var_e0 = 1
int32_t var_d8_2 = 0
int32_t var_d4_2 = *(eax_9 + 0xa2eba0)
float xmm1_3 = xmm1_2 + _mm_cvtepi32_ps(zx.o(arg5))
float xmm0_8 = _mm_cvtepi32_ps(zx.o(arg1[0x3b]))
float var_cc_2 = xmm1_3
float var_c8_2 = _mm_cvtepi32_ps(zx.o(arg6)) + xmm0_8

if (not(cond:1_1))
    uint32_t var_68_1 = zx.d(*(ecx_8 + 0x118))

if (arg1[0x39].b != 0)
    uint32_t var_3c_1 = zx.d(*(ecx_8 + 0x115))
    uint32_t var_40_1 = zx.d(*(ecx_8 + 0x116))
    uint32_t var_44_1 = zx.d(*(ecx_8 + 0x117))

sub_6289b0(&var_e0, ebx)
sub_628eb0(&arg1[0x235], &arg1[0x27c], &var_e0, &arg1[0x235])
*(arg1 + 0x8d5) = 1
int32_t var_f4_4 = 0
int32_t* var_f8_2 = &var_14
bool edx_6 = *sub_6f12f0(&arg1[0x234]) != 0

if (var_10 != 0)
    bool cond:3_1 = var_10[1] != 1
    var_10[1]
    var_10[1] -= 1
    
    if (not(cond:3_1))
        (*(*var_10 + 4))()
        bool cond:4_1 = var_10[2] != 1
        var_10[2]
        var_10[2] -= 1
        
        if (not(cond:4_1))
            (*(*var_10 + 8))()

if (edx_6 == 0)
    int32_t eax_28 = arg8 - arg1[0x3d] - arg6 - arg1[0x3b]
    var_14 = _mm_cvtepi32_ps(zx.o(arg7 - arg1[0x3c] - arg1[0x3a] - arg5))
    int32_t eax_29 = var_14
    int32_t xmm0_12 = _mm_cvtepi32_ps(zx.o(eax_28))
    arg1[0x238] = eax_29
    arg1[0x239] = xmm0_12
    arg1[0x25c] = arg1[0x3e]
else
    arg1[0x23a] = 0

sub_5dae40(&arg1[0x40], arg2, ebx, arg5.o)
char* edi_3 = nullptr
int32_t eax_35 = (arg1[0xc1] - arg1[0xc0]) s/ 0x15fc
int128_t var_100_1

if (eax_35 s> 0)
    int32_t var_10_2 = 0
    int32_t ebx_1 = 0
    
    do
        FI::`default constructor closure'(&var_e0)
        int32_t ecx_20 = *arg1 * 0xa0e4
        void* edx_10 = data_bac510
        float xmm1_8 = _mm_cvtepi32_ps(zx.o(arg5))
        int32_t ecx_21 = ecx_20 + ebx_1
        var_e0 = 1
        int32_t eax_36 = *(ecx_21 + edx_10 + 0x20804)
        float var_cc_3 = xmm1_8
        float xmm2_2 = _mm_cvtepi32_ps(zx.o(arg6))
        float var_c8_3 = xmm2_2
        
        if (eax_36 u<= 3)
            float var_cc_4
            uint128_t xmm0_17
            uint128_t xmm0_18
            
            switch (eax_36)
                case 0
                    var_cc_4 = _mm_cvtepi32_ps(zx.o(*(ecx_21 + edx_10 + 0x20808))) + xmm1_8
                    xmm0_17 = zx.o(*(ecx_21 + edx_10 + 0x2080c))
                case 1
                    var_cc_4 =
                        _mm_cvtepi32_ps(zx.o(arg7 - *(ecx_21 + edx_10 + 0x20808) - arg5)) + xmm1_8
                    xmm0_17 = zx.o(*(ecx_21 + edx_10 + 0x2080c))
                case 2
                    xmm0_18 = zx.o(*(ecx_21 + edx_10 + 0x20808))
                label_5e32f6:
                    int32_t eax_45 = arg8 - *(ecx_21 + edx_10 + 0x2080c) - arg6
                    float var_cc_5 = _mm_cvtepi32_ps(xmm0_18) + xmm1_8
                    xmm0_17 = zx.o(eax_45)
                case 3
                    xmm0_18 = zx.o(arg7 - *(ecx_21 + edx_10 + 0x20808) - arg5)
                    goto label_5e32f6
            
            float var_c8_4 = _mm_cvtepi32_ps(xmm0_17) + xmm2_2
        
        void* eax_46 = data_bac458
        
        if (*(eax_46 + 0x37b) != 0 || edi_3[*(eax_46 + 0x314)] != 0)
            int32_t var_24_1 = 4
        
        int32_t var_d8_3 = 0
        int32_t var_d4_3 = *(edx_10 + 0xa2eba4)
        sub_6289b0(&var_e0, var_1c)
        arg1[0xc0]
        int32_t var_f4_5 = 0
        int32_t var_f8_3 = 0
        var_100_1:4.d = &var_e0
        std::num_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::do_put()
        var_10_2 += 0x15fc
        edi_3 = &edi_3[1]
        ebx_1 += 0xa0
    while (edi_3 s< eax_35)
    
    ebx = var_1c

if (arg4 != 0)
    int32_t var_18_2 = 0
    int32_t edi_6 = (arg1[0x130] - arg1[0x12f]) s/ 0x15fc
    
    if (edi_6 s> 0)
        int32_t var_10_3 = 0
        int32_t eax_57
        
        do
            FI::`default constructor closure'(&var_e0)
            int32_t ecx_28 = *arg1 * 0xa0e4
            void* edx_15 = data_bac510
            float xmm0_24 = _mm_cvtepi32_ps(zx.o(arg5))
            var_e0 = 1
            int32_t var_d8_4 = 0
            float xmm1_11 =
                _mm_cvtepi32_ps(zx.o(*(ecx_28 + (var_18_2 << 3) + edx_15 + 0x2a7e8))) + xmm0_24
            float xmm0_26 = _mm_cvtepi32_ps(zx.o(arg6))
            float var_cc_6 = xmm1_11
            int32_t eax_54 = arg1[0x12f]
            float xmm1_13 = _mm_cvtepi32_ps(zx.o(*(ecx_28 + (var_18_2 << 3) + edx_15 + 0x2a7ec)))
            *(eax_54 + var_10_3 + 0x35c) = 1
            int32_t var_d4_4 = *(edx_15 + 0xa2ebb4)
            float var_c8_5 = xmm1_13 + xmm0_26
            sub_6289b0(&var_e0, ebx)
            arg1[0x12f]
            int32_t var_f4_6 = 0
            int32_t var_f8_4 = 0
            var_100_1:4.d = &var_e0
            std::num_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::do_put()
            var_10_3 += 0x15fc
            eax_57 = var_18_2 + 1
            var_18_2 = eax_57
        while (eax_57 s< edi_6)

int32_t i_2 = (arg1[0x19f] - arg1[0x19e]) s/ 0x15fc

if (i_2 s<= 0)
    return 

int32_t ebx_2 = 0
int32_t i_1 = i_2
int32_t i

do
    int32_t var_d8_5 = 0
    int32_t var_d4_5 = 0
    FI::`default constructor closure'(&var_e0)
    int32_t xmm0_28 = _mm_cvtepi32_ps(zx.o(arg5))
    var_e0 = 1
    int32_t var_cc_7 = xmm0_28
    int32_t var_c8_6 = _mm_cvtepi32_ps(zx.o(arg6))
    sub_6289b0(&var_e0, var_1c)
    arg1[0x19e]
    int32_t var_f4_7 = 0
    int32_t var_f8_5 = 0
    var_100_1:4.d = &var_e0
    std::num_put<uint16_t,class std::ostreambuf_iterator<uint16_t,struct std::char_traits<uint16_t> > >::do_put()
    ebx_2 += 0x15fc
    i = i_1
    i_1 -= 1
while (i != 1)

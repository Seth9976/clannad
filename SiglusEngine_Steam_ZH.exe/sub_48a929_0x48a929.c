// 函数: sub_48a929
// 地址: 0x48a929
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_14c = arg1
int32_t edi
int32_t var_150 = edi
int64_t* result_1 = arg2
int32_t esi_1 = sbb.d(arg1, arg1, 0xa u< arg7) & arg7 & 0xfffffffc
int32_t i_4 = arg7 - esi_1
uint32_t i_5 = esi_1 u>> 2
int64_t* result = result_1
float var_140[0x4]

if (i_5 != 0)
    sub_48948b(&var_140, arg6)

int128_t* esi_2

if (i_5 == 0 || i_5 u<= 0)
    esi_2 = arg4
else
    uint32_t i_2 = i_5
    esi_2 = arg4
    uint32_t i
    
    do
        float xmm2_2[0x4] = *esi_2 | *(esi_2 + arg5) << 0x40
        float xmm4_4[0x4] = *(esi_2 + 8) | *(arg5 + esi_2 + 8) << 0x40
        int32_t edx_2 = arg5 * 3
        float xmm3_4[0x4] = *(esi_2 + (arg5 << 1)) | *(edx_2 + esi_2) << 0x40
        float xmm0_2[0x4] = _mm_shuffle_ps(xmm2_2, xmm3_4, 0x88)
        float xmm1_2[0x4] = _mm_shuffle_ps(xmm2_2, xmm3_4, 0xdd)
        float xmm3_6[0x4] = *(esi_2 + (arg5 << 1) + 8) | *(edx_2 + esi_2 + 8) << 0x40
        float xmm4_5[0x4] = _mm_shuffle_ps(xmm4_4, xmm3_6, 0xdd)
        float xmm2_5[0x4] = _mm_shuffle_ps(xmm4_4, xmm3_6, 0x88)
        float var_80[0x4]
        float xmm3_8[0x4] = __mulps_xmmps_memps(xmm4_5, var_80)
        float var_70[0x4]
        float xmm4_6[0x4] = __mulps_xmmps_memps(xmm4_5, var_70)
        float var_100[0x4]
        float var_c0[0x4]
        float xmm3_12[0x4] = _mm_add_ps(
            _mm_add_ps(
                _mm_add_ps(__mulps_xmmps_memps(xmm0_2, var_140), 
                    __mulps_xmmps_memps(xmm1_2, var_100)), 
                __mulps_xmmps_memps(xmm2_5, var_c0)), 
            xmm3_8)
        float var_130[0x4]
        float var_f0[0x4]
        float var_b0[0x4]
        float xmm4_10[0x4] = _mm_add_ps(
            _mm_add_ps(
                _mm_add_ps(__mulps_xmmps_memps(xmm0_2, var_130), 
                    __mulps_xmmps_memps(xmm1_2, var_f0)), 
                __mulps_xmmps_memps(xmm2_5, var_b0)), 
            xmm4_6)
        float var_60[0x4]
        float xmm4_12[0x4] = __mulps_xmmps_memps(xmm4_5, var_60)
        float var_120[0x4]
        float xmm7_8[0x4] = __mulps_xmmps_memps(xmm0_2, var_120)
        float var_110[0x4]
        float xmm0_3[0x4] = __mulps_xmmps_memps(xmm0_2, var_110)
        float var_e0[0x4]
        float xmm6_10[0x4] = __mulps_xmmps_memps(xmm1_2, var_e0)
        float var_d0[0x4]
        float xmm1_3[0x4] = __mulps_xmmps_memps(xmm1_2, var_d0)
        float var_a0[0x4]
        float xmm4_14[0x4] = __mulps_xmmps_memps(xmm2_5, var_a0)
        float var_90[0x4]
        float xmm2_6[0x4] = __mulps_xmmps_memps(xmm2_5, var_90)
        float xmm7_9[0x4] = _mm_add_ps(xmm7_8, xmm6_10)
        float xmm0_4[0x4] = _mm_add_ps(xmm0_3, xmm1_3)
        float xmm6_12[0x4] = _mm_add_ps(xmm7_9, xmm4_14)
        float xmm0_5[0x4] = _mm_add_ps(xmm0_4, xmm2_6)
        float xmm4_16[0x4] = _mm_add_ps(xmm6_12, xmm4_12)
        float var_50[0x4]
        float xmm5_5[0x4] = __mulps_xmmps_memps(xmm4_5, var_50)
        int64_t xmm0_7 = __unpcklps_xmmps_memdq(xmm3_12, xmm4_10)
        int64_t xmm3_13 = __unpckhps_xmmps_memdq(xmm3_12, xmm4_10)
        float xmm2_8[0x4] = _mm_add_ps(xmm0_5, xmm5_5)
        *result_1 = xmm0_7
        int64_t xmm1_5 = _mm_unpacklo_ps(xmm4_16, xmm2_8)
        result_1[1] = xmm1_5
        *(result_1 + arg3) = *(result_1 + arg3) | xmm0_7 << 0x40
        *(arg3 + result_1 + 8) = *(arg3 + result_1 + 8) | xmm1_5 << 0x40
        int64_t xmm4_17 = _mm_unpackhi_ps(xmm4_16, xmm2_8)
        *(result_1 + (arg3 << 1)) = xmm3_13
        int128_t* edx_3 = arg3 * 3
        *(result_1 + (arg3 << 1) + 8) = xmm4_17
        *(edx_3 + result_1) = *(edx_3 + result_1) | xmm3_13 << 0x40
        *(edx_3 + result_1 + 8) = *(edx_3 + result_1 + 8) | xmm4_17 << 0x40
        esi_2 += arg5 << 2
        result_1 += arg3 << 2
        i = i_2
        i_2 -= 1
    while (i != 1)

if (i_4 u> 0)
    int32_t i_3 = i_4
    int32_t i_1
    
    do
        sub_48b0a8(result_1, esi_2, arg6)
        esi_2 += arg5
        result_1 += arg3
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return result

// 函数: sub_489db1
// 地址: 0x489db1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_13c = arg1
int32_t edi
int32_t var_140 = edi
int64_t* result_1 = arg2
int32_t esi_1 = sbb.d(arg1, arg1, 0xc u< arg7) & arg7 & 0xfffffffc
int32_t i_4 = arg7 - esi_1
uint32_t i_5 = esi_1 u>> 2
int64_t* result = result_1
float var_130[0x4]

if (i_5 != 0)
    sub_48948b(&var_130, arg6)

int128_t* esi_2

if (i_5 == 0 || i_5 u<= 0)
    esi_2 = arg4
else
    uint32_t i_2 = i_5
    esi_2 = arg4
    uint32_t i
    
    do
        int64_t xmm4_1 = *(esi_2 + 8)
        float xmm1_2[0x4] = *esi_2 | *(esi_2 + arg5) << 0x40
        int32_t edx_2 = arg5 * 3
        float xmm2_4[0x4] = *(esi_2 + (arg5 << 1)) | *(edx_2 + esi_2) << 0x40
        float xmm1_3[0x4] = _mm_shuffle_ps(xmm1_2, xmm2_4, 0xdd)
        float xmm0_4[0x4] = _mm_shuffle_ps(xmm1_2, xmm2_4, 0x88)
        float xmm1_7[0x4] = _mm_shuffle_ps(xmm4_1 | *(arg5 + esi_2 + 8) << 0x40, 
            *(esi_2 + (arg5 << 1) + 8) | *(edx_2 + esi_2 + 8) << 0x40, 0x88)
        float var_b0[0x4]
        float xmm2_8[0x4] = __mulps_xmmps_memps(xmm1_7, var_b0)
        float var_f0[0x4]
        float xmm2_10[0x4] = __mulps_xmmps_memps(xmm1_3, var_f0)
        float xmm2_12[0x4] =
            _mm_add_ps(_mm_add_ps(__mulps_xmmps_memps(xmm0_4, var_130), xmm2_10), xmm2_8)
        float var_a0[0x4]
        float xmm4_5[0x4] = __mulps_xmmps_memps(xmm1_7, var_a0)
        float var_90[0x4]
        float xmm1_8[0x4] = __mulps_xmmps_memps(xmm1_7, var_90)
        float var_110[0x4]
        float xmm0_5[0x4] = __mulps_xmmps_memps(xmm0_4, var_110)
        float var_120[0x4]
        float xmm6_2[0x4] = __mulps_xmmps_memps(xmm0_4, var_120)
        float var_d0[0x4]
        float xmm3_2[0x4] = __mulps_xmmps_memps(xmm1_3, var_d0)
        float var_e0[0x4]
        float xmm4_7[0x4] = __mulps_xmmps_memps(xmm1_3, var_e0)
        float xmm0_7[0x4] = _mm_add_ps(_mm_add_ps(xmm0_5, xmm3_2), xmm1_8)
        float xmm4_9[0x4] = _mm_add_ps(_mm_add_ps(xmm6_2, xmm4_7), xmm4_5)
        int64_t xmm3_4 = _mm_unpacklo_ps(xmm2_12, xmm4_9)
        *result_1 = xmm3_4
        *(result_1 + arg3) = *(result_1 + arg3) | xmm3_4 << 0x40
        int32_t var_30[0x4]
        float xmm1_10[0x4] = __unpcklps_xmmps_memdq(xmm0_7, var_30)
        float xmm0_8[0x4] = __unpckhps_xmmps_memdq(xmm0_7, var_30)
        result_1[1].d = xmm1_10
        *(arg3 + result_1 + 8) = (xmm1_10 u>> 0x40).d
        int64_t xmm2_13 = _mm_unpackhi_ps(xmm2_12, xmm4_9)
        *(result_1 + (arg3 << 1)) = xmm2_13
        int128_t* edx_3 = arg3 * 3
        *(edx_3 + result_1) = *(edx_3 + result_1) | xmm2_13 << 0x40
        *(result_1 + (arg3 << 1) + 8) = xmm0_8
        *(arg3 * 3 + result_1 + 8) = (xmm0_8 u>> 0x40).d
        esi_2 += arg5 << 2
        result_1 += arg3 << 2
        i = i_2
        i_2 -= 1
    while (i != 1)

if (i_4 u> 0)
    int32_t i_3 = i_4
    int32_t i_1
    
    do
        sub_48b99f(result_1, esi_2, arg6)
        esi_2 += arg5
        result_1 += arg3
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return result

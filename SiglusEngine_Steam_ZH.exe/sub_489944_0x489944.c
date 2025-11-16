// 函数: sub_489944
// 地址: 0x489944
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t ecx
int32_t var_8 = ecx
int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t var_13c = arg1
int32_t edi
int32_t var_140 = edi
int64_t* result_1 = arg2
int32_t var_144 = 0xc
int32_t* esp_1 = &var_140
int32_t esi_1 = sbb.d(arg1, arg1, 0xc u< arg7) & arg7 & 0xfffffffc
int32_t i_4 = arg7 - esi_1
uint32_t i_5 = esi_1 u>> 2
int64_t* result = result_1
float var_130[0x4]

if (i_5 != 0)
    sub_48948b(&var_130, arg6)
    esp_1 = &var_140

int64_t* esi_2

if (i_5 == 0 || i_5 u<= 0)
    esi_2 = arg4
else
    uint32_t i_2 = i_5
    esi_2 = arg4
    uint32_t i
    
    do
        float xmm1_2[0x4] = *esi_2 | *(esi_2 + arg5) << 0x40
        float xmm4_3[0x4] = *(esi_2 + (arg5 << 1)) | *(arg5 * 3 + esi_2) << 0x40
        float xmm0_2[0x4] = _mm_shuffle_ps(xmm1_2, xmm4_3, 0x88)
        float xmm1_3[0x4] = _mm_shuffle_ps(xmm1_2, xmm4_3, 0xdd)
        float var_c0[0x4]
        float xmm2_4[0x4] = __mulps_xmmps_memps(xmm1_3, var_c0)
        float var_100[0x4]
        float var_40[0x4]
        float xmm2_6[0x4] =
            __addps_xmmps_memps(_mm_add_ps(__mulps_xmmps_memps(xmm0_2, var_100), xmm2_4), var_40)
        float xmm3_4[0x4] = _mm_rcp_ps(xmm2_6)
        float xmm5_3[0x4] = _mm_mul_ps(_mm_mul_ps(xmm3_4, xmm2_6), xmm3_4)
        float xmm3_6[0x4] = _mm_sub_ps(_mm_add_ps(xmm3_4, xmm3_4), xmm5_3)
        float var_f0[0x4]
        float xmm2_10[0x4] = __mulps_xmmps_memps(xmm1_3, var_f0)
        float var_e0[0x4]
        float xmm1_4[0x4] = __mulps_xmmps_memps(xmm1_3, var_e0)
        float var_120[0x4]
        float xmm0_3[0x4] = __mulps_xmmps_memps(xmm0_2, var_120)
        float xmm5_6[0x4] = _mm_add_ps(__mulps_xmmps_memps(xmm0_2, var_130), xmm2_10)
        float var_60[0x4]
        float xmm1_6[0x4] = __addps_xmmps_memps(_mm_add_ps(xmm0_3, xmm1_4), var_60)
        float var_70[0x4]
        float xmm2_13[0x4] = _mm_mul_ps(__addps_xmmps_memps(xmm5_6, var_70), xmm3_6)
        float xmm1_7[0x4] = _mm_mul_ps(xmm1_6, xmm3_6)
        int64_t xmm0_6 = _mm_unpacklo_ps(xmm2_13, xmm1_7)
        *result_1 = xmm0_6
        *(result_1 + arg3) = *(result_1 + arg3) | xmm0_6 << 0x40
        int64_t xmm2_14 = _mm_unpackhi_ps(xmm2_13, xmm1_7)
        int128_t* edx_3 = arg3 * 3
        *(result_1 + (arg3 << 1)) = xmm2_14
        *(edx_3 + result_1) = *(edx_3 + result_1) | xmm2_14 << 0x40
        esi_2 += arg5 << 2
        result_1 += arg3 << 2
        i = i_2
        i_2 -= 1
    while (i != 1)

if (i_4 u> 0)
    int32_t i_3 = i_4
    int32_t i_1
    
    do
        *(esp_1 - 4) = arg6
        *(esp_1 - 8) = esi_2
        *(esp_1 - 0xc) = result_1
        j_sub_4013fd()
        esp_1 -= 8
        esi_2 += arg5
        result_1 += arg3
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

*esp_1
esp_1[1]
return result

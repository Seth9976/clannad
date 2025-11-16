// 函数: sub_4897c4
// 地址: 0x4897c4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t ecx
int32_t var_8 = ecx
int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t esi
int32_t var_13c = esi
int64_t* result_1 = arg1
int32_t edi
int32_t var_140 = edi
int32_t var_144 = 0xc
int32_t* esp_1 = &var_140
int32_t ecx_2 = sbb.d(0xc, 0xc, 0xc u< arg6) & arg6 & 0xfffffffc
int32_t i_4 = arg6 - ecx_2
uint32_t i_5 = ecx_2 u>> 2
int64_t* result = result_1

if (i_5 != 0)
    float var_130[0x4]
    sub_48948b(&var_130, arg5)
    esp_1 = &var_140
    
    if (i_5 u> 0)
        uint32_t i_2 = i_5
        uint32_t i
        
        do
            int64_t* eax_2 = arg3
            float xmm1_2[0x4] = *eax_2 | *(eax_2 + arg4) << 0x40
            float xmm2_4[0x4] = *(eax_2 + (arg4 << 1)) | *(arg4 * 3 + eax_2) << 0x40
            float xmm0_2[0x4] = _mm_shuffle_ps(xmm1_2, xmm2_4, 0x88)
            float xmm1_3[0x4] = _mm_shuffle_ps(xmm1_2, xmm2_4, 0xdd)
            float var_f0[0x4]
            float var_70[0x4]
            float xmm2_8[0x4] = __addps_xmmps_memps(
                _mm_add_ps(__mulps_xmmps_memps(xmm0_2, var_130), 
                    __mulps_xmmps_memps(xmm1_3, var_f0)), 
                var_70)
            float var_120[0x4]
            float var_e0[0x4]
            float var_60[0x4]
            float xmm4_4[0x4] = __addps_xmmps_memps(
                _mm_add_ps(__mulps_xmmps_memps(xmm0_2, var_120), 
                    __mulps_xmmps_memps(xmm1_3, var_e0)), 
                var_60)
            float var_110[0x4]
            float xmm5_2[0x4] = __mulps_xmmps_memps(xmm0_2, var_110)
            float var_100[0x4]
            float xmm0_3[0x4] = __mulps_xmmps_memps(xmm0_2, var_100)
            float var_d0[0x4]
            float xmm3_9[0x4] = __mulps_xmmps_memps(xmm1_3, var_d0)
            float var_c0[0x4]
            float xmm1_4[0x4] = __mulps_xmmps_memps(xmm1_3, var_c0)
            float xmm5_3[0x4] = _mm_add_ps(xmm5_2, xmm3_9)
            float xmm0_4[0x4] = _mm_add_ps(xmm0_3, xmm1_4)
            float var_50[0x4]
            float xmm3_11[0x4] = __addps_xmmps_memps(xmm5_3, var_50)
            float var_40[0x4]
            float xmm5_5[0x4] = __addps_xmmps_memps(xmm0_4, var_40)
            int64_t xmm0_6 = _mm_unpacklo_ps(xmm2_8, xmm4_4)
            *result_1 = xmm0_6
            int64_t xmm1_6 = _mm_unpacklo_ps(xmm3_11, xmm5_5)
            result_1[1] = xmm1_6
            *(result_1 + arg2) = *(result_1 + arg2) | xmm0_6 << 0x40
            *(arg2 + result_1 + 8) = *(arg2 + result_1 + 8) | xmm1_6 << 0x40
            int64_t xmm2_9 = _mm_unpackhi_ps(xmm2_8, xmm4_4)
            *(result_1 + (arg2 << 1)) = xmm2_9
            int128_t* edx_3 = arg2 * 3
            int64_t xmm3_12 = _mm_unpackhi_ps(xmm3_11, xmm5_5)
            *(result_1 + (arg2 << 1) + 8) = xmm3_12
            *(edx_3 + result_1) = *(edx_3 + result_1) | xmm2_9 << 0x40
            *(edx_3 + result_1 + 8) = *(edx_3 + result_1 + 8) | xmm3_12 << 0x40
            arg3 = eax_2 + (arg4 << 2)
            result_1 += arg2 << 2
            i = i_2
            i_2 -= 1
        while (i != 1)

if (i_4 u> 0)
    int32_t i_3 = i_4
    int32_t i_1
    
    do
        *(esp_1 - 4) = arg5
        *(esp_1 - 8) = arg3
        *(esp_1 - 0xc) = result_1
        j_sub_4013d1()
        esp_1 -= 8
        arg3 += arg4
        result_1 += arg2
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

*esp_1
esp_1[1]
return result

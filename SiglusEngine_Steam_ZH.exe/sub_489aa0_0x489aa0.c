// 函数: sub_489aa0
// 地址: 0x489aa0
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
        float xmm0_2[0x4] = *esi_2 | *(esi_2 + arg5) << 0x40
        float xmm3_3[0x4] = *(esi_2 + (arg5 << 1)) | *(arg5 * 3 + esi_2) << 0x40
        float xmm0_3[0x4] = _mm_shuffle_ps(xmm0_2, xmm3_3, 0xdd)
        float var_f0[0x4]
        float xmm2_4[0x4] = __mulps_xmmps_memps(xmm0_3, var_f0)
        float var_e0[0x4]
        float xmm0_4[0x4] = __mulps_xmmps_memps(xmm0_3, var_e0)
        float xmm1_2[0x4] = _mm_shuffle_ps(xmm0_2, xmm3_3, 0x88)
        float xmm2_6[0x4] = __mulps_xmmps_memps(xmm1_2, var_130)
        float var_120[0x4]
        float xmm1_4[0x4] = _mm_add_ps(__mulps_xmmps_memps(xmm1_2, var_120), xmm0_4)
        float xmm2_7[0x4] = _mm_add_ps(xmm2_6, xmm2_4)
        int64_t xmm0_6 = _mm_unpacklo_ps(xmm2_7, xmm1_4)
        *result_1 = xmm0_6
        *(result_1 + arg3) = *(result_1 + arg3) | xmm0_6 << 0x40
        int64_t xmm2_8 = _mm_unpackhi_ps(xmm2_7, xmm1_4)
        int128_t* edx_3 = arg3 * 3
        *(result_1 + (arg3 << 1)) = xmm2_8
        *(edx_3 + result_1) = *(edx_3 + result_1) | xmm2_8 << 0x40
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
        j_sub_401429()
        esp_1 -= 8
        esi_2 += arg5
        result_1 += arg3
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

*esp_1
esp_1[1]
return result

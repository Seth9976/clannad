// 函数: sub_488d58
// 地址: 0x488d58
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp
int32_t var_c = ebp
int32_t var_10 = ebp
void* const __return_addr_1 = __return_addr
int32_t edi
int32_t var_2d8 = edi
int128_t xmm0 = *(arg5 + 8)
int128_t var_2d0 = xmm0
float xmm0_1[0x4] = xmm0 | *arg5 << 0x40
void* result = arg1
float xmm1_1[0x4] = _mm_shuffle_ps(xmm0_1, xmm0_1, 0x4e)
int32_t var_a0 = arg4
int32_t* var_9c = arg2
int128_t xmm0_2 = *(arg6 + 8)
int128_t var_270 = xmm0_2
float xmm0_3[0x4] = xmm0_2 | *arg6 << 0x40
float xmm0_4[0x4] = _mm_shuffle_ps(xmm0_3, xmm0_3, 0x4e)
int128_t xmm0_5 = *(arg7 + 8)
int128_t var_240 = xmm0_5
float xmm0_6[0x4] = xmm0_5 | *arg7 << 0x40
float xmm0_7[0x4] = _mm_shuffle_ps(xmm0_6, xmm0_6, 0x4e)
int128_t xmm0_8 = *(result + 8)
int128_t var_230 = xmm0_8
float xmm0_9[0x4] = xmm0_8 | *result << 0x40
float xmm1_3[0x4] = _mm_shuffle_ps(xmm0_9, xmm0_9, 0x4e)
int128_t xmm0_10 = *(result + 0x14)
int128_t var_220 = xmm0_10
float xmm0_11[0x4] = xmm0_10 | *(result + 0xc) << 0x40
float xmm0_12[0x4] = _mm_shuffle_ps(xmm0_11, xmm0_11, 0x4e)
float var_220_1[0x4] = xmm0_12
int128_t xmm1_4 = *(result + 0x20)
int128_t var_210 = xmm1_4
float xmm1_5[0x4] = xmm1_4 | *(result + 0x18) << 0x40
float xmm1_6[0x4] = _mm_shuffle_ps(xmm1_5, xmm1_5, 0x4e)
float var_210_1[0x4] = xmm1_6
float xmm3_2[0x4] = __mulps_xmmps_memps(__subps_xmmps_memps(xmm1_1, xmm0_4), data_b56430)
float xmm2_1[0x4] = _mm_mul_ps(xmm1_3, xmm3_2)
float xmm7_3[0x4] = __mulps_xmmps_memps(__subps_xmmps_memps(xmm1_1, xmm0_7), data_b56430)
float var_2c0[0x4] = xmm2_1
float xmm6_2[0x4] = _mm_mul_ps(xmm1_3, xmm7_3)
float var_2b0[0x4] = xmm6_2
float xmm6_3[0x4] = xmm6_2 | xmm2_1 << 0x40
float xmm5_3[0x4] =
    _mm_add_ps(_mm_add_ps(xmm6_2 u>> 0x40, xmm6_3), _mm_shuffle_ps(xmm6_3, xmm6_3, 0xf5))
float xmm2_3[0x4] = _mm_sub_ps(xmm1_1, xmm3_2)
float xmm3_4[0x4] = _mm_shuffle_ps(xmm5_3, xmm5_3, 0xaa)
float xmm5_4[0x4] = _mm_shuffle_ps(xmm5_3, xmm5_3, 0)
float xmm2_4[0x4] = _mm_add_ps(xmm2_3, __mulps_xmmps_memps(xmm3_4, xmm1_3))
float xmm5_5[0x4] = __mulps_xmmps_memps(xmm5_4, xmm1_3)
float xmm3_9[0x4] = _mm_add_ps(_mm_sub_ps(xmm1_1, xmm7_3), xmm5_5)
float xmm6_8[0x4] = _mm_sub_ps(xmm0_4, xmm1_1)
float xmm2_5[0x4] = _mm_add_ps(xmm2_4, xmm3_9)
float xmm4_1[0x4] = __subps_xmmps_memps(xmm0_4, xmm0_7)
float xmm3_11[0x4] = __mulps_xmmps_memps(xmm6_8, data_b56430)
float xmm4_2[0x4] = __mulps_xmmps_memps(xmm4_1, data_b56430)
int64_t xmm7_5 = _mm_mul_ps(xmm0_12, xmm3_11)
float xmm6_10[0x4] = _mm_mul_ps(xmm0_12, xmm4_2)
float xmm6_11[0x4] = xmm6_10 | xmm7_5 << 0x40
float xmm7_8[0x4] =
    _mm_add_ps(_mm_add_ps(xmm6_10 u>> 0x40, xmm6_11), _mm_shuffle_ps(xmm6_11, xmm6_11, 0xf5))
float xmm1_9[0x4] = _mm_sub_ps(xmm0_4, xmm4_2)
float xmm4_4[0x4] = _mm_sub_ps(xmm0_4, xmm3_11)
float xmm7_9[0x4] = _mm_shuffle_ps(xmm7_8, xmm7_8, 0)
float xmm3_13[0x4] = _mm_shuffle_ps(xmm7_8, xmm7_8, 0xaa)
float xmm7_10[0x4] = _mm_mul_ps(xmm7_9, xmm0_12)
float xmm3_14[0x4] = _mm_mul_ps(xmm3_13, xmm0_12)
float xmm1_10[0x4] = _mm_add_ps(xmm1_9, xmm7_10)
float xmm4_5[0x4] = _mm_add_ps(xmm4_4, xmm3_14)
float xmm5_8[0x4] = data_b56430
float xmm3_16[0x4] = _mm_sub_ps(xmm0_7, xmm1_1)
float xmm2_6[0x4] = _mm_add_ps(xmm2_5, xmm4_5)
float xmm3_17[0x4] = _mm_mul_ps(xmm3_16, xmm5_8)
int64_t xmm6_14 = _mm_mul_ps(xmm1_6, xmm3_17)
float xmm7_13[0x4] = _mm_mul_ps(__subps_xmmps_memps(xmm0_7, xmm0_4), xmm5_8)
float xmm0_15[0x4] = _mm_mul_ps(xmm1_6, xmm7_13)
float xmm4_7[0x4] = _mm_sub_ps(xmm0_7, xmm3_17)
float xmm0_16[0x4] = xmm0_15 | xmm6_14 << 0x40
float xmm6_16[0x4] = _mm_add_ps(xmm0_15 u>> 0x40, xmm0_16)
float xmm0_17[0x4] = _mm_shuffle_ps(xmm0_16, xmm0_16, 0xf5)
float xmm3_20[0x4] = _mm_sub_ps(xmm0_7, xmm7_13)
float xmm6_17[0x4] = _mm_add_ps(xmm6_16, xmm0_17)
float xmm6_18[0x4] = _mm_shuffle_ps(xmm6_17, xmm6_17, 0xaa)
float xmm5_10[0x4] = _mm_shuffle_ps(xmm6_17, xmm6_17, 0)
float xmm6_19[0x4] = __mulps_xmmps_memps(xmm6_18, xmm1_6)
float xmm0_18[0x4] = data_b56470
float xmm4_8[0x4] = _mm_add_ps(xmm4_7, xmm6_19)
float xmm2_8[0x4] = _mm_add_ps(_mm_add_ps(xmm2_6, xmm4_8), xmm1_10)
float xmm3_21[0x4] = _mm_add_ps(xmm3_20, _mm_mul_ps(xmm5_10, xmm1_6))
float xmm2_9[0x4] = _mm_add_ps(xmm2_8, xmm3_21)
float var_290[0x4] = xmm2_9
float xmm2_10[0x4] = __mulps_xmmps_memps(xmm2_9, data_b56460)
float var_290_1[0x4] = xmm2_10
float xmm2_11[0x4] = _mm_sub_ps(xmm2_10, 
    _mm_mul_ps(__addps_xmmps_memps(__addps_xmmps_memps(xmm1_1, xmm0_4), xmm0_7), xmm0_18))

if (arg3 u> 0)
    int32_t eax_3 = arg8 * 4
    void* ecx_9
    
    do
        int64_t xmm0_19 = *var_9c
        float xmm1_16[0x4] = var_9c[1]
        float xmm3_22 = data_b56450
        float xmm2_13 = data_b56440 f- xmm0_19
        int64_t xmm1_17 = _mm_unpacklo_ps(xmm1_16, xmm0_19)
        int64_t xmm2_14 = xmm2_13 f- xmm1_17
        float xmm1_18[0x4] = xmm1_17 | xmm2_14 << 0x40
        float xmm0_21[0x4] = xmm0_19 f* xmm1_17 * xmm3_22 f* xmm2_14
        float xmm7_15[0x4] = _mm_mul_ps(xmm2_11, _mm_shuffle_ps(xmm0_21, xmm0_21, 0))
        float xmm2_16[0x4] = _mm_shuffle_ps(xmm1_18, xmm1_18, 0xc9)
        float xmm3_25[0x4] = _mm_shuffle_ps(xmm1_18, xmm1_18, 0xd2)
        float xmm5_13[0x4] = _mm_mul_ps(xmm1_18, xmm1_18)
        float xmm1_19[0x4] = _mm_mul_ps(xmm1_18, xmm5_13)
        float xmm7_18[0x4] = _mm_add_ps(
            _mm_add_ps(
                _mm_add_ps(xmm7_15, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(xmm1_19, xmm1_19, 0), xmm1_1)), 
                __mulps_xmmps_memps(_mm_shuffle_ps(xmm1_19, xmm1_19, 0x55), xmm0_7)), 
            __mulps_xmmps_memps(_mm_shuffle_ps(xmm1_19, xmm1_19, 0xaa), xmm0_4))
        float xmm5_14[0x4] = __mulps_xmmps_memps(xmm5_13, data_b56420)
        float xmm1_21[0x4] = _mm_mul_ps(xmm5_14, xmm2_16)
        float xmm7_21[0x4] = _mm_add_ps(
            _mm_add_ps(
                _mm_add_ps(xmm7_18, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(xmm1_21, xmm1_21, 0), xmm3_9)), 
                __mulps_xmmps_memps(_mm_shuffle_ps(xmm1_21, xmm1_21, 0x55), xmm3_21)), 
            __mulps_xmmps_memps(_mm_shuffle_ps(xmm1_21, xmm1_21, 0xaa), xmm4_5))
        float xmm1_23[0x4] = _mm_mul_ps(xmm5_14, xmm3_25)
        float var_1d0[0x4] = _mm_add_ps(
            _mm_add_ps(
                _mm_add_ps(xmm7_21, 
                    __mulps_xmmps_memps(_mm_shuffle_ps(xmm1_23, xmm1_23, 0), xmm2_4)), 
                __mulps_xmmps_memps(_mm_shuffle_ps(xmm1_23, xmm1_23, 0x55), xmm4_8)), 
            __mulps_xmmps_memps(_mm_shuffle_ps(xmm1_23, xmm1_23, 0xaa), xmm1_10))
        int32_t eax_6 = 3
        
        if (arg8 u> 3)
            do
                var_1d0[eax_6] = *(arg5 + (eax_6 << 2)) * xmm1_16 + *(arg6 + (eax_6 << 2)) * xmm2_14
                    + *(arg7 + (eax_6 << 2)) * xmm0_19
                eax_6 += 1
            while (eax_6 u< arg8)
        
        int32_t esi_2
        int32_t edi_5
        edi_5, esi_2 = __builtin_memcpy(var_a0, &var_1d0, eax_3 u>> 2 << 2)
        __builtin_memcpy(edi_5, esi_2, eax_3 & 3)
        ecx_9 = &var_9c[2]
        var_a0 += arg8 << 2
        result = &arg2[arg3 * 2]
        var_9c = ecx_9
    while (ecx_9 u< result)

return result

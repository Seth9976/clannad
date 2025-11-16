// 函数: sub_48f0a0
// 地址: 0x48f0a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = arg6
void* eax = arg1
int128_t* edx = arg5

if (ecx s>= 4)
    float xmm0_1[0x4] = *edx
    float xmm1_1[0x4] = *(edx + 4)
    float xmm2_1[0x4] = *(edx + 8)
    float xmm3_1[0x4] = *(edx + 0xc)
    float xmm0_2[0x4] = _mm_shuffle_ps(xmm0_1, xmm0_1, 0)
    float xmm1_2[0x4] = _mm_shuffle_ps(xmm1_1, xmm1_1, 0)
    float xmm2_2[0x4] = _mm_shuffle_ps(xmm2_1, xmm2_1, 0)
    float xmm3_2[0x4] = _mm_shuffle_ps(xmm3_1, xmm3_1, 0)
    float xmm4_1[0x4] = edx[1].d
    float xmm5_1[0x4] = *(edx + 0x14)
    float xmm6_1[0x4] = *(edx + 0x18)
    float xmm7_1[0x4] = *(edx + 0x1c)
    float xmm4_2[0x4] = _mm_shuffle_ps(xmm4_1, xmm4_1, 0)
    float xmm5_2[0x4] = _mm_shuffle_ps(xmm5_1, xmm5_1, 0)
    float xmm6_2[0x4] = _mm_shuffle_ps(xmm6_1, xmm6_1, 0)
    float xmm7_2[0x4] = _mm_shuffle_ps(xmm7_1, xmm7_1, 0)
    float xmm0_3[0x4] = edx[2].d
    float xmm1_3[0x4] = *(edx + 0x24)
    float xmm2_3[0x4] = *(edx + 0x28)
    float xmm3_3[0x4] = *(edx + 0x2c)
    float xmm0_4[0x4] = _mm_shuffle_ps(xmm0_3, xmm0_3, 0)
    float xmm1_4[0x4] = _mm_shuffle_ps(xmm1_3, xmm1_3, 0)
    float xmm2_4[0x4] = _mm_shuffle_ps(xmm2_3, xmm2_3, 0)
    float xmm3_4[0x4] = _mm_shuffle_ps(xmm3_3, xmm3_3, 0)
    float xmm4_3[0x4] = edx[3].d
    float xmm5_3[0x4] = *(edx + 0x34)
    float xmm6_3[0x4] = *(edx + 0x38)
    float xmm7_3[0x4] = *(edx + 0x3c)
    float xmm4_4[0x4] = _mm_shuffle_ps(xmm4_3, xmm4_3, 0)
    float xmm5_4[0x4] = _mm_shuffle_ps(xmm5_3, xmm5_3, 0)
    float xmm6_4[0x4] = _mm_shuffle_ps(xmm6_3, xmm6_3, 0)
    float xmm7_4[0x4] = _mm_shuffle_ps(xmm7_3, xmm7_3, 0)
    int128_t* edx_1 = arg3
    int64_t* esi_2 = arg4
    uint64_t* edi_1 = arg2
    
    while (true)
        if (ecx s< 4)
            if (ecx == 0)
                break
            
            edx_1 += esi_2 * (ecx - 4)
            eax += edi_1 * (ecx - 4)
            ecx = 4
            esi_2 = arg4
            edi_1 = arg2
        else
            float xmm2_5[0x4] = *(edx_1 + 8)
            int64_t xmm3_5 = *(esi_2 + edx_1 + 8)
            void* edx_2 = edx_1 + (esi_2 << 1)
            float xmm0_6[0x4] = _mm_unpacklo_ps(*edx_1, *(esi_2 + edx_1))
            int64_t xmm2_6 = _mm_unpacklo_ps(xmm2_5, xmm3_5)
            float xmm6_5[0x4] = *(edx_2 + 8)
            int64_t xmm7_5 = *(esi_2 + edx_2 + 8)
            int64_t xmm4_6 = _mm_unpacklo_ps(*edx_2, *(esi_2 + edx_2))
            float xmm2_7[0x4] = xmm2_6 | _mm_unpacklo_ps(xmm6_5, xmm7_5) << 0x40
            float xmm0_7[0x4] = xmm0_6 | xmm4_6 << 0x40
            float xmm4_7[0x4] = xmm0_6 u>> 0x40
            edx_1 = edx_2 + (esi_2 << 1)
            float xmm0_8[0x4] = __mulps_xmmps_memps(xmm0_7, xmm0_2)
            float xmm1_8[0x4] = __mulps_xmmps_memps(xmm0_7, xmm1_2)
            float xmm3_7[0x4] = __mulps_xmmps_memps(xmm0_7, xmm2_2)
            float xmm5_7[0x4] = __mulps_xmmps_memps(xmm0_7, xmm3_2)
            float xmm4_8[0x4] = __mulps_xmmps_memps(xmm4_7, xmm4_2)
            float xmm6_8[0x4] = __mulps_xmmps_memps(xmm4_7, xmm5_2)
            float xmm0_9[0x4] = _mm_add_ps(xmm0_8, xmm4_8)
            float xmm1_9[0x4] = _mm_add_ps(xmm1_8, xmm6_8)
            float xmm6_10[0x4] = __mulps_xmmps_memps(xmm4_7, xmm6_2)
            float xmm7_7[0x4] = __mulps_xmmps_memps(xmm4_7, xmm7_2)
            float xmm3_8[0x4] = _mm_add_ps(xmm3_7, xmm6_10)
            float xmm5_8[0x4] = _mm_add_ps(xmm5_7, xmm7_7)
            float xmm2_8[0x4] = __mulps_xmmps_memps(xmm2_7, xmm0_4)
            float xmm4_10[0x4] = __mulps_xmmps_memps(xmm2_7, xmm1_4)
            float xmm6_12[0x4] = __mulps_xmmps_memps(xmm2_7, xmm2_4)
            float xmm7_9[0x4] = __mulps_xmmps_memps(xmm2_7, xmm3_4)
            float xmm0_10[0x4] = _mm_add_ps(xmm0_9, xmm2_8)
            float xmm1_10[0x4] = _mm_add_ps(xmm1_9, xmm4_10)
            float xmm3_9[0x4] = _mm_add_ps(xmm3_8, xmm6_12)
            float xmm5_9[0x4] = _mm_add_ps(xmm5_8, xmm7_9)
            float xmm2_9[0x4] = data_b58000
            float xmm0_11[0x4] = __addps_xmmps_memps(xmm0_10, xmm4_4)
            float xmm1_11[0x4] = __addps_xmmps_memps(xmm1_10, xmm5_4)
            float xmm3_10[0x4] = __addps_xmmps_memps(xmm3_9, xmm6_4)
            float xmm5_10[0x4] = __addps_xmmps_memps(xmm5_9, xmm7_4)
            float xmm4_11[0x4] = _mm_rcp_ps(xmm5_10)
            float xmm4_12[0x4] =
                _mm_mul_ps(xmm4_11, _mm_sub_ps(xmm2_9, _mm_mul_ps(xmm5_10, xmm4_11)))
            float xmm0_12[0x4] = _mm_mul_ps(xmm0_11, xmm4_12)
            float xmm1_12[0x4] = _mm_mul_ps(xmm1_11, xmm4_12)
            float xmm3_11[0x4] = _mm_mul_ps(xmm3_10, xmm4_12)
            float xmm0_13[0x4] = _mm_unpacklo_ps(xmm0_12, xmm1_12)
            float xmm2_12[0x4] = _mm_unpackhi_ps(xmm0_12, xmm1_12)
            *eax = xmm0_13
            *(eax + 8) = xmm3_11
            float xmm3_12[0x4] = _mm_shuffle_ps(xmm3_11, xmm3_11, 0xf9)
            *(edi_1 + eax) = (xmm0_13 u>> 0x40).q
            *(edi_1 + eax + 8) = xmm3_12
            float xmm3_13[0x4] = _mm_shuffle_ps(xmm3_12, xmm3_12, 0xf9)
            void* eax_2 = eax + (edi_1 << 1)
            *eax_2 = xmm2_12
            *(eax_2 + 8) = xmm3_13
            int32_t xmm3_14 = _mm_shuffle_ps(xmm3_13, xmm3_13, 0xf9)
            *(edi_1 + eax_2) = (xmm2_12 u>> 0x40).q
            *(edi_1 + eax_2 + 8) = xmm3_14
            eax = eax_2 + (edi_1 << 1)
            ecx -= 4
else
    void* esi = arg3
    int32_t temp1_1
    
    for (bool cond:0_1 = ecx == 0; not(cond:0_1); cond:0_1 = temp1_1 == 1)
        void* var_11c_1 = eax
        void* var_118_1 = esi
        int128_t* var_114_1 = edx
        void* eax_1
        eax_1, edx = sub_494f24()
        eax = eax_1 + arg2
        esi = arg3 + arg4
        arg3 = esi
        temp1_1 = arg6
        arg6 -= 1

return arg1

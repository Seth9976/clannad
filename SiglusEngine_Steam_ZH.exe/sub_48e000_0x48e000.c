// 函数: sub_48e000
// 地址: 0x48e000
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = arg6
void* eax = arg1
int64_t* edx = arg5

if (ecx s>= 4)
    float xmm0_1[0x4] = *edx
    float xmm1_1[0x4] = *(edx + 4)
    float xmm2_1[0x4] = edx[1].d
    float xmm3_1[0x4] = *(edx + 0xc)
    float xmm0_2[0x4] = _mm_shuffle_ps(xmm0_1, xmm0_1, 0)
    float xmm1_2[0x4] = _mm_shuffle_ps(xmm1_1, xmm1_1, 0)
    float xmm2_2[0x4] = _mm_shuffle_ps(xmm2_1, xmm2_1, 0)
    float xmm3_2[0x4] = _mm_shuffle_ps(xmm3_1, xmm3_1, 0)
    float xmm4_1[0x4] = edx[2].d
    float xmm5_1[0x4] = *(edx + 0x14)
    float xmm6_1[0x4] = edx[3].d
    float xmm7_1[0x4] = *(edx + 0x1c)
    float xmm4_2[0x4] = _mm_shuffle_ps(xmm4_1, xmm4_1, 0)
    float xmm5_2[0x4] = _mm_shuffle_ps(xmm5_1, xmm5_1, 0)
    float xmm6_2[0x4] = _mm_shuffle_ps(xmm6_1, xmm6_1, 0)
    float xmm7_2[0x4] = _mm_shuffle_ps(xmm7_1, xmm7_1, 0)
    float xmm0_3[0x4] = edx[6].d
    float xmm1_3[0x4] = *(edx + 0x34)
    float xmm2_3[0x4] = edx[7].d
    float xmm3_3[0x4] = *(edx + 0x3c)
    float xmm0_4[0x4] = _mm_shuffle_ps(xmm0_3, xmm0_3, 0)
    float xmm1_4[0x4] = _mm_shuffle_ps(xmm1_3, xmm1_3, 0)
    float xmm2_4[0x4] = _mm_shuffle_ps(xmm2_3, xmm2_3, 0)
    float xmm3_4[0x4] = _mm_shuffle_ps(xmm3_3, xmm3_3, 0)
    int128_t* edx_1 = arg3
    int64_t* esi_2 = arg4
    int128_t* edi_1 = arg2
    
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
            void* edx_2 = edx_1 + (esi_2 << 1)
            float xmm0_6[0x4] = _mm_unpacklo_ps(*edx_1, *(esi_2 + edx_1))
            float xmm0_7[0x4] = xmm0_6 | _mm_unpacklo_ps(*edx_2, *(esi_2 + edx_2)) << 0x40
            float xmm4_5[0x4] = xmm0_6 u>> 0x40
            edx_1 = edx_2 + (esi_2 << 1)
            float xmm0_8[0x4] = __mulps_xmmps_memps(xmm0_7, xmm0_2)
            float xmm1_8[0x4] = __mulps_xmmps_memps(xmm0_7, xmm1_2)
            float xmm3_6[0x4] = __mulps_xmmps_memps(xmm0_7, xmm2_2)
            float xmm5_5[0x4] = __mulps_xmmps_memps(xmm0_7, xmm3_2)
            float xmm4_6[0x4] = __mulps_xmmps_memps(xmm4_5, xmm4_2)
            float xmm2_6[0x4] = __mulps_xmmps_memps(xmm4_5, xmm5_2)
            float xmm6_4[0x4] = __mulps_xmmps_memps(xmm4_5, xmm6_2)
            float xmm7_4[0x4] = __mulps_xmmps_memps(xmm4_5, xmm7_2)
            float xmm0_9[0x4] = _mm_add_ps(xmm0_8, xmm4_6)
            float xmm1_9[0x4] = _mm_add_ps(xmm1_8, xmm2_6)
            float xmm3_7[0x4] = _mm_add_ps(xmm3_6, xmm6_4)
            float xmm5_6[0x4] = _mm_add_ps(xmm5_5, xmm7_4)
            float xmm0_10[0x4] = __addps_xmmps_memps(xmm0_9, xmm0_4)
            float xmm1_10[0x4] = __addps_xmmps_memps(xmm1_9, xmm1_4)
            float xmm3_8[0x4] = __addps_xmmps_memps(xmm3_7, xmm2_4)
            float xmm5_7[0x4] = __addps_xmmps_memps(xmm5_6, xmm3_4)
            float xmm0_11[0x4] = _mm_unpacklo_ps(xmm0_10, xmm1_10)
            int128_t xmm0_12 = xmm0_11 | _mm_unpacklo_ps(xmm3_8, xmm5_7) << 0x40
            int64_t xmm4_8 = _mm_unpackhi_ps(xmm3_8, xmm5_7)
            float xmm2_8[0x4] = _mm_unpackhi_ps(xmm0_10, xmm1_10)
            *eax = xmm0_12
            *(edi_1 + eax) = xmm0_11 u>> 0x40
            void* eax_2 = eax + (edi_1 << 1)
            *eax_2 = xmm2_8 | xmm4_8 << 0x40
            *(edi_1 + eax_2) = xmm2_8 u>> 0x40
            eax = eax_2 + (edi_1 << 1)
            ecx -= 4
else
    void* esi = arg3
    int32_t temp1_1
    
    for (bool cond:0_1 = ecx == 0; not(cond:0_1); cond:0_1 = temp1_1 == 1)
        uint32_t (* eax_1)[0x2]
        eax_1, edx = sub_4962bb(eax, esi, edx)
        eax = eax_1 + arg2
        esi = arg3 + arg4
        arg3 = esi
        temp1_1 = arg6
        arg6 -= 1

return arg1

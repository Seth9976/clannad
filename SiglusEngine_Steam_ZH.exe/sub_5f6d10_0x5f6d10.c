// 函数: sub_5f6d10
// 地址: 0x5f6d10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = data_bac4a0
int32_t esi = *(eax + 0xc)
int32_t ecx = *(eax + 8)
int32_t* ebx_1 = arg2 * 0x58 + *(arg1 + 0x155c)
void* eax_1 = *(arg1 + 0x20c)

if (eax_1 == 1)
    *ebx_1 = arg3
    ebx_1[3] = mods.dp.d(sx.q(sub_746b2c()), ecx)
    ebx_1[4] = mods.dp.d(sx.q(sub_746b2c()), esi)
    int32_t eax_10
    int32_t edx_9
    edx_9:eax_10 =
        muls.dp.d(0x51eb851f, (mods.dp.d(sx.q(sub_746b2c()), 0x14) + 0x5a) * *(arg1 + 0x224))
    int32_t edx_10 = edx_9 s>> 5
    ebx_1[7] = (edx_10 u>> 0x1f) + edx_10
    int32_t eax_16
    int32_t edx_15
    edx_15:eax_16 =
        muls.dp.d(0x51eb851f, (mods.dp.d(sx.q(sub_746b2c()), 0x14) + 0x5a) * *(arg1 + 0x228))
    int32_t edx_16 = edx_15 s>> 5
    ebx_1[8] = (edx_16 u>> 0x1f) + edx_16
    ebx_1[9] = sub_746b2c()
    int32_t eax_23
    int32_t edx_21
    edx_21:eax_23 =
        muls.dp.d(0x51eb851f, (mods.dp.d(sx.q(sub_746b2c()), 0x14) + 0x5a) * *(arg1 + 0x22c))
    int32_t edx_22 = edx_21 s>> 5
    ebx_1[0xa] = (edx_22 u>> 0x1f) + edx_22
    int32_t eax_29
    int32_t edx_27
    edx_27:eax_29 =
        muls.dp.d(0x51eb851f, (mods.dp.d(sx.q(sub_746b2c()), 0x14) + 0x5a) * *(arg1 + 0x230))
    int32_t edx_28 = edx_27 s>> 5
    ebx_1[0xb] = (edx_28 u>> 0x1f) + edx_28
    int32_t eax_35
    int32_t edx_33
    edx_33:eax_35 =
        muls.dp.d(0x51eb851f, (mods.dp.d(sx.q(sub_746b2c()), 0x14) + 0x5a) * *(arg1 + 0x234))
    int32_t edx_34 = edx_33 s>> 5
    ebx_1[0xc] = (edx_34 u>> 0x1f) + edx_34
    int32_t eax_41
    int32_t edx_39
    edx_39:eax_41 =
        muls.dp.d(0x51eb851f, (mods.dp.d(sx.q(sub_746b2c()), 0x14) + 0x5a) * *(arg1 + 0x238))
    int32_t edx_40 = edx_39 s>> 5
    ebx_1[0xd] = (edx_40 u>> 0x1f) + edx_40
    ebx_1[0xe] = sub_746b2c()
    ebx_1[0x12] = *(arg1 + 0x254)
    ebx_1[0x13] = *(arg1 + 0x258)
    int32_t eax_50
    int32_t edx_45
    edx_45:eax_50 =
        muls.dp.d(0x51eb851f, (mods.dp.d(sx.q(sub_746b2c()), 0x28) + 0x50) * *(arg1 + 0x25c))
    int32_t edx_46 = edx_45 s>> 5
    int32_t eax_53 = (edx_46 u>> 0x1f) + edx_46
    ebx_1[0x14] = eax_53
    
    if (arg3 == 0)
        eax_53 = mods.dp.d(sx.q(sub_746b2c()), 0xbb8)
    
    ebx_1[2] = eax_53
    ebx_1[1] = 0
    eax_53.b = *(arg1 + 0x260)
    ebx_1[0x15].b = eax_53.b
    *(ebx_1 + 0x55) = 0
    return eax_53

if (eax_1 == 2)
    int32_t ebx_2 = *(arg1 + 0x23c)
    int32_t eax_57
    int32_t edx_49
    edx_49:eax_57 = sx.q(ecx)
    
    if (ebx_2 s<= (eax_57 - edx_49) s>> 1)
        ebx_2 = ecx - ebx_2
    
    int32_t ecx_2 = *(arg1 + 0x240)
    int32_t eax_61
    int32_t edx_50
    edx_50:eax_61 = sx.q(esi)
    
    if (ecx_2 s<= (eax_61 - edx_50) s>> 1)
        ecx_2 = esi - ecx_2
    
    double xmm0_2 = _mm_cvtepi32_pd(zx.q(ebx_2))
    double xmm1_2 = _mm_cvtepi32_pd(zx.q(ecx_2))
    int32_t mxcsr
    int16_t x87control
    int32_t ebx_3 =
        int.d(__libm_sse2_sqrt_precise(mxcsr, x87control, xmm0_2 * xmm0_2 + xmm1_2 * xmm1_2))
    int32_t eax_66
    int32_t edx_54
    edx_54:eax_66 = muls.dp.d(0x51eb851f, mods.dp.d(sx.q(sub_746b2c()), ebx_3) * *(arg1 + 0x248))
    int32_t edx_55 = edx_54 s>> 5
    double xmm1_5 = _mm_cvtepi32_pd(zx.q(sub_746b2c()))
    ebx_1[5] = (edx_55 u>> 0x1f) + edx_55
    *ebx_1 = arg3
    ebx_1[6] = int.d(xmm1_5 / 32767.0 * 3.1415927410125732 * 2.0 / 3.1415927410125732 * 1800.0)
    int32_t eax_71
    int32_t edx_56
    edx_56:eax_71 = sx.q(sub_746b2c())
    int32_t eax_74
    int32_t edx_58
    edx_58:eax_74 = sx.q(*(arg1 + 0x224))
    ebx_1[7] = (mods.dp.d(edx_56:eax_71, 0x28) + 0x50) * ((eax_74 ^ edx_58) - edx_58) s/ 0x64
    int32_t eax_82
    int32_t edx_61
    edx_61:eax_82 = sx.q(sub_746b2c())
    int32_t eax_85
    int32_t edx_63
    edx_63:eax_85 = sx.q(*(arg1 + 0x228))
    ebx_1[8] = (mods.dp.d(edx_61:eax_82, 0x28) + 0x50) * ((eax_85 ^ edx_63) - edx_63) s/ 0x64
    int32_t eax_95
    int32_t edx_70
    edx_70:eax_95 =
        muls.dp.d(0x51eb851f, (mods.dp.d(sx.q(sub_746b2c()), 0x14) + 0x5a) * *(arg1 + 0x22c))
    int32_t edx_71 = edx_70 s>> 5
    ebx_1[0xa] = (edx_71 u>> 0x1f) + edx_71
    int32_t eax_102
    int32_t edx_76
    edx_76:eax_102 =
        muls.dp.d(0x51eb851f, (mods.dp.d(sx.q(sub_746b2c()), 0x14) + 0x5a) * *(arg1 + 0x230))
    int32_t edx_77 = edx_76 s>> 5
    ebx_1[0xb] = (edx_77 u>> 0x1f) + edx_77
    int32_t eax_109
    int32_t edx_82
    edx_82:eax_109 =
        muls.dp.d(0x51eb851f, (mods.dp.d(sx.q(sub_746b2c()), 0x14) + 0x5a) * *(arg1 + 0x234))
    int32_t edx_83 = edx_82 s>> 5
    ebx_1[0xc] = (edx_83 u>> 0x1f) + edx_83
    int32_t eax_116
    int32_t edx_88
    edx_88:eax_116 =
        muls.dp.d(0x51eb851f, (mods.dp.d(sx.q(sub_746b2c()), 0x14) + 0x5a) * *(arg1 + 0x238))
    int32_t edx_89 = edx_88 s>> 5
    ebx_1[0xd] = (edx_89 u>> 0x1f) + edx_89
    ebx_1[0xe] = sub_746b2c()
    int32_t eax_123
    int32_t edx_94
    edx_94:eax_123 =
        muls.dp.d(0x51eb851f, (mods.dp.d(sx.q(sub_746b2c()), 0x14) + 0x5a) * *(arg1 + 0x244))
    int32_t edx_95 = edx_94 s>> 5
    ebx_1[0xf] = (edx_95 u>> 0x1f) + edx_95
    ebx_1[0x10] = *(arg1 + 0x24c)
    ebx_1[0x11] = *(arg1 + 0x250)
    ebx_1[0x12] = *(arg1 + 0x254)
    ebx_1[0x13] = *(arg1 + 0x258)
    int32_t eax_132
    int32_t edx_96
    edx_96:eax_132 = sx.q(*(arg1 + 0x224))
    int32_t eax_133
    int32_t edx_97
    edx_97:eax_133 = muls.dp.d(0x10624dd3, ((eax_132 ^ edx_96) - edx_96) * ebx_3)
    int32_t edx_98 = edx_97 s>> 6
    int32_t edx_100 = edx_98 - 0x3e8 + (edx_98 u>> 0x1f)
    ebx_1[0x14] = edx_100
    
    if (arg3 == 0)
        edx_100 = mods.dp.d(sx.q(sub_746b2c()), ebx_1[0x14] + 0x7d0)
    
    ebx_1[2] = edx_100
    ebx_1[1] = 0
    
    if (edx_100 != 0)
        int32_t eax_140
        int32_t edx_102
        edx_102:eax_140 = sx.q(sub_746b2c())
        ebx_1[2]
        edx_100 = mods.dp.d(edx_102:eax_140, ebx_1[2])
    
    ebx_1[9] = edx_100
    eax_1.b = *(arg1 + 0x260)
    ebx_1[0x15].b = eax_1.b
    *(ebx_1 + 0x55) = 0

return eax_1

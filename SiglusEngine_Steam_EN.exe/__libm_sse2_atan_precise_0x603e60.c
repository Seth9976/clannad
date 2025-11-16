// 函数: __libm_sse2_atan_precise
// 地址: 0x603e60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

double var_8

if ((arg1 & 0x7f80) == 0x1f80)
    int16_t x87status_1
    int16_t temp0_1
    temp0_1, x87status_1 = __fnstcw_memmem16(arg2)
    var_8.w = temp0_1
    int32_t eax_1
    eax_1.w = var_8.w
    eax_1.w &= 0x7f
    
    if (eax_1.w == 0x7f)
        var_8 = arg3
        double xmm0[0x2] = _mm_unpacklo_pd(arg3, arg3)
        uint64_t xmm2_1[0x2] = __andpd_xmmxuq_memxuq(xmm0, data_624b10)
        xmm2_1 f- 16331239353195370.0
        
        if (not(is_unordered.q(xmm2_1, 16331239353195370.0)))
            if (not(xmm2_1 f>= 16331239353195370.0))
                if (not(xmm2_1 f>= 0.03125))
                    if (xmm2_1 f< 7.4505805969238281e-09)
                        return eax_1
                    
                    double xmm1_1[0x2] = _mm_mul_pd(xmm2_1, xmm2_1)
                    double xmm3_2[0x2] = _mm_mul_pd(xmm1_1, xmm1_1)
                    double xmm5_8[0x2] = __addpd_xmmpd_mempd(
                        _mm_mul_pd(
                            __addpd_xmmpd_mempd(
                                _mm_mul_pd(
                                    __addpd_xmmpd_mempd(_mm_mul_pd(data_624be0, xmm3_2), 
                                        data_624bd0), 
                                    xmm3_2), 
                                data_624bc0), 
                            xmm3_2), 
                        data_624bb0) f* xmm1_1
                    _mm_shuffle_pd(xmm5_8, xmm5_8, 1)
                    return eax_1
                
                if (not(xmm2_1 f>= 0.375))
                    double xmm1_3[0x2] = _mm_mul_pd(xmm2_1, xmm2_1)
                    double xmm3_6[0x2] = _mm_mul_pd(xmm1_3, xmm1_3)
                    double xmm5_24[0x2] = _mm_mul_pd(
                        __addpd_xmmpd_mempd(
                            _mm_mul_pd(
                                __addpd_xmmpd_mempd(
                                    _mm_mul_pd(
                                        __addpd_xmmpd_mempd(
                                            _mm_mul_pd(
                                                __addpd_xmmpd_mempd(
                                                    _mm_mul_pd(
                                                        __addpd_xmmpd_mempd(
                                                            _mm_mul_pd(
                                                                __addpd_xmmpd_mempd(
                                                                    _mm_mul_pd(data_624ba0, xmm3_6), 
                                                                    data_624b90), 
                                                                xmm3_6), 
                                                            data_624b80), 
                                                        xmm3_6), 
                                                    data_624b70), 
                                                xmm3_6), 
                                            data_624b60), 
                                        xmm3_6), 
                                    data_624b50), 
                                xmm3_6), 
                            data_624b40), 
                        xmm3_6)
                    double xmm5_26[0x2] = __addpd_xmmpd_mempd(xmm5_24, *"RUUUUU") f* xmm1_3
                    _mm_shuffle_pd(xmm5_26, xmm5_26, 1)
                    return eax_1
                
                uint64_t xmm6_1[0x2] = _mm_xor_pd(zx.o(xmm0), xmm2_1)
                int32_t eax_3
                double xmm2_4[0x2]
                
                if (xmm2_1 f>= 8.0)
                    eax_3 = 0x300
                    double xmm2_6[0x2] = -1.0 / xmm2_1
                    xmm2_4 = _mm_unpacklo_pd(xmm2_6, xmm2_6)
                else
                    eax_3 = _mm_sub_epi32(_mm_srli_epi64(xmm2_1 + 8.0, 0x2c), 0x40201) * 3
                    double xmm5_30 = *((eax_3 << 3) + &data_625e30)
                    double xmm2_3[0x2] = (xmm2_1 f- xmm5_30) / (xmm2_1 * xmm5_30 + 1.0)
                    xmm2_4 = _mm_unpacklo_pd(xmm2_3, xmm2_3)
                
                double xmm0_5 = *((eax_3 << 3) + &data_625e20)
                double xmm4 = *((eax_3 << 3) + &data_625e28)
                double xmm1_5[0x2] = _mm_mul_pd(xmm2_4, xmm2_4)
                double xmm3_17[0x2] = _mm_mul_pd(xmm1_5, xmm1_5)
                double xmm5_38[0x2] = __addpd_xmmpd_mempd(
                    _mm_mul_pd(
                        __addpd_xmmpd_mempd(
                            _mm_mul_pd(
                                __addpd_xmmpd_mempd(_mm_mul_pd(data_624be0, xmm3_17), data_624bd0), 
                                xmm3_17), 
                            data_624bc0), 
                        xmm3_17), 
                    data_624bb0) f* xmm1_5
                _mm_or_pd(
                    xmm0_5 - ((xmm5_38 f+ _mm_shuffle_pd(xmm5_38, xmm5_38, 1)) f* xmm2_4
                        - xmm4 f- xmm2_4), 
                    xmm6_1)
                return eax_3
            
            uint64_t xmm3_20[0x2] = 0x7ff0000000000000
            
            if (not(is_unordered.q(_mm_and_pd(zx.o(xmm2_1), xmm3_20), xmm3_20)))
                uint32_t eax_5 = arg1 u>> 0x1f
                (&data_624b20)[eax_5]
                return eax_5
        
        return sub_5f8379(&var_8, &var_8, &var_8, 0x3eb)

var_8 = arg3
int32_t eax_7
long double st0
st0, eax_7 = sub_6049bf()
var_8 = fconvert.d(st0)
return eax_7

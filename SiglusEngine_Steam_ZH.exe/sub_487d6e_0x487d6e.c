// 函数: sub_487d6e
// 地址: 0x487d6e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_20 = arg4
int32_t var_1c = arg3
int32_t var_18 = arg2
int32_t var_14 = 0
var_20.o = _mm_mul_ps(var_20.o, data_ac7d60)
float var_30[0x4]
sub_4dbc01(&var_20, &var_20, &var_30)
float xmm0_1[0x4] = var_20.o
float xmm1_6[0x4] = __shufps_xmmps_memps_immb(xmm0_1, var_30, 0x99)
float xmm0_2[0x4] = __shufps_xmmps_memps_immb(xmm0_1, var_30, 0)
float xmm2_1[0x4] = _mm_shuffle_ps(xmm1_6, xmm1_6, 0xf7)
float xmm3_1[0x4] = _mm_shuffle_ps(xmm1_6, xmm1_6, 0xa8)
float xmm0_3[0x4] = _mm_shuffle_ps(xmm0_2, xmm0_2, 0x8a)
float xmm1_8[0x4] = _mm_shuffle_ps(xmm0_3, xmm0_3, 0x8a)
float xmm0_5[0x4] = _mm_mul_ps(_mm_mul_ps(xmm0_3, xmm2_1), xmm3_1)
float xmm5_1[0x4] = _mm_shuffle_ps(xmm3_1, xmm3_1, 1)
*arg1 = _mm_add_ps(xmm0_5, 
    _mm_mul_ps(_mm_mul_ps(xmm1_8, _mm_shuffle_ps(xmm2_1, xmm2_1, 0x51)), xmm5_1) ^ data_ac7d50)
return arg1

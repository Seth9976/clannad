// 函数: sub_6ea070
// 地址: 0x6ea070
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx_1 = sx.d(*arg2) + sx.d(arg2[4])
int32_t ecx_1 = sx.d(arg2[5]) + sx.d(arg2[1])
int32_t eax_2
eax_2.b = edx_1 s< 0
int16_t eax_3
eax_3.b = ecx_1 s< 0
int16_t edx_4 = (((edx_1 - eax_2 + 1) s>> 1).w ^ neg.w(eax_3 + 1 + ecx_1.w) << 7) & 0xff
int16_t eax_4
eax_4.b = ecx_1 s< 0
ecx_1.w -= eax_4
ecx_1.w += 1
ecx_1.w *= 0x80
*arg1 = edx_4 ^ ecx_1.w
int32_t edx_6 = sx.d(arg2[6]) + sx.d(arg2[2])
int32_t ecx_3 = sx.d(arg2[3]) + sx.d(arg2[7])
int32_t eax_7
eax_7.b = edx_6 s< 0
int16_t eax_8
eax_8.b = ecx_3 s< 0
int16_t edx_9 = (((edx_6 - eax_7 + 1) s>> 1).w ^ neg.w(eax_8 + 1 + ecx_3.w) << 7) & 0xff
int16_t result
result.b = ecx_3 s< 0
ecx_3.w -= result
ecx_3.w += 1
ecx_3.w *= 0x80
arg1[1] = edx_9 ^ ecx_3.w
return result

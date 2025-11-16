// 函数: sub_6e9ff0
// 地址: 0x6e9ff0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi_3 = sx.d(arg2[2]) + sx.d(*arg2) + sx.d(arg2[6]) + sx.d(arg2[4])
int32_t edx_3 = sx.d(arg2[3]) + sx.d(arg2[5]) + sx.d(arg2[7]) + sx.d(arg2[1])
char* ecx
ecx.w = edx_3.w
int32_t eax_6
eax_6.b = esi_3 s< 0
int16_t eax_7
eax_7.b = edx_3 s< 0
ecx.w -= eax_7
ecx.w += 2
ecx.w <<= 6
int16_t eax_8
eax_8.b = edx_3 s< 0
edx_3.w -= eax_8
edx_3.w += 2
edx_3.w <<= 6
*arg1 = ((((esi_3 - eax_6 + 2) s>> 2).w ^ ecx.w) & 0xff) ^ edx_3.w
return arg1

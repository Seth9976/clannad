// 函数: sub_4994c0
// 地址: 0x4994c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax
int32_t edx
edx:eax = sx.q(data_7030dc)
__builtin_memset(&data_703600, 0, 0x12)
int32_t eax_3
int32_t edx_1
edx_1:eax_3 = sx.q(data_70300c)
int32_t ecx_1 = (eax - edx) s>> 1
int32_t result = (eax_3 - edx_1) s>> 1
data_7035d8 = 0
data_7035dc = 0
data_7035e0 = 0
__builtin_memset(&data_703618, 0, 0x12)
data_7035e4 = result
data_7035e8 = result
data_7035ec = result
data_7035f0 = ecx_1
data_7035f4 = ecx_1
data_7035f8 = ecx_1
return result

// 函数: sub_407cd0
// 地址: 0x407cd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1
eax_1:1.b = 0
int32_t eax_3 = eax_1 << 8 | ((arg1 u>> 0x10 | arg1 << 0x10) u>> 8 & 0xff00ff)
int32_t ecx_8 = (eax_3 & 0xff0f0f0f) << 4 | (eax_3 u>> 4 & 0xf0f0f0f)
int32_t edx_3 = (ecx_8 & 0xf3333333) << 2 | (ecx_8 u>> 2 & 0x33333333)
return (edx_3 u>> 1 & 0x55555555) | (edx_3 & 0xd5555555) << 1

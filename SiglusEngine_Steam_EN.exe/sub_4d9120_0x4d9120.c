// 函数: sub_4d9120
// 地址: 0x4d9120
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax
int32_t edx
edx:eax = sx.q(arg2)
int32_t eax_1 = eax * 2
int32_t edx_2 = adc.d(edx << 1 | eax u>> 0xffffffe1, 0, eax_1 u>= 0x80000000)

if (edx_2 u> 0 || (edx_2 u>= 0 && eax_1 - 0x80000000 u> 0xffffffff))
    return 0x80070216

*arg1 = eax_1
return 0

// 函数: __fload
// 地址: 0x6048ed
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx
ebx.w = arg2

if ((arg2 & 0x7ff0) != 0x7ff0)
    return fconvert.t(arg1)

ebx.w |= 0x7fff
int16_t var_6_1 = ebx.w
int32_t ebx_1 = arg1.d
int32_t var_a_1 = arg1:4.d << 0xb | ebx_1 u>> 0xffffffeb
return ebx_1.t

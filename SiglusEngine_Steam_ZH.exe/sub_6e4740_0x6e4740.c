// 函数: sub_6e4740
// 地址: 0x6e4740
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = *arg1
int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(zx.d(*(ecx + 0xd)))
int32_t eax_4
int32_t edx_1
edx_1:eax_4 = sx.q(zx.d(*(ecx + 0xc)))
int32_t eax_6
int32_t edx_2
edx_2:eax_6 = sx.q(zx.d(*(ecx + 0xb)))
int32_t eax_8
int32_t edx_3
edx_3:eax_8 = sx.q(zx.d(*(ecx + 0xa)))
int32_t eax_10
int32_t edx_4
edx_4:eax_10 = sx.q(zx.d(*(ecx + 9)))
int32_t eax_12
int32_t edx_5
edx_5:eax_12 = sx.q(zx.d(*(ecx + 8)))
int32_t eax_14
int32_t edx_6
edx_6:eax_14 = sx.q(zx.d(*(ecx + 7)))
int32_t eax_16
int32_t edx_7
edx_7:eax_16 = sx.q(zx.d(*(ecx + 6)))
return eax_16 | (
    (((((eax_2 << 8 | eax_4) << 8 | eax_6) << 8 | eax_8) << 8 | eax_10) << 8 | eax_12) << 8
    | eax_14) << 8

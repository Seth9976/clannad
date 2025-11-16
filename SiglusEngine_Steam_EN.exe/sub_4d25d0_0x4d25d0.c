// 函数: sub_4d25d0
// 地址: 0x4d25d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* var_8 = arg1
_memset(arg1, 0, 0x49)
*arg1 = 0x80
int32_t eax_1 = (arg2 + 1) & 0x3f
int32_t ecx = 0x41

if (eax_1 s> 0x38)
    ecx = 0x81

int32_t ecx_1 = ecx - eax_1
int32_t eax_2 = arg2 << 3
arg1[ecx_1 - 8] = eax_2.b
arg1[ecx_1 - 7] = eax_2:1.b
arg1[ecx_1 - 6] = eax_2:2.b
arg1[ecx_1 - 5] = eax_2:3.b
*(arg1 + 0x60) = arg2
uint32_t result = (ecx_1 + arg2) u>> 6
*(arg1 + 0x4c) = 0x67452301
*(arg1 + 0x50) = 0xefcdab89
*(arg1 + 0x54) = 0x98badcfe
*(arg1 + 0x58) = 0x10325476
*(arg1 + 0x5c) = result
return result

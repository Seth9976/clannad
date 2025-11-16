// 函数: sub_4b4a10
// 地址: 0x4b4a10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx_1 = *(arg1 + 0xc8)
int32_t eax = *(arg1 + 0x6c)
*(arg1 + 0x30) = 0
*(arg1 + 0xcd) |= 1
*(arg1 + 0x70) |= 8
*(arg1 + 0x108) = edx_1
int32_t eax_2 = (eax & 0xffffffde) | 0x16712c8a
int32_t edx = edx_1 & 0xffff
*(arg1 + 0x28) = 2
*(arg1 + 0x2c) = 0x18
*(arg1 + 0x38) = 8
*(arg1 + 0x48) = 1
*(arg1 + 0x64) = 0x40
*(arg1 + 0x6c) = eax_2

if (edx != 0x104)
    int32_t ebx_1
    ebx_1.b = edx == 0x101
    *(arg1 + 0x3c) = 4
    *(arg1 + 0x44) = 6
    *(arg1 + 0x4c) = 4
    *(arg1 + 0x6c) = (ebx_1 & 1) << 0x11 | (eax_2 & 0xfffd2fff) | 0x208c0014
    *(arg1 + 0x50) = 2
else
    *(arg1 + 0x50) = 0
    *(arg1 + 0x3c) = 6
    *(arg1 + 0x44) = 8
    *(arg1 + 0x4c) = 6
    *(arg1 + 0x6c) = (eax_2 & 0xff71ffdb) | 0xd010

return 0

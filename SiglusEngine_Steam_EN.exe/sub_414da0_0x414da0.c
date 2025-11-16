// 函数: sub_414da0
// 地址: 0x414da0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*arg1 = 0xffffffff
void* result = &arg1[0x12]
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
arg1[7] = 0xffffffff
data_131d2f0 = 0
arg1[9] = 0xffffffff
void* esi = result + 0x100
arg1[0xd] = 0xffffffff
arg1[0xe] = 0xffffffff
data_131d2fc = 1
data_131d2f8 = 0xff
void* result_1 = result
int32_t i_1 = 0x10
int32_t i

do
    *result = 0xffffffff
    *(esi - 0xfc) = 2
    __builtin_memset(esi - 0xf4, 0, 0x20)
    *(esi - 0x2c) = 0
    *(esi - 0x28) = 0xff
    __builtin_memset(esi - 0x24, 0, 0x18)
    *(esi - 0xc) = 1
    int32_t ebx_1 = *(esi + 0x6c)
    int32_t eax = sub_4d1ba0(result, 0x8c, esi - 8, 0)
    *(esi - 8) = 0
    *(esi - 4) = 0
    *esi = 0
    *(esi + 0x40) = 0xff
    *(esi + 0x44) = 0
    *(esi + 0x50) = 0x3e8
    *(esi + 0x54) = 0x3e8
    *(esi + 0x5c) = 0xffffffff
    *(esi + 0x60) = 0xffffffff
    *(esi + 0x64) = 0xffffffff
    *(esi + 0x68) = 0xffffffff
    *(esi + 0x6c) = ebx_1
    *(esi + 0x70) = 0xffffffff
    *(esi + 0x74) = 0xffffffff
    *(esi + 0x78) = 0xffffffff
    *(esi + 0x7c) = 0xffffffff
    *(esi + 0x80) = 1
    int32_t ebx_2 = *(esi + 0x184)
    sub_4d1ba0(eax, 0x8c, esi + 0x110, 0)
    esi += 0x3b4
    result = result_1 + 0x3b4
    *(esi - 0x2a4) = 0
    *(esi - 0x2a0) = 0
    i = i_1
    i_1 -= 1
    *(esi - 0x29c) = 0
    *(esi - 0x25c) = 0xff
    *(esi - 0x258) = 0
    *(esi - 0x24c) = 0x3e8
    *(esi - 0x248) = 0x3e8
    *(esi - 0x240) = 0xffffffff
    *(esi - 0x23c) = 0xffffffff
    *(esi - 0x238) = 0xffffffff
    *(esi - 0x234) = 0xffffffff
    *(esi - 0x230) = ebx_2
    *(esi - 0x22c) = 0xffffffff
    *(esi - 0x228) = 0xffffffff
    *(esi - 0x224) = 0xffffffff
    *(esi - 0x220) = 0xffffffff
    *(esi - 0x21c) = 1
    result_1 = result
while (i != 1)
return result

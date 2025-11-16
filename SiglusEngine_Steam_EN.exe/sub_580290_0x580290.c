// 函数: sub_580290
// 地址: 0x580290
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg1 + 0x18
int32_t i_1 = 5
int32_t result
int32_t i

do
    result = sub_4d6c40(esi - 4, esi)
    *(esi - 0x18) = 0xffffffff
    *(esi - 0x14) = 0xffffffff
    *(esi - 0x10) = 0xffffffff
    *(esi - 0xc) = 0
    *(esi - 8) = 0
    *(esi - 4) = 0
    *esi = 0
    esi += 0x2c
    i = i_1
    i_1 -= 1
while (i != 1)
return result

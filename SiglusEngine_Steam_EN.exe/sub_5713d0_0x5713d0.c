// 函数: sub_5713d0
// 地址: 0x5713d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
void* esi = &data_20f0448
int32_t i_1 = 0x100
int32_t result
int32_t i

do
    sub_4d6c40(esi - 8, esi - 4)
    result = sub_4d6c40(esi, esi + 4)
    *(esi - 8) = 0
    *(esi - 4) = 0
    *esi = 0
    *(esi + 4) = 0
    *(esi + 8) = 0
    *(esi + 0xc) = 0
    *(esi + 0x10) = 0xffffffff
    esi += 0x1c
    i = i_1
    i_1 -= 1
while (i != 1)
return result

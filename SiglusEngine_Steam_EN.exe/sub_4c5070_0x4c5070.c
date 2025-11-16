// 函数: sub_4c5070
// 地址: 0x4c5070
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* esi = &data_1bfffd0
int32_t i_1 = 0x20
int32_t i

do
    if (*esi != 0)
        sub_4d6c40(esi, esi + 4)
        *esi = 0
        *(esi + 4) = 0
        *(esi + 8) = 0
    
    esi += 0x210
    i = i_1
    i_1 -= 1
while (i != 1)

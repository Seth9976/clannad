// 函数: sub_492ee0
// 地址: 0x492ee0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
void* esi = &data_924950

do
    if (*(esi - 0x4c) != 0)
        if (*(esi - 0x48) == 0 && *esi == 0 && *(esi + 0x48) == 0 && *(esi + 0x90) == 0)
            *(esi - 0x4c) = 0
        else if (*(esi + 0xdc) == 0 && *(esi + 0x124) == 0 && *(esi + 0x16c) == 0
                && *(esi + 0x1b4) == 0)
            sub_493220(i)
    
    i += 1
    esi += 0x248
while (i s< 4)

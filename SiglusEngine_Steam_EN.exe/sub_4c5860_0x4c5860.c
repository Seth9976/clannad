// 函数: sub_4c5860
// 地址: 0x4c5860
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
data_20ae920 = 0
void* esi = &data_20a1ba0
int32_t i_1 = 0x336
HGLOBAL hMem
int32_t i

do
    int32_t j_1 = 2
    int32_t j
    
    do
        hMem = *esi
        
        if (hMem != 0)
            GlobalUnlock(hMem)
            hMem = GlobalFree(*esi)
            *esi = 0
            *(esi + 4) = 0
        
        esi += 0x20
        j = j_1
        j_1 -= 1
    while (j != 1)
    i = i_1
    i_1 -= 1
while (i != 1)
return hMem

// 函数: sub_492e50
// 地址: 0x492e50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = 0
void* i = &data_10859ec
void* esi = &data_924950

do
    if (ebx u<= 3 && sub_492bb0(ebx) != 0)
        if (*(esi - 0x48) != 0)
            sub_490910(esi - 0x48, i - 0x88)
        
        if (*esi != 0)
            sub_490910(esi, i - 0x44)
        
        if (*(esi + 0x48) != 0)
            sub_490910(esi + 0x48, i)
        
        if (*(esi + 0x90) != 0)
            sub_490910(esi + 0x90, i + 0x44)
    
    i += 0x220
    ebx += 1
    esi += 0x248
while (i s< 0x108626c)

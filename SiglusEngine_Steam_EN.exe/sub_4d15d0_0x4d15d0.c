// 函数: sub_4d15d0
// 地址: 0x4d15d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* eax = &data_1af17d0

if (data_1af17d0 != 0)
    do
        char ecx = *eax
        
        if (ecx u< 0x80)
        label_4d15fb:
            
            if (ecx == 0x2e)
                return eax - &data_1af17d0
            
            eax = &eax[1]
        else if (ecx u< 0xa0)
            if (ecx u>= 0xfe)
                goto label_4d15fb
            
            eax = &eax[2]
        else
            if (ecx u<= 0xdf || ecx u>= 0xfe)
                goto label_4d15fb
            
            eax = &eax[2]
    while (*eax != 0)

return 0xffffffff

// 函数: sub_515320
// 地址: 0x515320
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_1af4e84
char** eax_3

if (eax == 0)
    eax_3 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
    data_1b8a75c = 0
    data_1b8a770 = 0xffffffff
else
    if (eax == 1)
        char** eax_5 = sub_4ef190(eax - 1, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720)
        data_1b8a770 = 0xffffffff
        return eax_5
    
    eax_3 = eax - 2
    
    if (eax == 2)
        return sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", &data_1b8a720)

return eax_3

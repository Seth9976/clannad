// 函数: sub_4fab60
// 地址: 0x4fab60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_1af4e84
char** eax_3

if (eax == 0)
    eax_3, arg3 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$", &data_1b8a720)
    data_1b8a7e8 = 0
    data_1b8a7fc = 0
else if (eax == 1)
    eax_3, arg3 = sub_4ef190(eax - 1, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$$", &data_1b8a720)
    data_1b8a7fc = 0
else
    eax_3 = eax - 2
    
    if (eax == 2)
        eax_3, arg3 = sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$$$", &data_1b8a720)

int32_t var_8 = data_1b8a7d4
sub_491f40(eax_3, arg4, data_1b8a7e8, data_1b8a7fc, arg3, data_1b8a770, data_1b8a784, arg5, 
    data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, data_1b8a798, data_1b8a7ac, 
    data_1b8a7c0)
return data_1b8a7e8

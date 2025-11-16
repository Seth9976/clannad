// 函数: sub_4fac30
// 地址: 0x4fac30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t eax = data_1af4e84
char** eax_3

if (eax == 0)
    eax_3, arg3 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", &data_1b8a720)
    data_1b8a7ac = 0
    data_1b8a7c0 = 0
else if (eax == 1)
    eax_3, arg3 = sub_4ef190(eax - 1, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", &data_1b8a720)
    data_1b8a7c0 = 0
else
    eax_3 = eax - 2
    
    if (eax == 2)
        eax_3, arg3 = sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$", &data_1b8a720)

int32_t var_c = data_1b8a798
sub_492200(eax_3, arg4, data_1b8a7ac, data_1b8a7c0, arg3, data_1b8a734, data_1b8a748, data_1b8a720, 
    data_1b8a75c, data_1b8a770, data_1b8a784)
return data_1b8a7ac

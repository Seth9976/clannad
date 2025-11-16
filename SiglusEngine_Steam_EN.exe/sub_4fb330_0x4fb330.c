// 函数: sub_4fb330
// 地址: 0x4fb330
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_1af4e84

if (eax == 0)
    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720)
    int32_t eax_4
    int32_t edx_2
    edx_2:eax_4 = sx.q(data_70300c)
    data_1b8a770 = (eax_4 - edx_2) s>> 1
    int32_t eax_8
    int32_t edx_3
    edx_3:eax_8 = sx.q(data_7030dc)
    data_1b8a784 = (eax_8 - edx_3) s>> 1
else if (eax == 1)
    sub_4ef190(eax - 1, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", &data_1b8a720)

data_1b8a748
return sub_493d40(data_1b8a75c, data_1b8a720, data_1b8a734, data_1b8a770, data_1b8a784)

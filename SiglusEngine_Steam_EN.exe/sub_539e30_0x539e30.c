// 函数: sub_539e30
// 地址: 0x539e30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t eax_1 = data_1bfdd30 - 0x640

if (eax_1 u> 0x14)
    data_1b8b06c = 1
    return eax_1

eax_1 = zx.d(lookup_table_539fac[eax_1])

switch (eax_1)
    case 0
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"SMDB", &data_1b8a720)
        sub_41a1f0(&data_8fcab4, &data_f89944)
        return sub_41a240(data_1b8a728)
    case 1
        sub_41a1f0(&data_8fcab4, &data_f89944)
        return sub_45ee40(data_7037a4, 1)
    case 2
        data_8fcad8 = 1
        return eax_1
    case 3
        int32_t ecx_4 = data_7037a4
        data_8fcad8 = 0
        return sub_45ee40(ecx_4, 1)
    case 4
        int32_t eax_5 = data_1af4e84
        data_1af1798 = 1
        
        if (eax_5 == 0)
            sub_4ef190(eax_5, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            void var_8
            return sub_41a380(&var_8, data_1b8a734, data_1b8a720, &data_715e98, &var_8)
        
        if (eax_5 != 1)
            return eax_5 - 1
        
        int32_t eax_7 = data_f89958
        data_715e98 = eax_7
        return eax_7
    case 5
        data_1af1798 = 1
        sub_445260()
        data_8fcad8 = 1
        data_f8995c = 0xffffff9d
        data_71929c = 0x10
        data_7192a0 = 0
        data_7192e0 = 0
        return eax_1
    case 6
        data_1b8b06c = 1
        return eax_1

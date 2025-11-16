// 函数: sub_520d30
// 地址: 0x520d30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t arg_8
int32_t eax = arg_8
int32_t eax_4
int32_t* eax_7

if (eax == 0x44c)
    eax_4 = data_1b8b070
    
    if (eax_4 != 0x50 && eax_4 != 0x51 && eax_4 != 0x52 && eax_4 != 0x53
            && (eax_4 == 0x54 || eax_4 == 0x55))
        int32_t eax_11 = data_1af4e84
        
        if (eax_11 == 0)
            sub_4ef190(eax_11, arg2 + 0x20, *(arg2 + 0x20), "$$%%", &data_1b8a720)
            eax_7 = sub_47fe50(&arg_8, arg4, data_1b8a720, data_1b8a734, 0xffffffff, &arg_8, &var_8)
        else
            eax_7 = eax_11 - 1
            
            if (eax_11 == 1)
                sub_4ef190(eax_7, arg2 + 0x20, *(arg2 + 0x20), "$$%%$", &data_1b8a720)
                eax_7 = sub_47fe50(&arg_8, arg4, data_1b8a720, data_1b8a734, data_1b8a770, &arg_8, 
                    &var_8)
        
        return sub_4e8000(sub_4e8000(eax_7, data_1b8a758, data_1b8a754, arg_8, &data_704898), 
            data_1b8a76c, data_1b8a768, var_8, &data_704898)
else if (eax == 0x44d)
    eax_4 = data_1b8b070
    
    if (eax_4 != 0x50 && eax_4 != 0x51 && eax_4 != 0x52 && eax_4 != 0x53
            && (eax_4 == 0x54 || eax_4 == 0x55))
        sub_4ef190(eax_4, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
        sub_480110(&arg_8, arg4, data_1b8a720, data_1b8a734, &arg_8)
        int32_t eax_10 = arg_8
        data_715e98 = eax_10
        return eax_10
else
    if (eax != 0x44e)
        data_1b8b06c = 1
        return eax - 0x44e
    
    eax_4 = data_1b8b070
    
    if (eax_4 != 0x50 && eax_4 != 0x51 && eax_4 != 0x52 && eax_4 != 0x53
            && (eax_4 == 0x54 || eax_4 == 0x55))
        int32_t eax_5 = data_1af4e84
        
        if (eax_5 == 0)
            sub_4ef190(eax_5, arg2 + 0x20, *(arg2 + 0x20), "$$%%", &data_1b8a720)
            eax_7 = sub_47ff20(&arg_8, arg4, data_1b8a720, data_1b8a734, 0xffffffff, &arg_8, &var_8)
        else
            eax_7 = eax_5 - 1
            
            if (eax_5 == 1)
                sub_4ef190(eax_7, arg2 + 0x20, *(arg2 + 0x20), "$$%%$", &data_1b8a720)
                eax_7 = sub_47ff20(&arg_8, arg4, data_1b8a720, data_1b8a734, data_1b8a770, &arg_8, 
                    &var_8)
        
        return sub_4e8000(sub_4e8000(eax_7, data_1b8a758, data_1b8a754, arg_8, &data_704898), 
            data_1b8a76c, data_1b8a768, var_8, &data_704898)
return eax_4

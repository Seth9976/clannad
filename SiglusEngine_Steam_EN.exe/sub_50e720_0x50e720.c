// 函数: sub_50e720
// 地址: 0x50e720
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
        int32_t eax_14 = data_1af4e84
        
        if (eax_14 == 0)
            sub_4ef190(eax_14, arg2 + 0x20, *(arg2 + 0x20), "$%%", &data_1b8a720)
            eax_7 = sub_46d3a0(&arg_8, arg4, data_1b8a720, 0xffffffff, &arg_8, &var_8)
        else
            eax_7 = eax_14 - 1
            
            if (eax_14 == 1)
                sub_4ef190(eax_7, arg2 + 0x20, *(arg2 + 0x20), "$%%$", &data_1b8a720)
                eax_7 = sub_46d3a0(&arg_8, arg4, data_1b8a720, data_1b8a75c, &arg_8, &var_8)
        
        return sub_4e8000(sub_4e8000(eax_7, data_1b8a744, data_1b8a740, arg_8, &data_704898), 
            data_1b8a758, data_1b8a754, var_8, &data_704898)
else if (eax == 0x44d)
    eax_4 = data_1b8b070
    
    if (eax_4 != 0x50 && eax_4 != 0x51 && eax_4 != 0x52 && eax_4 != 0x53
            && (eax_4 == 0x54 || eax_4 == 0x55))
        sub_4ef190(eax_4, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t ecx_8 = data_1b8a720
        int32_t eax_10 = 0
        
        if (ecx_8 s>= 0 && ecx_8 s< data_7031bc)
            eax_10 = *((arg4 + (ecx_8 << 1)) * 0x650 + &data_72d6bc)
        
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
            sub_4ef190(eax_5, arg2 + 0x20, *(arg2 + 0x20), "$%%", &data_1b8a720)
            eax_7 = sub_46d4a0(&arg_8, arg4, data_1b8a720, 0xffffffff, &arg_8, &var_8)
        else
            eax_7 = eax_5 - 1
            
            if (eax_5 == 1)
                sub_4ef190(eax_7, arg2 + 0x20, *(arg2 + 0x20), "$%%$", &data_1b8a720)
                eax_7 = sub_46d4a0(&arg_8, arg4, data_1b8a720, data_1b8a75c, &arg_8, &var_8)
        
        return sub_4e8000(sub_4e8000(eax_7, data_1b8a744, data_1b8a740, arg_8, &data_704898), 
            data_1b8a758, data_1b8a754, var_8, &data_704898)
return eax_4

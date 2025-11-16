// 函数: sub_4fdfa0
// 地址: 0x4fdfa0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = data_1bfdd30 - 0xbb8

if (result u> 8)
    data_1b8b06c = 1
    return result

char** eax_3
char** eax_7
char** eax_11
char** eax_21

switch (result)
    case 0
        int32_t eax_1 = data_1af4e84
        
        if (eax_1 == 0)
            eax_3 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
            data_1b8a75c = 0
        else
            eax_3 = eax_1 - 1
            
            if (eax_1 == 1)
                eax_3 = sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720)
        
        return sub_42cec0(eax_3, data_1b8a720, 0, data_1b8a734, data_1b8a748, 1, 1, data_1b8a75c, 1)
    case 1
        int32_t eax_5 = data_1af4e84
        
        if (eax_5 == 0)
            eax_7 = sub_4ef190(eax_5, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            data_1b8a748 = 0
        else
            eax_7 = eax_5 - 1
            
            if (eax_5 == 1)
                eax_7 = sub_4ef190(eax_7, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
        
        return sub_42cec0(eax_7, data_1b8a720, 0, 0, data_1b8a734, 1, 0, data_1b8a748, 1)
    case 2
        int32_t eax_9 = data_1af4e84
        
        if (eax_9 == 0)
            eax_11 = sub_4ef190(eax_9, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            data_1b8a748 = 0
        else
            eax_11 = eax_9 - 1
            
            if (eax_9 == 1)
                eax_11 = sub_4ef190(eax_11, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
        
        return sub_42cec0(eax_11, 0, 0, data_1b8a720, data_1b8a734, 0, 1, data_1b8a748, 1)
    case 3
        int32_t eax_13 = data_1af4e84
        int32_t var_8
        
        if (eax_13 == 0)
            eax_3 = sub_4ef190(eax_13, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
            data_1b8a75c = 0
            var_8 = 0
        else
            eax_3 = eax_13 - 1
            
            if (eax_13 != 1)
                var_8 = 0
            else
                eax_3 = sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720)
                var_8 = 0
        
        return sub_42cec0(eax_3, data_1b8a720, 0, data_1b8a734, data_1b8a748, 1, 1, data_1b8a75c, 
            var_8)
    case 4
        int32_t eax_15 = data_1af4e84
        int32_t var_8_1
        
        if (eax_15 == 0)
            eax_7 = sub_4ef190(eax_15, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            data_1b8a748 = 0
            var_8_1 = 0
        else
            eax_7 = eax_15 - 1
            
            if (eax_15 != 1)
                var_8_1 = 0
            else
                eax_7 = sub_4ef190(eax_7, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                var_8_1 = 0
        
        return sub_42cec0(eax_7, data_1b8a720, 0, 0, data_1b8a734, 1, 0, data_1b8a748, var_8_1)
    case 5
        int32_t eax_17 = data_1af4e84
        int32_t var_8_2
        
        if (eax_17 == 0)
            eax_11 = sub_4ef190(eax_17, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            data_1b8a748 = 0
            var_8_2 = 0
        else
            eax_11 = eax_17 - 1
            
            if (eax_17 != 1)
                var_8_2 = 0
            else
                eax_11 = sub_4ef190(eax_11, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                var_8_2 = 0
        
        return sub_42cec0(eax_11, 0, 0, data_1b8a720, data_1b8a734, 0, 1, data_1b8a748, var_8_2)
    case 6
        int32_t eax_19 = data_1af4e84
        
        if (eax_19 == 0)
            eax_21 = sub_4ef190(eax_19, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
            data_1b8a75c = 0
        else
            eax_21 = eax_19 - 1
            
            if (eax_19 == 1)
                eax_21 = sub_4ef190(eax_21, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720)
        
        int32_t var_10 = 1
        return sub_42cfa0(eax_21, data_1b8a720, 1, data_1b8a734, data_1b8a748, 1, 1, data_1b8a75c)
    case 7
        int32_t eax_23 = data_1af4e84
        
        if (eax_23 == 0)
            eax_21 = sub_4ef190(eax_23, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            data_1b8a748 = 0
        else
            eax_21 = eax_23 - 1
            
            if (eax_23 == 1)
                eax_21 = sub_4ef190(eax_21, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
        
        int32_t var_10_1 = 1
        return sub_42cfa0(eax_21, data_1b8a720, 1, 0, data_1b8a734, 1, 0, data_1b8a748)
    case 8
        int32_t eax_25 = data_1af4e84
        char** eax_27
        
        if (eax_25 == 0)
            eax_27 = sub_4ef190(eax_25, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            data_1b8a748 = 0
        else
            eax_27 = eax_25 - 1
            
            if (eax_25 == 1)
                eax_27 = sub_4ef190(eax_27, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
        
        return sub_42cfa0(eax_27, 0, 1, data_1b8a720, data_1b8a734, 0, 1, data_1b8a748)

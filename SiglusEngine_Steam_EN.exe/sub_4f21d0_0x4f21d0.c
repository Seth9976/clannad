// 函数: sub_4f21d0
// 地址: 0x4f21d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_304
int32_t eax
sub_4d1ba0(eax, 0x2d4, &var_304, 0)
char** result = data_1bfdd30
int32_t var_10 = 0
int32_t ecx_1 = 1
int32_t var_14 = 0
int32_t* var_e8 = nullptr
int32_t var_94 = 0

if (result s> 0xa9)
    result -= 0x488
    
    if (result u> 9)
        data_1b8b06c = 1
    else
        switch (result)
            case nullptr
                goto label_4f22e0
            case 1
            label_4f2241:
                int32_t var_94_1 = 1
            label_4f22e0:
                
                if (data_1b8b06c == 0)
                    if (ecx_1 != 0)
                        int32_t eax_1 = data_1af4e84
                        
                        if (eax_1 == 0)
                            result = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), 
                                "$$$$$$$$$$$$$$$$$$", &data_1b8a720)
                        else
                            result = eax_1 - 1
                            
                            if (eax_1 == 1)
                                result = sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), 
                                    "$$$$$$$$$$$$$$$$$$%%%%", &data_1b8a720)
                                var_10 = 1
                    
                    int32_t var_210
                    int32_t var_1e4
                    
                    if (var_210 u<= 0xf && var_1e4 u<= 0xf)
                        bool cond:1_1 = data_1b8a720 != 0xffffffff
                        void* eax_3 = data_1b8a720
                        void* var_18_1 = eax_3
                        void* var_20c = eax_3
                        void* eax_4 = data_1b8a770
                        int32_t esi_1 = data_1b8a75c
                        int32_t ecx_5 = data_1b8a734
                        void* edx_3 = data_1b8a748
                        int32_t edi_1 = data_1b8a7ac
                        int32_t ebx_1 = data_1b8a7c0
                        int32_t eax_5 = data_1b8a784
                        int32_t eax_6 = data_1b8a798
                        int32_t* var_1d8 = data_1b8a7d4
                        int32_t eax_8 = data_1b8a7e8
                        int32_t var_8_1 = eax_8
                        int32_t var_1d4 = eax_8
                        int32_t eax_9 = data_1b8a7fc
                        int32_t eax_10 = data_1b8a810
                        int32_t eax_11 = data_1b8a824
                        int32_t eax_12 = data_1b8a838
                        int32_t eax_13 = data_1b8a84c
                        char eax_14 = (data_1b8a860).b
                        int32_t* eax_15 = data_1b8a874
                        int32_t var_208 = ecx_5
                        void* var_204 = edx_3
                        int32_t var_c_1 = esi_1
                        int32_t var_200 = esi_1
                        int32_t var_1e0 = edi_1
                        int32_t var_1dc = ebx_1
                        int32_t* eax_18
                        
                        if (cond:1_1 || ecx_5 != 0xffffffff || edx_3 != ecx_5 || esi_1 != ecx_5)
                            sub_4efb00(&var_204, &var_208, &var_20c, &var_204, &var_200)
                            ebx_1 = var_1dc
                            edi_1 = var_1e0
                            edx_3 = var_204
                            ecx_5 = var_208
                            var_c_1 = var_200
                            var_8_1 = var_1d4
                            eax_18 = var_1d8
                            var_18_1 = var_20c
                        else
                            eax_18 = data_1b8a7d4
                        
                        if (edi_1 != 0xffffffff || ebx_1 != edi_1 || eax_18 != edi_1
                                || var_8_1 != edi_1)
                            sub_4efb00(&var_1d8, &var_1dc, &var_1e0, &var_1d8, &var_1d4)
                            ebx_1 = var_1dc
                            edi_1 = var_1e0
                            edx_3 = var_204
                            ecx_5 = var_208
                            var_c_1 = var_200
                            var_8_1 = var_1d4
                            eax_18 = var_1d8
                            var_18_1 = var_20c
                        
                        int32_t var_318_3 = var_14
                        int32_t var_28
                        int32_t var_24
                        int32_t* var_20
                        int32_t var_1c
                        result = sub_4142f0(eax_18, var_18_1, eax_6, ecx_5, edx_3, var_c_1, eax_4, 
                            eax_5, ecx_5, eax_11, eax_9, eax_10, edi_1, ebx_1, eax_18, var_8_1, 
                            eax_12, eax_13, eax_14, eax_15, var_e8, &var_28, &var_1c, &var_20, 
                            &var_24)
                        
                        if (var_14 == 0)
                            var_304 = data_1bfdd30
                            result = sub_42a6d0(&var_304)
                        
                        if (var_10 == 1)
                            return sub_4e8000(
                                sub_4e8000(
                                    sub_4e8000(
                                        sub_4e8000(result, data_1b8a898, data_1b8a894, var_28, 
                                            &data_704898), 
                                        data_1b8a8ac, data_1b8a8a8, var_1c, &data_704898), 
                                    data_1b8a8c0, data_1b8a8bc, var_20, &data_704898), 
                                data_1b8a8d4, data_1b8a8d0, var_24, &data_704898)
            case 2
            label_4f2290:
                var_e8 = 1
                goto label_4f22e0
            case 3
                var_e8 = 1
                int32_t var_94_4 = 1
                goto label_4f22e0
            case 4
            label_4f225d:
                var_e8 = 2
                goto label_4f22e0
            case 5
                var_e8 = 2
                int32_t var_94_5 = 1
                goto label_4f22e0
            case 6, 7, 8
                data_1b8b06c = 1
            case 9
                goto label_4f22c8
else
    if (result == 0xa9)
    label_4f22c8:
        result =
            sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$$$$$$$$$%%%%", &data_1b8a720)
        var_14 = 1
        var_10 = 1
        ecx_1 = 0
        goto label_4f22e0
    
    result -= 0xa0
    
    if (result u> 5)
        data_1b8b06c = 1
    else
        switch (result)
            case nullptr
                goto label_4f22e0
            case 1
                goto label_4f2241
            case 2
                goto label_4f2290
            case 3
                var_e8 = 1
                int32_t var_94_2 = 1
                goto label_4f22e0
            case 4
                goto label_4f225d
            case 5
                var_e8 = 2
                int32_t var_94_3 = 1
                goto label_4f22e0

return result

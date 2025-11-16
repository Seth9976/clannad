// 函数: sub_4f1310
// 地址: 0x4f1310
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_2dc
int32_t eax
sub_4d1ba0(eax, 0x2d4, &var_2dc, 0)
uint32_t result_8 = data_1bfdd30
uint32_t result = result_8
int32_t var_7c = 0xff
int32_t result_4 = 0
char var_a4 = 0
uint32_t result_5 = 0
uint32_t result_6 = 0
uint32_t result_7 = 0
uint32_t result_3 = 0xffffffff
char var_b0 = 0
char var_ac = 0
int32_t var_b4 = 8
int32_t var_a8 = 0
char var_b8
int32_t var_6c_1
int32_t var_6c_2
int32_t var_6c_3
int32_t var_6c_4
int32_t var_6c_5

if (result s> 0x514)
    result -= 0x515
    
    if (result u<= 0x2a)
        result = zx.d(lookup_table_4f20c4[result])
        
        switch (result)
            case 0
                var_b8 = 0
                var_6c_2 = 1
            case 1
                var_b8 = 0
                var_6c_5 = 2
            case 2
                var_b8 = 0
                var_6c_1 = 0
            case 3
                var_b8 = 1
                var_6c_3 = 0
            case 4
                var_b8 = 1
                var_6c_4 = 1
            case 5
                var_b8 = 1
                var_6c_5 = 2
else if (result == 0x514)
    var_b8 = 0
    var_6c_1 = 0
else
    result -= 0x12c
    
    if (result u<= 0x2b)
        result = zx.d(lookup_table_4f207c[result])
        
        switch (result)
            case 0
                var_b8 = 0
                var_6c_1 = 0
            case 1
                var_b8 = 0
                var_6c_2 = 1
            case 2
                var_b8 = 0
                var_6c_5 = 2
            case 3
                var_b8 = 1
                var_6c_3 = 0
            case 4
                var_b8 = 1
                var_6c_4 = 1
            case 5
                var_b8 = 1
                var_6c_5 = 2
uint32_t result_1
int32_t var_1b8
int32_t var_1b4
int32_t var_1b0
int32_t result_2
uint32_t result_12

if (result_8 s> 0x514)
    if (result_8 - 0x515 u> 0x2a)
        data_1b8b06c = 1
    else
        result = zx.d(*(result_8 + 0x4f1c5b))
        
        switch (result)
            case 0
            label_4f1658:
                result = data_1af4e84
                
                if (result u> 3)
                    goto label_4f1fb8
                
                switch (result)
                    case 0
                        sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                        result_12 = data_1b8a720
                        int32_t eax_26
                        
                        if (result_12 u> 0x20 || (&data_976b50)[result_12 * 8] == 0)
                            var_1b0 = data_70300c - 1
                            eax_26 = data_7030dc
                        else
                            var_1b0 = (&data_976b58)[result_12 * 8] - 1
                            eax_26 = (&data_976b5c)[result_12 * 8]
                        
                        result = eax_26 - 1
                        var_a4 = -1
                        result_2 = result
                        goto label_4f1f9e
                    case 1
                        sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        result_12 = data_1b8a720
                        int32_t eax_31
                        
                        if (result_12 u> 0x20 || (&data_976b50)[result_12 * 8] == 0)
                            var_1b0 = data_70300c - 1
                            eax_31 = data_7030dc
                        else
                            var_1b0 = (&data_976b58)[result_12 * 8] - 1
                            eax_31 = (&data_976b5c)[result_12 * 8]
                        
                        result_2 = eax_31 - 1
                        result = data_1b8a734
                        var_a4 = result.b
                        goto label_4f1f9e
                    case 2
                        sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", &data_1b8a720)
                        var_1b8 = data_1b8a720
                        var_1b4 = data_1b8a734
                        var_1b0 = data_1b8a748
                        result_2 = data_1b8a75c
                        result_1 = data_1b8a770
                        var_a4 = -1
                    label_4f1bdd:
                        result = sub_4efb00(&var_1b0, &var_1b4, &var_1b8, &var_1b0, &result_2)
                        goto label_4f1fb8
                    case 3
                        sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", &data_1b8a720)
                        var_1b8 = data_1b8a720
                        var_1b4 = data_1b8a734
                        var_1b0 = data_1b8a748
                        result_2 = data_1b8a75c
                        result_1 = data_1b8a770
                        var_a4 = (data_1b8a784).b
                        result = sub_4efb00(&var_1b0, &var_1b4, &var_1b8, &var_1b0, &result_2)
                    label_4f1fb8:
                        
                        if (data_1b8b06c == 0)
                            result = result_1
                            
                            if (result u<= 0xf)
                                sub_413940(result, var_1b4, var_1b8, var_1b0, result_2, result, 
                                    result_5, result_6, result_7, result_3, var_b8, var_b0, var_ac, 
                                    var_a8, result_4, var_a4, var_b4)
                                var_2dc = data_1bfdd30
                                return sub_42a6d0(&var_2dc)
            case 1
            label_4f1821:
                int32_t eax_47 = data_1af4e84
                
                if (eax_47 != 0)
                    result = eax_47 - 1
                    
                    if (eax_47 != 1)
                        goto label_4f1fb8
                    
                    sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", &data_1b8a720)
                    var_1b8 = data_1b8a720
                    var_1b4 = data_1b8a734
                    var_1b0 = data_1b8a748
                    result_2 = data_1b8a75c
                    result_1 = data_1b8a770
                    result_5 = data_1b8a784
                    result_6 = data_1b8a798
                    result_7 = data_1b8a7ac
                    goto label_4f1bdd
                
                sub_4ef190(eax_47, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720)
                result_12 = data_1b8a720
                int32_t eax_59
                
                if (result_12 u> 0x20 || (&data_976b50)[result_12 * 8] == 0)
                    var_1b0 = data_70300c - 1
                    eax_59 = data_7030dc
                else
                    var_1b0 = (&data_976b58)[result_12 * 8] - 1
                    eax_59 = (&data_976b5c)[result_12 * 8]
                
                result_2 = eax_59 - 1
                result_5 = data_1b8a734
                result_6 = data_1b8a748
                result = data_1b8a75c
                result_7 = result
                goto label_4f1f9e
            case 2
            label_4f1922:
                int32_t eax_65 = data_1af4e84
                
                if (eax_65 != 0)
                    result = eax_65 - 1
                    
                    if (eax_65 != 1)
                        goto label_4f1fb8
                    
                    sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", &data_1b8a720)
                    var_1b8 = data_1b8a720
                    var_1b4 = data_1b8a734
                    var_1b0 = data_1b8a748
                    result_2 = data_1b8a75c
                    result_1 = data_1b8a770
                    uint32_t result_9 = data_1b8a784
                    result_5 = result_9
                    result_6 = result_9
                    result_7 = result_9
                    goto label_4f1bdd
                
                sub_4ef190(eax_65, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                result_12 = data_1b8a720
                int32_t eax_74
                
                if (result_12 u> 0x20 || (&data_976b50)[result_12 * 8] == 0)
                    var_1b0 = data_70300c - 1
                    eax_74 = data_7030dc
                else
                    var_1b0 = (&data_976b58)[result_12 * 8] - 1
                    eax_74 = (&data_976b5c)[result_12 * 8]
                
                result_2 = eax_74 - 1
                result = data_1b8a734
                result_5 = result
                result_6 = result
                result_7 = result
                goto label_4f1f9e
            case 3
            label_4f1a0f:
                result = data_1af4e84
                
                if (result u> 3)
                    goto label_4f1fb8
                
                switch (result)
                    case 0
                        sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        result_12 = data_1b8a720
                        int32_t eax_80
                        
                        if (result_12 u> 0x20 || (&data_976b50)[result_12 * 8] == 0)
                            var_1b0 = data_70300c - 1
                            eax_80 = data_7030dc
                        else
                            var_1b0 = (&data_976b58)[result_12 * 8] - 1
                            eax_80 = (&data_976b5c)[result_12 * 8]
                        
                        result_4 = 0xff
                        result_2 = eax_80 - 1
                        result = data_1b8a734
                    label_4f1f98:
                        result_3 = result
                    label_4f1f9e:
                        var_1b8 = 0
                        var_1b4 = 0
                        result_1 = result_12
                        goto label_4f1fb8
                    case 1
                        sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                        result_12 = data_1b8a720
                        int32_t eax_86
                        
                        if (result_12 u> 0x20 || (&data_976b50)[result_12 * 8] == 0)
                            var_1b0 = data_70300c - 1
                            eax_86 = data_7030dc
                        else
                            var_1b0 = (&data_976b58)[result_12 * 8] - 1
                            eax_86 = (&data_976b5c)[result_12 * 8]
                        
                        result_2 = eax_86 - 1
                        result_4 = data_1b8a748
                        result = data_1b8a734
                        goto label_4f1f98
                    case 2
                        sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", &data_1b8a720)
                        var_1b8 = data_1b8a720
                        var_1b4 = data_1b8a734
                        var_1b0 = data_1b8a748
                        result_2 = data_1b8a75c
                        result_1 = data_1b8a770
                        result_4 = 0xff
                    label_4f1bb8:
                        result_3 = data_1b8a784
                        goto label_4f1bdd
                    case 3
                        sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", &data_1b8a720)
                        var_1b8 = data_1b8a720
                        var_1b4 = data_1b8a734
                        var_1b0 = data_1b8a748
                        result_2 = data_1b8a75c
                        result_1 = data_1b8a770
                        result_4 = data_1b8a798
                        goto label_4f1bb8
            case 4
            label_4f1bea:
                result = data_1af4e84
                
                if (result u> 3)
                    goto label_4f1fb8
                
                switch (result)
                    case 0
                        sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        result_12 = data_1b8a720
                        int32_t eax_106
                        
                        if (result_12 u> 0x20 || (&data_976b50)[result_12 * 8] == 0)
                            var_1b0 = data_70300c - 1
                            eax_106 = data_7030dc
                        else
                            var_1b0 = (&data_976b58)[result_12 * 8] - 1
                            eax_106 = (&data_976b5c)[result_12 * 8]
                        
                        var_a4 = -1
                        result_2 = eax_106 - 1
                        result = data_1b8a734
                        goto label_4f1f98
                    case 1
                        sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                        result_12 = data_1b8a720
                        int32_t eax_112
                        
                        if (result_12 u> 0x20 || (&data_976b50)[result_12 * 8] == 0)
                            var_1b0 = data_70300c - 1
                            eax_112 = data_7030dc
                        else
                            var_1b0 = (&data_976b58)[result_12 * 8] - 1
                            eax_112 = (&data_976b5c)[result_12 * 8]
                        
                        result_2 = eax_112 - 1
                        var_a4 = (data_1b8a748).b
                        result = data_1b8a734
                        goto label_4f1f98
                    case 2
                        sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", &data_1b8a720)
                        var_1b8 = data_1b8a720
                        var_1b4 = data_1b8a734
                        var_1b0 = data_1b8a748
                        result_2 = data_1b8a75c
                        result_1 = data_1b8a770
                        var_a4 = -1
                        goto label_4f1bb8
                    case 3
                        sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", &data_1b8a720)
                        var_1b8 = data_1b8a720
                        var_1b4 = data_1b8a734
                        var_1b0 = data_1b8a748
                        result_2 = data_1b8a75c
                        result_1 = data_1b8a770
                        var_a4 = (data_1b8a798).b
                        goto label_4f1bb8
            case 5
            label_4f1d9b:
                int32_t eax_128 = data_1af4e84
                
                if (eax_128 != 0)
                    result = eax_128 - 1
                    
                    if (eax_128 != 1)
                        goto label_4f1fb8
                    
                    sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$", &data_1b8a720)
                    var_1b8 = data_1b8a720
                    var_1b4 = data_1b8a734
                    var_1b0 = data_1b8a748
                    result_2 = data_1b8a75c
                    result_1 = data_1b8a770
                    result_5 = data_1b8a784
                    result_6 = data_1b8a798
                    result_7 = data_1b8a7ac
                    result_3 = data_1b8a7c0
                    goto label_4f1bdd
                
                sub_4ef190(eax_128, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", &data_1b8a720)
                result_12 = data_1b8a720
                int32_t eax_140
                
                if (result_12 u> 0x20 || (&data_976b50)[result_12 * 8] == 0)
                    var_1b0 = data_70300c - 1
                    eax_140 = data_7030dc
                else
                    var_1b0 = (&data_976b58)[result_12 * 8] - 1
                    eax_140 = (&data_976b5c)[result_12 * 8]
                
                result_2 = eax_140 - 1
                result_5 = data_1b8a734
                result_6 = data_1b8a748
                result_7 = data_1b8a75c
                result = data_1b8a770
                goto label_4f1f98
            case 6
            label_4f1ea6:
                int32_t eax_147 = data_1af4e84
                
                if (eax_147 != 0)
                    result = eax_147 - 1
                    
                    if (eax_147 != 1)
                        goto label_4f1fb8
                    
                    sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", &data_1b8a720)
                    var_1b8 = data_1b8a720
                    var_1b4 = data_1b8a734
                    var_1b0 = data_1b8a748
                    result_2 = data_1b8a75c
                    result_1 = data_1b8a770
                    uint32_t result_10 = data_1b8a784
                    result_5 = result_10
                    result_6 = result_10
                    result_7 = result_10
                    result_3 = data_1b8a798
                    goto label_4f1bdd
                
                sub_4ef190(eax_147, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                result_12 = data_1b8a720
                int32_t eax_156
                
                if (result_12 u> 0x20 || (&data_976b50)[result_12 * 8] == 0)
                    var_1b0 = data_70300c - 1
                    eax_156 = data_7030dc
                else
                    var_1b0 = (&data_976b58)[result_12 * 8] - 1
                    eax_156 = (&data_976b5c)[result_12 * 8]
                
                result_2 = eax_156 - 1
                uint32_t result_11 = data_1b8a734
                result_5 = result_11
                result_6 = result_11
                result_7 = result_11
                result = data_1b8a748
                goto label_4f1f98
            case 7
                data_1b8b06c = 1
else if (result_8 == 0x514)
label_4f1472:
    result = data_1af4e84
    
    if (result u> 3)
        goto label_4f1fb8
    
    switch (result)
        case 0
            sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            result_12 = data_1b8a720
            int32_t eax_3
            
            if (result_12 u> 0x20 || (&data_976b50)[result_12 * 8] == 0)
                var_1b0 = data_70300c - 1
                eax_3 = data_7030dc
            else
                var_1b0 = (&data_976b58)[result_12 * 8] - 1
                eax_3 = (&data_976b5c)[result_12 * 8]
            
            result = eax_3 - 1
            result_4 = 0xff
            result_2 = result
            goto label_4f1f9e
        case 1
            sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            result_12 = data_1b8a720
            int32_t eax_8
            
            if (result_12 u> 0x20 || (&data_976b50)[result_12 * 8] == 0)
                var_1b0 = data_70300c - 1
                eax_8 = data_7030dc
            else
                var_1b0 = (&data_976b58)[result_12 * 8] - 1
                eax_8 = (&data_976b5c)[result_12 * 8]
            
            result_2 = eax_8 - 1
            result = data_1b8a734
            result_4 = result
            goto label_4f1f9e
        case 2
            sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", &data_1b8a720)
            var_1b8 = data_1b8a720
            var_1b4 = data_1b8a734
            var_1b0 = data_1b8a748
            result_2 = data_1b8a75c
            result_1 = data_1b8a770
            result_4 = 0xff
            goto label_4f1bdd
        case 3
            sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", &data_1b8a720)
            var_1b8 = data_1b8a720
            var_1b4 = data_1b8a734
            var_1b0 = data_1b8a748
            result_2 = data_1b8a75c
            result_1 = data_1b8a770
            result_4 = data_1b8a784
            result = sub_4efb00(&var_1b0, &var_1b4, &var_1b8, &var_1b0, &result_2)
            goto label_4f1fb8
else if (result_8 - 0x12c u> 0x2b)
    data_1b8b06c = 1
else
    result = zx.d(*(result_8 + 0x4f1fe8))
    
    switch (result)
        case 0
            goto label_4f1472
        case 1
            goto label_4f1658
        case 2
            goto label_4f1821
        case 3
            goto label_4f1922
        case 4
            goto label_4f1a0f
        case 5
            goto label_4f1bea
        case 6
            goto label_4f1d9b
        case 7
            goto label_4f1ea6
        case 8
            data_1b8b06c = 1
return result

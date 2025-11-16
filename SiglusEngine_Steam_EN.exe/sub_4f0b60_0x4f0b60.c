// 函数: sub_4f0b60
// 地址: 0x4f0b60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_2dc
int32_t eax
sub_4d1ba0(eax, 0x2d4, &var_2dc, 0)
uint32_t result_5 = data_1bfdd30
uint32_t result = result_5
uint32_t result_4 = 0xff
uint32_t result_3 = 0xffffffff
int32_t var_b0 = 0
int32_t var_ac = 0
int32_t var_b4 = 8
int32_t var_a8 = 0
int32_t var_b8
int32_t var_6c

if (result s> 0x4b0)
    result -= 0x4b1
    
    if (result u<= 0x28)
        result = zx.d(lookup_table_4f1264[result])
        
        switch (result)
            case 0
                var_b8 = 0
                var_6c = 1
            case 1
                var_b8 = 0
                var_6c = 0
            case 2
                var_b8 = 1
                var_6c = 0
            case 3
                var_b8 = 1
                var_6c = 1
else if (result == 0x4b0)
    var_b8 = 0
    var_6c = 0
else
    result -= 0xc8
    
    if (result u<= 0x29)
        result = zx.d(lookup_table_4f1224[result])
        
        switch (result)
            case 0
                var_b8 = 0
                var_6c = 0
            case 1
                var_b8 = 0
                var_6c = 1
            case 2
                var_b8 = 1
                var_6c = 0
            case 3
                var_b8 = 1
                var_6c = 1

uint32_t result_1
int32_t var_1b8
int32_t var_1b4
int32_t var_1b0
int32_t var_1ac
char var_e0
int32_t var_dc
int32_t result_2

if (result_5 s> 0x4b1)
    if (result_5 - 0x4c4 u> 0x15)
        data_1b8b06c = 1
    else
        result = zx.d(*(result_5 + 0x4f0e1c))
        
        switch (result)
            case 0
            label_4f0edf:
                result = data_1af4e84
                
                if (result u> 3)
                    goto label_4f116d
                
                switch (result)
                    case 0
                        sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", &data_1b8a720)
                        uint32_t result_8 = data_1b8a720
                        int32_t eax_37
                        
                        if (result_8 u> 0x20 || (&data_976b50)[result_8 * 8] == 0)
                            var_1b0 = data_70300c - 1
                            eax_37 = data_7030dc
                        else
                            var_1b0 = (&data_976b58)[result_8 * 8] - 1
                            eax_37 = (&data_976b5c)[result_8 * 8]
                        
                        var_1b4 = 0
                        var_1ac = eax_37 - 1
                        var_e0 = (data_1b8a734).b
                        var_dc = data_1b8a748
                        result_2 = data_1b8a75c
                        result = data_1b8a770
                        var_1b8 = 0
                        result_1 = result_8
                        result_4 = 0xff
                        result_3 = result
                        goto label_4f116d
                    case 1
                        sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", &data_1b8a720)
                        uint32_t result_9 = data_1b8a720
                        int32_t eax_46
                        
                        if (result_9 u> 0x20 || (&data_976b50)[result_9 * 8] == 0)
                            var_1b0 = data_70300c - 1
                            eax_46 = data_7030dc
                        else
                            var_1b0 = (&data_976b58)[result_9 * 8] - 1
                            eax_46 = (&data_976b5c)[result_9 * 8]
                        
                        var_1b4 = 0
                        var_1ac = eax_46 - 1
                        var_e0 = (data_1b8a734).b
                        var_dc = data_1b8a748
                        result_2 = data_1b8a75c
                        result_4 = data_1b8a784
                        result = data_1b8a770
                        var_1b8 = 0
                        result_1 = result_9
                        result_3 = result
                        goto label_4f116d
                    case 2
                        sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$", &data_1b8a720)
                        var_1b8 = data_1b8a720
                        var_1b4 = data_1b8a734
                        var_1b0 = data_1b8a748
                        var_1ac = data_1b8a75c
                        result_1 = data_1b8a770
                        var_e0 = (data_1b8a784).b
                        var_dc = data_1b8a798
                        result_2 = data_1b8a7ac
                        result_4 = 0xff
                    label_4f1145:
                        result_3 = data_1b8a7c0
                        goto label_4f1165
                    case 3
                        sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$", &data_1b8a720)
                        var_1b8 = data_1b8a720
                        var_1b4 = data_1b8a734
                        var_1b0 = data_1b8a748
                        var_1ac = data_1b8a75c
                        result_1 = data_1b8a770
                        var_e0 = (data_1b8a784).b
                        var_dc = data_1b8a798
                        result_2 = data_1b8a7ac
                        result_4 = data_1b8a7d4
                        goto label_4f1145
            case 1
                data_1b8b06c = 1
else if (result_5 s>= 0x4b0)
label_4f0c6f:
    result = data_1af4e84
    
    if (result u> 3)
        goto label_4f116d
    
    switch (result)
        case 0
            sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720)
            uint32_t result_6 = data_1b8a720
            int32_t eax_3
            
            if (result_6 u> 0x20 || (&data_976b50)[result_6 * 8] == 0)
                var_1b0 = data_70300c - 1
                eax_3 = data_7030dc
            else
                var_1b0 = (&data_976b58)[result_6 * 8] - 1
                eax_3 = (&data_976b5c)[result_6 * 8]
            
            var_1b4 = 0
            var_1ac = eax_3 - 1
            var_e0 = (data_1b8a734).b
            var_dc = data_1b8a748
            result = data_1b8a75c
            var_1b8 = 0
            result_1 = result_6
            result_2 = result
            result_4 = 0xff
            goto label_4f116d
        case 1
            sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", &data_1b8a720)
            uint32_t result_7 = data_1b8a720
            int32_t eax_11
            
            if (result_7 u> 0x20 || (&data_976b50)[result_7 * 8] == 0)
                var_1b0 = data_70300c - 1
                eax_11 = data_7030dc
            else
                var_1b0 = (&data_976b58)[result_7 * 8] - 1
                eax_11 = (&data_976b5c)[result_7 * 8]
            
            var_1b4 = 0
            var_1ac = eax_11 - 1
            var_e0 = (data_1b8a734).b
            var_dc = data_1b8a748
            result_2 = data_1b8a75c
            result = data_1b8a770
            var_1b8 = 0
            result_1 = result_7
            result_4 = result
            goto label_4f116d
        case 2
            sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", &data_1b8a720)
            var_1b8 = data_1b8a720
            var_1b4 = data_1b8a734
            var_1b0 = data_1b8a748
            var_1ac = data_1b8a75c
            result_1 = data_1b8a770
            var_e0 = (data_1b8a784).b
            var_dc = data_1b8a798
            result_2 = data_1b8a7ac
            result_4 = 0xff
        label_4f1165:
            result = sub_4efb00(&var_1b0, &var_1b4, &var_1b8, &var_1b0, &var_1ac)
        label_4f116d:
            
            if (data_1b8b06c == 0)
                result = result_1
                
                if (result u<= 0xf)
                    sub_413750(result, var_1b4, var_1b8, var_1b0, var_1ac, result, result_3, 
                        var_b8, var_b0, var_ac, var_a8, var_6c, var_e0, var_dc, result_2, result_4, 
                        var_b4)
                    var_2dc = data_1bfdd30
                    return sub_42a6d0(&var_2dc)
        case 3
            sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$", &data_1b8a720)
            var_1b8 = data_1b8a720
            var_1b4 = data_1b8a734
            var_1b0 = data_1b8a748
            var_1ac = data_1b8a75c
            result_1 = data_1b8a770
            var_e0 = (data_1b8a784).b
            var_dc = data_1b8a798
            result_2 = data_1b8a7ac
            result_4 = data_1b8a7c0
            goto label_4f1165
else if (result_5 - 0xc8 u> 0x29)
    data_1b8b06c = 1
else
    result = zx.d(*(result_5 + 0x4f11d4))
    
    switch (result)
        case 0
            goto label_4f0c6f
        case 1
            goto label_4f0edf
        case 2
            data_1b8b06c = 1
return result

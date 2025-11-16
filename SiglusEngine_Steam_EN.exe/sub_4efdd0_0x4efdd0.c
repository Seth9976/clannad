// 函数: sub_4efdd0
// 地址: 0x4efdd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_2dc
int32_t eax
sub_4d1ba0(eax, 0x2d4, &var_2dc, 0)
uint32_t result_6 = data_1bfdd30
uint32_t result = result_6
uint32_t result_4 = 0xff
uint32_t result_3 = 0xffffffff
char var_b0 = 0
char var_ac = 0
int32_t var_b4 = 8
int32_t var_a8 = 0
char var_b8
int32_t var_6c

if (result s> 0x44c)
    if (result s> 0x640)
        result -= 0x641
        
        if (result u<= 0x8c)
            result = zx.d(lookup_table_4f093c[result])
            
            switch (result)
                case 0
                    var_b8 = 0
                    var_6c = 4
                case 1
                    var_b8 = 0
                    var_6c = 3
                case 2
                    var_6c = 3
                    var_b8 = 1
                case 3
                    var_6c = 4
                    var_b8 = 1
                case 4
                    var_b8 = 0
                    var_6c = 5
                case 5
                    var_b8 = 0
                    var_6c = 6
                case 6
                    var_6c = 5
                    var_b8 = 1
                case 7
                    var_6c = 6
                    var_b8 = 1
    else if (result == 0x640)
        var_b8 = 0
        var_6c = 3
    else
        result -= 0x44d
        
        if (result u<= 0x28)
            result = zx.d(lookup_table_4f08ec[result])
            
            switch (result)
                case 0
                    var_b8 = 0
                    var_6c = 1
                case 1
                    var_b8 = 0
                    var_6c = 2
                case 2
                    var_b8 = 0
                    var_6c = 0
                case 3
                    var_6c = 0
                    var_b8 = 1
                case 4
                    var_6c = 1
                    var_b8 = 1
else if (result == 0x44c)
    var_b8 = 0
    var_6c = 0
else if (result s> 0x258)
    result -= 0x259
    
    if (result u<= 0x8c)
        result = zx.d(lookup_table_4f0844[result])
        
        switch (result)
            case 0
                var_b8 = 0
                var_6c = 4
            case 1
                var_b8 = 0
                var_6c = 3
            case 2
                var_6c = 3
                var_b8 = 1
            case 3
                var_6c = 4
                var_b8 = 1
            case 4
                var_b8 = 0
                var_6c = 5
            case 5
                var_b8 = 0
                var_6c = 6
            case 6
                var_6c = 5
                var_b8 = 1
            case 7
                var_6c = 6
                var_b8 = 1
else if (result == 0x258)
    var_b8 = 0
    var_6c = 3
else
    result -= 0x64
    
    if (result u<= 0x29)
        result = zx.d(lookup_table_4f07f4[result])
        
        switch (result)
            case 0
                var_b8 = 0
                var_6c = 0
            case 1
                var_b8 = 0
                var_6c = 1
            case 2
                var_b8 = 0
                var_6c = 2
            case 3
                var_6c = 0
                var_b8 = 1
            case 4
                var_6c = 1
                var_b8 = 1

uint32_t result_1
void* var_1e4
int32_t var_1e0
void* var_1dc
int32_t var_1d8
uint32_t result_2
int32_t var_1b8
int32_t var_1b4
bool cond:3_1

if (result_6 s> 0x44d)
    if (result_6 s<= 0x669)
        if (result_6 s>= 0x668)
        label_4f02f3:
            result = data_1af4e84
            
            switch (result)
                case 0
                    sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                    uint32_t result_10 = data_1b8a720
                    sub_4efbc0(&var_1e0, &var_1e4, result_10, &var_1e0, &var_1dc, &var_1d8, 
                        &var_1b8, &var_1b4)
                    result_2 = data_1b8a734
                    result = data_1b8a748
                    result_1 = result_10
                    result_4 = 0xff
                    result_3 = result
                case 1
                    sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720)
                    uint32_t result_11 = data_1b8a720
                    sub_4efbc0(&var_1e0, &var_1e4, result_11, &var_1e0, &var_1dc, &var_1d8, 
                        &var_1b8, &var_1b4)
                    result_2 = data_1b8a734
                    result_4 = data_1b8a75c
                    result = data_1b8a748
                    result_1 = result_11
                    result_3 = result
                case 2
                    sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$", &data_1b8a720)
                    var_1e4 = data_1b8a720
                    var_1e0 = data_1b8a734
                    var_1dc = data_1b8a748
                    var_1d8 = data_1b8a75c
                    result_1 = data_1b8a770
                    var_1b8 = data_1b8a784
                    var_1b4 = data_1b8a798
                    result_2 = data_1b8a7ac
                    result_4 = 0xff
                    result_3 = data_1b8a7c0
                    result = sub_4efb00(&var_1dc, &var_1e0, &var_1e4, &var_1dc, &var_1d8)
                case 3
                    sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$", &data_1b8a720)
                    var_1e4 = data_1b8a720
                    var_1e0 = data_1b8a734
                    var_1dc = data_1b8a748
                    var_1d8 = data_1b8a75c
                    result_1 = data_1b8a770
                    var_1b8 = data_1b8a784
                    var_1b4 = data_1b8a798
                    result_2 = data_1b8a7ac
                    result_4 = data_1b8a7d4
                    result_3 = data_1b8a7c0
                    result = sub_4efb00(&var_1dc, &var_1e0, &var_1e4, &var_1dc, &var_1d8)
                case 4
                    sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$$$$", &data_1b8a720)
                    var_1e4 = data_1b8a720
                    var_1e0 = data_1b8a734
                    var_1dc = data_1b8a748
                    var_1d8 = data_1b8a75c
                    result_1 = data_1b8a770
                    var_1b8 = data_1b8a784
                    var_1b4 = data_1b8a798
                    result_2 = data_1b8a7ac
                    result_4 = 0xff
                label_4f060b:
                    result_3 = data_1b8a7c0
                    var_b0 = (data_1b8a7d4).b
                    var_ac = (data_1b8a7e8).b
                    var_b4 = data_1b8a7fc
                    var_a8 = data_1b8a810
                    result = sub_4efb00(&var_1dc, &var_1e0, &var_1e4, &var_1dc, &var_1d8)
                case 5
                    sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$$$$$", &data_1b8a720)
                    var_1e4 = data_1b8a720
                    var_1e0 = data_1b8a734
                    var_1dc = data_1b8a748
                    var_1d8 = data_1b8a75c
                    result_1 = data_1b8a770
                    var_1b8 = data_1b8a784
                    var_1b4 = data_1b8a798
                    result_2 = data_1b8a7ac
                    result_4 = data_1b8a824
                    goto label_4f060b
            
            goto label_4f0735
        
        if (result_6 s<= 0x475)
            if (result_6 s>= 0x474)
                goto label_4f02f3
            
            if (result_6 == 0x44e)
            label_4effee:
                int32_t result_5 = data_1af4e84
                result = result_5
                
                if (result_5 == 0)
                    goto label_4f0190
                
                uint32_t result_7 = result
                result -= 1
                
                if (result_7 != 1)
                    goto label_4f0735
                
                goto label_4f0013
            
            if (result_6 s<= 0x45f)
                data_1b8b06c = 1
            else
                cond:3_1 = result_6 s<= 0x461
            label_4f00c0:
                
                if (cond:3_1)
                    goto label_4f02f3
                
                data_1b8b06c = 1
        else if (result_6 - 0x640 u> 0x15)
            data_1b8b06c = 1
        else
            result = zx.d(*(result_6 + 0x4f044c))
            
            switch (result)
                case 0
                    goto label_4f016b
                case 1
                    goto label_4f02f3
                case 2
                    data_1b8b06c = 1
    else if (result_6 - 0x6a4 u> 0x64)
        data_1b8b06c = 1
    else
        result = zx.d(*(result_6 + 0x4f0410))
        
        switch (result)
            case 0
                goto label_4f016b
            case 1
                goto label_4f02f3
            case 2
            label_4f065e:
                int32_t eax_70 = data_1af4e84
                
                if (eax_70 == 0)
                    sub_4ef190(eax_70, arg2 + 0x20, *(arg2 + 0x20), "S$", &data_1b8a720)
                    result = sub_4efbc0(&var_1e0, &var_1e4, data_1b8a734, &var_1e0, &var_1dc, 
                        &var_1d8, &var_1b8, &var_1b4)
                else
                    result = eax_70 - 1
                    
                    if (eax_70 == 1)
                        sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "S$$$$$", &data_1b8a720)
                        int32_t var_1e8 = data_1b8a734
                        var_1e4 = data_1b8a748
                        var_1e0 = data_1b8a75c
                        var_1dc = data_1b8a770
                        var_1d8 = data_1b8a784
                        result = sub_4efb00(&var_1dc, &var_1e0, &var_1e4, &var_1dc, &var_1d8)
                
                result_1 = 0xffffffff
                goto label_4f0735
            case 3
                data_1b8b06c = 1
else if (result_6 s>= 0x44c)
label_4f016b:
    result = data_1af4e84
    
    if (result u> 3)
        goto label_4f0735
    
    switch (result)
        case 0
        label_4f0190:
            sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            uint32_t result_8 = data_1b8a720
            sub_4efbc0(&var_1e0, &var_1e4, result_8, &var_1e0, &var_1dc, &var_1d8, &var_1b8, 
                &var_1b4)
            result = data_1b8a734
            result_1 = result_8
            result_2 = result
            result_4 = 0xff
            goto label_4f0735
        case 1
            sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
            uint32_t result_9 = data_1b8a720
            sub_4efbc0(&var_1e0, &var_1e4, result_9, &var_1e0, &var_1dc, &var_1d8, &var_1b8, 
                &var_1b4)
            result_2 = data_1b8a734
            result = data_1b8a748
            result_1 = result_9
            result_4 = result
            goto label_4f0735
        case 2
        label_4f0013:
            sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", &data_1b8a720)
            var_1e4 = data_1b8a720
            var_1e0 = data_1b8a734
            var_1dc = data_1b8a748
            var_1d8 = data_1b8a75c
            result_1 = data_1b8a770
            var_1b8 = data_1b8a784
            var_1b4 = data_1b8a798
            result_2 = data_1b8a7ac
            result_4 = 0xff
            result = sub_4efb00(&var_1dc, &var_1e0, &var_1e4, &var_1dc, &var_1d8)
        label_4f0735:
            
            if (data_1b8b06c == 0)
                result = result_1
                
                if (result u<= 0xf && result_2 u<= 0xf)
                    sub_4128b0(result, var_1e0, var_1e4, var_1dc, var_1d8, result, var_1b8, 
                        var_1b4, result_2, result_3, var_b8, var_b4, var_b0, var_ac, var_a8, 
                        var_6c, 0, 0, 0, 0, result_4)
                    var_2dc = data_1bfdd30
                    return sub_42a6d0(&var_2dc)
        case 3
            sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$", &data_1b8a720)
            var_1e4 = data_1b8a720
            var_1e0 = data_1b8a734
            var_1dc = data_1b8a748
            var_1d8 = data_1b8a75c
            result_1 = data_1b8a770
            var_1b8 = data_1b8a784
            var_1b4 = data_1b8a798
            result_2 = data_1b8a7ac
            result_4 = data_1b8a7c0
            result = sub_4efb00(&var_1dc, &var_1e0, &var_1e4, &var_1dc, &var_1d8)
            goto label_4f0735
else if (result_6 s<= 0x26d)
    if (result_6 s>= 0x26c)
        goto label_4f02f3
    
    if (result_6 s<= 0x79)
        if (result_6 s>= 0x78)
            goto label_4f02f3
        
        if (result_6 s< 0x64)
            data_1b8b06c = 1
        else
            if (result_6 s<= 0x65)
                goto label_4f016b
            
            if (result_6 == 0x66)
                goto label_4effee
            
            data_1b8b06c = 1
    else if (result_6 s> 0x259)
        data_1b8b06c = 1
    else
        if (result_6 s>= 0x258)
            goto label_4f016b
        
        if (result_6 s>= 0x8c)
            cond:3_1 = result_6 s<= 0x8d
            goto label_4f00c0
        
        data_1b8b06c = 1
else if (result_6 - 0x280 u> 0xa0)
    data_1b8b06c = 1
else
    result = zx.d(*(result_6 + 0x4f075c))
    
    switch (result)
        case 0
            goto label_4f02f3
        case 1
            goto label_4f016b
        case 2
            goto label_4f065e
        case 3
            data_1b8b06c = 1
return result

// 函数: sub_4fd0f0
// 地址: 0x4fd0f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* edx = __chkstk(0x12bc)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = data_1bfdd30
char var_2c = 0
void* result_4 = nullptr
void* result_2 = 0xffffffff
int32_t var_12a4 = 0
void* result_3 = nullptr
int32_t var_12bc = 0
void* result_1 = nullptr
void* result
int32_t entry_ebx

if (eax_2 == 0x64)
    result = data_1af4e84
    char* var_18_7
    char* var_18_8
    char* var_18_9
    uint32_t var_14_7
    uint32_t var_14_8
    uint32_t var_14_9
    
    if (data_1b8c884 != 0)
        switch (result)
            case nullptr
                sub_4ef190(result, edx + 0x20, *(edx + 0x20), "$@", &data_1b8a720)
                result = data_1b8a720
                var_2c = 0
                result_4 = result
            case 1
                var_14_7 = &data_1b8a720
                var_18_7 = &data_61ee58
            label_4fd394:
                sub_4cfdf0(sub_4ef190(result, edx + 0x20, *(edx + 0x20), var_18_7, var_14_7), 
                    data_1b8a728, &var_2c, 0x24)
                result = data_1b8a734
                result_4 = result
            case 2
                var_14_8 = &data_1b8a720
                var_18_8 = "S$$$@"
            label_4fd3c9:
                sub_4cfdf0(sub_4ef190(result, edx + 0x20, *(edx + 0x20), var_18_8, var_14_8), 
                    data_1b8a728, &var_2c, 0x24)
                result_4 = data_1b8a734
                var_12a4 = data_1b8a748
                result = data_1b8a75c
                result_3 = result
            case 3
                var_14_9 = &data_1b8a720
                var_18_9 = "S$$$$$@"
            label_4fd477:
                sub_4cfdf0(sub_4ef190(result, edx + 0x20, *(edx + 0x20), var_18_9, var_14_9), 
                    data_1b8a728, &var_2c, 0x24)
                result_4 = data_1b8a734
                var_12a4 = data_1b8a748
                result_3 = data_1b8a75c
                var_12bc = data_1b8a770
                result = data_1b8a784
                result_1 = result
    else
        switch (result)
            case nullptr
                sub_4ef190(result, edx + 0x20, *(edx + 0x20), "$", &data_1b8a720)
                result = data_1b8a720
                result_4 = result
            case 1
                var_14_7 = &data_1b8a720
                var_18_7 = &data_61ed64
                goto label_4fd394
            case 2
                var_14_8 = &data_1b8a720
                var_18_8 = "S$$$"
                goto label_4fd3c9
            case 3
                var_14_9 = &data_1b8a720
                var_18_9 = "S$$$$$"
                goto label_4fd477
else
    if (eax_2 != 0x65)
        data_1b8b06c = 1
        sub_5f02dd(entry_ebx ^ &__saved_ebp)
        return eax_2 - 0x65
    
    result = data_1af4e84
    char* var_18_2
    char* var_18_3
    char* var_18_4
    uint32_t var_14_2
    uint32_t var_14_3
    int32_t* var_14_4
    
    if (data_1b8c884 != 0)
        switch (result)
            case nullptr
                sub_4ef190(result, edx + 0x20, *(edx + 0x20), "$$@", &data_1b8a720)
                var_2c = 0
            label_4fd2e7:
                result_4 = data_1b8a720
                result = data_1b8a734
                result_2 = result
            case 1
                var_14_2 = &data_1b8a720
                var_18_2 = "S$$@"
            label_4fd1da:
                sub_4cfdf0(sub_4ef190(result, edx + 0x20, *(edx + 0x20), var_18_2, var_14_2), 
                    data_1b8a728, &var_2c, 0x24)
                result_4 = data_1b8a734
                result = data_1b8a748
                result_2 = result
            case 2
                var_14_3 = &data_1b8a720
                var_18_3 = "S$$$$@"
            label_4fd21a:
                sub_4cfdf0(sub_4ef190(result, edx + 0x20, *(edx + 0x20), var_18_3, var_14_3), 
                    data_1b8a728, &var_2c, 0x24)
                result_4 = data_1b8a734
                result_2 = data_1b8a748
                var_12a4 = data_1b8a75c
                result = data_1b8a770
                result_3 = result
            case 3
                var_14_4 = &data_1b8a720
                var_18_4 = "S$$$$$$@"
            label_4fd270:
                sub_4cfdf0(sub_4ef190(result, edx + 0x20, *(edx + 0x20), var_18_4, var_14_4), 
                    data_1b8a728, &var_2c, 0x24)
                result_4 = data_1b8a734
                result_2 = data_1b8a748
                var_12a4 = data_1b8a75c
                result_3 = data_1b8a770
                var_12bc = data_1b8a784
                result = data_1b8a798
                result_1 = result
    else
        switch (result)
            case nullptr
                sub_4ef190(result, edx + 0x20, *(edx + 0x20), "$$", &data_1b8a720)
                goto label_4fd2e7
            case 1
                var_14_2 = &data_1b8a720
                var_18_2 = &data_61ee14
                goto label_4fd1da
            case 2
                var_14_3 = &data_1b8a720
                var_18_3 = "S$$$$"
                goto label_4fd21a
            case 3
                var_14_4 = &data_1b8a720
                var_18_4 = "S$$$$$$"
                goto label_4fd270

if (data_1b8b06c == 0)
    if (data_1b8c884 s> 0)
        var_128c
        void* eax_27 = &var_128c
        int32_t i_5 = 0x14
        int32_t i
        
        do
            *(eax_27 - 4) = 0
            eax_27 += 0xc8
            *(eax_27 - 0xc8) = 0
            *(eax_27 - 0xb8) = 0
            *(eax_27 - 0xb4) = 0
            *(eax_27 - 0xa4) = 0
            *(eax_27 - 0xa0) = 0
            *(eax_27 - 0x90) = 0
            *(eax_27 - 0x8c) = 0
            *(eax_27 - 0x7c) = 0
            *(eax_27 - 0x78) = 0
            *(eax_27 - 0x68) = 0
            *(eax_27 - 0x64) = 0
            *(eax_27 - 0x54) = 0
            *(eax_27 - 0x50) = 0
            *(eax_27 - 0x40) = 0
            *(eax_27 - 0x3c) = 0
            *(eax_27 - 0x2c) = 0
            *(eax_27 - 0x28) = 0
            *(eax_27 - 0x18) = 0
            *(eax_27 - 0x14) = 0
            i = i_5
            i_5 -= 1
        while (i != 1)
        int32_t i_1 = 0
        int32_t i_10 = i_5 + 0x14
        int32_t i_4 = 0
        int32_t var_12b4
        int32_t var_1294[0x41a]
        var_228
        
        if (data_1b8c884 s> 0)
            void* ebx_2 = edx + 0x20
            void* var_12a0_1 = ebx_2
            
            do
                int32_t i_7 = i_10
                
                if (i_1 s< 0x14)
                    i_7 = i_1
                
                *ebx_2 += 1
                char* ecx_19 = *ebx_2
                uint32_t eax_28 = zx.d(*ecx_19)
                *ebx_2 = &ecx_19[1]
                int32_t var_84[0x4]
                var_84[i_7] = eax_28
                int32_t ebx_4 = i_7 * 0x14
                var_21c
                void* edi_1 = &var_21c + ebx_4
                var_12b4 = data_12bda90 + i_7
                int32_t eax_31 = var_84[i_7]
                *edi_1 = 0
                var_1280
                var_1278
                var_126c
                int32_t var_22c[0x6a]
                var_224
                var_220
                int32_t eax_34
                char* ecx_20
                
                switch (eax_31)
                    case 0
                        uint32_t eax_32 = &var_1294[i_7 * 0x32]
                        sub_4ef190(eax_32, var_12a0_1, &ecx_19[1], U"SMDB", eax_32)
                        var_22c[i_7 * 5] = var_12b4
                        eax_34 = *(&var_128c + i_7 * 0xc8)
                    label_4fd634:
                        *(&var_228 + ebx_4) = eax_34
                        *(&var_224 + ebx_4) = data_12bda9c
                        *(&var_220 + ebx_4) = data_12bdaa0
                        i_1 = i_4
                    case 1
                        uint32_t esi_2 = &var_1294[i_7 * 0x32]
                        sub_4ef190(eax_31, var_12a0_1, &ecx_19[1], "$S", esi_2)
                        var_22c[i_7 * 5] = *esi_2
                        eax_34 = *(&var_1278 + i_7 * 0xc8)
                        goto label_4fd634
                    case 2
                        int32_t esi_3 = i_7 * 0xc8
                        uint32_t eax_38 = &var_1294[i_7 * 0x32]
                        sub_4ef190(eax_38, var_12a0_1, &ecx_19[1], "S$", eax_38)
                        ecx_20 = *(&var_1280 + esi_3)
                        var_22c[i_7 * 5] = var_12b4
                        *(&var_228 + ebx_4) = *(&var_128c + esi_3)
                        
                        if (ecx_20 == 0xffffffff)
                            *edi_1 = 1
                            i_1 = i_4
                        else if (ecx_20 != 0xfffffffe)
                            i_1 = i_4
                            
                            if (ecx_20 u> 0xff)
                                *edi_1 = 1
                            else
                                *(&var_224 + ebx_4) = (&data_12bda9c)[ecx_20 * 2]
                                *(&var_220 + ebx_4) = (&data_12bdaa0)[ecx_20 * 2]
                        else
                            *edi_1 = 2
                            i_1 = i_4
                    case 3
                        int32_t edi_3 = i_7 * 0xc8
                        uint32_t esi_4 = &var_1294[i_7 * 0x32]
                        sub_4ef190(eax_31, var_12a0_1, &ecx_19[1], "$S$", esi_4)
                        ecx_20 = *(&var_126c + edi_3)
                        var_22c[i_7 * 5] = *esi_4
                        *(&var_228 + ebx_4) = *(&var_1278 + edi_3)
                        
                        if (ecx_20 == 0xffffffff)
                            *edi_1 = 1
                            i_1 = i_4
                        else if (ecx_20 != 0xfffffffe)
                            i_1 = i_4
                            
                            if (ecx_20 u<= 0xff)
                                *(&var_224 + ebx_4) = (&data_12bda9c)[ecx_20 * 2]
                                *(&var_220 + ebx_4) = (&data_12bdaa0)[ecx_20 * 2]
                            else
                                *(&var_21c + ebx_4) = 1
                        else
                            *edi_1 = 2
                            i_1 = i_4
                    case 4
                        int32_t esi_5 = i_7 * 0xc8
                        uint32_t eax_47 = &var_1294[i_7 * 0x32]
                        sub_4ef190(eax_47, var_12a0_1, &ecx_19[1], "S$$", eax_47)
                        var_22c[i_7 * 5] = var_12b4
                        *(&var_228 + ebx_4) = *(&var_128c + esi_5)
                        *(&var_224 + ebx_4) = *(&var_1280 + esi_5)
                        *(&var_220 + ebx_4) = *(&var_126c + esi_5)
                        i_1 = i_4
                    case 5
                        int32_t edi_4 = i_7 * 0xc8
                        uint32_t esi_6 = &var_1294[i_7 * 0x32]
                        sub_4ef190(eax_31, var_12a0_1, &ecx_19[1], "$S$$", esi_6)
                        var_22c[i_7 * 5] = *esi_6
                        *(&var_228 + ebx_4) = *(&var_1278 + edi_4)
                        *(&var_224 + ebx_4) = *(&var_126c + edi_4)
                        var_1258
                        *(&var_220 + ebx_4) = *(&var_1258 + edi_4)
                        i_1 = i_4
                
                ebx_2 = var_12a0_1
                char* eax_54 = *ebx_2
                
                while (true)
                    ecx_20.b = *eax_54
                    
                    if (ecx_20.b != 0x2c && ecx_20.b != 0x20)
                        break
                    
                    eax_54 = &eax_54[1]
                
                i_1 += 1
                *ebx_2 = eax_54
                i_10 = 0x14
                i_4 = i_1
            while (i_1 s< data_1b8c884)
        
        *(edx + 0x20) += 1
        
        if (data_1b8c884 s< 0x14)
            i_10 = data_1b8c884
        
        int32_t eax_55 = data_12bda98
        int32_t i_9 = i_10
        int32_t var_1298_1 = data_12bda94
        
        if (i_10 s> 0)
            int32_t eax_56 = var_1298_1
            void* ebx_6 = &var_228
            int32_t edx_23 = eax_55
            int32_t i_6 = i_10
            int32_t i_2
            
            do
                char* edi_5 = *ebx_6
                
                if (edi_5 != 0)
                    eax_56.b = *edi_5
                    
                    if (eax_56.b != 0 && eax_56.b != 0x3f)
                        void* esi_7 = *(ebx_6 - 4)
                        int32_t var_14_17 = 0
                        int32_t var_18_17 = 2
                        var_12b4 = 0xffffffff
                        int32_t ecx_23 =
                            sub_542740(eax_56.b, &var_12b4, edi_5, var_18_17, var_14_17)
                        int32_t eax_57 = var_12b4
                        
                        if (eax_57 == 0xffffffff)
                            ecx_23 = sub_542740(eax_57.b, &var_12b4, edi_5, 4, esi_7)
                            eax_57 = var_12b4
                        
                        int32_t var_14_19 = ecx_23
                        var_2c.d = 0
                        int32_t* eax_58 =
                            sub_464a10(eax_57, 1, esi_7, var_2c, edi_5, eax_57, nullptr, nullptr, 0)
                        int32_t edi_6 = *(ebx_6 + 0xc)
                        
                        if (edi_6 == 2)
                            sub_465400(eax_58, edi_6 - 1, esi_7, esi_7, 0, 1)
                        
                        int32_t edx_27 = data_7031bc
                        
                        if (esi_7 s>= 0 && esi_7 s< edx_27 && *(esi_7 * 0xca0 + 0x72de78) != 1)
                            *(esi_7 * 0xca0 + 0x72de78) = 1
                            *(esi_7 * 0xca0 + 0x72dfc4) = 0
                            *(esi_7 * 0xca0 + 0x72dfc8) = 0
                        
                        if (edi_6 != 0)
                        label_4fd9d9:
                            
                            if (esi_7 s>= 0 && esi_7 s< edx_27
                                    && *(esi_7 * 0xca0 + 0x72deac) != var_1298_1)
                                *(esi_7 * 0xf40 + 0x98c998) += 1
                                *(esi_7 * 0xca0 + 0x72deac) = var_1298_1
                        else if (esi_7 s>= 0)
                            if (esi_7 s< edx_27)
                                *(esi_7 * 0xca0 + 0x72de50) = *(ebx_6 + 4)
                                *(esi_7 * 0xca0 + 0x72de54) = *(ebx_6 + 8)
                            
                            goto label_4fd9d9
                        
                        edx_23 = eax_55
                        i_6 = i_9
                    
                    eax_56 = var_1298_1
                
                eax_56 += edx_23
                ebx_6 += 0x14
                i_2 = i_6
                i_6 -= 1
                var_1298_1 = eax_56
                i_9 = i_6
            while (i_2 != 1)
        
        int32_t (* esi_8)[0x41a] = &var_1294
        int32_t i_8 = 0x14
        int32_t i_3
        
        do
            sub_4eef40(esi_8, 0xa)
            esi_8 = &(*esi_8)[0x32]
            i_3 = i_8
            i_8 -= 1
        while (i_3 != 1)
    
    void* result_6 = result_4
    
    if (result_6 s< 0 || result_6 s>= 0x3e8)
        result_6 = nullptr
    
    void* eax_67 = result_6 * 0x11
    void var_74
    sub_4d1c30(eax_67, (eax_67 << 2) + &data_12a705c, &var_74, 0x44)
    void* result_7
    void* result_5 = result_7
    
    if (result_2 s> 0xffffffff)
        result_5 = result_2
    
    void* result_8 = result_5
    result = sub_4fcca0(result_5, &var_74, &var_2c, var_12a4, result_3, var_12bc, result_1, 1, 1)

sub_5f02dd(entry_ebx ^ &__saved_ebp)
return result

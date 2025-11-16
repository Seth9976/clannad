// 函数: sub_4fc3a0
// 地址: 0x4fc3a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_18
int32_t var_14
bool cond:0_1

switch (data_1bfdd30)
    case 0, 1, 2, 3
        int32_t eax_1 = 0xffffffff
        int32_t var_10_1 = 0x64
        int32_t ecx = 0xffffffff
        int32_t edi_1 = 0xffffffff
        int32_t ebx_1 = 0xffffffff
        int32_t var_c_1
        int32_t var_8_1
        int32_t edx_1
        
        if (data_1af4e84 u> 3)
            var_c_1 = var_14
            edx_1 = var_14
            var_8_1 = var_14
        else
            switch (data_1af4e84)
                case 0
                    sub_4ef190(0xffffffff, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                    edx_1 = data_1b8a734
                    var_c_1 = data_1b8a720
                    var_8_1 = data_1b8a748
                    eax_1 = 0xffffffff
                    ecx = 0xffffffff
                case 1
                    sub_4ef190(0xffffffff, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720)
                    edx_1 = data_1b8a734
                    var_c_1 = data_1b8a720
                    var_8_1 = data_1b8a748
                    var_10_1 = data_1b8a75c
                    eax_1 = 0xffffffff
                    ecx = 0xffffffff
                case 2
                    sub_4ef190(0xffffffff, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", &data_1b8a720)
                    int32_t esi_2 = data_1bfdd30
                    eax_1 = data_1b8a720
                    ecx = data_1b8a734
                    edi_1 = data_1b8a748
                    ebx_1 = data_1b8a75c
                    
                    if (esi_2 == 1 || esi_2 == 3)
                        edi_1 = edi_1 - 1 + eax_1
                        ebx_1 = ebx_1 - 1 + ecx
                    
                    var_c_1 = data_1b8a770
                    edx_1 = data_1b8a784
                    var_8_1 = data_1b8a798
                case 3
                    sub_4ef190(0xffffffff, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", &data_1b8a720)
                    int32_t esi_4 = data_1bfdd30
                    eax_1 = data_1b8a720
                    ecx = data_1b8a734
                    edi_1 = data_1b8a748
                    ebx_1 = data_1b8a75c
                    
                    if (esi_4 == 1 || esi_4 == 3)
                        edi_1 = edi_1 - 1 + eax_1
                        ebx_1 = ebx_1 - 1 + ecx
                    
                    var_8_1 = data_1b8a798
                    var_c_1 = data_1b8a770
                    edx_1 = data_1b8a784
                    var_10_1 = data_1b8a7ac
        
        int32_t esi_7 = data_1bfdd30
        sub_41ea60(eax_1, edx_1, var_c_1, var_8_1, eax_1, ecx, edi_1, ebx_1, 1, var_10_1, 0)
        
        if (esi_7 == 0)
            goto label_4fc56b
        
        cond:0_1 = esi_7 != 1
    case 0xa, 0xb, 0xc, 0xd
        int32_t eax_7 = 0xffffffff
        int32_t var_10_2 = 0x1f4
        int32_t ecx_10 = 0xffffffff
        int32_t edi_4 = 0xffffffff
        int32_t ebx_4 = 0xffffffff
        int32_t var_c_2
        int32_t var_8_2
        int32_t edx_9
        
        if (data_1af4e84 u> 3)
            var_8_2 = var_14
            edx_9 = var_14
            var_c_2 = var_14
        else
            switch (data_1af4e84)
                case 0
                    sub_4ef190(0xffffffff, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                    edx_9 = data_1b8a734
                    var_8_2 = data_1b8a720
                    var_c_2 = data_1b8a748
                    eax_7 = 0xffffffff
                    ecx_10 = 0xffffffff
                case 1
                    sub_4ef190(0xffffffff, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720)
                    edx_9 = data_1b8a734
                    var_8_2 = data_1b8a720
                    var_c_2 = data_1b8a748
                    var_10_2 = data_1b8a75c
                    eax_7 = 0xffffffff
                    ecx_10 = 0xffffffff
                case 2
                    sub_4ef190(0xffffffff, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", &data_1b8a720)
                    int32_t esi_9 = data_1bfdd30
                    eax_7 = data_1b8a720
                    ecx_10 = data_1b8a734
                    edi_4 = data_1b8a748
                    ebx_4 = data_1b8a75c
                    
                    if (esi_9 == 0xb || esi_9 == 0xd)
                        edi_4 = edi_4 - 1 + eax_7
                        ebx_4 = ebx_4 - 1 + ecx_10
                    
                    var_8_2 = data_1b8a770
                    edx_9 = data_1b8a784
                    var_c_2 = data_1b8a798
                case 3
                    sub_4ef190(0xffffffff, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", &data_1b8a720)
                    int32_t esi_11 = data_1bfdd30
                    eax_7 = data_1b8a720
                    ecx_10 = data_1b8a734
                    edi_4 = data_1b8a748
                    ebx_4 = data_1b8a75c
                    
                    if (esi_11 == 0xb || esi_11 == 0xd)
                        edi_4 = edi_4 - 1 + eax_7
                        ebx_4 = ebx_4 - 1 + ecx_10
                    
                    var_c_2 = data_1b8a798
                    var_8_2 = data_1b8a770
                    edx_9 = data_1b8a784
                    var_10_2 = data_1b8a7ac
        
        int32_t esi_14 = data_1bfdd30
        sub_41ea60(eax_7, edx_9, var_8_2, var_c_2, eax_7, ecx_10, edi_4, ebx_4, 1, 0x50, var_10_2)
        
        if (esi_14 == 0xa)
            goto label_4fc56b
        
        cond:0_1 = esi_14 != 0xb
    case 0x14, 0x15, 0x16, 0x17
        int32_t eax_13 = data_1af4e84
        int32_t ecx_20 = 0xffffffff
        int32_t edi_7 = 0xffffffff
        int32_t var_14_1 = 0xffffffff
        int32_t ebx_7 = 0xffffffff
        int32_t var_10_3 = 0x64
        int32_t var_c_3
        int32_t var_8_3
        int32_t eax_16
        int32_t edx_17
        int32_t esi_15
        
        if (eax_13 u> 3)
            eax_16 = var_18
            var_8_3 = 0xffffffff
            edx_17 = 0xffffffff
            var_c_3 = 0xffffffff
            esi_15 = data_1bfdd30
        else
            switch (eax_13)
                case 0
                    sub_4ef190(eax_13, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720)
                    edx_17 = data_1b8a734
                    ecx_20 = 0xffffffff
                    var_8_3 = data_1b8a720
                    var_c_3 = data_1b8a748
                    eax_16 = data_1b8a75c
                    esi_15 = data_1bfdd30
                case 1
                    sub_4ef190(eax_13, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", &data_1b8a720)
                    edx_17 = data_1b8a734
                    var_8_3 = data_1b8a720
                    var_c_3 = data_1b8a748
                    eax_16 = data_1b8a75c
                    var_10_3 = data_1b8a770
                    ecx_20 = 0xffffffff
                    esi_15 = data_1bfdd30
                case 2
                    sub_4ef190(eax_13, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", &data_1b8a720)
                    esi_15 = data_1bfdd30
                    int32_t eax_19 = data_1b8a720
                    ecx_20 = data_1b8a734
                    edi_7 = data_1b8a748
                    ebx_7 = data_1b8a75c
                    var_14_1 = eax_19
                    
                    if (esi_15 == 0x15 || esi_15 == 0x17)
                        edi_7 = edi_7 - 1 + eax_19
                        ebx_7 = ebx_7 - 1 + ecx_20
                    
                    edx_17 = data_1b8a784
                    var_8_3 = data_1b8a770
                    var_c_3 = data_1b8a798
                    eax_16 = data_1b8a7ac
                case 3
                    sub_4ef190(eax_13, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$", &data_1b8a720)
                    int32_t esi_16 = data_1bfdd30
                    int32_t eax_22 = data_1b8a720
                    ecx_20 = data_1b8a734
                    edi_7 = data_1b8a748
                    ebx_7 = data_1b8a75c
                    var_14_1 = eax_22
                    
                    if (esi_16 == 0x15 || esi_16 == 0x17)
                        edi_7 = edi_7 - 1 + eax_22
                        ebx_7 = ebx_7 - 1 + ecx_20
                    
                    edx_17 = data_1b8a784
                    var_8_3 = data_1b8a770
                    var_c_3 = data_1b8a798
                    eax_16 = data_1b8a7ac
                    var_10_3 = data_1b8a7c0
                    esi_15 = data_1bfdd30
        
        if (eax_16 s<= 0)
            eax_16 = 1
        
        sub_41ea60(eax_16, edx_17, var_8_3, var_c_3, var_14_1, ecx_20, edi_7, ebx_7, eax_16, 
            var_10_3, 0)
        
        if (esi_15 == 0x14)
            goto label_4fc56b
        
        cond:0_1 = esi_15 != 0x15
    case 0x1e, 0x1f, 0x20, 0x21
        int32_t eax_25 = data_1af4e84
        int32_t ecx_31 = 0xffffffff
        int32_t edi_10 = 0xffffffff
        int32_t var_10_4 = 0xffffffff
        int32_t ebx_10 = 0xffffffff
        int32_t var_14_2 = 0x1f4
        int32_t var_c_4
        int32_t var_8_4
        int32_t eax_28
        int32_t edx_22
        int32_t esi_18
        
        if (eax_25 u> 3)
            eax_28 = var_18
            var_8_4 = 0x1f4
            edx_22 = 0x1f4
            var_c_4 = 0x1f4
            esi_18 = data_1bfdd30
        else
            switch (eax_25)
                case 0
                    sub_4ef190(eax_25, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720)
                    edx_22 = data_1b8a734
                    ecx_31 = 0xffffffff
                    var_8_4 = data_1b8a720
                    var_c_4 = data_1b8a748
                    eax_28 = data_1b8a75c
                    esi_18 = data_1bfdd30
                case 1
                    sub_4ef190(eax_25, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", &data_1b8a720)
                    edx_22 = data_1b8a734
                    var_8_4 = data_1b8a720
                    var_c_4 = data_1b8a748
                    eax_28 = data_1b8a75c
                    var_14_2 = data_1b8a770
                    ecx_31 = 0xffffffff
                    esi_18 = data_1bfdd30
                case 2
                    sub_4ef190(eax_25, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", &data_1b8a720)
                    esi_18 = data_1bfdd30
                    int32_t eax_31 = data_1b8a720
                    ecx_31 = data_1b8a734
                    edi_10 = data_1b8a748
                    ebx_10 = data_1b8a75c
                    var_10_4 = eax_31
                    
                    if (esi_18 == 0x15 || esi_18 == 0x17)
                        edi_10 = edi_10 - 1 + eax_31
                        ebx_10 = ebx_10 - 1 + ecx_31
                    
                    edx_22 = data_1b8a784
                    var_8_4 = data_1b8a770
                    var_c_4 = data_1b8a798
                    eax_28 = data_1b8a7ac
                case 3
                    sub_4ef190(eax_25, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$", &data_1b8a720)
                    int32_t esi_19 = data_1bfdd30
                    int32_t eax_34 = data_1b8a720
                    ecx_31 = data_1b8a734
                    edi_10 = data_1b8a748
                    ebx_10 = data_1b8a75c
                    var_10_4 = eax_34
                    
                    if (esi_19 == 0x15 || esi_19 == 0x17)
                        edi_10 = edi_10 - 1 + eax_34
                        ebx_10 = ebx_10 - 1 + ecx_31
                    
                    edx_22 = data_1b8a784
                    var_8_4 = data_1b8a770
                    var_c_4 = data_1b8a798
                    eax_28 = data_1b8a7ac
                    var_14_2 = data_1b8a7c0
                    esi_18 = data_1bfdd30
        
        if (eax_28 s<= 0)
            eax_28 = 1
        
        sub_41ea60(eax_28, edx_22, var_8_4, var_c_4, var_10_4, ecx_31, edi_10, ebx_10, eax_28, 
            0x50, var_14_2)
        
        if (esi_18 == 0x1e)
            goto label_4fc56b
        
        cond:0_1 = esi_18 != 0x1f
    case 0x64, 0x6e
        data_1356ed8 = 0
        return 
    case 0x65, 0x6f
        if (data_1356ed8 == 0)
            return 
        
    label_4fc56b:
        data_71929c = 0x36
        data_7192a0 = 0
        data_7192e0 = 0
        return 
    case 0x66, 0x70
        int32_t eax_37
        eax_37.b = data_1356ed8 != 0
        data_715e98 = eax_37
        return 
    default
        data_1b8b06c = 1
        return 

if (cond:0_1)
    return 

goto label_4fc56b

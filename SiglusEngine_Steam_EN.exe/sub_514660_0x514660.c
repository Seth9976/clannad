// 函数: sub_514660
// 地址: 0x514660
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_1bfdd30
int32_t edi = 0
int32_t var_18 = 0
int32_t var_c = 0
int32_t var_10 = 0
int32_t result
int32_t var_14

if (eax s> 0x44c)
    if (eax == 0x44d)
        char** eax_34 = data_1af4e84
        
        switch (eax_34)
            case nullptr
                sub_4ef190(eax_34, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                data_1b8a770 = data_70300c
                eax_34 = data_7030dc
                data_1b8a748 = 0
                data_1b8a75c = 0
                data_1b8a784 = eax_34
            label_515124:
                data_1b8a798 = 0
                data_1b8a7ac = 0
                data_1b8a7c0 = 0
                data_1b8a7d4 = 0
                data_1b8a7e8 = 0
            case 1
                eax_34 = sub_4ef190(eax_34, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", &data_1b8a720)
                goto label_515124
            case 2
                eax_34 = sub_4ef190(eax_34, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", &data_1b8a720)
                data_1b8a7ac = 0
                data_1b8a7c0 = 0
                data_1b8a7d4 = 0
                data_1b8a7e8 = 0
                var_18 = 1
            case 3
                eax_34 = sub_4ef190(eax_34, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$", &data_1b8a720)
                data_1b8a7d4 = 0
                data_1b8a7e8 = 0
                var_c = 1
                var_18 = 1
            case 4
                eax_34 =
                    sub_4ef190(eax_34, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$$", &data_1b8a720)
                var_10 = 1
                var_c = 1
                var_18 = 1
        
        sub_477440(eax_34, arg3, data_1b8a720, data_1b8a734, 3)
        enum MESSAGEBOX_RESULT ecx_96 = data_1b8a75c
        enum MESSAGEBOX_RESULT esi_8 = data_1b8a748
        enum MESSAGEBOX_RESULT eax_38 = data_1b8a784 - 1 + ecx_96
        enum MESSAGEBOX_RESULT edx_61 = data_1b8a770 - 1 + esi_8
        data_1b8a784 = eax_38
        int32_t ecx_97 = data_1b8a720
        enum MESSAGEBOX_RESULT var_44_6 = data_1b8a734
        data_1b8a770 = edx_61
        return sub_5145a0(
            sub_47f210(eax_38, arg3, ecx_97, var_44_6, esi_8, ecx_96, edx_61, eax_38), arg3, 
            data_1b8a720, data_1b8a734, var_18, data_1b8a798, var_c, data_1b8a7ac, data_1b8a7c0, 
            var_10, data_1b8a7d4, data_1b8a7e8)
    
    if (eax == 0x4b0)
        char** eax_30 = data_1af4e84
        
        switch (eax_30)
            case nullptr
                eax_30 = sub_4ef190(eax_30, arg2 + 0x20, *(arg2 + 0x20), "$$S", &data_1b8a720)
                data_1b8a75c = 0
                data_1b8a770 = 0
                data_1b8a784 = 0
                data_1b8a798 = 0
                data_1b8a7ac = 0
            case 1
                eax_30 = sub_4ef190(eax_30, arg2 + 0x20, *(arg2 + 0x20), "$$S$", &data_1b8a720)
                data_1b8a770 = 0
                data_1b8a784 = 0
                data_1b8a798 = 0
                data_1b8a7ac = 0
                edi = 1
            case 2
                eax_30 = sub_4ef190(eax_30, arg2 + 0x20, *(arg2 + 0x20), "$$S$$$", &data_1b8a720)
                data_1b8a798 = 0
                data_1b8a7ac = 0
                edi = 1
                var_c = 1
            case 3
                eax_30 = sub_4ef190(eax_30, arg2 + 0x20, *(arg2 + 0x20), "$$S$$$$$", &data_1b8a720)
                edi = 1
                var_10 = 1
                var_c = 1
        
        return sub_5145a0(
            sub_47f580(sub_477440(eax_30, arg3, data_1b8a720, data_1b8a734, 4), arg3, data_1b8a720, 
                data_1b8a734, data_1b8a750), 
            arg3, data_1b8a720, data_1b8a734, edi, data_1b8a75c, var_c, data_1b8a770, data_1b8a784, 
            var_10, data_1b8a798, data_1b8a7ac)
    
    result = eax - 0x578
    
    if (eax == 0x578)
        int32_t eax_26 = data_1af4e84
        
        switch (eax_26)
            case 0
                sub_4ef190(eax_26, arg2 + 0x20, *(arg2 + 0x20), "$$S", &data_1b8a720)
                data_1b8a75c = 0
                data_1b8a770 = 0
                data_1b8a784 = 0
                data_1b8a798 = 0
                data_1b8a7ac = 0
            case 1
                sub_4ef190(eax_26, arg2 + 0x20, *(arg2 + 0x20), "$$S$", &data_1b8a720)
                data_1b8a770 = 0
                data_1b8a784 = 0
                data_1b8a798 = 0
                data_1b8a7ac = 0
                edi = 1
            case 2
                sub_4ef190(eax_26, arg2 + 0x20, *(arg2 + 0x20), "$$S$$$", &data_1b8a720)
                data_1b8a798 = 0
                data_1b8a7ac = 0
                edi = 1
                var_c = 1
            case 3
                sub_4ef190(eax_26, arg2 + 0x20, *(arg2 + 0x20), "$$S$$$$$$", &data_1b8a720)
                edi = 1
                var_10 = 1
                var_c = 1
        
        char* ecx_70 = data_1b8a750
        int32_t eax_27 = 0xffffffff
        var_14 = 0xffffffff
        char* ecx_71
        
        if (ecx_70 == 0 || *ecx_70 == 0x3f)
            ecx_71 = nullptr
        else
            sub_542740(0xff, &var_14, ecx_70, 4, data_1b8a720)
            ecx_71 = data_1b8a750
            eax_27 = var_14
        
        return sub_5145a0(
            sub_477010(eax_27, arg3, data_1b8a720, data_1b8a734, 6, ecx_71, eax_27, nullptr, 
                nullptr), 
            arg3, data_1b8a720, data_1b8a734, edi, data_1b8a75c, var_c, data_1b8a770, data_1b8a784, 
            var_10, data_1b8a798, data_1b8a7ac)
else
    if (eax == 0x44c)
        char** eax_18 = data_1af4e84
        
        switch (eax_18)
            case nullptr
                sub_4ef190(eax_18, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                int32_t eax_20 = data_70300c - 1
                data_1b8a748 = 0
                data_1b8a770 = eax_20
                eax_18 = data_7030dc - 1
                data_1b8a75c = 0
                data_1b8a784 = eax_18
                data_1b8a798 = 0
                data_1b8a7ac = 0
                data_1b8a7c0 = 0
                data_1b8a7d4 = 0
                data_1b8a7e8 = 0
            case 1
                eax_18 = sub_4ef190(eax_18, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", &data_1b8a720)
                data_1b8a798 = 0
                data_1b8a7ac = 0
                data_1b8a7c0 = 0
                data_1b8a7d4 = 0
                data_1b8a7e8 = 0
            case 2
                eax_18 = sub_4ef190(eax_18, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", &data_1b8a720)
                data_1b8a7ac = 0
                data_1b8a7c0 = 0
                data_1b8a7d4 = 0
                data_1b8a7e8 = 0
                edi = 1
            case 3
                eax_18 = sub_4ef190(eax_18, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$", &data_1b8a720)
                data_1b8a7d4 = 0
                data_1b8a7e8 = 0
                edi = 1
                var_c = 1
            case 4
                eax_18 =
                    sub_4ef190(eax_18, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$$", &data_1b8a720)
                edi = 1
                var_10 = 1
                var_c = 1
        
        return sub_5145a0(
            sub_47f210(sub_477440(eax_18, arg3, data_1b8a720, data_1b8a734, 3), arg3, data_1b8a720, 
                data_1b8a734, data_1b8a748, data_1b8a75c, data_1b8a770, data_1b8a784), 
            arg3, data_1b8a720, data_1b8a734, edi, data_1b8a798, var_c, data_1b8a7ac, data_1b8a7c0, 
            var_10, data_1b8a7d4, data_1b8a7e8)
    
    result = eax - 0x3e8
    
    switch (result)
        case 0
            int32_t eax_1 = data_1af4e84
            
            switch (eax_1)
                case 0
                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$S", &data_1b8a720)
                    data_1b8a75c = 0
                    data_1b8a770 = 0
                    data_1b8a784 = 0
                    data_1b8a798 = 0
                    data_1b8a7ac = 0
                    data_1b8a7c0 = 0
                case 1
                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$S$", &data_1b8a720)
                    data_1b8a770 = 0
                    data_1b8a784 = 0
                    data_1b8a798 = 0
                    data_1b8a7ac = 0
                    data_1b8a7c0 = 0
                    edi = 1
                case 2
                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$S$$$", &data_1b8a720)
                    data_1b8a798 = 0
                label_514749:
                    data_1b8a7ac = 0
                    data_1b8a7c0 = 0
                    edi = 1
                    var_c = 1
                case 3
                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$S$$$$", &data_1b8a720)
                    goto label_514749
                case 4
                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$S$$$$$$", &data_1b8a720)
                    edi = 1
                    var_10 = 1
                    var_c = 1
            
            char* ecx_11 = data_1b8a750
            int32_t eax_2 = 0xffffffff
            var_14 = 0xffffffff
            char* ecx_12
            
            if (ecx_11 == 0 || *ecx_11 == 0x3f)
                ecx_12 = nullptr
            else
                sub_542740(0xff, &var_14, ecx_11, 4, data_1b8a720)
                ecx_12 = data_1b8a750
                eax_2 = var_14
            
            return sub_5145a0(
                sub_479410(
                    sub_477010(eax_2, arg3, data_1b8a720, data_1b8a734, 0, ecx_12, eax_2, nullptr, 
                        nullptr), 
                    arg3, data_1b8a720, data_1b8a734, data_1b8a798), 
                arg3, data_1b8a720, data_1b8a734, edi, data_1b8a75c, var_c, data_1b8a770, 
                data_1b8a784, var_10, data_1b8a7ac, data_1b8a7c0)
        case 1
            sub_4ef190(result, arg2 + 0x20, *(arg2 + 0x20), "$$S", &data_1b8a720)
            char* ecx_47 = data_1b8a750
            int32_t eax_16 = 0xffffffff
            var_14 = 0xffffffff
            void* ecx_48
            
            if (ecx_47 == 0 || *ecx_47 == 0x3f)
                ecx_48 = nullptr
            else
                sub_542740(0xff, &var_14, ecx_47, 4, data_1b8a720)
                ecx_48 = data_1b8a750
                eax_16 = var_14
            
            return sub_4774d0(eax_16, arg3, data_1b8a720, data_1b8a734, ecx_48, eax_16)
        case 3
            int32_t eax_6 = data_1af4e84
            
            switch (eax_6)
                case 0
                    sub_4ef190(eax_6, arg2 + 0x20, *(arg2 + 0x20), "$$SS", &data_1b8a720)
                    data_1b8a770 = 0
                    data_1b8a784 = 0
                    data_1b8a798 = 0
                    data_1b8a7ac = 0
                    data_1b8a7c0 = 0
                    data_1b8a7d4 = 0
                case 1
                    sub_4ef190(eax_6, arg2 + 0x20, *(arg2 + 0x20), "$$SS$", &data_1b8a720)
                    data_1b8a784 = 0
                    data_1b8a798 = 0
                    data_1b8a7ac = 0
                    data_1b8a7c0 = 0
                    data_1b8a7d4 = 0
                    edi = 1
                case 2
                    sub_4ef190(eax_6, arg2 + 0x20, *(arg2 + 0x20), "$$SS$$$", &data_1b8a720)
                    data_1b8a7ac = 0
                label_5148f3:
                    data_1b8a7c0 = 0
                    data_1b8a7d4 = 0
                    edi = 1
                    var_c = 1
                case 3
                    sub_4ef190(eax_6, arg2 + 0x20, *(arg2 + 0x20), "$$SS$$$$", &data_1b8a720)
                    goto label_5148f3
                case 4
                    sub_4ef190(eax_6, arg2 + 0x20, *(arg2 + 0x20), "$$SS$$$$$$", &data_1b8a720)
                    edi = 1
                    var_10 = 1
                    var_c = 1
            
            char* edx_15 = data_1b8a764
            int32_t var_18_1 = 0xffffffff
            var_14 = 0xffffffff
            
            if (edx_15 != 0 && *edx_15 != 0x3f)
                sub_542740(0xff, &var_14, data_1b8a764, 4, data_1b8a720)
                edx_15 = data_1b8a764
                var_18_1 = var_14
            
            char* ecx_27 = data_1b8a750
            char* esi_2
            
            if (ecx_27 != 0 && *ecx_27 != 0x3f)
                esi_2 = ecx_27
                var_14 = 0xffffffff
            
            int32_t esi_3
            
            if (ecx_27 == 0 || *ecx_27 == 0x3f || esi_2 == 0 || *esi_2 == 0)
            label_5149c1:
                esi_3 = var_18_1
            else
                while (true)
                    int32_t eax_7
                    eax_7.b = *esi_2
                    
                    if (eax_7.b u< 0x80)
                    label_5149b7:
                        
                        if (eax_7.b == 0x3f)
                            sub_542610(&esi_2[1], &var_14)
                            bool cond:1_1 = var_14 != 0xffffffff
                            *esi_2 = 0
                            esi_3 = var_18_1
                            
                            if (cond:1_1)
                                esi_3 = var_14
                            
                            edx_15 = data_1b8a764
                            ecx_27 = data_1b8a750
                            break
                        
                        esi_2 = &esi_2[1]
                    else if (eax_7.b u< 0xa0)
                        if (eax_7.b u>= 0xfe)
                            goto label_5149b7
                        
                        esi_2 = &esi_2[2]
                    else
                        if (eax_7.b u<= 0xdf || eax_7.b u>= 0xfe)
                            goto label_5149b7
                        
                        esi_2 = &esi_2[2]
                    
                    if (*esi_2 == 0)
                        goto label_5149c1
            
            char* eax_8 = nullptr
            
            if (edx_15 == 0 || *edx_15 == 0x3f)
                edx_15 = nullptr
                
                if (ecx_27 != 0 && *ecx_27 != 0x3f)
                    eax_8 = ecx_27
            else if (ecx_27 != 0)
                eax_8 = ecx_27
            
            return sub_5145a0(
                sub_479410(
                    sub_477010(eax_8, arg3, data_1b8a720, data_1b8a734, 0, eax_8, esi_3, edx_15, 
                        nullptr), 
                    arg3, data_1b8a720, data_1b8a734, data_1b8a7ac), 
                arg3, data_1b8a720, data_1b8a734, edi, data_1b8a770, var_c, data_1b8a784, 
                data_1b8a798, var_10, data_1b8a7c0, data_1b8a7d4)
        case 5
            char** eax_12 = data_1af4e84
            
            switch (eax_12)
                case nullptr
                    eax_12 = sub_4ef190(eax_12, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                    data_1b8a75c = 0
                    data_1b8a770 = 0
                    data_1b8a784 = 0
                    data_1b8a798 = 0
                    data_1b8a7ac = 0
                    data_1b8a7c0 = 0
                case 1
                    eax_12 = sub_4ef190(eax_12, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720)
                    data_1b8a770 = 0
                    data_1b8a784 = 0
                    data_1b8a798 = 0
                    data_1b8a7ac = 0
                    data_1b8a7c0 = 0
                    edi = 1
                case 2
                    eax_12 =
                        sub_4ef190(eax_12, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", &data_1b8a720)
                    data_1b8a798 = 0
                label_514b2f:
                    data_1b8a7ac = 0
                    data_1b8a7c0 = 0
                    edi = 1
                    var_c = 1
                case 3
                    eax_12 =
                        sub_4ef190(eax_12, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", &data_1b8a720)
                    goto label_514b2f
                case 4
                    eax_12 =
                        sub_4ef190(eax_12, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$", &data_1b8a720)
                    edi = 1
                    var_10 = 1
                    var_c = 1
            
            return sub_5145a0(
                sub_479410(sub_477370(eax_12, arg3, data_1b8a720, data_1b8a734, 9, data_1b8a748), 
                    arg3, data_1b8a720, data_1b8a734, data_1b8a798), 
                arg3, data_1b8a720, data_1b8a734, edi, data_1b8a75c, var_c, data_1b8a770, 
                data_1b8a784, var_10, data_1b8a7ac, data_1b8a7c0)
data_1b8b06c = 1
return result

// 函数: sub_4ffa50
// 地址: 0x4ffa50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_1bfdd30
int32_t esi = 0
int32_t edi = 0
int32_t var_c = 0
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_18 = 0
int32_t var_30_2
void* var_2c_5
int32_t var_1c
void* eax_7
int32_t ecx
int32_t edx_11

if (eax s> 0x44c)
    if (eax s> 0x514)
        if (eax != 0x578)
            if (eax != 0x5dc)
                data_1b8b06c = 1
                return eax - 0x5dc
            
            int32_t eax_40 = data_1af4e84
            
            switch (eax_40)
                case 0
                    sub_4ef190(eax_40, arg2 + 0x20, *(arg2 + 0x20), "$$SS", &data_1b8a720)
                    data_1b8a770 = 0
                    data_1b8a784 = 0
                    data_1b8a798 = 0
                    data_1b8a7ac = 0
                    data_1b8a7c0 = 0
                    data_1b8a7d4 = 0
                case 1
                    sub_4ef190(eax_40, arg2 + 0x20, *(arg2 + 0x20), "$$SS$", &data_1b8a720)
                    data_1b8a784 = 0
                    edi = 1
                    data_1b8a798 = 0
                    data_1b8a7ac = 0
                    data_1b8a7c0 = 0
                    data_1b8a7d4 = 0
                case 2
                    sub_4ef190(eax_40, arg2 + 0x20, *(arg2 + 0x20), "$$SS$$$", &data_1b8a720)
                    data_1b8a7ac = 0
                label_50080d:
                    data_1b8a7c0 = 0
                    edi = 1
                    data_1b8a7d4 = 0
                    var_c = 1
                case 3
                    sub_4ef190(eax_40, arg2 + 0x20, *(arg2 + 0x20), "$$SS$$$$", &data_1b8a720)
                    goto label_50080d
                case 4
                    sub_4ef190(eax_40, arg2 + 0x20, *(arg2 + 0x20), "$$SS$$$$$$", &data_1b8a720)
                    edi = 1
                    var_10 = 1
                    var_c = 1
            
            char* edx_73 = data_1b8a764
            int32_t var_18_1 = 0xffffffff
            var_14 = 0xffffffff
            
            if (edx_73 != 0 && *edx_73 != 0x3f)
                sub_542740(0xff, &var_14, data_1b8a764, 4, data_1b8a720)
                edx_73 = data_1b8a764
                var_18_1 = var_14
            
            char* ecx_112 = data_1b8a750
            char* esi_9
            
            if (ecx_112 != 0 && *ecx_112 != 0x3f)
                esi_9 = ecx_112
                var_1c = 0xffffffff
            
            int32_t esi_10
            
            if (ecx_112 == 0 || *ecx_112 == 0x3f || esi_9 == 0 || *esi_9 == 0)
            label_5008e1:
                esi_10 = var_18_1
            else
                while (true)
                    int32_t eax_41
                    eax_41.b = *esi_9
                    
                    if (eax_41.b u< 0x80)
                    label_5008d7:
                        
                        if (eax_41.b == 0x3f)
                            sub_542610(&esi_9[1], &var_1c)
                            bool cond:3_1 = var_1c != 0xffffffff
                            *esi_9 = 0
                            esi_10 = var_18_1
                            
                            if (cond:3_1)
                                esi_10 = var_1c
                            
                            edx_73 = data_1b8a764
                            ecx_112 = data_1b8a750
                            break
                        
                        esi_9 = &esi_9[1]
                    else if (eax_41.b u< 0xa0)
                        if (eax_41.b u>= 0xfe)
                            goto label_5008d7
                        
                        esi_9 = &esi_9[2]
                    else
                        if (eax_41.b u<= 0xdf || eax_41.b u>= 0xfe)
                            goto label_5008d7
                        
                        esi_9 = &esi_9[2]
                    
                    if (*esi_9 == 0)
                        goto label_5008e1
            
            char* eax_42 = nullptr
            
            if (edx_73 == 0 || *edx_73 == 0x3f)
                edx_73 = nullptr
                
                if (ecx_112 != 0 && *ecx_112 != 0x3f)
                    eax_42 = ecx_112
            else if (ecx_112 != 0)
                eax_42 = ecx_112
            
            char* var_2c_20 = ecx_112
            sub_464a10(eax_42, arg3, data_1b8a720, 8, eax_42, esi_10, edx_73, nullptr, 0)
            void* eax_43 = data_1b8a734
            
            if (eax_43 s<= 0)
                eax_43 = 1
            else if (eax_43 s> 0x3e8)
                eax_43 = 0x3e8
            
            int32_t ecx_115 = data_1b8a720
            data_1b8a734 = eax_43
            return sub_4ff950(
                sub_468600(sub_467a80(eax_43, arg3, ecx_115, eax_43), arg3, data_1b8a720, 
                    data_1b8a7ac), 
                arg3, data_1b8a720, edi, data_1b8a770, var_c, data_1b8a784, data_1b8a798, var_10, 
                data_1b8a7c0, data_1b8a7d4)
        
        char** eax_45 = data_1af4e84
        
        switch (eax_45)
            case nullptr
                eax_45 = sub_4ef190(eax_45, arg2 + 0x20, *(arg2 + 0x20), "$S", &data_1b8a720)
                data_1b8a748 = 0
                data_1b8a75c = 0
                data_1b8a770 = 0
                data_1b8a784 = 0
                data_1b8a798 = 0
            case 1
                eax_45 = sub_4ef190(eax_45, arg2 + 0x20, *(arg2 + 0x20), "$S$", &data_1b8a720)
                data_1b8a75c = 0
                edi = 1
                data_1b8a770 = 0
                data_1b8a784 = 0
                data_1b8a798 = 0
            case 2
                eax_45 = sub_4ef190(eax_45, arg2 + 0x20, *(arg2 + 0x20), "$S$$$", &data_1b8a720)
                data_1b8a784 = 0
                edi = 1
                data_1b8a798 = 0
                var_c = 1
            case 3
                eax_45 = sub_4ef190(eax_45, arg2 + 0x20, *(arg2 + 0x20), "$S$$$$$$", &data_1b8a720)
                edi = 1
                var_10 = 1
                var_c = 1
        
        int32_t var_2c_23 = data_1b8a720
        char* ecx_125 = data_1b8a73c
        var_14 = 0xffffffff
        eax_7 = sub_464a10(sub_542740(eax_45.b, &var_14, ecx_125, 4, var_2c_23), arg3, 
            data_1b8a720, 6, data_1b8a73c, var_14, nullptr, nullptr, 0)
        edx_11 = arg3
    else
        if (eax == 0x514)
            char** eax_35 = data_1af4e84
            
            switch (eax_35)
                case nullptr
                    eax_35 = sub_4ef190(eax_35, arg2 + 0x20, *(arg2 + 0x20), "$S", &data_1b8a720)
                    data_1b8a748 = 0
                    data_1b8a75c = 0
                    data_1b8a770 = 0
                    data_1b8a784 = 0
                    data_1b8a798 = 0
                case 1
                    eax_35 = sub_4ef190(eax_35, arg2 + 0x20, *(arg2 + 0x20), "$S$", &data_1b8a720)
                    data_1b8a75c = 0
                    edi = 1
                    data_1b8a770 = 0
                    data_1b8a784 = 0
                    data_1b8a798 = 0
                case 2
                    eax_35 = sub_4ef190(eax_35, arg2 + 0x20, *(arg2 + 0x20), "$S$$$", &data_1b8a720)
                    data_1b8a784 = 0
                    edi = 1
                    data_1b8a798 = 0
                    var_c = 1
                case 3
                    eax_35 =
                        sub_4ef190(eax_35, arg2 + 0x20, *(arg2 + 0x20), "$S$$$$$$", &data_1b8a720)
                    edi = 1
                    var_10 = 1
                    var_c = 1
            
            int32_t var_2c_17 = data_1b8a720
            char* ecx_97 = data_1b8a73c
            var_14 = 0xffffffff
            sub_4ff950(
                sub_464a10(sub_542740(eax_35.b, &var_14, ecx_97, 4, var_2c_17), arg3, data_1b8a720, 
                    5, data_1b8a73c, var_14, nullptr, nullptr, 0), 
                arg3, data_1b8a720, edi, data_1b8a748, var_c, data_1b8a75c, data_1b8a770, var_10, 
                data_1b8a784, data_1b8a798)
            return sub_46ce60(data_1b8a720, arg3)
        
        if (eax == 0x44d)
            char** eax_28 = data_1af4e84
            
            switch (eax_28)
                case nullptr
                    ecx = sub_4ef190(eax_28, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                    data_1b8a75c = data_70300c
                    eax_28 = data_7030dc
                    data_1b8a734 = 0
                    data_1b8a748 = 0
                    data_1b8a770 = eax_28
                label_50049e:
                    data_1b8a784 = 0
                    data_1b8a798 = 0
                    data_1b8a7ac = 0
                    data_1b8a7c0 = 0
                    data_1b8a7d4 = 0
                case 1
                    eax_28, ecx =
                        sub_4ef190(eax_28, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", &data_1b8a720)
                    goto label_50049e
                case 2
                    eax_28, ecx =
                        sub_4ef190(eax_28, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", &data_1b8a720)
                    data_1b8a798 = 0
                    data_1b8a7ac = 0
                    data_1b8a7c0 = 0
                    data_1b8a7d4 = 0
                    var_14 = 1
                case 3
                    eax_28, ecx =
                        sub_4ef190(eax_28, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", &data_1b8a720)
                    data_1b8a7c0 = 0
                    data_1b8a7d4 = 0
                    var_c = 1
                    var_14 = 1
                case 4
                    eax_28, ecx =
                        sub_4ef190(eax_28, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$", &data_1b8a720)
                    var_10 = 1
                    var_c = 1
                    var_14 = 1
            
            int32_t var_2c_15 = ecx
            sub_464dd0(eax_28, arg3, data_1b8a720, 3, 0)
            int32_t ecx_86 = data_1b8a748
            int32_t esi_7 = data_1b8a734
            void* eax_32 = data_1b8a770 - 1 + ecx_86
            int32_t edx_56 = data_1b8a75c - 1 + esi_7
            data_1b8a770 = eax_32
            int32_t ecx_87 = data_1b8a720
            data_1b8a75c = edx_56
            return sub_4ff950(sub_46be20(eax_32, arg3, ecx_87, esi_7, ecx_86, edx_56, eax_32), 
                arg3, data_1b8a720, var_14, data_1b8a784, var_c, data_1b8a798, data_1b8a7ac, 
                var_10, data_1b8a7c0, data_1b8a7d4)
        
        if (eax != 0x4b0)
            data_1b8b06c = 1
            return eax - 0x4b0
        
        char** eax_26 = data_1af4e84
        
        switch (eax_26)
            case nullptr
                eax_26, ecx = sub_4ef190(eax_26, arg2 + 0x20, *(arg2 + 0x20), "$S", &data_1b8a720)
                data_1b8a748 = 0
                data_1b8a75c = 0
                data_1b8a770 = 0
                data_1b8a784 = 0
                data_1b8a798 = 0
            case 1
                eax_26, ecx = sub_4ef190(eax_26, arg2 + 0x20, *(arg2 + 0x20), "$S$", &data_1b8a720)
                data_1b8a75c = 0
                edi = 1
                data_1b8a770 = 0
                data_1b8a784 = 0
                data_1b8a798 = 0
            case 2
                eax_26, ecx =
                    sub_4ef190(eax_26, arg2 + 0x20, *(arg2 + 0x20), "$S$$$", &data_1b8a720)
                data_1b8a784 = 0
                edi = 1
                data_1b8a798 = 0
                var_c = 1
            case 3
                eax_26, ecx =
                    sub_4ef190(eax_26, arg2 + 0x20, *(arg2 + 0x20), "$S$$$$$", &data_1b8a720)
                edi = 1
                var_10 = 1
                var_c = 1
        
        int32_t var_2c_13 = ecx
        eax_7 = sub_46c040(sub_464dd0(eax_26, arg3, data_1b8a720, 4, 0), arg3, data_1b8a720, 
            data_1b8a73c)
        edx_11 = arg3
    
    var_2c_5 = data_1b8a798
    var_30_2 = data_1b8a784
label_500ad4:
    return sub_4ff950(eax_7, edx_11, data_1b8a720, edi, data_1b8a748, var_c, data_1b8a75c, 
        data_1b8a770, var_10, var_30_2, var_2c_5)

if (eax == 0x44c)
    char** eax_17 = data_1af4e84
    
    switch (eax_17)
        case nullptr
            sub_4ef190(eax_17, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            int32_t eax_19 = data_70300c - 1
            data_1b8a734 = 0
            data_1b8a75c = eax_19
            eax_17 = data_7030dc - 1
            data_1b8a748 = 0
            data_1b8a770 = eax_17
            data_1b8a784 = 0
            data_1b8a798 = 0
            data_1b8a7ac = 0
            data_1b8a7c0 = 0
            data_1b8a7d4 = 0
        case 1
            eax_17 = sub_4ef190(eax_17, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", &data_1b8a720)
            data_1b8a784 = 0
            data_1b8a798 = 0
            data_1b8a7ac = 0
            data_1b8a7c0 = 0
            data_1b8a7d4 = 0
        case 2
            eax_17 = sub_4ef190(eax_17, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", &data_1b8a720)
            data_1b8a798 = 0
            data_1b8a7ac = 0
            data_1b8a7c0 = 0
            data_1b8a7d4 = 0
            var_14 = 1
        case 3
            eax_17 = sub_4ef190(eax_17, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", &data_1b8a720)
            data_1b8a7c0 = 0
            data_1b8a7d4 = 0
            var_c = 1
            var_14 = 1
        case 4
            eax_17 = sub_4ef190(eax_17, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$", &data_1b8a720)
            var_10 = 1
            var_c = 1
            var_14 = 1
    
    int32_t ecx_63 = data_1b8a720
    
    if (ecx_63 s>= 0 && ecx_63 s< data_7031bc)
        int32_t eax_21 = arg3 + (ecx_63 << 1)
        sub_463970(eax_21, arg3, ecx_63, 0)
        ecx_63 = data_1b8a720
        eax_17 = *(eax_21 * 0x7a0 + 0x98c284) + 1
        *(eax_21 * 0x650 + 0x72d6b8) = 3
        *(eax_21 * 0x650 + &data_72d6bc) = 3
        *(eax_21 * 0x7a0 + &data_98c1f8) = eax_17
    
    return sub_4ff950(
        sub_46be20(eax_17, arg3, ecx_63, data_1b8a734, data_1b8a748, data_1b8a75c, data_1b8a770), 
        arg3, data_1b8a720, var_14, data_1b8a784, var_c, data_1b8a798, data_1b8a7ac, var_10, 
        data_1b8a7c0, data_1b8a7d4)

int32_t eax_1 = eax - 0x3e8

if (eax_1 u> 5)
    data_1b8b06c = 1
    return eax_1

int32_t eax_5

switch (eax_1)
    case 0, 2
        char** eax_2 = data_1af4e84
        
        switch (eax_2)
            case nullptr
                eax_2 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "$S", &data_1b8a720)
                data_1b8a748 = 0
                data_1b8a75c = 0
                data_1b8a770 = 0
                data_1b8a784 = 0
                data_1b8a798 = 0
                data_1b8a7ac = 0
            case 1
                eax_2 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "$S$", &data_1b8a720)
                data_1b8a75c = 0
                edi = 1
                data_1b8a770 = 0
                data_1b8a784 = 0
                data_1b8a798 = 0
                data_1b8a7ac = 0
            case 2
                eax_2 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "$S$$$", &data_1b8a720)
                edi = 1
                data_1b8a784 = 0
                data_1b8a798 = 0
                data_1b8a7ac = 0
                esi = 1
            case 3
                eax_2 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "$S$$$$", &data_1b8a720)
                edi = 1
                data_1b8a798 = 0
                data_1b8a7ac = 0
                esi = 1
                var_18 = 1
            case 4
                eax_2 = sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "$S$$$$$$", &data_1b8a720)
                edi = 1
                esi = 1
                var_10 = 1
                var_18 = 1
        
        int32_t var_2c_1 = data_1b8a720
        char* ecx_11 = data_1b8a73c
        var_14 = 0xffffffff
        int32_t* eax_4 = sub_464a10(sub_542740(eax_2.b, &var_14, ecx_11, 4, var_2c_1), arg3, 
            data_1b8a720, 0, data_1b8a73c, var_14, nullptr, nullptr, 0)
        void* ecx_13 = data_1b8a720
        
        if (data_1bfdd30 != 0x3ea)
            return sub_4ff950(sub_468600(eax_4, arg3, ecx_13, data_1b8a784), arg3, data_1b8a720, 
                edi, data_1b8a748, esi, data_1b8a75c, data_1b8a770, var_10, data_1b8a798, 
                data_1b8a7ac)
        
        eax_5 = sub_465400(eax_4, 1, ecx_13, ecx_13, 0, 1)
        
        if (var_18 != 0)
            eax_5 = sub_468600(eax_5, arg3, data_1b8a720, data_1b8a784)
        
        if (edi != 0)
            eax_5 = sub_46b4c0(eax_5, arg3, data_1b8a720, data_1b8a748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
                0, 0, 0, 0, 0, 0, 0)
        
        if (esi != 0)
            eax_5 = sub_468860(eax_5, arg3, data_1b8a720, data_1b8a75c, data_1b8a770, 0, 0, 0)
        
        if (var_10 != 0)
            return sub_4697a0(eax_5, arg3, data_1b8a720, data_1b8a798, data_1b8a7ac)
        
        return eax_5
    case 1
        char eax_12 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$S", &data_1b8a720)
        int32_t var_34_4 = data_1b8a720
        char* ecx_39 = data_1b8a73c
        var_14 = 0xffffffff
        return sub_464ee0(sub_542740(eax_12, &var_14, ecx_39, 4, var_34_4), arg3, data_1b8a720, 
            data_1b8a73c, var_14)
    case 3, 4
        char** eax_8 = data_1af4e84
        
        switch (eax_8)
            case nullptr
                eax_8 = sub_4ef190(eax_8, arg2 + 0x20, *(arg2 + 0x20), "$SS", &data_1b8a720)
                data_1b8a75c = 0
                data_1b8a770 = 0
                data_1b8a784 = 0
                data_1b8a798 = 0
                data_1b8a7ac = 0
                data_1b8a7c0 = 0
            case 1
                eax_8 = sub_4ef190(eax_8, arg2 + 0x20, *(arg2 + 0x20), "$SS$", &data_1b8a720)
                data_1b8a770 = 0
                edi = 1
                data_1b8a784 = 0
                data_1b8a798 = 0
                data_1b8a7ac = 0
                data_1b8a7c0 = 0
            case 2
                eax_8 = sub_4ef190(eax_8, arg2 + 0x20, *(arg2 + 0x20), "$SS$$$", &data_1b8a720)
                data_1b8a798 = 0
                edi = 1
                data_1b8a7ac = 0
                data_1b8a7c0 = 0
                var_c = 1
            case 3
                eax_8 = sub_4ef190(eax_8, arg2 + 0x20, *(arg2 + 0x20), "$SS$$$$", &data_1b8a720)
                data_1b8a7ac = 0
                edi = 1
                data_1b8a7c0 = 0
                var_18 = 1
                var_c = 1
            case 4
                eax_8 = sub_4ef190(eax_8, arg2 + 0x20, *(arg2 + 0x20), "$SS$$$$$$", &data_1b8a720)
                edi = 1
                var_10 = 1
                var_18 = 1
                var_c = 1
        
        int32_t var_2c_6 = data_1b8a720
        char* ecx_28 = data_1b8a750
        var_14 = 0xffffffff
        uint32_t eax_9 = sub_542740(eax_8.b, &var_14, ecx_28, 4, var_2c_6)
        char* edx_18 = data_1b8a73c
        char* esi_1
        
        if (edx_18 != 0 && *edx_18 != 0x3f)
            esi_1 = edx_18
            var_1c = 0xffffffff
        
        int32_t ecx_29
        
        if (edx_18 == 0 || *edx_18 == 0x3f || esi_1 == 0 || *esi_1 == 0)
        label_4ffe65:
            ecx_29 = var_14
        else
            while (true)
                eax_9.b = *esi_1
                
                if (eax_9.b u< 0x80)
                label_4ffe57:
                    
                    if (eax_9.b == 0x3f)
                        eax_9 = sub_542610(&esi_1[1], &var_1c)
                        ecx_29 = var_14
                        
                        if (var_1c != 0xffffffff)
                            ecx_29 = var_1c
                        
                        *esi_1 = 0
                        edx_18 = data_1b8a73c
                        break
                    
                    esi_1 = &esi_1[1]
                else if (eax_9.b u< 0xa0)
                    if (eax_9.b u>= 0xfe)
                        goto label_4ffe57
                    
                    esi_1 = &esi_1[2]
                else
                    if (eax_9.b u<= 0xdf || eax_9.b u>= 0xfe)
                        goto label_4ffe57
                    
                    esi_1 = &esi_1[2]
                
                if (*esi_1 == 0)
                    goto label_4ffe65
        
        int32_t var_2c_7 = ecx_29
        int32_t* eax_10 =
            sub_464a10(eax_9, arg3, data_1b8a720, 0, edx_18, ecx_29, data_1b8a750, nullptr, 0)
        void* ecx_31 = data_1b8a720
        
        if (data_1bfdd30 != 0x3ec)
            return sub_4ff950(sub_468600(eax_10, arg3, ecx_31, data_1b8a798), arg3, data_1b8a720, 
                edi, data_1b8a75c, var_c, data_1b8a770, data_1b8a784, var_10, data_1b8a7ac, 
                data_1b8a7c0)
        
        eax_5 = sub_465400(eax_10, 1, ecx_31, ecx_31, 0, 1)
        
        if (var_18 != 0)
            eax_5 = sub_468600(eax_5, arg3, data_1b8a720, data_1b8a798)
        
        if (edi != 0)
            eax_5 = sub_46b4c0(eax_5, arg3, data_1b8a720, data_1b8a75c, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
                0, 0, 0, 0, 0, 0, 0)
        
        if (var_c != 0)
            eax_5 = sub_468860(eax_5, arg3, data_1b8a720, data_1b8a770, data_1b8a784, 0, 0, 0)
        
        if (var_10 != 0)
            return sub_4697a0(eax_5, arg3, data_1b8a720, data_1b8a7ac, data_1b8a7c0)
        
        return eax_5
    case 5
        char** eax_15 = data_1af4e84
        
        switch (eax_15)
            case nullptr
                eax_15, ecx = sub_4ef190(eax_15, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                data_1b8a748 = 0
                data_1b8a75c = 0
                data_1b8a770 = 0
                data_1b8a784 = 0
                data_1b8a798 = 0
                data_1b8a7ac = 0
            case 1
                eax_15, ecx = sub_4ef190(eax_15, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                data_1b8a75c = 0
                edi = 1
                data_1b8a770 = 0
                data_1b8a784 = 0
                data_1b8a798 = 0
                data_1b8a7ac = 0
            case 2
                eax_15, ecx =
                    sub_4ef190(eax_15, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", &data_1b8a720)
                data_1b8a784 = 0
            label_5000b7:
                data_1b8a798 = 0
                edi = 1
                data_1b8a7ac = 0
                var_c = 1
            case 3
                eax_15, ecx =
                    sub_4ef190(eax_15, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", &data_1b8a720)
                goto label_5000b7
            case 4
                eax_15, ecx =
                    sub_4ef190(eax_15, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", &data_1b8a720)
                edi = 1
                var_10 = 1
                var_c = 1
        
        int32_t var_2c_11 = ecx
        edx_11 = arg3
        eax_7 = sub_468600(sub_464d10(eax_15, arg3, data_1b8a720, 9, data_1b8a734, 0), edx_11, 
            data_1b8a720, data_1b8a784)
        var_2c_5 = data_1b8a7ac
        var_30_2 = data_1b8a798
        goto label_500ad4

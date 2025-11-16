// 函数: sub_5153a0
// 地址: 0x5153a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
uint32_t eax = data_1bfdd30

if (eax s> 0x3e8)
    int32_t var_34_1
    int32_t var_30_5
    int32_t var_2c
    int32_t var_2c_1
    int32_t var_28
    int32_t var_28_5
    int32_t var_24
    int32_t var_24_1
    int32_t var_20_3
    int32_t var_20_8
    int32_t var_1c_10
    int32_t var_1c_11
    char** eax_27
    char** eax_37
    
    if (eax s<= 0x7d1)
        if (eax == 0x7d1)
            eax_27, arg3 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
            int32_t var_14_8 = 0
            int32_t var_18_7 = 0
            var_1c_10 = 0
            var_20_3 = arg3
            var_24 = 0
            var_28 = 0
            var_2c = data_1b8a748
        label_515764:
            return sub_477e80(eax_27, arg4, data_1b8a720, data_1b8a734, 5, arg3, var_2c, var_28, 
                var_24, var_20_3, var_1c_10)
        
        eax -= 0x3e9
        
        switch (eax)
            case 0
                eax_27, arg3 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                int32_t var_14_1 = 0
                int32_t var_18 = 0
                var_1c_10 = 0
                var_20_3 = arg3
                var_24 = 0
                goto label_51575c
            case 1
                char** eax_29
                int32_t ecx_67
                eax_29, ecx_67 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                int32_t var_14_2 = 0
                int32_t var_18_1 = 0
                return sub_477e80(eax_29, arg4, data_1b8a720, data_1b8a734, 7, ecx_67, 0x50, 
                    data_1b8a748, 0, ecx_67, 0)
            case 2
                char** eax_31
                int32_t ecx_72
                eax_31, ecx_72 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                int32_t var_14_3 = 0
                int32_t var_18_2 = 0
                return sub_477e80(eax_31, arg4, data_1b8a720, data_1b8a734, 4, ecx_72, 0x50, 
                    data_1b8a748, 0, ecx_72, 0)
            case 3
                char** eax_33
                int32_t ecx_77
                eax_33, ecx_77 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                int32_t var_14_4 = 0
                int32_t var_18_3 = 0
                return sub_477e80(eax_33, arg4, data_1b8a720, data_1b8a734, 6, ecx_77, 0x50, 
                    data_1b8a748, 0, ecx_77, 0)
            case 4
                char** eax_35
                int32_t ecx_82
                eax_35, ecx_82 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                int32_t var_14_5 = 0
                int32_t var_18_4 = 0
                return sub_477e80(eax_35, arg4, data_1b8a720, data_1b8a734, 8, ecx_82, 0x50, 
                    data_1b8a748, 0, ecx_82, 0)
            case 5
                eax_37, arg3 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                int32_t var_14_6 = 0
                int32_t var_18_5 = 0
                var_1c_11 = 0
                var_20_8 = arg3
                var_24_1 = 0
                goto label_5158c9
            case 6
                int32_t ecx_91
                eax_37, ecx_91 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                int32_t var_14_7 = 0
                int32_t var_18_6 = 0
                var_1c_11 = 0
                var_20_8 = ecx_91
                var_24_1 = 0
                var_28_5 = data_1b8a748
                var_2c_1 = 0x50
                var_30_5 = ecx_91
                var_34_1 = 8
            label_5158df:
                int32_t ecx_87 = data_1b8a720
                int32_t eax_38 = sub_477e80(eax_37, arg4, ecx_87, data_1b8a734, var_34_1, var_30_5, 
                    var_2c_1, var_28_5, var_24_1, var_20_8, var_1c_11)
                int32_t var_3c = data_1b8a734
                return sub_48cef0(eax_38, data_1b8a720, ecx_87, arg4)
    else if (eax s> 0xbb9)
        eax -= 0xbbb
        
        if (eax u<= 0x68)
            eax = zx.d(lookup_table_515d2c[eax])
            
            switch (eax)
                case 0
                    eax_27 = sub_515320(arg3, arg2)
                    int32_t var_14_16 = 0
                label_515aef:
                    int32_t var_18_15 = data_1b8a770
                    var_1c_10 = 0
                    goto label_515af7
                case 1
                    eax_27 = sub_515320(arg3, arg2)
                    int32_t var_14_17 = 0
                    int32_t var_18_16 = data_1b8a770
                    var_1c_10 = 0
                label_515b1d:
                    return sub_477e80(eax_27, arg4, data_1b8a720, data_1b8a734, 8, arg3, 0x50, 
                        data_1b8a748, data_1b8a75c, arg3, var_1c_10)
                case 2
                    eax_37 = sub_515320(arg3, arg2)
                    int32_t var_14_18 = 0
                    int32_t var_18_17 = data_1b8a770
                    var_1c_11 = 0
                    var_20_8 = arg3
                    var_24_1 = data_1b8a75c
                label_5158c9:
                    var_28_5 = data_1b8a748
                    var_2c_1 = 0x50
                label_5158d1:
                    var_30_5 = arg3
                    var_34_1 = 4
                    goto label_5158df
                case 3
                    eax_37 = sub_515320(arg3, arg2)
                    int32_t var_14_19 = 0
                    int32_t var_18_18 = data_1b8a770
                    var_1c_11 = 0
                label_515b5e:
                    var_20_8 = arg3
                    var_24_1 = data_1b8a75c
                    var_28_5 = data_1b8a748
                    var_2c_1 = 0x50
                    var_30_5 = arg3
                    var_34_1 = 8
                    goto label_5158df
                case 4
                    eax_27 = sub_515320(arg3, arg2)
                    int32_t var_14_20 = 1
                    goto label_515aef
                case 5
                    eax_37 = sub_515320(arg3, arg2)
                    int32_t var_14_21 = 1
                    int32_t var_18_19 = data_1b8a770
                    var_1c_11 = 0
                    var_20_8 = arg3
                    var_24_1 = data_1b8a75c
                    goto label_5158c9
                case 6
                    eax_27 = sub_515320(arg3, arg2)
                    int32_t var_14_22 = 0
                    int32_t var_18_20 = data_1b8a770
                    var_1c_10 = 1
                    var_20_3 = arg3
                    var_24 = data_1b8a75c
                    goto label_51575c
                case 7
                    eax_27 = sub_515320(arg3, arg2)
                    int32_t var_14_23 = 0
                    int32_t var_18_21 = data_1b8a770
                    var_1c_10 = 1
                label_515af7:
                    return sub_477e80(eax_27, arg4, data_1b8a720, data_1b8a734, 4, arg3, 0x50, 
                        data_1b8a748, data_1b8a75c, arg3, var_1c_10)
                case 8
                    eax_27 = sub_515320(arg3, arg2)
                    int32_t var_14_24 = 0
                    int32_t var_18_22 = data_1b8a770
                    var_1c_10 = 1
                    goto label_515b1d
                case 9
                    eax_37 = sub_515320(arg3, arg2)
                    int32_t var_14_25 = 0
                    int32_t var_18_23 = data_1b8a770
                    var_1c_11 = 1
                    var_20_8 = arg3
                    var_24_1 = data_1b8a75c
                    goto label_5158c9
                case 0xa
                    eax_37 = sub_515320(arg3, arg2)
                    int32_t var_14_26 = 0
                    int32_t var_18_24 = data_1b8a770
                    var_1c_11 = 1
                    goto label_515b5e
    else
        if (eax == 0xbb9)
            eax_27 = sub_515320(arg3, arg2)
            int32_t var_14_15 = 0
            int32_t var_18_14 = data_1b8a770
            var_1c_10 = 0
            var_20_3 = arg3
            var_24 = data_1b8a75c
        label_51575c:
            var_28 = data_1b8a748
            var_2c = 0x50
            goto label_515764
        
        eax -= 0x7d2
        
        switch (eax)
            case 0
                int32_t ecx_96
                eax_27, ecx_96 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                int32_t var_14_9 = 0
                int32_t var_18_8 = 0
                return sub_477e80(eax_27, arg4, data_1b8a720, data_1b8a734, 7, ecx_96, 
                    data_1b8a748, 0, 0, ecx_96, 0)
            case 1
                int32_t ecx_99
                eax_27, ecx_99 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                int32_t var_14_10 = 0
                int32_t var_18_9 = 0
                return sub_477e80(eax_27, arg4, data_1b8a720, data_1b8a734, 4, ecx_99, 
                    data_1b8a748, 0, 0, ecx_99, 0)
            case 2
                int32_t ecx_102
                eax_27, ecx_102 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                int32_t var_14_11 = 0
                int32_t var_18_10 = 0
                return sub_477e80(eax_27, arg4, data_1b8a720, data_1b8a734, 6, ecx_102, 
                    data_1b8a748, 0, 0, ecx_102, 0)
            case 3
                int32_t ecx_105
                eax_27, ecx_105 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                int32_t var_14_12 = 0
                int32_t var_18_11 = 0
                return sub_477e80(eax_27, arg4, data_1b8a720, data_1b8a734, 8, ecx_105, 
                    data_1b8a748, 0, 0, ecx_105, 0)
            case 4
                eax_37, arg3 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                int32_t var_14_13 = 0
                int32_t var_18_12 = 0
                var_1c_11 = 0
                var_20_8 = arg3
                var_24_1 = 0
                var_28_5 = 0
                var_2c_1 = data_1b8a748
                goto label_5158d1
            case 5
                int32_t ecx_110
                eax_37, ecx_110 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                int32_t var_14_14 = 0
                int32_t var_18_13 = 0
                var_1c_11 = 0
                var_20_8 = ecx_110
                var_24_1 = 0
                var_28_5 = 0
                var_2c_1 = data_1b8a748
                var_30_5 = ecx_110
                var_34_1 = 8
                goto label_5158df
    data_1b8b06c = 1
else if (eax == 0x3e8)
    void* eax_22 = sub_479410(sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
        arg4, data_1b8a720, data_1b8a734, data_1b8a748)
    int32_t esi_1 = data_1b8a720
    int32_t ecx_57 = data_1b8a734
    int32_t edx_29
    
    if (esi_1 s>= 0 && esi_1 s< data_7031bc)
        eax_22 = (arg4 + (esi_1 << 1)) * 0x7a0 + &data_98c178
        edx_29 = *(eax_22 + 8)
    
    if (esi_1 s< 0 || esi_1 s>= data_7031bc || edx_29 == 0 || ecx_57 s< 0 || ecx_57 s>= *eax_22)
        return sub_476410(eax_22, arg4, esi_1, ecx_57)
    
    eax = ecx_57 * 0x7d8 + edx_29
    
    if (*(eax + 0x2fc) != 1)
        *(eax + 0x2fc) = 1
        *(eax + 0x448) = 0
        *(eax + 0x44c) = 0
else
    if (eax u<= 0x6a)
        eax = zx.d(lookup_table_515c5c[eax])
        char** eax_9
        int32_t ecx_18
        
        switch (eax)
            case 0
                return sub_477f30(
                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), arg4, 
                    data_1b8a720, data_1b8a734)
            case 1
                return sub_478090(
                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), arg4, 
                    data_1b8a720, data_1b8a734)
            case 2
                return sub_478150(
                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), arg4, 
                    data_1b8a720, data_1b8a734)
            case 3
                int32_t eax_8 = sub_478260(
                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), arg4, 
                    data_1b8a720, data_1b8a734)
                data_715e98 = eax_8
                return eax_8
            case 4
                eax_9, ecx_18 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                int32_t var_1c_5 = data_1b8a734
                return sub_48cef0(eax_9, data_1b8a720, ecx_18, arg4)
            case 5
                return sub_4783c0(
                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), arg4, 
                    data_1b8a720, data_1b8a734)
            case 6
                return sub_478550(
                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), arg4, 
                    data_1b8a720, data_1b8a734)
            case 7
                sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                return sub_477f90(data_1b8a720, arg4)
            case 8
                sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                return sub_4780f0(data_1b8a720, arg4)
            case 9
                sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                return sub_4781c0(data_1b8a720, arg4)
            case 0xa
                sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                int32_t eax_18 = sub_4782d0(data_1b8a720, arg4)
                data_715e98 = eax_18
                return eax_18
            case 0xb
                eax_9, ecx_18 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                int32_t var_1c_8 = 0xffffffff
                return sub_48cef0(eax_9, data_1b8a720, ecx_18, arg4)
            case 0xc
                sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                return sub_478420(data_1b8a720, arg4)
            case 0xd
                sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                return sub_4785b0(data_1b8a720, arg4)
    
    data_1b8b06c = 1

return eax

// 函数: sub_525710
// 地址: 0x525710
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx

if (arg4 s< 0x4c4)
    data_1b8b06c = 1
    return 

char** var_24_2
char** var_20_3
char** eax_5
int32_t ecx_15
int32_t edx_23
char** eax_4
int32_t ecx_12

if (arg4 s<= 0x4c5)
    arg1 = data_1b8b070
    
    if (arg1 == 0x51 || arg1 == 0x52)
        if (arg5 == 1 || arg5 == 2)
            char** eax_32 =
                sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$", &data_1b8a720)
            
            if (arg4 == 0x4c0)
                if (data_6410f8 s< 2)
                    for (char*** i = &data_1b8a770; i s< &data_1b8a7c0; i = &i[5])
                        eax_32 = *i * 0xa
                        *i = eax_32
                else
                    int32_t xmm3_11[0x4] = __pmulld_xmmdq_memdq(
                        _mm_unpacklo_epi32(
                            _mm_unpacklo_epi32(zx.o(data_1b8a770), zx.q(data_1b8a798)), 
                            _mm_unpacklo_epi32(zx.o(data_1b8a784), zx.q(data_1b8a7ac))), 
                        (*\n\n\n\n")[0].o)
                    data_1b8a770 = xmm3_11
                    uint128_t xmm3_12 = _mm_bsrli_si128(xmm3_11, 4)
                    data_1b8a784 = xmm3_12
                    uint128_t xmm3_13 = _mm_bsrli_si128(xmm3_12, 4)
                    data_1b8a798 = xmm3_13
                    data_1b8a7ac = _mm_bsrli_si128(xmm3_13, 4)
            
            sub_480fd0(eax_32, arg3, data_1b8a720, data_1b8a734, 2, data_1b8a748, data_1b8a75c, 
                data_1b8a770, data_1b8a784, data_1b8a798, data_1b8a7ac, data_1b8a7c0)
            return 
        
        if (arg5 == 3)
            data_715e98 = sub_478b80(
                sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), arg3, 
                data_1b8a720, data_1b8a734, 0x10, 0)
            return 
        
        if (arg5 == 4)
            ecx_12 = sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            eax_4 = data_1b8a734
            int32_t var_1c_18 = 0
            sub_48cfe0(eax_4, 0x10, ecx_12, 0, data_1b8a720, arg3, eax_4, eax_4)
            return 
        
        if (arg5 != 5)
            if (arg5 != 6)
                return 
            
            sub_4791e0(sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), arg3, 
                data_1b8a720, data_1b8a734, 0x10, 0, data_1b8a748)
            return 
        
        ecx_15 = sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
        eax_5 = data_1b8a734
        edx_23 = 0x10
        int32_t var_1c_19 = 1
        var_20_3 = eax_5
        var_24_2 = eax_5
    else
        if (arg1 != 0x5a && arg1 != 0x5b)
            return 
        
        if (arg5 == 1 || arg5 == 2)
            char** eax_24 =
                sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$", &data_1b8a720)
            
            if (arg4 == 0x4c0)
                if (data_6410f8 s< 2)
                    for (char*** i_1 = &data_1b8a784; i_1 s< &data_1b8a7d4; i_1 = &i_1[5])
                        eax_24 = *i_1 * 0xa
                        *i_1 = eax_24
                else
                    int32_t xmm3_4[0x4] = __pmulld_xmmdq_memdq(
                        _mm_unpacklo_epi32(
                            _mm_unpacklo_epi32(zx.o(data_1b8a784), zx.q(data_1b8a7ac)), 
                            _mm_unpacklo_epi32(zx.o(data_1b8a798), zx.q(data_1b8a7c0))), 
                        (*\n\n\n\n")[0].o)
                    data_1b8a784 = xmm3_4
                    uint128_t xmm3_5 = _mm_bsrli_si128(xmm3_4, 4)
                    data_1b8a798 = xmm3_5
                    uint128_t xmm3_6 = _mm_bsrli_si128(xmm3_5, 4)
                    data_1b8a7ac = xmm3_6
                    data_1b8a7c0 = _mm_bsrli_si128(xmm3_6, 4)
            
            sub_481060(eax_24, arg3, data_1b8a720, data_1b8a734, data_1b8a748, 2, data_1b8a75c, 
                data_1b8a770, data_1b8a784, data_1b8a798, data_1b8a7ac, data_1b8a7c0, data_1b8a7d4)
            return 
        
        if (arg5 == 3)
            int32_t var_1c_14 = 0
            data_715e98 = sub_478c00(
                sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), arg3, 
                data_1b8a720, data_1b8a734, data_1b8a748, 0x10, 0)
            return 
        
        if (arg5 == 4)
            eax_4, ecx_12 = sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
            int32_t var_1c_15 = 0
            sub_48cfe0(eax_4, 0x10, ecx_12, 0, data_1b8a720, arg3, data_1b8a734, data_1b8a748)
            return 
        
        if (arg5 != 5)
            if (arg5 != 6)
                return 
            
            int32_t var_20_7 = 0
            sub_479250(sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720), arg3, 
                data_1b8a720, data_1b8a734, data_1b8a748, 0x10, 0, data_1b8a75c)
            return 
        
        eax_5, ecx_15 = sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
        int32_t var_1c_16 = 1
        var_20_3 = data_1b8a748
        edx_23 = 0x10
        var_24_2 = data_1b8a734
else
    if (arg4 != 0x4c6)
        data_1b8b06c = 1
        return 
    
    arg1 = data_1b8b070
    
    if (arg1 == 0x50)
        return 
    
    char** var_24_1
    char** var_20_2
    
    if (arg1 == 0x51 || arg1 == 0x52)
        if (arg5 == 1 || arg5 == 2)
            char** eax_22
            int32_t ecx_58
            eax_22, ecx_58 =
                sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$", &data_1b8a720)
            int32_t var_14_3 = data_1b8a7d4
            sub_481210(eax_22, arg3, data_1b8a720, data_1b8a734, ecx_58, (data_1b8a748).b, 
                data_1b8a75c, data_1b8a770, data_1b8a784, data_1b8a798, data_1b8a7ac, data_1b8a7c0)
            return 
        
        if (arg5 == 3)
            data_715e98 = sub_478b80(
                sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), arg3, 
                data_1b8a720, data_1b8a734, 0x11, 0)
            return 
        
        if (arg5 == 4)
            ecx_12 = sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            eax_4 = data_1b8a734
            int32_t var_1c_10 = 0
            var_20_2 = eax_4
            var_24_1 = eax_4
        label_525b1e:
            sub_48cfe0(eax_4, 0x11, ecx_12, 0, data_1b8a720, arg3, var_24_1, var_20_2)
            return 
        
        if (arg5 != 5)
            if (arg5 != 6)
                return 
            
            sub_4791e0(sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), arg3, 
                data_1b8a720, data_1b8a734, 0x11, 0, data_1b8a748)
            return 
        
        ecx_15 = sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
        eax_5 = data_1b8a734
        int32_t var_1c_11 = 1
        var_20_3 = eax_5
        var_24_2 = eax_5
    else
        if (arg1 == 0x53)
            return 
        
        if (arg1 == 0x54 || arg1 == 0x55)
            if (arg5 == 1 || arg5 == 2)
                return 
            
            if (arg5 == 3)
                data_715e98 =
                    sub_478ca0(sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720), 
                    arg3, data_1b8a720, 0x11, 0)
                return 
            
            if (arg5 == 4)
                eax_4, ecx_12 = sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                int32_t var_1c_7 = 0
                var_20_2 = 0xffffffff
                var_24_1 = 0xffffffff
                goto label_525b1e
            
            if (arg5 != 5)
                if (arg5 != 6)
                    return 
                
                sub_4792d0(sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                    arg3, data_1b8a720, 0x11, 0, data_1b8a734)
                return 
            
            eax_5, ecx_15 = sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            int32_t var_1c_8 = 1
            var_20_3 = 0xffffffff
            var_24_2 = 0xffffffff
        else
            if (arg1 == 0x56)
                return 
            
            if (arg1 == 0x57 || arg1 == 0x58)
                if (arg5 != 1 && arg5 != 2)
                    return 
                
                char** eax_10
                int32_t ecx_27
                eax_10, ecx_27 = sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                int32_t var_14_2 = data_1b8a748
                sub_481340(eax_10, arg3, data_1b8a720, data_1b8a734, ecx_27)
                return 
            
            if (arg1 == 0x59)
                return 
            
            if (arg1 != 0x5a && arg1 != 0x5b)
                if (arg1 == 0x5c || (arg1 != 0x5d && arg1 != 0x5e) || (arg5 != 1 && arg5 != 2))
                    return 
                
                char** eax
                int32_t ecx_3
                eax, ecx_3 = sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720)
                int32_t var_14 = data_1b8a75c
                sub_4813b0(eax, arg3, data_1b8a720, data_1b8a734, data_1b8a748, ecx_3)
                return 
            
            if (arg5 == 1 || arg5 == 2)
                char** eax_8
                char ecx_22
                eax_8, ecx_22 =
                    sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$$", &data_1b8a720)
                int32_t var_14_1 = data_1b8a7e8
                sub_4812a0(eax_8, arg3, data_1b8a720, data_1b8a734, data_1b8a748, ecx_22, 
                    data_1b8a75c, data_1b8a770, data_1b8a784, data_1b8a798, data_1b8a7ac, 
                    data_1b8a7c0, data_1b8a7d4)
                return 
            
            if (arg5 == 3)
                int32_t var_1c_1 = 0
                data_715e98 = sub_478c00(
                    sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), arg3, 
                    data_1b8a720, data_1b8a734, data_1b8a748, 0x11, 0)
                return 
            
            if (arg5 == 4)
                eax_4, ecx_12 = sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                int32_t var_1c_2 = 0
                var_20_2 = data_1b8a748
                var_24_1 = data_1b8a734
                goto label_525b1e
            
            if (arg5 != 5)
                if (arg5 != 6)
                    return 
                
                int32_t var_20_4 = 0
                sub_479250(sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720), 
                    arg3, data_1b8a720, data_1b8a734, data_1b8a748, 0x11, 0, data_1b8a75c)
                return 
            
            eax_5, ecx_15 = sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
            int32_t var_1c_3 = 1
            var_20_3 = data_1b8a748
            var_24_2 = data_1b8a734
    edx_23 = 0x11
sub_48cfe0(eax_5, edx_23, ecx_15, 0, data_1b8a720, arg3, var_24_2, var_20_3)
sub_445260()

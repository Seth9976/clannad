// 函数: sub_5133a0
// 地址: 0x5133a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx

if (arg4 s< 0x4c4)
    data_1b8b06c = 1
    return 

if (arg4 s<= 0x4c5)
    arg1 = data_1b8b070
    
    if (arg1 != 0x51 && arg1 != 0x52)
        if (arg1 == 0x5a || arg1 == 0x5b)
            if (arg5 == 1 || arg5 == 2)
                char** eax_37 =
                    sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$", &data_1b8a720)
                
                if (arg4 == 0x4c4)
                    if (data_6410f8 s< 2)
                        for (char*** i = &data_1b8a770; i s< &data_1b8a7c0; i = &i[5])
                            eax_37 = *i * 0xa
                            *i = eax_37
                    else
                        int32_t xmm3_4[0x4] = __pmulld_xmmdq_memdq(
                            _mm_unpacklo_epi32(
                                _mm_unpacklo_epi32(zx.o(data_1b8a770), zx.q(data_1b8a798)), 
                                _mm_unpacklo_epi32(zx.o(data_1b8a784), zx.q(data_1b8a7ac))), 
                            (*\n\n\n\n")[0].o)
                        data_1b8a770 = xmm3_4
                        uint128_t xmm3_5 = _mm_bsrli_si128(xmm3_4, 4)
                        data_1b8a784 = xmm3_5
                        uint128_t xmm3_6 = _mm_bsrli_si128(xmm3_5, 4)
                        data_1b8a798 = xmm3_6
                        data_1b8a7ac = _mm_bsrli_si128(xmm3_6, 4)
                
                sub_46df30(eax_37, data_1b8a734, data_1b8a720, arg3, 2, data_1b8a748, data_1b8a75c, 
                    data_1b8a770, data_1b8a784, data_1b8a798, data_1b8a7ac, data_1b8a7c0)
                return 
            
            if (arg5 == 3)
                data_715e98 = sub_466cd0(
                    sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                    data_1b8a734, data_1b8a720, arg3, 0x10, 0)
                return 
            
            if (arg5 == 4)
                char** eax_31
                int32_t ecx_67
                eax_31, ecx_67 = sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                int32_t var_1c_11 = 0
                sub_48cf80(eax_31, 0x10, ecx_67, 0, data_1b8a720, data_1b8a734, arg3)
                return 
            
            if (arg5 == 5)
                char** eax_33
                int32_t ecx_71
                eax_33, ecx_71 = sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                int32_t var_1c_12 = 1
                sub_48cf80(eax_33, 0x10, ecx_71, 0, data_1b8a720, data_1b8a734, arg3)
                sub_445260()
                return 
            
            if (arg5 == 6)
                sub_467550(sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                    data_1b8a734, data_1b8a720, arg3, 0x10, 0, data_1b8a748)
        
        return 
    
    if (arg5 == 1 || arg5 == 2)
        sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", &data_1b8a720)
        
        if (arg4 == 0x4c4)
            if (data_6410f8 s< 2)
                for (char*** i_1 = &data_1b8a75c; i_1 s< &data_1b8a7ac; i_1 = &i_1[5])
                    *i_1 *= 0xa
            else
                int32_t xmm3_11[0x4] = __pmulld_xmmdq_memdq(
                    _mm_unpacklo_epi32(_mm_unpacklo_epi32(zx.o(data_1b8a75c), zx.q(data_1b8a784)), 
                        _mm_unpacklo_epi32(zx.o(data_1b8a770), zx.q(data_1b8a798))), 
                    (*\n\n\n\n")[0].o)
                data_1b8a75c = xmm3_11
                uint128_t xmm3_12 = _mm_bsrli_si128(xmm3_11, 4)
                data_1b8a770 = xmm3_12
                uint128_t xmm3_13 = _mm_bsrli_si128(xmm3_12, 4)
                data_1b8a784 = xmm3_13
                data_1b8a798 = _mm_bsrli_si128(xmm3_13, 4)
        
        int32_t ecx_95 = data_1b8a720
        
        if (ecx_95 s< 0 || ecx_95 s>= data_7031bc)
            return 
        
        int32_t eax_48 = arg3 + (ecx_95 << 1)
        sub_4665b0(eax_48, data_1b8a734, eax_48 * 0x650 + 0x72db74, data_1b8a748, data_1b8a75c, 
            data_1b8a770, data_1b8a784, data_1b8a798, data_1b8a7ac)
        return 
    
    if (arg5 == 3)
        int32_t var_1c_15 = 0
        data_715e98 = sub_466c70(sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720), 
            arg3, data_1b8a720, 0x10, 0)
        return 
    
    if (arg5 == 4)
        int32_t ecx_85 = sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_41 = data_1b8a720
        int32_t var_1c_16 = 0
        sub_48cf80(eax_41, 0x10, ecx_85, 0, eax_41, eax_41, arg3)
        return 
    
    if (arg5 == 5)
        int32_t ecx_89 = sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_43 = data_1b8a720
        int32_t var_1c_17 = 1
        sub_48cf80(eax_43, 0x10, ecx_89, 0, eax_43, eax_43, arg3)
        sub_445260()
        return 
    
    if (arg5 != 6)
        return 
    
    int32_t var_20_13 = 0
    sub_467500(sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), arg3, 
        data_1b8a720, 0x10, 0, data_1b8a734)
    return 

if (arg4 != 0x4c6)
    data_1b8b06c = 1
    return 

arg1 = data_1b8b070

if (arg1 == 0x50)
    return 

if (arg1 == 0x51 || arg1 == 0x52)
    if (arg5 == 1 || arg5 == 2)
        char** eax_27
        int32_t ecx_58
        eax_27, ecx_58 = sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$", &data_1b8a720)
        int32_t var_14_5 = data_1b8a7c0
        sub_46e070(eax_27, arg3, data_1b8a720, ecx_58, (data_1b8a734).b, data_1b8a748, 
            data_1b8a75c, data_1b8a770, data_1b8a784, data_1b8a798, data_1b8a7ac)
        return 
    
    if (arg5 == 3)
        int32_t var_1c_6 = 0
        data_715e98 = sub_466c70(sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720), 
            arg3, data_1b8a720, 0x11, 0)
        return 
    
    if (arg5 == 4)
        int32_t ecx_46 = sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_21 = data_1b8a720
        int32_t var_1c_7 = 0
        sub_48cf80(eax_21, 0x11, ecx_46, 0, eax_21, eax_21, arg3)
        return 
    
    if (arg5 == 5)
        int32_t ecx_50 = sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_23 = data_1b8a720
        int32_t var_1c_8 = 1
        sub_48cf80(eax_23, 0x11, ecx_50, 0, eax_23, eax_23, arg3)
        sub_445260()
        return 
    
    if (arg5 != 6)
        return 
    
    int32_t var_20_6 = 0
    sub_467500(sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), arg3, 
        data_1b8a720, 0x11, 0, data_1b8a734)
    return 

if (arg1 == 0x53)
    return 

if (arg1 == 0x54 || arg1 == 0x55)
    if (arg5 != 1 && arg5 != 2)
        if (arg5 == 3)
            data_715e98 = sub_466d80(arg5, arg5 + 0xe, arg3, 0)
            return 
        
        if (arg5 == 4)
            int32_t var_14_3 = 0
            sub_48cf80(arg5, arg5 + 0xd, ecx, 0, 0xffffffff, 0xffffffff, arg3)
            return 
        
        if (arg5 == 5)
            int32_t var_14_4 = 1
            sub_48cf80(arg5, &arg5[3], ecx, 0, 0xffffffff, 0xffffffff, arg3)
            sub_445260()
            return 
        
        if (arg5 == 6)
            sub_4675e0(sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720), 0x11, 
                arg3, 0, data_1b8a720)
else if (arg1 != 0x56)
    if (arg1 == 0x57 || arg1 == 0x58)
        if (arg5 == 1 || arg5 == 2)
            char** eax_12
            int32_t ecx_29
            eax_12, ecx_29 = sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            int32_t var_14_2 = data_1b8a734
            sub_46e130(eax_12, arg3, data_1b8a720, ecx_29)
    else if (arg1 != 0x59)
        if (arg1 == 0x5a || arg1 == 0x5b)
            if (arg5 == 1 || arg5 == 2)
                char** eax_10
                int32_t ecx_24
                eax_10, ecx_24 =
                    sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$", &data_1b8a720)
                int32_t var_14_1 = data_1b8a7d4
                sub_46e0b0(eax_10, data_1b8a734, data_1b8a720, arg3, ecx_24, (data_1b8a748).b, 
                    data_1b8a75c, data_1b8a770, data_1b8a784, data_1b8a798, data_1b8a7ac, 
                    data_1b8a7c0)
                return 
            
            if (arg5 == 3)
                data_715e98 = sub_466cd0(
                    sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                    data_1b8a734, data_1b8a720, arg3, 0x11, 0)
                return 
            
            if (arg5 == 4)
                char** eax_4
                int32_t ecx_12
                eax_4, ecx_12 = sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                int32_t var_1c_1 = 0
                sub_48cf80(eax_4, 0x11, ecx_12, 0, data_1b8a720, data_1b8a734, arg3)
                return 
            
            if (arg5 == 5)
                char** eax_6
                int32_t ecx_16
                eax_6, ecx_16 = sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                int32_t var_1c_2 = 1
                sub_48cf80(eax_6, 0x11, ecx_16, 0, data_1b8a720, data_1b8a734, arg3)
                sub_445260()
                return 
            
            if (arg5 == 6)
                sub_467550(sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                    data_1b8a734, data_1b8a720, arg3, 0x11, 0, data_1b8a748)
        else if (arg1 != 0x5c && (arg1 == 0x5d || arg1 == 0x5e) && (arg5 == 1 || arg5 == 2))
            char** eax
            int32_t ecx_3
            eax, ecx_3 = sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
            int32_t var_14 = data_1b8a748
            sub_46e170(eax, data_1b8a734, data_1b8a720, arg3, ecx_3)

// 函数: sub_49f8d0
// 地址: 0x49f8d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_274
char* eax_1 = __security_cookie ^ &var_274
char* var_44 = eax_1

if (arg3 != 0)
    char* var_294_1
    HWND eax_8
    
    if (arg2 != 0 || data_92b3e8 != arg2)
    label_49fae0:
        int32_t var_258_1 = 0
        sub_4cfd70(&data_1af16c8, &data_1af16ec)
        data_187c53c = data_187c538
        sub_4cfd70(&data_1af16ec, arg3)
        bool cond:0_1 = data_13132e8 != 1
        data_187c538 = arg2
        data_1af1718 = 0xff
        BOOL var_264_1
        BOOL esi_1
        
        if (cond:0_1)
            esi_1 = sub_49f1a0(arg3, 0)
            
            if (esi_1 == 0xffffffff)
                esi_1 = sub_49f280(arg3)
                var_264_1 = esi_1
                
                if (esi_1 != 0xffffffff || data_13132e8 != 0)
                    goto label_49fb9f
                
                goto label_49fb48
            
        label_49fb48:
            data_92b938 = 0
            
            if (arg5 == 0 || data_1333e24 != 0)
                WaitForSingleObject(data_641b34, 0xffffffff)
                bool cond:1_1 = data_1bfe268 == 0xffffffff
                data_1bfffc8 = 0
                
                if (not(cond:1_1))
                    sub_4bef40()
                
                ReleaseSemaphore(data_641b34, 1, nullptr)
            else
                sub_4bf8e0(arg5)
            
            if (arg5 == 0)
                HANDLE hHandle = data_641b54
                void* ecx_16
                
                if (data_107f0f0 != 0)
                    WaitForSingleObject(hHandle, 0xffffffff)
                    sub_4c29d0(0)
                    ReleaseSemaphore(data_641b54, 1, nullptr)
                    WaitForSingleObject(data_702788, 0xffffffff)
                    ecx_16 = &data_20af850
                else
                    WaitForSingleObject(hHandle, 0xffffffff)
                    sub_4c29d0(1)
                    ReleaseSemaphore(data_641b54, 1, nullptr)
                    WaitForSingleObject(data_702788, 0xffffffff)
                    ecx_16 = &data_20afc10
                
                sub_4cb390(ecx_16)
                ReleaseSemaphore(data_702788, 1, nullptr)
            else
                sub_49e720(arg5, data_107f0f0, &data_92b1b0, arg5)
                int32_t eax_22
                eax_22.b = data_107f0f0 == 0
                data_107f0f0 = eax_22
            
            if (esi_1 != 0xffffffff)
            label_49fdc0:
                void* eax_24 = esi_1 * 0x5c
                int32_t var_25c_1 = 0
                int32_t edi_1 = *(eax_24 + 0x12be29c)
                char var_250[0x20c]
                sub_4cfd70(&var_250, eax_24 + 0x12be2a8)
                int32_t var_28c_10
                int32_t var_288_8
                int32_t var_284_5
                int32_t eax_28
                int32_t eax_30
                int32_t ecx_21
                int32_t ecx_22
                
                if (sub_4c3da0(sub_4c3960(&var_250, &data_61737c), 6, &var_250, 0x1a) == 1)
                    ecx_21 = arg6
                    eax_28 = arg7
                    
                    if (ecx_21 == 0xffffffff && eax_28 == 0xffffffff)
                        goto label_49fe38
                    
                    var_284_5 = eax_28
                    var_288_8 = ecx_21
                    var_28c_10 = 1
                label_49fe28:
                    ecx_22 = 0
                label_49fe2e:
                    int32_t eax_29
                    eax_29, ecx_21 =
                        sub_49f680(eax_28, &var_250, ecx_22, var_28c_10, var_288_8, var_284_5)
                    edi_1 = eax_29
                label_49fe38:
                    data_1bfe26c = 0
                label_49fe42:
                    eax_30 = 0
                    goto label_49fe4b
                
                if (sub_4c3da0(sub_4c3960(&var_250, &data_617380), 6, &var_250, 0x1a) == 1)
                    ecx_21 = arg6
                    eax_28 = arg7
                    
                    if (ecx_21 == 0xffffffff && eax_28 == 0xffffffff)
                        goto label_49fe38
                    
                    var_284_5 = eax_28
                    var_288_8 = ecx_21
                    var_28c_10 = 2
                    goto label_49fe28
                
                if (sub_4c3da0(sub_4c3960(&var_250, &data_617384), 6, &var_250, 0x1a) == 1)
                    ecx_21 = arg6
                    eax_28 = arg7
                    
                    if (ecx_21 == 0xffffffff && eax_28 == 0xffffffff)
                        goto label_49fe38
                    
                    var_284_5 = eax_28
                    var_288_8 = ecx_21
                    var_28c_10 = 0
                    goto label_49fe28
                
                eax_30, ecx_21 = sub_4c3da0(sub_4c3960(&var_250, &data_617388), 6, &var_250, 0x1a)
                
                if (eax_30 == 1)
                    var_258_1 = eax_30
                    data_1bfe26c = eax_30
                label_49fe4b:
                    enum WAIT_EVENT edx_16 = data_107f0f0
                    int32_t var_298
                    int32_t var_290
                    
                    if (data_13132ec != 0)
                        if (eax_30 != 0)
                            int128_t xmm0_7 = data_624a30
                            var_290.o = xmm0_7
                            var_298.q = xmm0_7.q
                            eax_1 = sub_49e000(eax_30, edx_16, &data_92b1b0, arg3, data_7031ac, 
                                eax_24 + 0x12be2a8, 6, 0x1a, ecx_21, arg2, arg4, 3, 1, var_298, 
                                var_290)
                        else
                            eax_1 = sub_49db20(eax_24, edx_16, &data_92b1b0, arg3, data_7031ac, 
                                eax_24 + 0x12be2a8, 6, 0x1a, 0, arg2, arg4, edi_1, 
                                *(eax_24 + 0x12be2a0), *(eax_24 + 0x12be2a4), 3, eax_30, 0xff)
                        
                        goto label_4a0265
                    
                    sub_49e720(eax_30, edx_16, &data_92b1b0, 0)
                    char* edx_17 = arg3
                    
                    if (var_258_1 == 0)
                        int32_t eax_33 = sub_49d230(eax_24, edx_17, &data_92b1b0, data_7031ac, 
                            eax_24 + 0x12be2a8, 6, 0x1a, arg2, edi_1, *(eax_24 + 0x12be2a0), 
                            *(eax_24 + 0x12be2a4), 3, 0)
                        sub_5f02dd(var_44 ^ &var_274)
                        return eax_33
                    
                    var_290.q = _mm_cvtepi32_pd(zx.q(*(eax_24 + 0x12be2a4)))
                    var_298.q = _mm_cvtepi32_pd(zx.q(*(eax_24 + 0x12be2a0)))
                    int32_t var_2a0
                    var_2a0.q = _mm_cvtepi32_pd(zx.q(edi_1))
                    int32_t eax_44 = sub_49d2e0(eax_24, edx_17, &data_92b1b0, data_7031ac, 
                        eax_24 + 0x12be2a8, 6, 0x1a, arg2, var_2a0, var_298, var_290, 3, 0)
                    sub_5f02dd(var_44 ^ &var_274)
                    return eax_44
                
                sub_4c3960(&var_250, &data_61737c)
                
                if (sub_4c5530(data_7031ac) == 1)
                    ecx_21 = arg6
                    eax_28 = arg7
                    
                    if (ecx_21 == 0xffffffff && eax_28 == 0xffffffff)
                        goto label_49fe38
                    
                    var_284_5 = eax_28
                    var_288_8 = ecx_21
                    var_28c_10 = 1
                    ecx_22 = 1
                    goto label_49fe2e
                
                sub_4c3960(&var_250, &data_617380)
                
                if (sub_4c5530(data_7031ac) == 1)
                    ecx_21 = arg6
                    eax_28 = arg7
                    
                    if (ecx_21 == 0xffffffff && eax_28 == 0xffffffff)
                        goto label_49fe38
                    
                    var_284_5 = eax_28
                    var_288_8 = ecx_21
                    var_28c_10 = 2
                    ecx_22 = 1
                    goto label_49fe2e
                
                sub_4c3960(&var_250, &data_617384)
                int32_t eax_41
                eax_41, ecx_21 = sub_4c5530(data_7031ac)
                
                if (eax_41 == 1)
                    ecx_21 = arg6
                    var_25c_1 = eax_41
                    eax_41 = arg7
                    
                    if (ecx_21 != 0xffffffff || eax_41 != 0xffffffff)
                        eax_41, ecx_21 = sub_49f680(eax_41, &var_250, 1, 0, ecx_21, eax_41)
                        edi_1 = eax_41
                
                data_1bfe26c = 0
                
                if (var_25c_1 == 1)
                    goto label_49fe42
                
                sub_49e720(eax_41, data_107f0f0, &data_92b1b0, 0)
                sub_49d230(eax_24, arg3, &data_92b1b0, data_7031ac, eax_24 + 0x12be2a8, 6, 0x1a, 
                    arg2, edi_1, *(eax_24 + 0x12be2a0), *(eax_24 + 0x12be2a4), 3, 0)
                char* var_2ac_1 = arg3
                sub_4c84d0(&data_7027c0, 0x61b5ac)
                char* var_284_7 = eax_24 + 0x12be2a8
                eax_1 = sub_4c84d0(&data_1af00b8, 0x61b5c4)
                
                if (data_702fc0 != 0)
                    eax_1 = 1
                    
                    if (data_13184f8 == 0)
                        if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                            eax_1 = nullptr
                        
                        if (data_1311178 != 0 && data_13184e8:4 == 0)
                            eax_1 = nullptr
                        
                        if (data_1af174c == 0 && eax_1 != 0)
                            eax_8 = sub_55f1e0(
                                sub_55ef70(eax_1, data_72d6ac, data_719b6c, &data_7027c0, 
                                    &data_1af00b8), 
                                data_72d6ac, data_719b6c, &data_7027c0, &data_1af00b8)
                            var_294_1 = &data_1af00b8
                            goto label_49fab7
            else
                BOOL eax_23 = sub_49f1a0(arg3, esi_1 + 2)
                esi_1 = eax_23
                
                if (esi_1 != 0xffffffff)
                    goto label_49fdc0
                
                sub_49e720(eax_23, data_107f0f0, &data_92b1b0, 0)
            label_4a026a:
                char* var_284_8 = arg3
                eax_1 = sub_4c84d0(&data_7027c0, 0x61b5ac)
                
                if (data_702fc0 != 0)
                    sub_55f390(
                        sub_55f1e0(
                            sub_55ef70(eax_1, data_72d6ac, data_719b6c, &data_7027c0, 
                                &data_61b5e8), 
                            data_72d6ac, data_719b6c, &data_7027c0, &data_61b5e8), 
                        data_72d6ac, data_719b6c, &data_7027c0, &data_61b5e8)
                    eax_1 = sub_4a1e40(3)
        else
            BOOL eax_11 = sub_49f280(arg3)
            esi_1 = eax_11
            var_264_1 = esi_1
            
            if (esi_1 == 0xffffffff)
                BOOL eax_12 = sub_49f1a0(arg3, eax_11 + 2)
                esi_1 = eax_12
                var_264_1 = eax_12
                
                if (esi_1 == 0xffffffff && data_13132e8 != 0)
                    goto label_49fb9f
                
                goto label_49fb48
            
        label_49fb9f:
            data_92b938 = 1
            BOOL eax_18
            
            if (arg5 == 0 || data_1333e24 != 0)
                WaitForSingleObject(data_641b54, 0xffffffff)
                sub_4c29d0(0)
                ReleaseSemaphore(data_641b54, 1, nullptr)
                WaitForSingleObject(data_702788, 0xffffffff)
                sub_4cb390(&data_20af850)
                sub_4d1ba0(
                    sub_4d1ba0(ReleaseSemaphore(data_702788, 1, nullptr), 0x24, &data_92b1b0, 0), 
                    0x24, &data_92b1d8, 0)
                data_92b1d4 = 0xffffffff
                WaitForSingleObject(data_641b54, 0xffffffff)
                sub_4c29d0(1)
                ReleaseSemaphore(data_641b54, 1, nullptr)
                WaitForSingleObject(data_702788, 0xffffffff)
                sub_4cb390(&data_20afc10)
                eax_18 = ReleaseSemaphore(data_702788, 1, nullptr)
                esi_1 = var_264_1
            else
                sub_49e720(arg5, data_107f0f0, &data_92b1b0, arg5)
                eax_18.b = data_107f0f0 == 0
                data_107f0f0 = eax_18
            
            eax_1 = sub_49f350(eax_18, arg2, arg3, arg4, 0, esi_1)
        label_4a0265:
            
            if (esi_1 == 0xffffffff)
                goto label_4a026a
    else
        int32_t eax_5
        int32_t ecx_5
        eax_5, ecx_5 = sub_4d0f10(&data_92b1b0, arg3)
        
        if (eax_5 != 0)
            goto label_49fae0
        
        if (sub_4a0aa0(ecx_5) != 1)
            goto label_49fae0
        
        char* var_284_1 = arg3
        eax_1 = sub_4c84d0(&data_7027c0, "MPLAY(%s)")
        
        if (data_702fc0 != arg2)
            eax_1 = arg2 + 1
            
            if (data_13184f8 == arg2)
                if (data_13184e8:8 == arg2 && (data_704870 != arg2 || data_70486c != arg2))
                    eax_1 = nullptr
                
                if (data_1311178 != 0 && data_13184e8:4 == 0)
                    eax_1 = nullptr
                
                if (data_1af174c == 0 && eax_1 != 0)
                    eax_8 = sub_55f1e0(
                        sub_55ef70(eax_1, data_72d6ac, data_719b6c, &data_7027c0, &data_61b578), 
                        data_72d6ac, data_719b6c, &data_7027c0, &data_61b578)
                    var_294_1 = &data_61b578
                label_49fab7:
                    char* eax_9 =
                        sub_55f390(eax_8, data_72d6ac, data_719b6c, &data_7027c0, var_294_1)
                    sub_5f02dd(var_44 ^ &var_274)
                    return eax_9
else if (data_702fc0 != arg3)
    eax_1 = &arg3[1]
    
    if (data_13184f8 == arg3)
        if (data_13184e8:8 == arg3 && (data_704870 != arg3 || data_70486c != arg3))
            eax_1 = nullptr
        
        if (data_1311178 != 0 && data_13184e8:4 == 0)
            eax_1 = nullptr
        
        if (data_1af174c == 0 && eax_1 != 0)
            char* eax_4 = sub_55f390(
                sub_55f1e0(sub_55ef70(eax_1, data_72d6ac, data_719b6c, "MPLAY(null)", 0x61b54c), 
                    data_72d6ac, data_719b6c, "MPLAY(null)", 0x61b54c), 
                data_72d6ac, data_719b6c, "MPLAY(null)", 0x61b54c)
            sub_5f02dd(var_44 ^ &var_274)
            return eax_4

sub_5f02dd(var_44 ^ &var_274)
return eax_1

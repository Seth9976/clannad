// 函数: sub_4a0300
// 地址: 0x4a0300
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_274
int32_t eax_1 = __security_cookie ^ &var_274
char* eax_4

if (data_92b3e8 != 0)
label_4a043b:
    int32_t var_258_1 = 0
    sub_4cfd70(&data_1af16c8, &data_1af16ec)
    sub_4cfd70(&data_1af16ec, arg1)
    char* var_294_1
    int32_t eax_8
    HWND eax_22
    int32_t ecx_7
    int32_t edi_1
    
    if (data_13132e8 != 1)
        edi_1 = sub_49f1a0(arg1, 0)
        
        if (edi_1 != 0xffffffff)
        label_4a0484:
            void* ebx_1 = edi_1 * 0x5c
            int32_t var_254_1 = 0
            char var_250[0x20c]
            sub_4cfd70(&var_250, ebx_1 + 0x12be2a8)
            int32_t eax_12
            int32_t ecx_12
            eax_12, ecx_12 = sub_4c3da0(sub_4c3960(&var_250, &data_61737c), 6, &var_250, 0x1a)
            int32_t var_298
            int32_t var_290
            int32_t eax_18
            
            if (eax_12 == 1)
            label_4a0759:
                eax_18 = 0
                data_1bfe26c = 0
            label_4a0760:
                
                if (data_13132ec == 0)
                    sub_49e720(eax_18, data_107f0f0, &data_92b1b0, 0)
                    char* edx_17 = arg1
                    
                    if (var_258_1 != 0)
                        var_290.q = _mm_cvtepi32_pd(zx.q(*(ebx_1 + 0x12be2a4)))
                        var_298.q = _mm_cvtepi32_pd(zx.q(*(ebx_1 + 0x12be2a0)))
                        int64_t xmm0_12 = _mm_cvtepi32_pd(zx.q(*(ebx_1 + 0x12be29c)))
                        int32_t eax_28 = sub_49d2e0(var_258_1, edx_17, &data_92b1b0, data_7031ac, 
                            ebx_1 + 0x12be2a8, 6, 0x1a, data_92b3e8, xmm0_12, var_298, var_290, 3, 
                            0)
                        sub_5f02dd(eax_1 ^ &var_274)
                        return eax_28
                    
                    int32_t eax_27 = sub_49d230(var_258_1, edx_17, &data_92b1b0, data_7031ac, 
                        ebx_1 + 0x12be2a8, 0x1a00000006, data_92b3e8, *(ebx_1 + 0x12be29c), 
                        *(ebx_1 + 0x12be2a0), *(ebx_1 + 0x12be2a4), 3, 0)
                    sub_5f02dd(eax_1 ^ &var_274)
                    return eax_27
                
                if (eax_18 != 0)
                    int32_t var_284_8 = 0xffffffff
                    sub_49f8d0(eax_18, 0, arg1, 0, ecx_12, 0, 0xffffffff)
                    char* var_284_9 = arg1
                    eax_4 = sub_4c84d0(&data_7027c0, "MCHANGE(%s)")
                    
                    if (data_702fc0 == 0)
                        goto label_4a0974
                    
                    eax_22 = sub_55f1e0(
                        sub_55ef70(eax_4, data_72d6ac, data_719b6c, &data_7027c0, &data_61b6ec), 
                        data_72d6ac, data_719b6c, &data_7027c0, &data_61b6ec)
                    var_294_1 = &data_61b6ec
                    goto label_4a0962
                
                int32_t ecx_30
                eax_4, ecx_30 = sub_49e2a0(eax_18, data_107f0f0, &data_92b1b0, arg1, data_7031ac, 
                    ebx_1 + 0x12be2a8)
                
                if (eax_4 != 0)
                    goto label_4a0974
                
                int32_t var_284_6 = 0xffffffff
                sub_49f8d0(eax_4, 0, arg1, eax_4, ecx_30, eax_4, 0xffffffff)
                char* var_284_7 = arg1
                eax_4 = sub_4c84d0(&data_7027c0, "MCHANGE(%s)")
                
                if (data_702fc0 == 0)
                    goto label_4a0974
                
                eax_22 = sub_55f1e0(
                    sub_55ef70(eax_4, data_72d6ac, data_719b6c, &data_7027c0, &data_61b6a8), 
                    data_72d6ac, data_719b6c, &data_7027c0, &data_61b6a8)
                var_294_1 = &data_61b6a8
                goto label_4a0962
            
            int32_t eax_14
            eax_14, ecx_12 = sub_4c3da0(sub_4c3960(&var_250, &data_617380), 6, &var_250, 0x1a)
            
            if (eax_14 == 1)
                goto label_4a0759
            
            int32_t eax_16
            eax_16, ecx_12 = sub_4c3da0(sub_4c3960(&var_250, &data_617384), 6, &var_250, 0x1a)
            
            if (eax_16 == 1)
                goto label_4a0759
            
            eax_18, ecx_12 = sub_4c3da0(sub_4c3960(&var_250, &data_617388), 6, &var_250, 0x1a)
            
            if (eax_18 != 1)
                eax_18 = 0
            else
                var_254_1 = eax_18
                var_258_1 = eax_18
            
            data_1bfe26c = eax_18
            
            if (var_254_1 == 1)
                goto label_4a0760
            
            sub_49e720(eax_18, data_107f0f0, &data_92b1b0, 0)
            char* edx_13 = arg1
            char* ebx_2
            
            if (var_258_1 != 0)
                var_290.q = _mm_cvtepi32_pd(zx.q(*(ebx_1 + 0x12be2a4)))
                var_298.q = _mm_cvtepi32_pd(zx.q(*(ebx_1 + 0x12be2a0)))
                ebx_2 = ebx_1 + 0x12be2a8
                int64_t xmm0_6 = _mm_cvtepi32_pd(zx.q(*(ebx_1 + 0x12be29c)))
                sub_49d2e0(var_258_1, edx_13, &data_92b1b0, data_7031ac, ebx_2, 6, 0x1a, 
                    data_92b3e8, xmm0_6, var_298, var_290, 3, 0)
            else
                ebx_2 = ebx_1 + 0x12be2a8
                sub_49d230(var_258_1, edx_13, &data_92b1b0, data_7031ac, ebx_2, 0x1a00000006, 
                    data_92b3e8, *(ebx_1 + 0x12be29c), *(ebx_1 + 0x12be2a0), *(ebx_1 + 0x12be2a4), 
                    3, 0)
            
            char* var_284_4 = arg1
            sub_4c84d0(&data_7027c0, 0x61b68c)
            char* var_284_5 = ebx_2
            eax_4 = sub_4c84d0(&data_1af00b8, 0x61b5c4)
            
            if (data_702fc0 != 0)
                sub_55f390(
                    sub_55f1e0(
                        sub_55ef70(eax_4, data_72d6ac, data_719b6c, &data_7027c0, &data_1af00b8), 
                        data_72d6ac, data_719b6c, &data_7027c0, &data_1af00b8), 
                    data_72d6ac, data_719b6c, &data_7027c0, &data_1af00b8)
                eax_4 = sub_4a1e40(3)
        else
            eax_8, ecx_7 = sub_49f280(arg1)
            edi_1 = eax_8
            
            if (edi_1 != 0xffffffff)
                goto label_4a05b1
            
        label_4a0579:
            eax_8 = data_13132e8
            
            if (eax_8 != 0)
                goto label_4a05b1
            
            int32_t eax_20 = sub_49f1a0(arg1, eax_8 + 1)
            edi_1 = eax_20
            
            if (edi_1 != 0xffffffff)
                goto label_4a0484
            
            sub_49e720(eax_20, data_107f0f0, &data_92b1b0, 0)
        label_4a0979:
            char* var_284_10 = arg1
            eax_4 = sub_4c84d0(&data_7027c0, 0x61b68c)
            
            if (data_702fc0 != 0)
                sub_55f390(
                    sub_55f1e0(
                        sub_55ef70(eax_4, data_72d6ac, data_719b6c, &data_7027c0, &data_61b5e8), 
                        data_72d6ac, data_719b6c, &data_7027c0, &data_61b5e8), 
                    data_72d6ac, data_719b6c, &data_7027c0, &data_61b5e8)
                eax_4 = sub_4a1e40(3)
    else
        eax_8, ecx_7 = sub_49f280(arg1)
        edi_1 = eax_8
        
        if (edi_1 == 0xffffffff)
            int32_t eax_9
            eax_9, ecx_7 = sub_49f1a0(arg1, eax_8 + 2)
            edi_1 = eax_9
            
            if (edi_1 == 0xffffffff)
                goto label_4a0579
            
            goto label_4a0484
        
    label_4a05b1:
        int32_t var_284_2 = 0xffffffff
        sub_49f8d0(eax_8, 0, arg1, 0, ecx_7, 0, 0xffffffff)
        char* var_284_3 = arg1
        eax_4 = sub_4c84d0(&data_7027c0, "MCHANGE(%s)")
        
        if (data_702fc0 == 0)
            goto label_4a0974
        
        eax_22 = sub_55f1e0(
            sub_55ef70(eax_4, data_72d6ac, data_719b6c, &data_7027c0, &data_61b658), data_72d6ac, 
            data_719b6c, &data_7027c0, &data_61b658)
        var_294_1 = &data_61b658
    label_4a0962:
        sub_55f390(eax_22, data_72d6ac, data_719b6c, &data_7027c0, var_294_1)
        eax_4 = sub_4a1e40(3)
    label_4a0974:
        
        if (edi_1 == 0xffffffff)
            goto label_4a0979
else
    int32_t eax_2
    int32_t ecx
    eax_2, ecx = sub_4d0f10(&data_92b1b0, arg1)
    
    if (eax_2 != 0)
        goto label_4a043b
    
    if (sub_4a0aa0(ecx) != 1)
        goto label_4a043b
    
    char* var_284_1 = arg1
    eax_4 = sub_4c84d0(&data_7027c0, "MCHANGE(%s)")
    
    if (data_702fc0 != 0)
        eax_4 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_4 = nullptr
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_4 = nullptr
            
            if (data_1af174c == 0 && eax_4 != 0)
                char* eax_7 = sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_4, data_72d6ac, data_719b6c, &data_7027c0, 0x61b624), 
                        data_72d6ac, data_719b6c, &data_7027c0, 0x61b624), 
                    data_72d6ac, data_719b6c, &data_7027c0, 0x61b624)
                sub_5f02dd(eax_1 ^ &var_274)
                return eax_7

sub_5f02dd(eax_1 ^ &var_274)
return eax_4

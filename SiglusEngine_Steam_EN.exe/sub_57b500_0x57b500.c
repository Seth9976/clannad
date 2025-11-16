// 函数: sub_57b500
// 地址: 0x57b500
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* eax = arg2

if (arg3 u<= 0x3f)
    *(arg3 * 0x3920 + 0xf8c668) = arg4
    *(arg3 * 0x3920 + 0xf89ba0) = 0xff
    *(arg3 * 0x3920 + 0xf8c74c) = 0
    *(arg3 * 0x3920 + 0xf8c750) = 0
    int32_t var_c
    int32_t var_8
    
    if (eax == 0)
        bool cond:0_1 = data_13130bc != 0
        *(arg3 * 0x3920 + &data_f89ba4) = 0
        
        if (cond:0_1)
            *(arg3 * 0x3920 + 0xf8c668) = 0
            *(arg3 * 0x3920 + 0xf8c668) += 0x3e8
        else
            eax = arg4 + 1
            int32_t eax_26
            int32_t eax_28
            int32_t eax_29
            int32_t ecx_11
            int32_t edx_7
            
            if (eax u> 0x11)
                *(arg3 * 0x3920 + 0xf8c668) = 0
                *(arg3 * 0x3920 + 0xf8c668) += 0x3e8
            else
                switch (eax)
                    case nullptr
                        *(arg3 * 0x3920 + 0xf8c668) = 0
                        *(arg3 * 0x3920 + 0xf8c668) += 0x3e8
                    case 1
                        *(arg3 * 0x3920 + 0xf8c668) += 0x3e8
                    case 2
                        int32_t ecx_8 = arg5
                        int32_t eax_16 = data_131310c
                        *(arg3 * 0x3920 + &data_f89ba4) = 1
                        *(arg3 * 0x3920 + 0xf8c684) = eax_16
                        *(arg3 * 0x3920 + 0xf8c678) = 0xff
                        *(arg3 * 0x3920 + 0xf8c66c) = 0
                        *(arg3 * 0x3920 + 0xf8c670) = 0xff
                        *(arg3 * 0x3920 + 0xf8c690) = 0
                        
                        if (ecx_8 s< 0)
                            ecx_8 = neg.d(ecx_8)
                        
                        *(arg3 * 0x3920 + 0xf8c68c) = ecx_8
                        *(arg3 * 0x3920 + 0xf8c688) = 0
                        *(arg3 * 0x3920 + 0xf8c67c) = 0
                        *(arg3 * 0x3920 + 0xf8c680) = 0
                        *(arg3 * 0x3920 + 0xf8c674) = 0
                        *(arg3 * 0x3920 + 0xf8c668) += 0x3e8
                        return eax_16
                    case 3, 4, 5, 6, 7, 8, 9
                        int32_t edi_1 = arg5
                        int32_t eax_17 = edi_1
                        int32_t ebx_1 = data_131310c
                        *(arg3 * 0x3920 + &data_f89ba4) = 1
                        *(arg3 * 0x3920 + 0xf8c684) = ebx_1
                        *(arg3 * 0x3920 + 0xf8c678) = 0xff
                        *(arg3 * 0x3920 + 0xf8c66c) = 0
                        *(arg3 * 0x3920 + 0xf8c670) = 0xff
                        *(arg3 * 0x3920 + 0xf8c690) = 0
                        
                        if (edi_1 s< 0)
                            eax_17 = neg.d(eax_17)
                        
                        *(arg3 * 0x3920 + 0xf8c68c) = eax_17
                        *(arg3 * 0x3920 + 0xf8c688) = 0
                        *(arg3 * 0x3920 + 0xf8c67c) = 0
                        *(arg3 * 0x3920 + 0xf8c680) = 0
                        *(arg3 * 0x3920 + 0xf8c674) = 0
                        sub_57b3a0(&var_8, arg4, arg3 * 0x3920 + &data_f89afc, &var_8, &var_c)
                        *(arg3 * 0x3920 + 0xf8c73c) = *(arg3 * 0x3920 + &data_f8c734)
                        *(arg3 * 0x3920 + 0xf8c740) = *(arg3 * 0x3920 + 0xf8c738)
                        *(arg3 * 0x3920 + 0xf8c744) = var_8
                        *(arg3 * 0x3920 + 0xf8c748) = var_c
                        int32_t eax_23 = edi_1
                        *(arg3 * 0x3920 + 0xf8c6ac) = ebx_1
                        *(arg3 * 0x3920 + 0xf8c6a0) = 0
                        *(arg3 * 0x3920 + 0xf8c694) = 0x59
                        *(arg3 * 0x3920 + 0xf8c698) = 0
                        *(arg3 * 0x3920 + 0xf8c6b8) = 0
                        
                        if (edi_1 s< 0)
                            eax_23 = neg.d(eax_23)
                        
                        *(arg3 * 0x3920 + 0xf8c6b4) = eax_23
                        *(arg3 * 0x3920 + 0xf8c6b0) = 0
                        *(arg3 * 0x3920 + 0xf8c6a4) = 0x59
                        *(arg3 * 0x3920 + 0xf8c6a8) = 0
                        *(arg3 * 0x3920 + 0xf8c69c) = 0
                        *(arg3 * 0x3920 + 0xf8c6d4) = ebx_1
                        *(arg3 * 0x3920 + 0xf8c6c8) = 0
                        *(arg3 * 0x3920 + 0xf8c6bc) = 0x59
                        *(arg3 * 0x3920 + 0xf8c6c0) = 0
                        *(arg3 * 0x3920 + 0xf8c6e0) = 0
                        
                        if (edi_1 s< 0)
                            edi_1 = neg.d(edi_1)
                        
                        *(arg3 * 0x3920 + 0xf8c6dc) = edi_1
                        *(arg3 * 0x3920 + 0xf8c6d8) = 0
                        *(arg3 * 0x3920 + 0xf8c6cc) = 0x59
                        *(arg3 * 0x3920 + 0xf8c6d0) = 0
                        *(arg3 * 0x3920 + 0xf8c6c4) = 0
                        *(arg3 * 0x3920 + 0xf8c668) += 0x3e8
                        return eax_23
                    case 0xa
                        int32_t ecx_10 = arg5
                        int32_t eax_24 = ecx_10
                        int32_t edx_6 = data_131310c
                        *(arg3 * 0x3920 + &data_f89ba4) = 1
                        *(arg3 * 0x3920 + 0xf8c684) = edx_6
                        *(arg3 * 0x3920 + 0xf8c678) = 0xff
                        *(arg3 * 0x3920 + 0xf8c66c) = 0
                        *(arg3 * 0x3920 + 0xf8c670) = 0xff
                        *(arg3 * 0x3920 + 0xf8c690) = 0
                        
                        if (ecx_10 s< 0)
                            eax_24 = neg.d(eax_24)
                        
                        *(arg3 * 0x3920 + 0xf8c68c) = eax_24
                        int32_t eax_25 = ecx_10
                        *(arg3 * 0x3920 + 0xf8c688) = 0
                        *(arg3 * 0x3920 + 0xf8c67c) = 0
                        *(arg3 * 0x3920 + 0xf8c680) = 0
                        *(arg3 * 0x3920 + 0xf8c674) = 0
                        *(arg3 * 0x3920 + 0xf8c74c) = 0
                        *(arg3 * 0x3920 + 0xf8c750) = 0
                        *(arg3 * 0x3920 + 0xf8c6fc) = edx_6
                        *(arg3 * 0x3920 + 0xf8c6f0) = 0
                        *(arg3 * 0x3920 + 0xf8c6e4) = 0x180
                        *(arg3 * 0x3920 + 0xf8c6e8) = 0
                        *(arg3 * 0x3920 + 0xf8c708) = 0
                        
                        if (ecx_10 s< 0)
                            eax_25 = neg.d(eax_25)
                        
                        *(arg3 * 0x3920 + 0xf8c704) = eax_25
                        *(arg3 * 0x3920 + 0xf8c700) = 0
                        *(arg3 * 0x3920 + 0xf8c6f4) = 0x180
                        *(arg3 * 0x3920 + 0xf8c6f8) = 0
                        *(arg3 * 0x3920 + 0xf8c6ec) = 0
                        eax_26 = *(arg3 * 0x3920 + 0xf8c750)
                        *(arg3 * 0x3920 + 0xf8c724) = edx_6
                        *(arg3 * 0x3920 + 0xf8c718) = eax_26
                        *(arg3 * 0x3920 + 0xf8c70c) = 0x180
                        *(arg3 * 0x3920 + 0xf8c710) = eax_26
                        *(arg3 * 0x3920 + 0xf8c730) = 0
                        
                        if (ecx_10 s< 0)
                            ecx_10 = neg.d(ecx_10)
                        
                        *(arg3 * 0x3920 + 0xf8c72c) = ecx_10
                    label_57c14d:
                        *(arg3 * 0x3920 + 0xf8c728) = 0
                        *(arg3 * 0x3920 + 0xf8c71c) = 0x180
                    label_57c161:
                        *(arg3 * 0x3920 + 0xf8c720) = 0
                        *(arg3 * 0x3920 + 0xf8c714) = 0
                        *(arg3 * 0x3920 + 0xf8c668) += 0x3e8
                        return eax_26
                    case 0xb
                        ecx_11 = arg5
                        int32_t eax_27 = ecx_11
                        edx_7 = data_131310c
                        *(arg3 * 0x3920 + &data_f89ba4) = 1
                        *(arg3 * 0x3920 + 0xf8c684) = edx_7
                        *(arg3 * 0x3920 + 0xf8c678) = 0xff
                        *(arg3 * 0x3920 + 0xf8c66c) = 0
                        *(arg3 * 0x3920 + 0xf8c670) = 0xff
                        *(arg3 * 0x3920 + 0xf8c690) = 0
                        
                        if (ecx_11 s< 0)
                            eax_27 = neg.d(eax_27)
                        
                        *(arg3 * 0x3920 + 0xf8c68c) = eax_27
                        eax_28 = ecx_11
                        *(arg3 * 0x3920 + 0xf8c688) = 0
                        *(arg3 * 0x3920 + 0xf8c67c) = 0
                        *(arg3 * 0x3920 + 0xf8c680) = 0
                        *(arg3 * 0x3920 + 0xf8c674) = 0
                        *(arg3 * 0x3920 + 0xf8c74c) = 0
                        *(arg3 * 0x3920 + 0xf8c750) = 0
                        *(arg3 * 0x3920 + 0xf8c6fc) = edx_7
                        *(arg3 * 0x3920 + 0xf8c6f0) = 0
                        *(arg3 * 0x3920 + 0xf8c6e4) = 0x40
                        *(arg3 * 0x3920 + 0xf8c6e8) = 0
                        *(arg3 * 0x3920 + 0xf8c708) = 0
                        
                        if (ecx_11 s< 0)
                            eax_28 = neg.d(eax_28)
                        
                        *(arg3 * 0x3920 + 0xf8c6f4) = 0x40
                    label_57c24b:
                        *(arg3 * 0x3920 + 0xf8c700) = 0
                        *(arg3 * 0x3920 + 0xf8c704) = eax_28
                        *(arg3 * 0x3920 + 0xf8c6f8) = 0
                        *(arg3 * 0x3920 + 0xf8c6ec) = 0
                        eax_26 = *(arg3 * 0x3920 + 0xf8c750)
                        *(arg3 * 0x3920 + 0xf8c724) = edx_7
                        *(arg3 * 0x3920 + 0xf8c718) = eax_26
                        *(arg3 * 0x3920 + 0xf8c70c) = 0xffffff80
                        *(arg3 * 0x3920 + 0xf8c710) = eax_26
                        *(arg3 * 0x3920 + 0xf8c730) = 0
                        
                        if (ecx_11 s< 0)
                            ecx_11 = neg.d(ecx_11)
                        
                        *(arg3 * 0x3920 + 0xf8c72c) = ecx_11
                    label_57c2a4:
                        *(arg3 * 0x3920 + 0xf8c728) = 0
                        *(arg3 * 0x3920 + 0xf8c71c) = 0xffffff80
                        goto label_57c161
                    case 0xc
                        eax_29 = arg5
                        int32_t ecx_12 = eax_29
                        int32_t edx_8 = data_131310c
                        *(arg3 * 0x3920 + &data_f89ba4) = 1
                        *(arg3 * 0x3920 + 0xf8c684) = edx_8
                        *(arg3 * 0x3920 + 0xf8c678) = 0xff
                        *(arg3 * 0x3920 + 0xf8c66c) = 0
                        *(arg3 * 0x3920 + 0xf8c670) = 0xff
                        *(arg3 * 0x3920 + 0xf8c690) = 0
                        
                        if (eax_29 s< 0)
                            ecx_12 = neg.d(ecx_12)
                        
                        *(arg3 * 0x3920 + 0xf8c68c) = ecx_12
                        *(arg3 * 0x3920 + 0xf8c688) = 0
                        *(arg3 * 0x3920 + 0xf8c67c) = 0
                        *(arg3 * 0x3920 + 0xf8c680) = 0
                        *(arg3 * 0x3920 + 0xf8c674) = 0
                        *(arg3 * 0x3920 + 0xf8c74c) = 0
                        *(arg3 * 0x3920 + 0xf8c6fc) = edx_8
                        *(arg3 * 0x3920 + 0xf8c6f0) = 0
                        *(arg3 * 0x3920 + 0xf8c6e4) = 0x180
                        *(arg3 * 0x3920 + 0xf8c6e8) = 0
                        *(arg3 * 0x3920 + 0xf8c708) = 0
                        
                        if (eax_29 s< 0)
                            eax_29 = neg.d(eax_29)
                        
                        *(arg3 * 0x3920 + 0xf8c6f4) = 0x180
                    label_57c379:
                        *(arg3 * 0x3920 + 0xf8c700) = 0
                        *(arg3 * 0x3920 + 0xf8c704) = eax_29
                        *(arg3 * 0x3920 + 0xf8c6f8) = 0
                        *(arg3 * 0x3920 + 0xf8c6ec) = 0
                        *(arg3 * 0x3920 + 0xf8c668) += 0x3e8
                        return eax_29
                    case 0xd
                        int32_t ecx_13 = arg5
                        int32_t eax_30 = ecx_13
                        int32_t edx_9 = data_131310c
                        *(arg3 * 0x3920 + &data_f89ba4) = 1
                        *(arg3 * 0x3920 + 0xf8c684) = edx_9
                        *(arg3 * 0x3920 + 0xf8c678) = 0xff
                        *(arg3 * 0x3920 + 0xf8c66c) = 0
                        *(arg3 * 0x3920 + 0xf8c670) = 0xff
                        *(arg3 * 0x3920 + 0xf8c690) = 0
                        
                        if (ecx_13 s< 0)
                            eax_30 = neg.d(eax_30)
                        
                        *(arg3 * 0x3920 + 0xf8c68c) = eax_30
                        int32_t eax_31 = ecx_13
                        *(arg3 * 0x3920 + 0xf8c688) = 0
                        *(arg3 * 0x3920 + 0xf8c67c) = 0
                        *(arg3 * 0x3920 + 0xf8c680) = 0
                        *(arg3 * 0x3920 + 0xf8c674) = 0
                        *(arg3 * 0x3920 + 0xf8c74c) = 0
                        *(arg3 * 0x3920 + 0xf8c750) = 0
                        *(arg3 * 0x3920 + 0xf8c6fc) = edx_9
                        *(arg3 * 0x3920 + 0xf8c6f0) = 0
                        *(arg3 * 0x3920 + 0xf8c6e4) = 0xffffff80
                        *(arg3 * 0x3920 + 0xf8c6e8) = 0
                        *(arg3 * 0x3920 + 0xf8c708) = 0
                        
                        if (ecx_13 s< 0)
                            eax_31 = neg.d(eax_31)
                        
                        *(arg3 * 0x3920 + 0xf8c704) = eax_31
                        *(arg3 * 0x3920 + 0xf8c700) = 0
                        *(arg3 * 0x3920 + 0xf8c6f4) = 0xffffff80
                        *(arg3 * 0x3920 + 0xf8c6f8) = 0
                        *(arg3 * 0x3920 + 0xf8c6ec) = 0
                        eax_26 = *(arg3 * 0x3920 + 0xf8c750)
                        *(arg3 * 0x3920 + 0xf8c724) = edx_9
                        *(arg3 * 0x3920 + 0xf8c718) = eax_26
                        *(arg3 * 0x3920 + 0xf8c70c) = 0x40
                        *(arg3 * 0x3920 + 0xf8c710) = eax_26
                        *(arg3 * 0x3920 + 0xf8c730) = 0
                        
                        if (ecx_13 s< 0)
                            ecx_13 = neg.d(ecx_13)
                        
                        *(arg3 * 0x3920 + 0xf8c72c) = ecx_13
                        *(arg3 * 0x3920 + 0xf8c728) = 0
                        *(arg3 * 0x3920 + 0xf8c71c) = 0x40
                        goto label_57c161
                    case 0xe
                        ecx_11 = arg5
                        int32_t eax_32 = ecx_11
                        edx_7 = data_131310c
                        *(arg3 * 0x3920 + &data_f89ba4) = 1
                        *(arg3 * 0x3920 + 0xf8c684) = edx_7
                        *(arg3 * 0x3920 + 0xf8c678) = 0xff
                        *(arg3 * 0x3920 + 0xf8c66c) = 0
                        *(arg3 * 0x3920 + 0xf8c670) = 0xff
                        *(arg3 * 0x3920 + 0xf8c690) = 0
                        
                        if (ecx_11 s< 0)
                            eax_32 = neg.d(eax_32)
                        
                        *(arg3 * 0x3920 + 0xf8c68c) = eax_32
                        eax_28 = ecx_11
                        *(arg3 * 0x3920 + 0xf8c688) = 0
                        *(arg3 * 0x3920 + 0xf8c67c) = 0
                        *(arg3 * 0x3920 + 0xf8c680) = 0
                        *(arg3 * 0x3920 + 0xf8c674) = 0
                        *(arg3 * 0x3920 + 0xf8c74c) = 0
                        *(arg3 * 0x3920 + 0xf8c750) = 0
                        *(arg3 * 0x3920 + 0xf8c6fc) = edx_7
                        *(arg3 * 0x3920 + 0xf8c6f0) = 0
                        *(arg3 * 0x3920 + 0xf8c6e4) = 0xffffff80
                        *(arg3 * 0x3920 + 0xf8c6e8) = 0
                        *(arg3 * 0x3920 + 0xf8c708) = 0
                        
                        if (ecx_11 s< 0)
                            eax_28 = neg.d(eax_28)
                        
                        *(arg3 * 0x3920 + 0xf8c6f4) = 0xffffff80
                        goto label_57c24b
                    case 0xf
                        eax_29 = arg5
                        int32_t ecx_14 = eax_29
                        int32_t edx_10 = data_131310c
                        *(arg3 * 0x3920 + &data_f89ba4) = 1
                        *(arg3 * 0x3920 + 0xf8c684) = edx_10
                        *(arg3 * 0x3920 + 0xf8c678) = 0xff
                        *(arg3 * 0x3920 + 0xf8c66c) = 0
                        *(arg3 * 0x3920 + 0xf8c670) = 0xff
                        *(arg3 * 0x3920 + 0xf8c690) = 0
                        
                        if (eax_29 s< 0)
                            ecx_14 = neg.d(ecx_14)
                        
                        *(arg3 * 0x3920 + 0xf8c68c) = ecx_14
                        *(arg3 * 0x3920 + 0xf8c688) = 0
                        *(arg3 * 0x3920 + 0xf8c67c) = 0
                        *(arg3 * 0x3920 + 0xf8c680) = 0
                        *(arg3 * 0x3920 + 0xf8c674) = 0
                        *(arg3 * 0x3920 + 0xf8c74c) = 0
                        *(arg3 * 0x3920 + 0xf8c6fc) = edx_10
                        *(arg3 * 0x3920 + 0xf8c6f0) = 0
                        *(arg3 * 0x3920 + 0xf8c6e4) = 0xffffff80
                        *(arg3 * 0x3920 + 0xf8c6e8) = 0
                        *(arg3 * 0x3920 + 0xf8c708) = 0
                        
                        if (eax_29 s< 0)
                            eax_29 = neg.d(eax_29)
                        
                        *(arg3 * 0x3920 + 0xf8c6f4) = 0xffffff80
                        goto label_57c379
                    case 0x10
                        eax_26 = arg5
                        int32_t ecx_15 = eax_26
                        int32_t edx_11 = data_131310c
                        *(arg3 * 0x3920 + &data_f89ba4) = 1
                        *(arg3 * 0x3920 + 0xf8c684) = edx_11
                        *(arg3 * 0x3920 + 0xf8c678) = 0xff
                        *(arg3 * 0x3920 + 0xf8c66c) = 0
                        *(arg3 * 0x3920 + 0xf8c670) = 0xff
                        *(arg3 * 0x3920 + 0xf8c690) = 0
                        
                        if (eax_26 s< 0)
                            ecx_15 = neg.d(ecx_15)
                        
                        *(arg3 * 0x3920 + 0xf8c68c) = ecx_15
                        *(arg3 * 0x3920 + 0xf8c688) = 0
                        *(arg3 * 0x3920 + 0xf8c67c) = 0
                        *(arg3 * 0x3920 + 0xf8c680) = 0
                        *(arg3 * 0x3920 + 0xf8c674) = 0
                        *(arg3 * 0x3920 + 0xf8c750) = 0
                        *(arg3 * 0x3920 + 0xf8c724) = edx_11
                        *(arg3 * 0x3920 + 0xf8c718) = 0
                        *(arg3 * 0x3920 + 0xf8c70c) = 0x180
                        *(arg3 * 0x3920 + 0xf8c710) = 0
                        *(arg3 * 0x3920 + 0xf8c730) = 0
                        
                        if (eax_26 s< 0)
                            eax_26 = neg.d(eax_26)
                        
                        *(arg3 * 0x3920 + 0xf8c72c) = eax_26
                        goto label_57c14d
                    case 0x11
                        eax_26 = arg5
                        int32_t ecx_16 = eax_26
                        int32_t edx_12 = data_131310c
                        *(arg3 * 0x3920 + &data_f89ba4) = 1
                        *(arg3 * 0x3920 + 0xf8c684) = edx_12
                        *(arg3 * 0x3920 + 0xf8c678) = 0xff
                        *(arg3 * 0x3920 + 0xf8c66c) = 0
                        *(arg3 * 0x3920 + 0xf8c670) = 0xff
                        *(arg3 * 0x3920 + 0xf8c690) = 0
                        
                        if (eax_26 s< 0)
                            ecx_16 = neg.d(ecx_16)
                        
                        *(arg3 * 0x3920 + 0xf8c68c) = ecx_16
                        *(arg3 * 0x3920 + 0xf8c688) = 0
                        *(arg3 * 0x3920 + 0xf8c67c) = 0
                        *(arg3 * 0x3920 + 0xf8c680) = 0
                        *(arg3 * 0x3920 + 0xf8c674) = 0
                        *(arg3 * 0x3920 + 0xf8c750) = 0
                        *(arg3 * 0x3920 + 0xf8c724) = edx_12
                        *(arg3 * 0x3920 + 0xf8c718) = 0
                        *(arg3 * 0x3920 + 0xf8c70c) = 0xffffff80
                        *(arg3 * 0x3920 + 0xf8c710) = 0
                        *(arg3 * 0x3920 + 0xf8c730) = 0
                        
                        if (eax_26 s< 0)
                            eax_26 = neg.d(eax_26)
                        
                        *(arg3 * 0x3920 + 0xf8c72c) = eax_26
                        goto label_57c2a4
    else
        bool cond:1_1 = data_13130bc != 0
        *(arg3 * 0x3920 + &data_f89ba4) = 1
        
        if (cond:1_1)
            *(arg3 * 0x3920 + 0xf8c668) = 0
            return eax
        
        eax = arg4 + 1
        
        if (eax u> 0x11)
            *(arg3 * 0x3920 + 0xf8c668) = 0
            return eax
        
        int32_t eax_8
        int32_t eax_14
        int32_t ecx_3
        int32_t edx_1
        
        switch (eax)
            case nullptr
                *(arg3 * 0x3920 + 0xf8c668) = 0
            case 2
                int32_t ecx = arg5
                int32_t eax_1 = data_131310c
                *(arg3 * 0x3920 + 0xf89ba0) = 0
                *(arg3 * 0x3920 + 0xf8c684) = eax_1
                *(arg3 * 0x3920 + 0xf8c678) = 0
                *(arg3 * 0x3920 + 0xf8c66c) = 0xff
                *(arg3 * 0x3920 + 0xf8c670) = 0
                *(arg3 * 0x3920 + 0xf8c690) = 0
                
                if (ecx s< 0)
                    ecx = neg.d(ecx)
                
                *(arg3 * 0x3920 + 0xf8c68c) = ecx
                *(arg3 * 0x3920 + 0xf8c688) = 0
                *(arg3 * 0x3920 + 0xf8c67c) = 0xff
                *(arg3 * 0x3920 + 0xf8c680) = 0
                *(arg3 * 0x3920 + 0xf8c674) = 0
                return eax_1
            case 3, 4, 5, 6, 7, 8, 9
                int32_t edi = arg5
                int32_t eax_2 = edi
                int32_t ebx = data_131310c
                *(arg3 * 0x3920 + 0xf89ba0) = 0
                *(arg3 * 0x3920 + 0xf8c684) = ebx
                *(arg3 * 0x3920 + 0xf8c678) = 0
                *(arg3 * 0x3920 + 0xf8c66c) = 0xff
                *(arg3 * 0x3920 + 0xf8c670) = 0
                *(arg3 * 0x3920 + 0xf8c690) = 0
                
                if (edi s< 0)
                    eax_2 = neg.d(eax_2)
                
                *(arg3 * 0x3920 + 0xf8c68c) = eax_2
                *(arg3 * 0x3920 + 0xf8c688) = 0
                *(arg3 * 0x3920 + 0xf8c67c) = 0xff
                *(arg3 * 0x3920 + 0xf8c680) = 0
                *(arg3 * 0x3920 + 0xf8c674) = 0
                sub_57b3a0(&var_8, arg4, arg3 * 0x3920 + &data_f89afc, &var_8, &var_c)
                int32_t eax_4 = var_c
                int32_t ecx_2 = var_8
                *(arg3 * 0x3920 + 0xf8c738) = eax_4
                *(arg3 * 0x3920 + 0xf8c740) = eax_4
                int32_t eax_5 = edi
                *(arg3 * 0x3920 + &data_f8c734) = ecx_2
                *(arg3 * 0x3920 + 0xf8c73c) = ecx_2
                *(arg3 * 0x3920 + 0xf8c744) = 0
                *(arg3 * 0x3920 + 0xf8c748) = 0
                *(arg3 * 0x3920 + 0xf8c6ac) = ebx
                *(arg3 * 0x3920 + 0xf8c6a0) = 0
                *(arg3 * 0x3920 + 0xf8c694) = 0x59
                *(arg3 * 0x3920 + 0xf8c698) = 0
                *(arg3 * 0x3920 + 0xf8c6b8) = 0
                
                if (edi s< 0)
                    eax_5 = neg.d(eax_5)
                
                *(arg3 * 0x3920 + 0xf8c6b4) = eax_5
                *(arg3 * 0x3920 + 0xf8c6b0) = 0
                *(arg3 * 0x3920 + 0xf8c6a4) = 0x59
                *(arg3 * 0x3920 + 0xf8c6a8) = 0
                *(arg3 * 0x3920 + 0xf8c69c) = 0
                *(arg3 * 0x3920 + 0xf8c6d4) = ebx
                *(arg3 * 0x3920 + 0xf8c6c8) = 0
                *(arg3 * 0x3920 + 0xf8c6bc) = 0x59
                *(arg3 * 0x3920 + 0xf8c6c0) = 0
                *(arg3 * 0x3920 + 0xf8c6e0) = 0
                
                if (edi s< 0)
                    edi = neg.d(edi)
                
                *(arg3 * 0x3920 + 0xf8c6dc) = edi
                *(arg3 * 0x3920 + 0xf8c6d8) = 0
                *(arg3 * 0x3920 + 0xf8c6cc) = 0x59
                *(arg3 * 0x3920 + 0xf8c6d0) = 0
                *(arg3 * 0x3920 + 0xf8c6c4) = 0
                return eax_5
            case 0xa
                ecx_3 = arg5
                int32_t eax_6 = ecx_3
                edx_1 = data_131310c
                *(arg3 * 0x3920 + 0xf89ba0) = 0
                *(arg3 * 0x3920 + 0xf8c684) = edx_1
                *(arg3 * 0x3920 + 0xf8c678) = 0
                *(arg3 * 0x3920 + 0xf8c66c) = 0xff
                *(arg3 * 0x3920 + 0xf8c670) = 0
                *(arg3 * 0x3920 + 0xf8c690) = 0
                
                if (ecx_3 s< 0)
                    eax_6 = neg.d(eax_6)
                
                *(arg3 * 0x3920 + 0xf8c68c) = eax_6
                *(arg3 * 0x3920 + 0xf8c688) = 0
                *(arg3 * 0x3920 + 0xf8c67c) = 0xff
                *(arg3 * 0x3920 + 0xf8c680) = 0
                *(arg3 * 0x3920 + 0xf8c674) = 0
                *(arg3 * 0x3920 + 0xf8c74c) = 0x180
                *(arg3 * 0x3920 + 0xf8c750) = 0x180
                *(arg3 * 0x3920 + 0xf8c6f0) = 0x180
                *(arg3 * 0x3920 + 0xf8c6e8) = 0x180
                goto label_57baa7
            case 0xb
                ecx_3 = arg5
                int32_t eax_7 = ecx_3
                edx_1 = data_131310c
                *(arg3 * 0x3920 + 0xf89ba0) = 0
                *(arg3 * 0x3920 + 0xf8c684) = edx_1
                *(arg3 * 0x3920 + 0xf8c678) = 0
                *(arg3 * 0x3920 + 0xf8c66c) = 0xff
                *(arg3 * 0x3920 + 0xf8c670) = 0
                *(arg3 * 0x3920 + 0xf8c690) = 0
                
                if (ecx_3 s< 0)
                    eax_7 = neg.d(eax_7)
                
                *(arg3 * 0x3920 + 0xf8c68c) = eax_7
                *(arg3 * 0x3920 + 0xf8c688) = 0
                *(arg3 * 0x3920 + 0xf8c67c) = 0xff
                *(arg3 * 0x3920 + 0xf8c680) = 0
                *(arg3 * 0x3920 + 0xf8c674) = 0
                *(arg3 * 0x3920 + 0xf8c74c) = 0x40
                *(arg3 * 0x3920 + 0xf8c750) = 0xffffff80
                *(arg3 * 0x3920 + 0xf8c6f0) = 0x40
                *(arg3 * 0x3920 + 0xf8c6e8) = 0x40
                goto label_57baa7
            case 0xc
                eax_8 = arg5
                int32_t ecx_4 = eax_8
                int32_t edx_2 = data_131310c
                *(arg3 * 0x3920 + 0xf89ba0) = 0
                *(arg3 * 0x3920 + 0xf8c684) = edx_2
                *(arg3 * 0x3920 + 0xf8c678) = 0
                *(arg3 * 0x3920 + 0xf8c66c) = 0xff
                *(arg3 * 0x3920 + 0xf8c670) = 0
                *(arg3 * 0x3920 + 0xf8c690) = 0
                
                if (eax_8 s< 0)
                    ecx_4 = neg.d(ecx_4)
                
                *(arg3 * 0x3920 + 0xf8c68c) = ecx_4
                *(arg3 * 0x3920 + 0xf8c688) = 0
                *(arg3 * 0x3920 + 0xf8c67c) = 0xff
                *(arg3 * 0x3920 + 0xf8c680) = 0
                *(arg3 * 0x3920 + 0xf8c674) = 0
                *(arg3 * 0x3920 + 0xf8c74c) = 0x180
                *(arg3 * 0x3920 + 0xf8c6fc) = edx_2
                *(arg3 * 0x3920 + 0xf8c6f0) = 0x180
                *(arg3 * 0x3920 + 0xf8c6e4) = 0
                *(arg3 * 0x3920 + 0xf8c6e8) = 0x180
                *(arg3 * 0x3920 + 0xf8c708) = 0
                
                if (eax_8 s< 0)
                    int32_t eax_9 = neg.d(eax_8)
                    *(arg3 * 0x3920 + 0xf8c700) = 0
                    *(arg3 * 0x3920 + 0xf8c704) = eax_9
                    *(arg3 * 0x3920 + 0xf8c6f4) = 0
                    *(arg3 * 0x3920 + 0xf8c6f8) = 0
                    *(arg3 * 0x3920 + 0xf8c6ec) = 0
                    return eax_9
                
            label_57bc08:
                *(arg3 * 0x3920 + 0xf8c704) = eax_8
                *(arg3 * 0x3920 + 0xf8c700) = 0
                *(arg3 * 0x3920 + 0xf8c6f4) = 0
                *(arg3 * 0x3920 + 0xf8c6f8) = 0
                *(arg3 * 0x3920 + 0xf8c6ec) = 0
                return eax_8
            case 0xd
                ecx_3 = arg5
                int32_t eax_10 = ecx_3
                edx_1 = data_131310c
                *(arg3 * 0x3920 + 0xf89ba0) = 0
                *(arg3 * 0x3920 + 0xf8c684) = edx_1
                *(arg3 * 0x3920 + 0xf8c678) = 0
                *(arg3 * 0x3920 + 0xf8c66c) = 0xff
                *(arg3 * 0x3920 + 0xf8c670) = 0
                *(arg3 * 0x3920 + 0xf8c690) = 0
                
                if (ecx_3 s< 0)
                    eax_10 = neg.d(eax_10)
                
                *(arg3 * 0x3920 + 0xf8c68c) = eax_10
                *(arg3 * 0x3920 + 0xf8c688) = 0
                *(arg3 * 0x3920 + 0xf8c67c) = 0xff
                *(arg3 * 0x3920 + 0xf8c680) = 0
                *(arg3 * 0x3920 + 0xf8c674) = 0
                *(arg3 * 0x3920 + 0xf8c750) = 0x40
            label_57ba89:
                *(arg3 * 0x3920 + 0xf8c74c) = 0xffffff80
                *(arg3 * 0x3920 + 0xf8c6e8) = 0xffffff80
                *(arg3 * 0x3920 + 0xf8c6f0) = 0xffffff80
            label_57baa7:
                *(arg3 * 0x3920 + 0xf8c708) = 0
                int32_t eax_12 = ecx_3
                *(arg3 * 0x3920 + 0xf8c6e4) = 0
                *(arg3 * 0x3920 + 0xf8c6fc) = edx_1
                
                if (ecx_3 s< 0)
                    eax_12 = neg.d(eax_12)
                
                *(arg3 * 0x3920 + 0xf8c704) = eax_12
                *(arg3 * 0x3920 + 0xf8c700) = 0
                *(arg3 * 0x3920 + 0xf8c6f4) = 0
                *(arg3 * 0x3920 + 0xf8c6f8) = 0
                *(arg3 * 0x3920 + 0xf8c6ec) = 0
                int32_t eax_13 = *(arg3 * 0x3920 + 0xf8c750)
                *(arg3 * 0x3920 + 0xf8c724) = edx_1
                *(arg3 * 0x3920 + 0xf8c718) = eax_13
                *(arg3 * 0x3920 + 0xf8c70c) = 0
                *(arg3 * 0x3920 + 0xf8c710) = eax_13
                *(arg3 * 0x3920 + 0xf8c730) = 0
                
                if (ecx_3 s< 0)
                    ecx_3 = neg.d(ecx_3)
                
                *(arg3 * 0x3920 + 0xf8c72c) = ecx_3
                *(arg3 * 0x3920 + 0xf8c728) = 0
                *(arg3 * 0x3920 + 0xf8c71c) = 0
                *(arg3 * 0x3920 + 0xf8c720) = 0
                *(arg3 * 0x3920 + 0xf8c714) = 0
                return eax_13
            case 0xe
                ecx_3 = arg5
                int32_t eax_11 = ecx_3
                edx_1 = data_131310c
                *(arg3 * 0x3920 + 0xf89ba0) = 0
                *(arg3 * 0x3920 + 0xf8c684) = edx_1
                *(arg3 * 0x3920 + 0xf8c678) = 0
                *(arg3 * 0x3920 + 0xf8c66c) = 0xff
                *(arg3 * 0x3920 + 0xf8c670) = 0
                *(arg3 * 0x3920 + 0xf8c690) = 0
                
                if (ecx_3 s< 0)
                    eax_11 = neg.d(eax_11)
                
                *(arg3 * 0x3920 + 0xf8c68c) = eax_11
                *(arg3 * 0x3920 + 0xf8c688) = 0
                *(arg3 * 0x3920 + 0xf8c67c) = 0xff
                *(arg3 * 0x3920 + 0xf8c680) = 0
                *(arg3 * 0x3920 + 0xf8c674) = 0
                *(arg3 * 0x3920 + 0xf8c750) = 0xffffff80
                goto label_57ba89
            case 0xf
                eax_8 = arg5
                int32_t ecx_5 = eax_8
                int32_t edx_3 = data_131310c
                *(arg3 * 0x3920 + 0xf89ba0) = 0
                *(arg3 * 0x3920 + 0xf8c684) = edx_3
                *(arg3 * 0x3920 + 0xf8c678) = 0
                *(arg3 * 0x3920 + 0xf8c66c) = 0xff
                *(arg3 * 0x3920 + 0xf8c670) = 0
                *(arg3 * 0x3920 + 0xf8c690) = 0
                
                if (eax_8 s< 0)
                    ecx_5 = neg.d(ecx_5)
                
                *(arg3 * 0x3920 + 0xf8c68c) = ecx_5
                *(arg3 * 0x3920 + 0xf8c688) = 0
                *(arg3 * 0x3920 + 0xf8c67c) = 0xff
                *(arg3 * 0x3920 + 0xf8c680) = 0
                *(arg3 * 0x3920 + 0xf8c674) = 0
                *(arg3 * 0x3920 + 0xf8c74c) = 0xffffff80
                *(arg3 * 0x3920 + 0xf8c6fc) = edx_3
                *(arg3 * 0x3920 + 0xf8c6f0) = 0xffffff80
                *(arg3 * 0x3920 + 0xf8c6e4) = 0
                *(arg3 * 0x3920 + 0xf8c6e8) = 0xffffff80
                *(arg3 * 0x3920 + 0xf8c708) = 0
                
                if (eax_8 s< 0)
                    eax_8 = neg.d(eax_8)
                
                goto label_57bc08
            case 0x10
                eax_14 = arg5
                int32_t ecx_6 = eax_14
                int32_t edx_4 = data_131310c
                *(arg3 * 0x3920 + 0xf89ba0) = 0
                *(arg3 * 0x3920 + 0xf8c684) = edx_4
                *(arg3 * 0x3920 + 0xf8c678) = 0
                *(arg3 * 0x3920 + 0xf8c66c) = 0xff
                *(arg3 * 0x3920 + 0xf8c670) = 0
                *(arg3 * 0x3920 + 0xf8c690) = 0
                
                if (eax_14 s< 0)
                    ecx_6 = neg.d(ecx_6)
                
                *(arg3 * 0x3920 + 0xf8c68c) = ecx_6
                *(arg3 * 0x3920 + 0xf8c688) = 0
                *(arg3 * 0x3920 + 0xf8c67c) = 0xff
                *(arg3 * 0x3920 + 0xf8c680) = 0
                *(arg3 * 0x3920 + 0xf8c674) = 0
                *(arg3 * 0x3920 + 0xf8c750) = 0x180
                *(arg3 * 0x3920 + 0xf8c724) = edx_4
                *(arg3 * 0x3920 + 0xf8c718) = 0x180
                *(arg3 * 0x3920 + 0xf8c70c) = 0
                *(arg3 * 0x3920 + 0xf8c710) = 0x180
                *(arg3 * 0x3920 + 0xf8c730) = 0
                
                if (eax_14 s< 0)
                    int32_t eax_15 = neg.d(eax_14)
                    *(arg3 * 0x3920 + 0xf8c728) = 0
                    *(arg3 * 0x3920 + 0xf8c72c) = eax_15
                    *(arg3 * 0x3920 + 0xf8c71c) = 0
                    *(arg3 * 0x3920 + 0xf8c720) = 0
                    *(arg3 * 0x3920 + 0xf8c714) = 0
                    return eax_15
                
            label_57bdce:
                *(arg3 * 0x3920 + 0xf8c72c) = eax_14
                *(arg3 * 0x3920 + 0xf8c728) = 0
                *(arg3 * 0x3920 + 0xf8c71c) = 0
                *(arg3 * 0x3920 + 0xf8c720) = 0
                *(arg3 * 0x3920 + 0xf8c714) = 0
                return eax_14
            case 0x11
                eax_14 = arg5
                int32_t ecx_7 = eax_14
                int32_t edx_5 = data_131310c
                *(arg3 * 0x3920 + 0xf89ba0) = 0
                *(arg3 * 0x3920 + 0xf8c684) = edx_5
                *(arg3 * 0x3920 + 0xf8c678) = 0
                *(arg3 * 0x3920 + 0xf8c66c) = 0xff
                *(arg3 * 0x3920 + 0xf8c670) = 0
                *(arg3 * 0x3920 + 0xf8c690) = 0
                
                if (eax_14 s< 0)
                    ecx_7 = neg.d(ecx_7)
                
                *(arg3 * 0x3920 + 0xf8c68c) = ecx_7
                *(arg3 * 0x3920 + 0xf8c688) = 0
                *(arg3 * 0x3920 + 0xf8c67c) = 0xff
                *(arg3 * 0x3920 + 0xf8c680) = 0
                *(arg3 * 0x3920 + 0xf8c674) = 0
                *(arg3 * 0x3920 + 0xf8c750) = 0xffffff80
                *(arg3 * 0x3920 + 0xf8c724) = edx_5
                *(arg3 * 0x3920 + 0xf8c718) = 0xffffff80
                *(arg3 * 0x3920 + 0xf8c70c) = 0
                *(arg3 * 0x3920 + 0xf8c710) = 0xffffff80
                *(arg3 * 0x3920 + 0xf8c730) = 0
                
                if (eax_14 s< 0)
                    eax_14 = neg.d(eax_14)
                
                goto label_57bdce

return eax

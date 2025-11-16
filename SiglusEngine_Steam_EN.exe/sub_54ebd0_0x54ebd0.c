// 函数: sub_54ebd0
// 地址: 0x54ebd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi

if (arg2 == 0x10)
    EndDialog(data_1c054f0, 0)
    data_1c054f0 = 0
else
    if (arg2 == 0x110)
        data_1c054f0 = arg1
        sub_54ea80()
        return 1
    
    if (arg2 != 0x111)
        return 0
    
    uint32_t edx_1 = zx.d(arg3)
    
    if (edx_1 s> 0x4f4f)
        if (edx_1 - 0x4f69 u<= 0xbc)
            switch (edx_1)
                case 0x4f69
                    data_20c259c = 0
                    sub_54ea30()
                    return 1
                case 0x4f6a
                    data_20c259c = 1
                    sub_54ea30()
                    return 1
                case 0x4f6b
                    data_20c259c = 2
                    sub_54ea30()
                    return 1
                case 0x4f6c
                    data_20c259c = 3
                    sub_54ea30()
                    return 1
                case 0x4f6d
                    data_20c259c = 4
                    sub_54ea30()
                    return 1
                case 0x4f95
                    for (int32_t i = 0; i s< 0x40; i += 1)
                        int32_t nIDDlgItem_1 = *((i << 2) + &data_63f940)
                        
                        if (nIDDlgItem_1 != 0)
                            void* eax_16 = &data_63f940
                            
                            for (int32_t j = 0; j s< 0x40; )
                                if (*eax_16 == nIDDlgItem_1)
                                    HWND hDlg = data_1c054f0
                                    *((((data_20c259c << 6) + i) << 2) + &data_20c25a0) = 1
                                    SendDlgItemMessageA(hDlg, nIDDlgItem_1, 0xf1, 1, 0)
                                    break
                                
                                j += 1
                                eax_16 += 4
                    
                    return 1
                case 0x4f96
                    for (int32_t i_1 = 0; i_1 s< 0x40; i_1 += 1)
                        int32_t nIDDlgItem_2 = *((i_1 << 2) + &data_63f940)
                        
                        if (nIDDlgItem_2 != 0)
                            void* eax_21 = &data_63f920
                            
                            for (int32_t j_1 = 0; j_1 s< 8; )
                                if (*eax_21 == nIDDlgItem_2)
                                    HWND hDlg_1 = data_1c054f0
                                    *((((data_20c259c << 6) + i_1) << 2) + &data_20c25a0) = 1
                                    SendDlgItemMessageA(hDlg_1, nIDDlgItem_2, 0xf1, 1, 0)
                                    break
                                
                                j_1 += 1
                                eax_21 += 4
                    
                    return 1
                case 0x4f97
                    for (int32_t i_2 = 0; i_2 s< 0x40; i_2 += 1)
                        int32_t nIDDlgItem_3 = *((i_2 << 2) + &data_63f940)
                        
                        if (nIDDlgItem_3 != 0)
                            void* eax_26 = &data_63f8e0
                            
                            for (int32_t j_2 = 0; j_2 s< 5; )
                                if (*eax_26 == nIDDlgItem_3)
                                    HWND hDlg_2 = data_1c054f0
                                    *((((data_20c259c << 6) + i_2) << 2) + &data_20c25a0) = 1
                                    SendDlgItemMessageA(hDlg_2, nIDDlgItem_3, 0xf1, 1, 0)
                                    break
                                
                                j_2 += 1
                                eax_26 += 4
                    
                    return 1
                case 0x4f98
                    for (int32_t i_3 = 0; i_3 s< 0x40; i_3 += 1)
                        int32_t nIDDlgItem_4 = *((i_3 << 2) + &data_63f940)
                        
                        if (nIDDlgItem_4 != 0)
                            void* eax_31 = &data_63f8c0
                            
                            for (int32_t j_3 = 0; j_3 s< 8; )
                                if (*eax_31 == nIDDlgItem_4)
                                    HWND hDlg_3 = data_1c054f0
                                    *((((data_20c259c << 6) + i_3) << 2) + &data_20c25a0) = 1
                                    SendDlgItemMessageA(hDlg_3, nIDDlgItem_4, 0xf1, 1, 0)
                                    break
                                
                                j_3 += 1
                                eax_31 += 4
                    
                    return 1
                case 0x4f99
                    for (int32_t i_4 = 0; i_4 s< 0x40; i_4 += 1)
                        int32_t nIDDlgItem_5 = *((i_4 << 2) + &data_63f940)
                        
                        if (nIDDlgItem_5 != 0)
                            void* eax_36 = &data_63f900
                            
                            for (int32_t j_4 = 0; j_4 s< 5; )
                                if (*eax_36 == nIDDlgItem_5)
                                    HWND hDlg_4 = data_1c054f0
                                    *((((data_20c259c << 6) + i_4) << 2) + &data_20c25a0) = 1
                                    SendDlgItemMessageA(hDlg_4, nIDDlgItem_5, 0xf1, 1, 0)
                                    break
                                
                                j_4 += 1
                                eax_36 += 4
                    
                    return 1
                case 0x4f9a
                    for (int32_t i_5 = 0; i_5 s< 0x40; i_5 += 1)
                        int32_t nIDDlgItem_6 = *((i_5 << 2) + &data_63f940)
                        
                        if (nIDDlgItem_6 != 0)
                            void* eax_41 = &data_63f870
                            
                            for (int32_t j_5 = 0; j_5 s< 6; )
                                if (*eax_41 == nIDDlgItem_6)
                                    HWND hDlg_5 = data_1c054f0
                                    *((((data_20c259c << 6) + i_5) << 2) + &data_20c25a0) = 1
                                    SendDlgItemMessageA(hDlg_5, nIDDlgItem_6, 0xf1, 1, 0)
                                    break
                                
                                j_5 += 1
                                eax_41 += 4
                    
                    return 1
                case 0x4f9b
                    for (int32_t i_6 = 0; i_6 s< 0x40; i_6 += 1)
                        int32_t nIDDlgItem_7 = *((i_6 << 2) + &data_63f940)
                        
                        if (nIDDlgItem_7 != 0)
                            void* eax_46 = &data_63f84c
                            
                            for (int32_t j_6 = 0; j_6 s< 2; )
                                if (*eax_46 == nIDDlgItem_7)
                                    HWND hDlg_6 = data_1c054f0
                                    *((((data_20c259c << 6) + i_6) << 2) + &data_20c25a0) = 1
                                    SendDlgItemMessageA(hDlg_6, nIDDlgItem_7, 0xf1, 1, 0)
                                    break
                                
                                j_6 += 1
                                eax_46 += 4
                    
                    return 1
                case 0x4f9c
                    for (int32_t i_7 = 0; i_7 s< 0x40; i_7 += 1)
                        int32_t nIDDlgItem_8 = *((i_7 << 2) + &data_63f940)
                        
                        if (nIDDlgItem_8 != 0)
                            void* eax_51 = &data_63f830
                            
                            for (int32_t j_7 = 0; j_7 s< 7; )
                                if (*eax_51 == nIDDlgItem_8)
                                    HWND hDlg_7 = data_1c054f0
                                    *((((data_20c259c << 6) + i_7) << 2) + &data_20c25a0) = 1
                                    SendDlgItemMessageA(hDlg_7, nIDDlgItem_8, 0xf1, 1, 0)
                                    break
                                
                                j_7 += 1
                                eax_51 += 4
                    
                    return 1
                case 0x4f9d
                    for (int32_t i_8 = 0; i_8 s< 0x40; i_8 += 1)
                        int32_t nIDDlgItem_9 = *((i_8 << 2) + &data_63f940)
                        
                        if (nIDDlgItem_9 != 0)
                            void* eax_56 = &data_63f890
                            
                            for (int32_t j_8 = 0; j_8 s< 8; )
                                if (*eax_56 == nIDDlgItem_9)
                                    HWND hDlg_8 = data_1c054f0
                                    *((((data_20c259c << 6) + i_8) << 2) + &data_20c25a0) = 1
                                    SendDlgItemMessageA(hDlg_8, nIDDlgItem_9, 0xf1, 1, 0)
                                    break
                                
                                j_8 += 1
                                eax_56 += 4
                    
                    return 1
                case 0x4f9e
                    for (int32_t i_9 = 0; i_9 s< 0x40; i_9 += 1)
                        int32_t nIDDlgItem_10 = *((i_9 << 2) + &data_63f940)
                        
                        if (nIDDlgItem_10 != 0)
                            void* eax_61 = &data_63f8b0
                            
                            for (int32_t j_9 = 0; j_9 s< 4; )
                                if (*eax_61 == nIDDlgItem_10)
                                    HWND hDlg_9 = data_1c054f0
                                    *((((data_20c259c << 6) + i_9) << 2) + &data_20c25a0) = 1
                                    SendDlgItemMessageA(hDlg_9, nIDDlgItem_10, 0xf1, 1, 0)
                                    break
                                
                                j_9 += 1
                                eax_61 += 4
                    
                    return 1
                case 0x4f9f
                    for (int32_t i_10 = 0; i_10 s< 0x40; i_10 += 1)
                        int32_t nIDDlgItem_11 = *((i_10 << 2) + &data_63f940)
                        
                        if (nIDDlgItem_11 != 0)
                            void* eax_66 = &data_63f860
                            
                            for (int32_t j_10 = 0; j_10 s< 4; )
                                if (*eax_66 == nIDDlgItem_11)
                                    HWND hDlg_10 = data_1c054f0
                                    *((((data_20c259c << 6) + i_10) << 2) + &data_20c25a0) = 1
                                    SendDlgItemMessageA(hDlg_10, nIDDlgItem_11, 0xf1, 1, 0)
                                    break
                                
                                j_10 += 1
                                eax_66 += 4
                    
                    return 1
                case 0x501b
                    for (int32_t i_11 = 0; i_11 s< 0x40; i_11 += 1)
                        int32_t nIDDlgItem_12 = *((i_11 << 2) + &data_63f940)
                        
                        if (nIDDlgItem_12 != 0)
                            void* eax_71 = &data_63f940
                            
                            for (int32_t j_11 = 0; j_11 s< 0x40; )
                                if (*eax_71 == nIDDlgItem_12)
                                    HWND hDlg_11 = data_1c054f0
                                    *((((data_20c259c << 6) + i_11) << 2) + &data_20c25a0) = 0
                                    SendDlgItemMessageA(hDlg_11, nIDDlgItem_12, 0xf1, 0, 0)
                                    break
                                
                                j_11 += 1
                                eax_71 += 4
                    
                    return 1
                case 0x501c
                    for (int32_t i_12 = 0; i_12 s< 0x40; i_12 += 1)
                        int32_t nIDDlgItem_13 = *((i_12 << 2) + &data_63f940)
                        
                        if (nIDDlgItem_13 != 0)
                            void* eax_76 = &data_63f920
                            
                            for (int32_t j_12 = 0; j_12 s< 8; )
                                if (*eax_76 == nIDDlgItem_13)
                                    HWND hDlg_12 = data_1c054f0
                                    *((((data_20c259c << 6) + i_12) << 2) + &data_20c25a0) = 0
                                    SendDlgItemMessageA(hDlg_12, nIDDlgItem_13, 0xf1, 0, 0)
                                    break
                                
                                j_12 += 1
                                eax_76 += 4
                    
                    return 1
                case 0x501d
                    for (int32_t i_13 = 0; i_13 s< 0x40; i_13 += 1)
                        int32_t nIDDlgItem_14 = *((i_13 << 2) + &data_63f940)
                        
                        if (nIDDlgItem_14 != 0)
                            void* eax_81 = &data_63f8e0
                            
                            for (int32_t j_13 = 0; j_13 s< 5; )
                                if (*eax_81 == nIDDlgItem_14)
                                    HWND hDlg_13 = data_1c054f0
                                    *((((data_20c259c << 6) + i_13) << 2) + &data_20c25a0) = 0
                                    SendDlgItemMessageA(hDlg_13, nIDDlgItem_14, 0xf1, 0, 0)
                                    break
                                
                                j_13 += 1
                                eax_81 += 4
                    
                    return 1
                case 0x501e
                    for (int32_t i_14 = 0; i_14 s< 0x40; i_14 += 1)
                        int32_t nIDDlgItem_15 = *((i_14 << 2) + &data_63f940)
                        
                        if (nIDDlgItem_15 != 0)
                            void* eax_86 = &data_63f8c0
                            
                            for (int32_t j_14 = 0; j_14 s< 8; )
                                if (*eax_86 == nIDDlgItem_15)
                                    HWND hDlg_14 = data_1c054f0
                                    *((((data_20c259c << 6) + i_14) << 2) + &data_20c25a0) = 0
                                    SendDlgItemMessageA(hDlg_14, nIDDlgItem_15, 0xf1, 0, 0)
                                    break
                                
                                j_14 += 1
                                eax_86 += 4
                    
                    return 1
                case 0x501f
                    for (int32_t i_15 = 0; i_15 s< 0x40; i_15 += 1)
                        int32_t nIDDlgItem_16 = *((i_15 << 2) + &data_63f940)
                        
                        if (nIDDlgItem_16 != 0)
                            void* eax_91 = &data_63f900
                            
                            for (int32_t j_15 = 0; j_15 s< 5; )
                                if (*eax_91 == nIDDlgItem_16)
                                    HWND hDlg_15 = data_1c054f0
                                    *((((data_20c259c << 6) + i_15) << 2) + &data_20c25a0) = 0
                                    SendDlgItemMessageA(hDlg_15, nIDDlgItem_16, 0xf1, 0, 0)
                                    break
                                
                                j_15 += 1
                                eax_91 += 4
                    
                    return 1
                case 0x5020
                    for (int32_t i_16 = 0; i_16 s< 0x40; i_16 += 1)
                        int32_t nIDDlgItem_17 = *((i_16 << 2) + &data_63f940)
                        
                        if (nIDDlgItem_17 != 0)
                            void* eax_96 = &data_63f870
                            
                            for (int32_t j_16 = 0; j_16 s< 6; )
                                if (*eax_96 == nIDDlgItem_17)
                                    HWND hDlg_16 = data_1c054f0
                                    *((((data_20c259c << 6) + i_16) << 2) + &data_20c25a0) = 0
                                    SendDlgItemMessageA(hDlg_16, nIDDlgItem_17, 0xf1, 0, 0)
                                    break
                                
                                j_16 += 1
                                eax_96 += 4
                    
                    return 1
                case 0x5021
                    for (int32_t i_17 = 0; i_17 s< 0x40; i_17 += 1)
                        int32_t nIDDlgItem_18 = *((i_17 << 2) + &data_63f940)
                        
                        if (nIDDlgItem_18 != 0)
                            void* eax_101 = &data_63f84c
                            
                            for (int32_t j_17 = 0; j_17 s< 2; )
                                if (*eax_101 == nIDDlgItem_18)
                                    HWND hDlg_17 = data_1c054f0
                                    *((((data_20c259c << 6) + i_17) << 2) + &data_20c25a0) = 0
                                    SendDlgItemMessageA(hDlg_17, nIDDlgItem_18, 0xf1, 0, 0)
                                    break
                                
                                j_17 += 1
                                eax_101 += 4
                    
                    return 1
                case 0x5022
                    for (int32_t i_18 = 0; i_18 s< 0x40; i_18 += 1)
                        int32_t nIDDlgItem_19 = *((i_18 << 2) + &data_63f940)
                        
                        if (nIDDlgItem_19 != 0)
                            void* eax_106 = &data_63f830
                            
                            for (int32_t j_18 = 0; j_18 s< 7; )
                                if (*eax_106 == nIDDlgItem_19)
                                    HWND hDlg_18 = data_1c054f0
                                    *((((data_20c259c << 6) + i_18) << 2) + &data_20c25a0) = 0
                                    SendDlgItemMessageA(hDlg_18, nIDDlgItem_19, 0xf1, 0, 0)
                                    break
                                
                                j_18 += 1
                                eax_106 += 4
                    
                    return 1
                case 0x5023
                    for (int32_t i_19 = 0; i_19 s< 0x40; i_19 += 1)
                        int32_t nIDDlgItem_20 = *((i_19 << 2) + &data_63f940)
                        
                        if (nIDDlgItem_20 != 0)
                            void* eax_111 = &data_63f890
                            
                            for (int32_t j_19 = 0; j_19 s< 8; )
                                if (*eax_111 == nIDDlgItem_20)
                                    HWND hDlg_19 = data_1c054f0
                                    *((((data_20c259c << 6) + i_19) << 2) + &data_20c25a0) = 0
                                    SendDlgItemMessageA(hDlg_19, nIDDlgItem_20, 0xf1, 0, 0)
                                    break
                                
                                j_19 += 1
                                eax_111 += 4
                    
                    return 1
                case 0x5024
                    for (int32_t i_20 = 0; i_20 s< 0x40; i_20 += 1)
                        int32_t nIDDlgItem_21 = *((i_20 << 2) + &data_63f940)
                        
                        if (nIDDlgItem_21 != 0)
                            void* eax_116 = &data_63f8b0
                            
                            for (int32_t j_20 = 0; j_20 s< 4; )
                                if (*eax_116 == nIDDlgItem_21)
                                    HWND hDlg_20 = data_1c054f0
                                    *((((data_20c259c << 6) + i_20) << 2) + &data_20c25a0) = 0
                                    SendDlgItemMessageA(hDlg_20, nIDDlgItem_21, 0xf1, 0, 0)
                                    break
                                
                                j_20 += 1
                                eax_116 += 4
                    
                    return 1
                case 0x5025
                    for (int32_t i_21 = 0; i_21 s< 0x40; i_21 += 1)
                        int32_t nIDDlgItem_22 = *((i_21 << 2) + &data_63f940)
                        
                        if (nIDDlgItem_22 != 0)
                            void* eax_121 = &data_63f860
                            
                            for (int32_t j_21 = 0; j_21 s< 4; )
                                if (*eax_121 == nIDDlgItem_22)
                                    HWND hDlg_21 = data_1c054f0
                                    *((((data_20c259c << 6) + i_21) << 2) + &data_20c25a0) = 0
                                    SendDlgItemMessageA(hDlg_21, nIDDlgItem_22, 0xf1, 0, 0)
                                    break
                                
                                j_21 += 1
                                eax_121 += 4
                    
                    return 1
        
        goto label_54f55c
    
    if (edx_1 == 0x4f4f)
        sub_54eb70()
        return 1
    
    if (edx_1 != 0x4e54)
    label_54f55c:
        int32_t eax_126 = 0
        int32_t nIDDlgItem
        
        while (true)
            nIDDlgItem = *((eax_126 << 2) + &data_63f940)
            
            if (nIDDlgItem != 0 && edx_1 == nIDDlgItem)
                break
            
            eax_126 += 1
            
            if (eax_126 s>= 0x40)
                return 1
        
        if (edx_1 == nIDDlgItem)
            *((((data_20c259c << 6) + eax_126) << 2) + &data_20c25a0) =
                sx.d(SendDlgItemMessageA(data_1c054f0, nIDDlgItem, 0xf2, 0, 0)) & 1
    else
        EndDialog(data_1c054f0, 0)
        data_1c054f0 = 0

return 1

// 函数: sub_45be00
// 地址: 0x45be00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg4 == 0)
label_45be28:
    int32_t esi_1 = 0
    
    if (arg3 s> 2)
        if (arg3 - 3 u<= 0x14)
            switch (arg3 + &jump_table_45bf74[3]:1)
                case &lookup_table_45bf84, &lookup_table_45bf84[1], &lookup_table_45bf84[3], 
                        &lookup_table_45bf84[6], &lookup_table_45bf84[7], 
                        &lookup_table_45bf84[0xa], &lookup_table_45bf84[0xd], 
                        &lookup_table_45bf84[0x14]
                    goto label_45be69
                case &lookup_table_45bf84[2], &lookup_table_45bf84[5], &lookup_table_45bf84[8], 
                    &lookup_table_45bf84[9], &lookup_table_45bf84[0xe], &lookup_table_45bf84[0xf], 
                    &lookup_table_45bf84[0x10], &lookup_table_45bf84[0x11], 
                    &lookup_table_45bf84[0x12], &lookup_table_45bf84[0x13]
                label_45bec1:
                    data_1392cc4 = 0
                    data_13701e0 = 1
                    data_1392cc8 = 1
                    data_f89aec = 0xffffffff
                    data_f89af0 = 0xffffffff
                    data_f89af4 = 0xffffffff
                    data_f89af8 = 0xffffffff
                    sub_45b6d0(arg3, arg2)
                    
                    if (esi_1 != 0)
                        int32_t eax = data_7037a0
                        data_1af17cc = 0
                        data_1af17a0 = 0
                        data_1af4e70 = eax
                        
                        if (eax != 0)
                            int32_t i
                            
                            do
                                i = ShowCursor(1)
                            while (i s<= 0)
                        else
                            int32_t i_1
                            
                            do
                                i_1 = ShowCursor(0)
                            while (i_1 s>= 0)
                        
                        arg1 = data_1c054ec
                        
                        if (arg1 != 0)
                            ShowWindow(arg1, SW_SHOW)
                            InvalidateRect(data_1c054ec, nullptr, 1)
                case &lookup_table_45bf84[0xc]
                    if (data_1300594 != 0)
                        goto label_45bec1
                    
                    goto label_45be69
    else if (arg3 == 2 || arg3 == 0xffffd8ef || arg3 == 0xffffd8f0)
    label_45be69:
        HWND hWnd = data_1c054ec
        esi_1 = 1
        
        if (hWnd != 0)
            ShowWindow(hWnd, SW_HIDE)
            InvalidateRect(data_1c054ec, nullptr, 1)
        
        data_1af4e70 = 1
        int32_t i_2
        
        do
            i_2 = ShowCursor(1)
        while (i_2 s<= 0)
        data_1af17a0 = 1
        data_1af17cc = 1
        goto label_45bec1
else if (sub_45aa10(arg3) == IDOK)
    goto label_45be28

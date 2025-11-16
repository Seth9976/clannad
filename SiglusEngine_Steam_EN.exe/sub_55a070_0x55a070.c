// 函数: sub_55a070
// 地址: 0x55a070
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
LRESULT result = __security_cookie ^ &__saved_ebp
LRESULT result_1 = result

for (int32_t i = 0; i s< 0x40; i += 1)
    if (i u<= 0x3f)
        HWND edx_1 = (&data_1af0a10)[i]
        
        if (edx_1 != 0)
            HWND hWnd
            
            if (i == 0x17)
                hWnd = data_1af0a6c
                
                if (hWnd != 0)
                    data_13156b8 = 0
                    data_13156bc = 1
                    RECT rect
                    GetWindowRect(hWnd, &rect)
                    int32_t left_3 = rect.left
                    int32_t top_3 = rect.top
                    data_13156c8 = rect.right - left_3
                    int32_t eax_21 = rect.bottom - top_3
                    data_13156c0 = left_3
                    hWnd = data_1af0a6c
                    data_13156c4 = top_3
                    data_13156cc = eax_21
                
                result = sub_56c320(hWnd, &data_1318a24)
            else if (i == 0x2d)
                hWnd = data_1af0ac4
                
                if (hWnd != 0)
                    data_1316f78 = 0
                    data_1316f7c = 1
                    RECT rect_2
                    GetWindowRect(hWnd, &rect_2)
                    int32_t left_2 = rect_2.left
                    int32_t top_2 = rect_2.top
                    data_1316f88 = rect_2.right - left_2
                    int32_t eax_17 = rect_2.bottom - top_2
                    data_1316f80 = left_2
                    hWnd = data_1af0ac4
                    data_1316f84 = top_2
                    data_1316f8c = eax_17
                
                result = sub_56c320(hWnd, &data_1318b24)
            else if (i == 0x30)
                HWND edi_2 = data_1af0ad0
                
                if (edi_2 != 0)
                    data_13172d8 = 0
                    data_13172dc = 1
                    RECT rect_3
                    GetWindowRect(edi_2, &rect_3)
                    int32_t left_1 = rect_3.left
                    int32_t top_1 = rect_3.top
                    data_13172e8 = rect_3.right - left_1
                    int32_t eax_11 = rect_3.bottom - top_1
                    data_13172e0 = left_1
                    data_13172e4 = top_1
                    data_13172ec = eax_11
                    data_13172f0 = SendMessageA(GetDlgItem(edi_2, 0x4f32), 0x1027, 0, 0)
                    result, edx_1 = sub_4c1810(edi_2, 0x4f32)
                    edi_2 = data_1af0ad0
                    data_13172f4 = result
                
                result = sub_568880(result, edx_1, edi_2, data_131919c)
            else
                result = sub_559e40(result, edx_1, &(&data_1313cd8)[i * 0x48], 0x4f32, 1, 1)
                
                if (i == 0x2e)
                    HWND edi_1 = data_1af0ac8
                    
                    if (edi_1 != 0)
                        data_1319078 = 0
                        data_131907c = 0
                        RECT rect_1
                        GetWindowRect(edi_1, &rect_1)
                        int32_t left = rect_1.left
                        int32_t top = rect_1.top
                        data_1319088 = rect_1.right - left
                        int32_t eax_4 = rect_1.bottom - top
                        data_1319080 = left
                        data_1319084 = top
                        data_131908c = eax_4
                        data_1319090 = SendMessageA(GetDlgItem(edi_1, 0x4f33), 0x1027, 0, 0)
                        WPARAM eax_7 = sub_4c1810(edi_1, 0x4f33)
                        data_1319094 = eax_7
                        result = sub_559de0(eax_7, edi_1, &data_1319078, 0x4f33)

sub_5f02dd(result_1 ^ &__saved_ebp)
return result

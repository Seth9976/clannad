// 函数: sub_4e6440
// 地址: 0x4e6440
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_d4
int32_t eax_1 = __security_cookie ^ &var_d4
MSG msg

while (true)
    BOOL eax_2
    char ecx_1
    eax_2, ecx_1 = PeekMessageA(&msg, nullptr, 0, 0, PM_NOREMOVE)
    
    if (eax_2 != 0)
        if (GetMessageA(&msg, nullptr, 0, 0) == 0)
            break
        
        if (IsDialogMessageA(data_1c054ec, &msg) == 0)
            TranslateMessage(&msg)
            DispatchMessageA(&msg)
    else if (data_187a5c4 == 0)
        WaitMessage()
    else
        sub_4d58b0(ecx_1)
        sub_4e4dc0()
        sub_4d8a40()
        
        if (data_702fc0 != 0)
            data_20c3980 = 0
            data_20c3988 = 0
            data_20c3984 = 0
        
        sub_4e4f10()
        sub_4e50b0()
        sub_4e5160()
        sub_454290()
        sub_4d8de0()
        sub_4e55e0()
        data_1b8a71c = 0
        sub_4e5720()
        sub_4e57c0()
        bool cond:0_1 = data_1af17ca == 0
        data_1370108 = 0
        data_1370104 = 0
        
        if (not(cond:0_1))
            data_1af17ca = 0
            uint32_t eax_5 = timeGetTime()
            HWND hWnd_1 = data_1c054ec
            
            if (hWnd_1 != 0)
                ShowWindow(hWnd_1, SW_HIDE)
                InvalidateRect(data_1c054ec, nullptr, 1)
            
            data_1af4e70 = 1
            int32_t i
            
            do
                i = ShowCursor(1)
            while (i s<= 0)
            HWND hWndParent = data_7027bc
            data_1af17a0 = 1
            HINSTANCE hInstance = data_134cebc
            data_1af17cc = 1
            data_20ae982 = 0
            DialogBoxParamA(hInstance, 0x16d, hWndParent, sub_5463e0, 0)
            char eax_6 = data_20ae982
            int32_t eax_7 = data_7037a0
            data_1af17cc = 0
            data_1af17a0 = 0
            data_1af4e70 = eax_7
            
            if (eax_7 != 0)
                int32_t i_1
                
                do
                    i_1 = ShowCursor(1)
                while (i_1 s<= 0)
            else
                int32_t i_2
                
                do
                    i_2 = ShowCursor(0)
                while (i_2 s>= 0)
            
            HWND hWnd = data_1c054ec
            
            if (hWnd != 0)
                ShowWindow(hWnd, SW_SHOW)
                InvalidateRect(data_1c054ec, nullptr, 1)
            
            if (eax_6 != 0)
                data_1af40f4 = data_1c051d0
                data_1af40f0 = data_1c051cc
            else
                uint32_t i_3
                
                do
                    i_3 = timeGetTime() - eax_5
                while (i_3 u< 0x7d0)
                int32_t esi_2 = data_1b8c880
                int32_t edi_1 = data_1bfdd24
                uint32_t eax_9 = timeGetTime()
                data_1c051b4 = 0
                data_1c051b0 = 0
                
                if (eax_9 == 0)
                    eax_9 = 1
                
                data_1c051ac = 0
                data_1c051b8 = eax_9
                void var_b0
                int32_t eax_10 = sub_4d1ba0(eax_9, 0x9c, &var_b0, 0)
                int16_t var_8c_1 = 0x9c
                int32_t var_44_1 = edi_1
                int32_t var_40_1 = esi_2
                int32_t var_88_1 = 0x180000
                DEVMODEA* var_e8_4
                enum CDS_TYPE var_e4_4
                
                if (edi_1 != data_1c051c8 || esi_2 != data_1c051c4)
                    var_e4_4 = CDS_FULLSCREEN
                    eax_10 = &var_b0
                    var_e8_4 = &var_b0
                else
                    var_e4_4 = 0
                    var_e8_4 = nullptr
                
                char eax_11
                int32_t ecx_4
                eax_11, ecx_4 = sub_4d53f0(eax_10, esi_2, edi_1, var_e8_4, var_e4_4)
                
                if (eax_11 == 0)
                    int32_t var_e4_5 = ecx_4
                    sub_4d55e0()
                
                sub_4e4d50()
                
                if (data_1c0518f != 0)
                    LPARAM dwInitParam = data_1c054ec
                    
                    if (dwInitParam != 0)
                        LPARAM dwInitParam_1 = dwInitParam
                        sub_4d5720(dwInitParam)
                    else
                        HWND hWndParent_1 = data_7027bc
                        data_1b8be8e = dwInitParam.b
                        data_1c054ec = CreateDialogParamA(data_134cebc, 0x16a, hWndParent_1, 
                            sub_545510, dwInitParam)
            
            sub_544e30()
            HWND ecx_5 = data_1c054ec
            
            if (ecx_5 != 0)
                WPARAM eax_13 = sub_4c1810(ecx_5, 0x4ef0)
                BOOL bEnable
                
                if (eax_13 s< 0 || eax_13 s>= data_1c054e8)
                    bEnable = 0
                else
                    bEnable = 1
                
                EnableWindow(GetDlgItem(data_1c054ec, 0x4eef), bEnable)
            
            data_1b8a71c = 1
            data_1321ec8 = 1

uint32_t wParam = msg.wParam
sub_5f02dd(eax_1 ^ &var_d4)
return wParam

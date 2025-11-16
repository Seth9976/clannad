// 函数: sub_547250
// 地址: 0x547250
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

RECT var_1c
int32_t var_c = __security_cookie ^ &var_1c
int32_t esi = 1

while (true)
    if (data_20c178c == 0)
        Sleep(0x64)
    else
        WaitForSingleObject(data_20c177c, 0xffffffff)
        uint32_t eax_2 = timeGetTime()
        int32_t edx_2 = data_20c179c + eax_2 - data_20c1794
        data_20c1798 = eax_2
        int32_t ecx_3 = data_20c1770
        data_20c179c = edx_2
        data_20c1794 = eax_2
        uint32_t eax_4
        
        if (ecx_3 == 0)
            eax_4 = 0x14
        else
            eax_4 = divu.dp.d(0:edx_2, ecx_3)
            
            if (eax_4 s< 0)
                eax_4 = 0
            else if (eax_4 s>= 0x14)
                eax_4 = 0x14
        
        int32_t ecx_4 = 0x14
        
        if (data_20c1774 != 0)
            eax_4 = 0x14
        
        data_20c1790 = eax_4
        
        if (esi != 0)
            if (eax_4 s> 0)
                HWND hWnd
                hWnd, ecx_4 = GetDlgItem(data_20c176c, 0x4fbb)
                
                if (hWnd != 0)
                    GetClientRect(hWnd, &var_1c)
                    HDC hDC
                    hDC, ecx_4 = GetDC(hWnd)
                    
                    if (hDC != 0)
                        HBRUSH hbr = GetSysColorBrush(COLOR_BTNFACE)
                        
                        if (hbr != 0)
                            var_1c.top += 2
                            var_1c.bottom -= 2
                            var_1c.left += 1
                            var_1c.right -= 1
                            FillRect(hDC, &var_1c, hbr)
                        
                        ecx_4 = ReleaseDC(hWnd, hDC)
                
                eax_4 = data_20c1790
            
            esi = 0
        
        int32_t var_2c_5 = ecx_4
        sub_4cf760(eax_4, 0x4fbb, data_20c176c, eax_4, 0x14)
        ReleaseSemaphore(data_20c177c, 1, nullptr)
        
        if (data_20c1790 != 0x14)
            Sleep(1)
        else
            Sleep(0x12c)
            data_20c179c = 0
            uint32_t eax_5 = timeGetTime()
            data_20c1798 = eax_5
            esi = 1
            data_20c1794 = eax_5
        
        if (data_20c1788 != 0)
            break

ExitThread(1)
noreturn

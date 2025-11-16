// 函数: sub_559ef0
// 地址: 0x559ef0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
LRESULT hWnd = __security_cookie ^ &__saved_ebp
LRESULT hWnd_1 = hWnd

if (arg1 u<= 0x3f)
    hWnd = (&data_1af0a10)[arg1]
    
    if (hWnd != 0)
        RECT rect
        
        if (arg1 == 0x17)
            data_13156b8 = 0
            data_13156bc = arg2
            GetWindowRect(hWnd, &rect)
            int32_t left_1 = rect.left
            int32_t top_1 = rect.top
            data_13156c8 = rect.right - left_1
            int32_t eax_12 = rect.bottom - top_1
            data_13156c0 = left_1
            HWND ecx_10 = data_1af0a6c
            data_13156c4 = top_1
            data_13156cc = eax_12
            hWnd = sub_56c320(ecx_10, &data_1318a24)
        else
            if (arg1 == 0x2d)
                data_1316f78 = 0
                data_1316f7c = arg2
                GetWindowRect(hWnd, &rect)
                int32_t left = rect.left
                int32_t top = rect.top
                data_1316f88 = rect.right - left
                int32_t eax_7 = rect.bottom - top
                data_1316f80 = left
                data_1316f84 = top
                data_1316f8c = eax_7
                int32_t eax_8 = sub_56d620()
                sub_5f02dd(hWnd_1 ^ &__saved_ebp)
                return eax_8
            
            HWND hWnd_2 = hWnd
            
            if (arg1 == 0x30)
                LRESULT eax_2
                int32_t edx_1
                eax_2, edx_1 = sub_559e40(hWnd, hWnd_2, &data_13172d8, 0x4f32, 0, arg2)
                HWND eax_3 = sub_568880(eax_2, edx_1, data_1af0ad0, data_131919c)
                sub_5f02dd(hWnd_1 ^ &__saved_ebp)
                return eax_3
            
            hWnd = sub_559e40(hWnd, hWnd_2, &(&data_1313cd8)[arg1 * 0x48], 0x4f32, 1, arg2)
            
            if (arg1 == 0x2e)
                LRESULT eax_1 = sub_559e40(hWnd, data_1af0ac8, &data_1319078, 0x4f33, 1, 0)
                sub_5f02dd(hWnd_1 ^ &__saved_ebp)
                return eax_1

sub_5f02dd(hWnd_1 ^ &__saved_ebp)
return hWnd

// 函数: sub_568080
// 地址: 0x568080
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
LRESULT result = __security_cookie ^ &__saved_ebp
LRESULT result_2 = result
HWND hDlg = data_1af0a5c

if (hDlg != 0)
    if (arg1 != 0)
        sub_4d1ba0(result, 0x38, &data_20cc9b0, 0xa5)
        hDlg = data_1af0a5c
    
    int32_t lParam
    void var_108
    
    if (data_20cc9b0 != data_131d2cc || data_20cc9b4 != data_1320e58)
        int32_t eax_3 = data_1320e58
        int32_t ecx = data_131d2cc
        int32_t var_154_1 = eax_3
        int32_t var_158_1 = ecx
        data_20cc9b4 = eax_3
        data_20cc9b0 = ecx
        sub_4c84d0(&var_108, "%$d, %$d")
        
        if (hDlg != 0)
            HWND hWnd = GetDlgItem(hDlg, 0x4f32)
            lParam = 5
            void* var_130_1 = &var_108
            int32_t var_140_1 = 0
            int32_t var_13c_1 = 1
            int32_t var_124_1 = 0
            SendMessageA(hWnd, 0x102e, 0, &lParam)
            hDlg = data_1af0a5c
    
    int32_t ecx_1 = data_1b8c878
    int32_t eax_4 = data_1b1bd20
    
    if (data_20cc9b8 != ecx_1 || data_20cc9bc != eax_4)
        int32_t var_154_3 = eax_4
        int32_t var_158_3 = ecx_1
        data_20cc9bc = eax_4
        data_20cc9b8 = ecx_1
        sub_4c84d0(&var_108, "%$d, %$d")
        
        if (hDlg != 0)
            HWND hWnd_1 = GetDlgItem(hDlg, 0x4f32)
            lParam = 5
            void* var_130_2 = &var_108
            int32_t var_140_2 = 1
            int32_t var_13c_2 = 1
            int32_t var_124_2 = 1
            SendMessageA(hWnd_1, 0x102e, 1, &lParam)
            hDlg = data_1af0a5c
    
    int32_t ebx_1 = data_1bfdfcc
    int32_t edi_1 = data_1b8c46c
    
    if (data_20cc9c0 != ebx_1 || data_20cc9c4 != edi_1)
        int32_t var_154_5 = edi_1
        int32_t var_158_5 = ebx_1
        data_20cc9c0 = ebx_1
        data_20cc9c4 = edi_1
        sub_4c84d0(&var_108, "%$d, %$d")
        
        if (hDlg != 0)
            HWND hWnd_2 = GetDlgItem(hDlg, 0x4f32)
            lParam = 5
            void* var_130_3 = &var_108
            int32_t var_140_3 = 2
            int32_t var_13c_3 = 1
            int32_t var_124_3 = 2
            SendMessageA(hWnd_2, 0x102e, 2, &lParam)
            hDlg = data_1af0a5c
            ebx_1 = data_1bfdfcc
            edi_1 = data_1b8c46c
    
    if (data_1b8a700 != 0)
        ebx_1 = data_131d2cc
        edi_1 = data_1320e58
    
    int32_t ebx_2 = ebx_1 - data_1b8c878
    int32_t edi_2 = edi_1 - data_1b1bd20
    
    if (data_20cc9c8 != ebx_2 || data_20cc9cc != edi_2)
        int32_t var_154_7 = edi_2
        int32_t var_158_7 = ebx_2
        data_20cc9c8 = ebx_2
        data_20cc9cc = edi_2
        sub_4c84d0(&var_108, "%$d, %$d")
        
        if (hDlg != 0)
            HWND hWnd_3 = GetDlgItem(hDlg, 0x4f32)
            void* var_130_4 = &var_108
            lParam = 5
            int32_t var_140_4 = 3
            int32_t var_13c_4 = 1
            int32_t var_124_4 = 3
            SendMessageA(hWnd_3, 0x102e, 3, &lParam)
            hDlg = data_1af0a5c
    
    int32_t ecx_2 = data_1be46e0
    result = data_1b8c474
    
    if (data_20cc9d0 != ecx_2 || data_20cc9d4 != result)
        LRESULT result_1 = result
        int32_t var_158_9 = ecx_2
        data_20cc9d4 = result
        data_20cc9d0 = ecx_2
        result = sub_4c84d0(&var_108, "%$d, %$d")
        
        if (hDlg != 0)
            HWND hWnd_4 = GetDlgItem(hDlg, 0x4f32)
            lParam = 5
            void* var_130_5 = &var_108
            int32_t var_140_5 = 4
            int32_t var_13c_5 = 1
            int32_t var_124_5 = 4
            result = SendMessageA(hWnd_4, 0x102e, 4, &lParam)
            hDlg = data_1af0a5c
    
    int32_t ebx_3 = data_1b8a710
    int32_t edi_3 = data_1bfe024
    
    if (data_20cc9d8 != ebx_3 || data_20cc9dc != edi_3)
        int32_t var_154_10 = edi_3
        int32_t var_158_11 = ebx_3
        data_20cc9d8 = ebx_3
        data_20cc9dc = edi_3
        result = sub_4c84d0(&var_108, "%$d, %$d")
        
        if (hDlg != 0)
            HWND hWnd_5 = GetDlgItem(hDlg, 0x4f32)
            lParam = 5
            void* var_130_6 = &var_108
            int32_t var_140_6 = 5
            int32_t var_13c_6 = 1
            int32_t var_124_6 = 5
            result = SendMessageA(hWnd_5, 0x102e, 5, &lParam)
            hDlg = data_1af0a5c
            ebx_3 = data_1b8a710
            edi_3 = data_1bfe024
    
    if (data_1b8a6fc != 0)
        ebx_3 = data_131d2cc
        edi_3 = data_1320e58
    
    int32_t ebx_4 = ebx_3 - data_1be46e0
    int32_t edi_4 = edi_3 - data_1b8c474
    
    if (data_20cc9e0 != ebx_4 || data_20cc9e4 != edi_4)
        int32_t var_154_12 = edi_4
        int32_t var_158_13 = ebx_4
        data_20cc9e0 = ebx_4
        data_20cc9e4 = edi_4
        result = sub_4c84d0(&var_108, "%$d, %$d")
        
        if (hDlg != 0)
            HWND hWnd_6 = GetDlgItem(hDlg, 0x4f32)
            lParam = 5
            void* var_130_7 = &var_108
            int32_t var_140_7 = 6
            int32_t var_13c_7 = 1
            int32_t var_124_7 = 6
            result = SendMessageA(hWnd_6, 0x102e, 6, &lParam)

sub_5f02dd(result_2 ^ &__saved_ebp)
return result

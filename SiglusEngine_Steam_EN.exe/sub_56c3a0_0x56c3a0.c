// 函数: sub_56c3a0
// 地址: 0x56c3a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 s<= arg4)
    int32_t i_3 = arg4 - arg2
    
    if (i_3 s> 0)
        int32_t i
        
        do
            HWND hWnd = GetDlgItem(arg3, 0x4f32)
            int32_t lParam = 5
            int32_t var_3c_1 = arg2
            int32_t var_38_1 = 0
            void* const var_2c_1 = &data_6138e3
            int32_t var_20_1 = arg2
            SendMessageA(hWnd, 0x1007, 0, &lParam)
            i = i_3
            i_3 -= 1
        while (i != 1)
else
    int32_t i_2 = arg2 - arg4
    
    if (i_2 s> 0)
        int32_t i_1
        
        do
            SendMessageA(GetDlgItem(arg3, 0x4f32), 0x1008, arg4, 0)
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)

// 函数: sub_55c6f0
// 地址: 0x55c6f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

LRESULT result = arg1
WPARAM result_1 = result

if (data_1af0a4c != 0 && result u<= 0x3f)
    WPARAM wParam = result
    int32_t* ecx
    
    do
        for (int32_t j = 1; j s< 0x3e; j += 1)
            HWND hWnd = GetDlgItem(data_1af0a4c, 0x4f32)
            int32_t lParam = 5
            WPARAM wParam_1 = wParam
            int32_t j_1 = j
            void* const var_30_1 = &data_6138e3
            WPARAM wParam_2 = wParam
            result, ecx = SendMessageA(hWnd, 0x102e, wParam, &lParam)
        
        wParam += 1
    while (wParam s< 0x40)
    
    HWND edx_1 = data_1af0a4c
    
    if (edx_1 != 0)
        int32_t var_50_2 = 1
        return sub_4c1300(
            sub_55bf30(result_1 * 0x4ec + 0x719ba8, edx_1, result_1, ecx, 
                result_1 * 0x4ec + 0x719ba8), 
            data_1af0a4c, result_1, 0x4f32, 0xffffffff)

return result

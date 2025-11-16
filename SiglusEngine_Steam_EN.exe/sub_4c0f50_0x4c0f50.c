// 函数: sub_4c0f50
// 地址: 0x4c0f50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t* hWnd = arg4
int32_t X
int32_t nWidth
int32_t nHeight

switch (hWnd[0xd])
    case 0
        X = arg3 - hWnd[3]
        arg4 = arg2 - hWnd[7]
        nHeight = hWnd[1]
    label_4c0fed:
        nWidth = *hWnd
        goto label_4c0ff5
    case 1
        X = hWnd[2]
        nHeight = hWnd[1]
        arg4 = arg2 - hWnd[7]
        goto label_4c0fed
    case 2
        X = hWnd[2]
        nWidth = arg3 - hWnd[5] - X
        int32_t ecx_3 = hWnd[6]
        arg4 = ecx_3
        nHeight = arg2 - hWnd[9] - ecx_3
    label_4c0ff5:
        hWnd = GetDlgItem(hWnd[0xa], hWnd[0xb])
        
        if (hWnd != 0)
            MoveWindow(hWnd, X, arg4, nWidth, nHeight, 1)
            return InvalidateRect(hWnd, nullptr, 0)
    case 3
        X = hWnd[2]
        nWidth = arg3 - hWnd[5] - X
        nHeight = hWnd[1]
        arg4 = hWnd[6]
        goto label_4c0ff5
    case 4
        X = hWnd[2]
    label_4c0fe5:
        int32_t ecx_2 = hWnd[6]
        nHeight = arg2 - hWnd[9] - ecx_2
        arg4 = ecx_2
        goto label_4c0fed
    case 5
        X = arg3 - hWnd[3]
        nHeight = hWnd[1]
        arg4 = hWnd[6]
        goto label_4c0fed
    case 6
        X = hWnd[2]
        nWidth = arg3 - hWnd[5] - X
        nHeight = hWnd[1]
        arg4 = arg2 - hWnd[7]
        goto label_4c0ff5
    case 7
        X = arg3 - hWnd[3]
        goto label_4c0fe5

return hWnd

// 函数: sub_567d60
// 地址: 0x567d60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_1af0a48 == 0 || arg1 u> 0x7f)
    return arg1

WPARAM wParam = arg1
LRESULT eax_1

do
    for (int32_t j = 1; j s< 8; j += 1)
        HWND hWnd = GetDlgItem(data_1af0a48, 0x4f32)
        int32_t lParam = 5
        WPARAM wParam_1 = wParam
        int32_t j_1 = j
        void* const var_30_1 = &data_6138e3
        WPARAM wParam_2 = wParam
        eax_1 = SendMessageA(hWnd, 0x102e, wParam, &lParam)
    
    wParam += 1
while (wParam s< 0x80)

WPARAM ecx = arg1

if (ecx s> 0)
    ecx -= 1

return sub_4c1300(eax_1, data_1af0a48, ecx, 0x4f32, 0xffffffff)

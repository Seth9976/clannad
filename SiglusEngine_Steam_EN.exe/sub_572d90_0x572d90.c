// 函数: sub_572d90
// 地址: 0x572d90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result

for (int32_t i = 0; i s< 0x10; i += 4)
    HWND hWnd_1 = GetDlgItem(data_1af0a8c, *(i + &data_613030))
    *(i + &data_20f20b0) = hWnd_1
    int32_t eax_1 = GetWindowLongA(hWnd_1, 0xfffffffc)
    HWND hWnd = *(i + &data_20f20b0)
    *(i + &data_20f20c0) = eax_1
    result = SetWindowLongA(hWnd, 0xfffffffc, sub_572b00)

return result

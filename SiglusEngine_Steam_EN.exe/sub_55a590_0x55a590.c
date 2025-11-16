// 函数: sub_55a590
// 地址: 0x55a590
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

SystemParametersInfoA(SPI_GETWORKAREA, 0, &data_20c39b0, 0)
HWND hWnd_1 = data_7027bc
int32_t result = 1
data_20c3e30 = 1

if (arg1 != hWnd_1 && hWnd_1 != 0)
    GetWindowRect(hWnd_1, &data_20c39c0)
    result = data_20c3e30 + 1
    data_20c3e30 = result

for (int32_t* i = &data_1af0a10; i s< &data_1af0b10; i = &i[1])
    HWND hWnd = *i
    
    if (arg1 != hWnd && result s< 0x48 && hWnd != 0)
        GetWindowRect(hWnd, (result << 4) + &data_20c39b0)
        result = data_20c3e30 + 1
        data_20c3e30 = result

return result

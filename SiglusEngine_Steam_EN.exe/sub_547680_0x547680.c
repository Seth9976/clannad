// 函数: sub_547680
// 地址: 0x547680
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

WaitForSingleObject(data_20c177c, 0xffffffff)
sub_4d7020(&data_20c1780, &data_20c1788)
ReleaseSemaphore(data_20c177c, 1, nullptr)
CloseHandle(data_20c177c)

if (data_20c1774 == 0)
    data_1af425c = 0
else
    int32_t eax_1
    eax_1.b = data_20c1778 != 0
    data_1af425c = eax_1 + 1

HWND hDlg = data_20c176c
data_1af4260 = data_20c1770
return EndDialog(hDlg, 0)

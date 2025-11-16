// 函数: sub_547550
// 地址: 0x547550
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

data_20c177c = CreateSemaphoreA(nullptr, 1, 1, nullptr)
data_20c1788 = 0
data_20c1780 =
    CreateThread(nullptr, 0, sub_547250, nullptr, THREAD_CREATE_RUN_IMMEDIATELY, &data_20c1784)
uint32_t eax_2 = timeGetTime()
HWND hDlg = data_20c176c
data_20c1794 = eax_2
data_20c1798 = eax_2
data_20c179c = 0
SendMessageA(GetDlgItem(hDlg, 0x4fad), 0x408, 1, 0x64)
SendMessageA(GetDlgItem(data_20c176c, 0x4fad), 0x407, 1, 0xa)
SendMessageA(GetDlgItem(data_20c176c, 0x4fad), 0x405, 1, data_1af4260)
int32_t esi = data_1af4260
WaitForSingleObject(data_20c177c, 0xffffffff)
HANDLE hSemaphore = data_20c177c
data_20c1770 = esi
data_20c179c = 0
ReleaseSemaphore(hSemaphore, 1, nullptr)
sub_547430(data_1af425c)
SetFocus(GetDlgItem(data_20c176c, 0x4f4f))
int32_t var_c_2 = SetWindowTextA(data_20c176c, 0x12a3118)
return sub_4d5720(data_20c176c)

// 函数: sub_41bdf0
// 地址: 0x41bdf0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = GetProcAddress(data_1333e44, "avg_debug_funk_listview_add_text")
HMODULE hModule = data_1333e44
data_1333e40 = eax
int32_t eax_1 = GetProcAddress(hModule, "avg_debug_funk_listview_set_text")
HMODULE hModule_1 = data_1333e44
data_1333e3c = eax_1
int32_t eax_2 = GetProcAddress(hModule_1, "avg_debug_funk_SetDlgItemText")
HMODULE hModule_2 = data_1333e44
data_1333e38 = eax_2
int32_t result = GetProcAddress(hModule_2, "avg_debug_funk_SendMessage")
data_1333e34 = result
return result

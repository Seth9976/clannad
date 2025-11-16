// 函数: sub_544690
// 地址: 0x544690
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
RECT rect_3
GetWindowRect(data_1c054ec, &rect_3)
int32_t eax_4 = rect_3.bottom - rect_3.top + 1
int32_t ebx_2 = rect_3.right - rect_3.left + 1
RECT rect_2
GetClientRect(data_1c054ec, &rect_2)
int32_t eax_7
int32_t edx
edx:eax_7 = sx.q(ebx_2 - rect_2.right)
int32_t eax_11
int32_t edx_1
edx_1:eax_11 = sx.q(eax_4 - rect_2.bottom - GetSystemMetrics(SM_CYCAPTION))
int32_t eax_13 = GetSystemMetrics(SM_CYCAPTION)
int32_t ecx_4 = rect_3.left + ((eax_7 - edx) s>> 1)
data_20c16b4 = eax_13 + ((eax_11 - edx_1) s>> 1) + rect_3.top
HWND hDlg = data_1c054ec
data_20c16b0 = ecx_4
RECT rect_1
GetWindowRect(GetDlgItem(hDlg, 0x505a), &rect_1)
RECT rect
GetWindowRect(GetDlgItem(data_1c054ec, 0x4ee2), &rect)
data_20c16a0 = ebx_2
data_20c16a8 = ebx_2
int32_t result = rect_1.bottom - rect.bottom + eax_4
data_20c16a4 = eax_4
data_20c16ac = result
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result

// 函数: sub_558800
// 地址: 0x558800
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ebx = arg1
LRESULT eax_3 = SendMessageA(GetDlgItem(data_20c35dc, 0x4f32), 0x188, 0, 0)

if (eax_3 == 0xffffffff)
    ebx = 0
else
    HWND hDlg = data_20c35dc
    data_20c3880 = *(data_20c36d4 + (eax_3 << 2))
    data_20c3884 = *((SendMessageA(GetDlgItem(hDlg, 0x4f33), 0x188, 0, 0) << 2) + &data_20c36e8)

data_1319220 = 0
RECT rect
GetWindowRect(data_20c35dc, &rect)
int32_t left = rect.left
int32_t top = rect.top
data_131922c = rect.right - left
HWND hDlg_1 = data_20c35dc
int32_t eax_11 = rect.bottom - top
data_1319224 = left
data_1319228 = top
data_1319230 = eax_11
LRESULT eax_13 = SendMessageA(GetDlgItem(hDlg_1, 0x4f32), 0x18e, 0, 0)
HWND hDlg_2 = data_20c35dc
data_1319234 = eax_13
LRESULT eax_15 = SendMessageA(GetDlgItem(hDlg_2, 0x4f33), 0x18e, 0, 0)
HWND hDlg_3 = data_20c35dc
data_1319238 = eax_15
data_20c387c = ebx
BOOL result = EndDialog(hDlg_3, 0)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result

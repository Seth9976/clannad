// 函数: sub_568980
// 地址: 0x568980
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND hDlg = data_1af0ad0
data_13172f0 = SendMessageA(GetDlgItem(hDlg, 0x4f32), 0x1027, 0, 0)
WPARAM eax_2
int32_t edx
eax_2, edx = sub_4c1810(hDlg, 0x4f32)
int32_t var_c = data_131919c
HWND ecx_1 = data_1af0ad0
data_13172f4 = eax_2
HWND eax_3
int32_t edx_1
eax_3, edx_1 = sub_568880(eax_2, edx, ecx_1, var_c)
HWND ecx_2 = data_1af0ad0
data_131919c = arg1
LRESULT eax_4
char edx_2
eax_4, edx_2 = sub_5687b0(eax_3, edx_1, ecx_2, arg1)
return sub_4c1470(
    sub_4d1ba0(sub_568710(eax_4, edx_2, data_1af0ad0, data_13191a0), 0x2c00, 0x20cca20, 0xa5), 
    data_13172f4, data_13172f0, data_1af0ad0, 0x4f32)

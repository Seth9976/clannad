// 函数: sub_5738f0
// 地址: 0x5738f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

for (int32_t i = 0; i s< 0x10; i += 4)
    SetWindowLongA(*(i + &data_20f20b0), 0xfffffffc, *(i + &data_20f20c0))

HDC hdc = data_20f0288

if (hdc != 0)
    DeleteDC(hdc)

HGDIOBJ ho = data_20f0294

if (ho != 0)
    DeleteObject(ho)

HGDIOBJ ho_1 = data_20f027c
data_20f0288 = 0
data_20f0294 = 0
data_20f0298 = 0

if (ho_1 != 0)
    DeleteObject(ho_1)

data_20f027c = 0
sub_5713d0()
SetWindowLongA(GetDlgItem(data_1c054fc, 0x4fe1), 0xfffffffc, data_20f20d0)
BOOL result = EndDialog(data_1c054fc, 0)
data_1c054fc = 0
return result

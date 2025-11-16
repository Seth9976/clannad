// 函数: sub_543a50
// 地址: 0x543a50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0

if (data_20c1640 s> 0)
    do
        char eax_1 = SendDlgItemMessageA(data_20c1538, *((i << 2) + &data_612090), 0xf2, 0, 0)
        int32_t eax_2 = *((i << 2) + &data_20c1540)
        i += 1
        (&data_1313b3c)[eax_2] = eax_1 & 1
    while (i s< data_20c1640)

return EndDialog(data_20c1538, 0)

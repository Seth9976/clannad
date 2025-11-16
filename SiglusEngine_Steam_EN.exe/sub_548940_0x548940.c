// 函数: sub_548940
// 地址: 0x548940
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* i = nullptr
int32_t edi = 0

do
    GetDlgItemTextA(data_20c17b8, *(edi + &data_612300), i + &data_20c17c8, 0x21)
    GetDlgItemTextA(data_20c17b8, *(edi + &data_6122c0), i + 0x20c19d8, 0x21)
    GetDlgItemTextA(data_20c17b8, *(edi + &data_612280), i + &data_20c1be8, 0x21)
    i += 0x21
    edi += 4
while (i s< 0x210)

return EndDialog(data_20c17b8, 0)

// 函数: sub_544570
// 地址: 0x544570
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
uint32_t* edi = data_20c1694

if (data_20c168c s> 0)
    do
        uint32_t eax_1 = GetDlgItemInt(data_20c1680, *((i << 2) + &data_612150), nullptr, 1)
        i += 1
        *edi = eax_1
        edi = &edi[1]
    while (i s< data_20c168c)

return EndDialog(data_20c1680, 0)

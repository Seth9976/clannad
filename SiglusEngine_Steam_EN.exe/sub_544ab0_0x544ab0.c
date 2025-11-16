// 函数: sub_544ab0
// 地址: 0x544ab0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

for (void* const i = &data_6121d0; i s< &data_612218; i += 4)
    ShowWindow(GetDlgItem(data_1c054ec, *i), SW_HIDE)

MoveWindow(GetDlgItem(data_1c054ec, data_20c16f4), data_20c16f8, data_20c16fc, data_20c1700, 
    data_20c1704, 1)
MoveWindow(GetDlgItem(data_1c054ec, data_20c1708), data_20c170c, data_20c1710, data_20c1714, 
    data_20c1718, 1)
MoveWindow(GetDlgItem(data_1c054ec, data_20c171c), data_20c1720, data_20c1724, data_20c1728, 
    data_20c172c, 1)
RECT rect
GetWindowRect(data_1c054ec, &rect)
BOOL result = MoveWindow(data_1c054ec, rect.left, rect.top, data_20c16a8, data_20c16ac, 1)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result

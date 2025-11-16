// 函数: sub_5449a0
// 地址: 0x5449a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

for (void* const i = &data_6121d0; i s< &data_612218; i += 4)
    ShowWindow(GetDlgItem(data_1c054ec, *i), SW_SHOW)

MoveWindow(GetDlgItem(data_1c054ec, data_20c16b8), data_20c16bc, data_20c16c0, data_20c16c4, 
    data_20c16c8, 1)
MoveWindow(GetDlgItem(data_1c054ec, data_20c16cc), data_20c16d0, data_20c16d4, data_20c16d8, 
    data_20c16dc, 1)
MoveWindow(GetDlgItem(data_1c054ec, data_20c16e0), data_20c16e4, data_20c16e8, data_20c16ec, 
    data_20c16f0, 1)
RECT rect
GetWindowRect(data_1c054ec, &rect)
BOOL result = MoveWindow(data_1c054ec, rect.left, rect.top, data_20c16a0, data_20c16a4, 1)
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result

// 函数: sub_4c10d0
// 地址: 0x4c10d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND var_8 = arg3
void* edi = &data_63ff60
LRESULT result

for (int32_t i = 0; i s< 5; )
    WPARAM wParam
    wParam.b = i == arg4
    result = SendMessageA(GetDlgItem(arg3, *edi), 0xf1, wParam, 0)
    i += 1
    edi += 4

return result

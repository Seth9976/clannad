// 函数: sub_5517e0
// 地址: 0x5517e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND hWnd = GetDlgItem(data_20c2b5c, 0x4f32)
LRESULT result = SendMessageA(hWnd, 0x184, 0, 0)
int32_t ecx = data_1333e34

for (int128_t* i = &data_134ce6c; i s< &data_134cebc; i += 4)
    int32_t edx_1 = *i
    
    if (edx_1 == 0xffffffff)
        if (ecx != 0)
            result = ecx(hWnd, 0x180, 0, &data_6138e3)
            ecx = data_1333e34
    else if (ecx != 0)
        result = ecx(hWnd, 0x180, 0, data_134ce50:4 + edx_1)
        ecx = data_1333e34

for (char const (** const i_1)[0x9] = &data_612810; i_1 s< &data_6128dc; i_1 = &i_1[1])
    if (ecx != 0)
        result = ecx(hWnd, 0x180, 0, *i_1)
        ecx = data_1333e34

return result

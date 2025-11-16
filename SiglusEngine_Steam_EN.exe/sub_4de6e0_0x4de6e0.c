// 函数: sub_4de6e0
// 地址: 0x4de6e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HWND ecx
HWND var_8 = ecx
int32_t eax = data_208046c
int32_t edx = data_208c490

if (data_1cd450c == 0 || data_63ec80 != eax || data_63ec7c != edx || data_63ec78 != eax
        || data_63eaf4 != edx)
    return sub_4de7b0(eax, edx, ecx, arg1, eax, data_208c488, data_208c48c, edx)

int32_t* eax_1 = data_1cd4514
(*(*eax_1 + 0x24))(eax_1)
int32_t* eax_2 = data_1cd4518
(*(*eax_2 + 0x64))(eax_2, data_63ec84)
int32_t* esi = data_1cd450c
int32_t eax_4 = (*(*esi + 0x24))(esi, sub_4d92c0(arg1))

if (eax_4 s>= 0)
    ShowWindow(data_1cd4504, SW_SHOW)
    data_7027b0 = 1
else if (eax_4 != 0x3e7)
    sub_4dea40(0)
    return 0

return 1

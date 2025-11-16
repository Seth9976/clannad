// 函数: sub_568710
// 地址: 0x568710
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = 0

for (void* i = nullptr; i s< 0x40; i += 1)
    if (arg4 != 0)
        edi += 1
    else if (sub_579880(i, 1) != 0xffffffff)
        edi += 1

LRESULT result = SendMessageA(GetDlgItem(arg3, 0x4f32), 0x1009, 0, 0)
int32_t esi_1 = 0

if (edi s> 0)
    do
        HWND hWnd = GetDlgItem(arg3, 0x4f32)
        int32_t lParam = 5
        int32_t var_40_1 = esi_1
        int32_t var_3c_1 = 0
        void* const var_30_1 = &data_6138e3
        int32_t var_24_1 = esi_1
        result = SendMessageA(hWnd, 0x1007, 0, &lParam)
        esi_1 += 1
    while (esi_1 s< edi)

return result

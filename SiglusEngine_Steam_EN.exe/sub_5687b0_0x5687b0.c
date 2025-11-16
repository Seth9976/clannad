// 函数: sub_5687b0
// 地址: 0x5687b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_13172d8 != 0)
    __builtin_memcpy(0x13172f8, 0x612be0, 0x70)

WPARAM wParam = 0
HWND hWnd
int32_t ecx
hWnd, ecx = GetDlgItem(arg3, 0x4f32)
LRESULT i

do
    i = SendMessageA(hWnd, 0x101c, 0, 0)
while (i != 0)
LRESULT result

for (void* i_1 = nullptr; i_1 s< 0x70; i_1 += 4)
    result = *(i_1 + 0x612b70)
    
    if (result == arg4 || result == 0xffffffff)
        int32_t edi_1 = *(i_1 + 0x13172f8)
        int32_t ebx_1 = *(i_1 + &data_612c50)
        HWND hWnd_1 = GetDlgItem(arg3, 0x4f32)
        int32_t var_2c_1 = ebx_1
        int32_t lParam = 7
        int32_t var_34_1 = 0
        int32_t var_30_1 = edi_1
        result = SendMessageA(hWnd_1, 0x101b, wParam, &lParam)
        wParam += 1

return result

// 函数: sub_5567b0
// 地址: 0x5567b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

LRESULT var_8 = arg1
HWND hDlg = data_20c2e68
data_20c2e7c = 0xffffffff
int32_t edx = SendMessageA(GetDlgItem(hDlg, 0x4f33), 0x1009, 0, 0)
LRESULT result = arg2 - 1

if (result u<= 0x270e)
    WPARAM i = 0
    int32_t ebx_1 = arg2 * 9
    
    if (*((ebx_1 << 2) + &data_1b8c8a8) s> 0)
        do
            result, edx = sub_556530(result, edx, data_20c2e68, arg2, i, 1, 1)
            i += 1
        while (i s< *((ebx_1 << 2) + &data_1b8c8a8))
    
    result = arg1
    data_20c2e7c = arg2
    data_20c2e80 = result

return result

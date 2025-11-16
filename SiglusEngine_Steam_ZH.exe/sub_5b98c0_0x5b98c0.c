// 函数: sub_5b98c0
// 地址: 0x5b98c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_6c2db0(arg1 + 0xbc, arg2)
LRESULT result = *(arg1 + 0xc0)

if (result != 0)
    result = SendMessageW(result, 0xd5, 0, 0)

HWND hWnd = *(arg1 + 0xc0)

if (hWnd == 0)
    return result

return SendMessageW(hWnd, 0xb1, result, result)

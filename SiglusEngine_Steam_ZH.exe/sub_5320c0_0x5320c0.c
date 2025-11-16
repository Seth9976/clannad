// 函数: sub_5320c0
// 地址: 0x5320c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 8) == 0)
    return 

HWND hWnd = *(arg1 + 0x260)

if (hWnd != 0)
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = muls.dp.d(0x66666667, *(data_bac4e4 + 0x144))
    int32_t edx_2 = edx_1 s>> 2
    SendMessageW(hWnd, 0x405, 1, (edx_2 u>> 0x1f) + edx_2)

HWND hWnd_1 = *(arg1 + 0x410)

if (hWnd_1 != 0)
    int32_t eax_7
    int32_t edx_3
    edx_3:eax_7 = muls.dp.d(0x51eb851f, *(data_bac4e4 + 0x148))
    int32_t edx_4 = edx_3 s>> 5
    SendMessageW(hWnd_1, 0x405, 1, (edx_4 u>> 0x1f) + edx_4)

return sub_532140(arg1) __tailcall

// 函数: sub_573170
// 地址: 0x573170
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HGDIOBJ ho = data_20f027c

if (ho != 0)
    DeleteObject(ho)

data_20f027c = 0
data_13191ac = arg1
data_20f0280 = arg1 + 2
data_20f0284 = arg1 + 2
HFONT eax_1 = CreateFontA(arg1, 0, 0, 0, 0x190, 0, 0, 0, 1, 0, 0, 0, 0, &data_6173e0)
HWND hWnd = data_1af0a8c
data_20f027c = eax_1
HMENU eax_2 = GetMenu(hWnd)
BOOL eax_7 = sub_4cc060(
    sub_4cc060(
        sub_4cc060(
            sub_4cc060(sub_4cc060(eax_2, 0x276f, eax_2, nullptr, 8, arg1), 0x2770, eax_2, nullptr, 
                0xa, arg1), 
            0x2771, eax_2, nullptr, 0xc, arg1), 
        0x2772, eax_2, nullptr, 0xe, arg1), 
    0x2773, eax_2, nullptr, 0x10, arg1)
BOOL result = sub_4cc060(
    sub_4cc060(
        sub_4cc060(sub_4cc060(eax_7, 0x2774, eax_2, nullptr, 0x12, arg1), 0x2775, eax_2, nullptr, 
            0x14, arg1), 
        0x2776, eax_2, nullptr, 0x16, arg1), 
    0x2777, eax_2, nullptr, 0x18, arg1)

if (arg2 == 0)
    return result

sub_5724c0()
int32_t ecx_9 = data_20f022c
int32_t edx = ecx_9 * 9
return sub_572570(result, (&data_20f02a0)[edx], ecx_9, (&data_20f02a4)[edx], (&data_20f02a8)[edx], 
    (&data_20f02ac)[edx], (&data_20f02b0)[edx], (&data_20f02b4)[edx], (&data_20f02b8)[edx], 
    (&data_20f02bc)[edx], 0)

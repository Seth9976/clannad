// 函数: sub_538210
// 地址: 0x538210
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 8) == 0)
    return 0xffffffff

int32_t i = 0
void* edi_1 = arg1 + 0x800 + arg2 * 0x480

do
    LRESULT hWnd = *edi_1
    
    if (hWnd != 0)
        hWnd = SendMessageW(hWnd, 0xf0, 0, 0)
    
    if ((hWnd.b & 1) != 0)
        return i
    
    i += 1
    edi_1 += 0x90
while (i s< 8)

return 0xffffffff

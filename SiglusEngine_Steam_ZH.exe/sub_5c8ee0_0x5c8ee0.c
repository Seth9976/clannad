// 函数: sub_5c8ee0
// 地址: 0x5c8ee0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if ((*(arg1 + 0xc8) & 0x10) == 0)
    return DestroyWindow(*(arg1 + 4))

GetWindowLongW(*(arg1 + 4), 0xfffffffc)
int32_t result = SetWindowLongW(*(arg1 + 4), 0xfffffffc, *(arg1 + 0x20))

if (result != 0)
    *(arg1 + 0x20) = DefWindowProcW
    result = *(arg1 + 4)
    *(arg1 + 4) = 0
    
    if (result != 0)
        *(arg1 + 0xc8) &= 0xffffffef

return result

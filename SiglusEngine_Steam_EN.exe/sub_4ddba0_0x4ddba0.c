// 函数: sub_4ddba0
// 地址: 0x4ddba0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if ((*(arg1 + 0xc8) & 0x10) == 0)
    return DestroyWindow(*(arg1 + 4))

GetWindowLongA(*(arg1 + 4), 0xfffffffc)
int32_t result = SetWindowLongA(*(arg1 + 4), 0xfffffffc, *(arg1 + 0x20))

if (result != 0)
    *(arg1 + 0x20) = DefWindowProcA
    result = *(arg1 + 4)
    *(arg1 + 4) = 0
    
    if (result != 0)
        *(arg1 + 0xc8) &= 0xffffffef

return result

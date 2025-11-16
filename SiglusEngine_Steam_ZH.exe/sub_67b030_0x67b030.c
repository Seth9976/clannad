// 函数: sub_67b030
// 地址: 0x67b030
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

WPARAM result = *(arg1 + 0x6ec)

if (result != *(arg1 + 0x6f0))
    result = sub_6c4be0(arg1 + 0xb8)
    
    if (result != 0xffffffff)
        return sub_67b070(arg1, *(arg1 + 0x6e4) + result)

return result

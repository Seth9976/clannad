// 函数: sub_437268
// 地址: 0x437268
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    if (*(arg1 + 0x40) == 0)
        sub_437200(arg1, nullptr, 0, "internal error: production failed!")
    
    *(arg1 + 0x40) = 1
    *(arg1 + 0x44) = 1

return arg2

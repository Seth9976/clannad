// 函数: sub_67b470
// 地址: 0x67b470
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0xf)
    sub_6c4950(arg1)
else if (arg2 == 0x100)
    if (arg3 == 0x26 || arg3 == 0x28 || arg3 == 0x25 || arg3 == 0x27)
        *(arg1 + 0x334)
        sub_67b370(arg3)
        return 1
else if (arg2 == 0x101)
    if (arg3 == 0xd)
        sub_67b030(*(arg1 + 0x334))
        return sub_6c4710(arg1, arg2, arg3, arg4)
    
    if (arg3 == 0x1b)
        sub_67b350(*(arg1 + 0x334))

return sub_6c4710(arg1, arg2, arg3, arg4)

// 函数: sub_5b94b0
// 地址: 0x5b94b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0x100)
    if (arg3 == 9)
        if ((0x8000 & GetAsyncKeyState(0x10)) == 0)
            sub_5b9e00()
            return sub_6c32f0(arg1, arg2, arg3, arg4)
        
        sub_5b9ec0()
        return sub_6c32f0(arg1, arg2, arg3, arg4)
    
    if (arg3 == 0xd)
        *(arg1 + 0x90) = 1
        return arg3 - 0xc
    
    if (arg3 == 0x1b)
        *(arg1 + 0x90) = 0xffffffff
else if (arg2 == 0x102)
    if (arg3 == 9 || arg3 == 0xd || arg3 == 0x1b)
        return 0
else if (arg2 == 0x104 && arg3 == 0xd)
    if ((arg4 & 0x20000000) != 0)
        if (*data_bac4e4 == 1)
            sub_616090()
            return arg3 - 0xc
        
        sub_616180()
    
    return 1

return sub_6c32f0(arg1, arg2, arg3, arg4)

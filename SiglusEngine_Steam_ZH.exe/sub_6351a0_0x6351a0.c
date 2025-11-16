// 函数: sub_6351a0
// 地址: 0x6351a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1

if (arg4 == 0)
    if (arg2 == 0)
        int32_t eax_4
        eax_4.b = *arg3 == 1
        return eax_4
    
    if (arg2 == 1)
        int32_t eax_3
        eax_3.b = *arg3 == 0
        return eax_3
else if (arg4 == 1)
    if (arg2 == 0)
        eax_1.b = arg3[1] == 1
        return eax_1
    
    if (arg2 == 1)
        eax_1.b = arg3[2] == 1
        return eax_1
    
    if (arg2 == 2)
        eax_1.b = arg3[3] == 2
        return eax_1
else if (arg4 == 2)
    int32_t edx = arg2 - (arg4 - 2)
    
    if (arg2 == arg4 - 2)
        if (arg3[1] == 1)
            arg3[1] = 0
            eax_1.b = 1
            arg3[3] = 0
            return eax_1
    else if (edx == 1)
        if (arg3[2] == 1)
            arg3[2] = 0
            eax_1.b = 1
            arg3[3] = 0
            return eax_1
    else if (edx == 2)
        return sub_6b1fd0(arg3) __tailcall

eax_1.b = 0
return eax_1

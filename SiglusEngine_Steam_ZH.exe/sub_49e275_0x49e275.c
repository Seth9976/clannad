// 函数: sub_49e275
// 地址: 0x49e275
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_2

if (arg2 != 0)
    if (arg2 s>= 0)
        if (sub_49df5b(arg1, arg2, &arg1) s< 0)
            return 0
    else
        arg1 = neg.d(arg2)
    
    eax_2 = sub_49de0d(arg1, arg3, 1)
    
    if (eax_2 == 0)
        return 0
else if (arg3 s>= 0)
    if (sub_49df5b(arg1, arg3, &arg1) s< 0)
        return 0
    
    eax_2 = arg1
else
    eax_2 = neg.d(arg3)

return neg.d(eax_2)

// 函数: sub_5475c0
// 地址: 0x5475c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 u> 0x110)
    if (arg2 - 0x111 u<= 0xf9)
        switch (arg2)
            case 0x111
                if ((*(*arg1 + 0x30))(arg3, arg4) == 0)
                    return 0
            case 0x114
                if ((*(*arg1 + 0x3c))(arg3, arg4) == 0)
                    return 0
            case 0x115
                if ((*(*arg1 + 0x40))(arg3, arg4) == 0)
                    return 0
            case 0x138
                LRESULT result = (*(*arg1 + 0x44))(arg3, arg4)
                
                if (result != 0)
                    return result
            case 0x20a
                if ((*(*arg1 + 0x38))(arg3, arg4) == 0)
                    return 0
    
    goto label_5476c1

if (arg2 == 0x110)
    if ((*(*arg1 + 0x20))() == 0)
        return 0
else if (arg2 == 0x10)
    if ((*(*arg1 + 0x24))() == 0)
        return 0
else if (arg2 != 0x4e)
label_5476c1:
    
    if (arg2 == 6 && arg3.w == 0)
        sub_681b70(arg1)
else if ((*(*arg1 + 0x34))(arg3, arg4) == 0)
    return 0

return sub_6c4530(arg1, arg2, arg3, arg4)

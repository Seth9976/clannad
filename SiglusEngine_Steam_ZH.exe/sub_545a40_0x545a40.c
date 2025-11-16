// 函数: sub_545a40
// 地址: 0x545a40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 u> 0x110)
    if (arg2 - 0x111 u<= 0xf9)
        switch (arg2)
            case 0x111
                if ((*(*arg1 + 0x1c))(arg3, arg4) == 0)
                    return 0
            case 0x113
                (*(*arg1 + 0x20))(arg3, arg4)
                
                if (((GetKeyState(1) u>> 0xf).b & 1) == 0)
                    sub_6c1850(arg1)
            case 0x114
                if ((*(*arg1 + 0x2c))(arg3, arg4) == 0)
                    return 0
            case 0x115
                if ((*(*arg1 + 0x30))(arg3, arg4) == 0)
                    return 0
            case 0x138
                LRESULT result = (*(*arg1 + 0x34))(arg3, arg4)
                
                if (result != 0)
                    return result
            case 0x20a
                if ((*(*arg1 + 0x28))(arg3, arg4) == 0)
                    return 0
    
    goto label_545b73

if (arg2 == 0x110)
    if (sub_545cc0(arg1) == 0)
        return 0
else
    if (arg2 == 0x10)
        (*(*arg1 + 0x18))()
        sub_6c26c0(arg1)
        EndDialog(arg1[1], 0)
        return 0
    
    if (arg2 != 0x4e)
    label_545b73:
        
        if (arg2 == 0x10)
            EndDialog(arg1[1], 0)
            return 0
    else if ((*(*arg1 + 0x24))(arg3, arg4) == 0)
        return 0

return sub_6c4530(arg1, arg2, arg3, arg4)

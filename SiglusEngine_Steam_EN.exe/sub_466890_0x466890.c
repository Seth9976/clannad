// 函数: sub_466890
// 地址: 0x466890
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg4 == 0xff)
    int32_t edi_1 = *(arg3 + 0xc)
    
    if (edi_1 != 0)
        if (*(arg3 + 0x2c4) u> 0 || *(arg3 + 0x2c8) u> 0)
            return 1
        
        if (edi_1 == 0)
            goto label_466c46
        
        if (*(arg3 + 0x2ec) u> 0 && *(arg3 + 0x2fe) != 0)
            return 1
        
        if (edi_1 == 0)
            goto label_466c46
        
        if (*(arg3 + 0x308) u> 0 && *(arg3 + 0x31a) != 0)
            return 1
        
        if (edi_1 == 0)
            goto label_466c46
        
        arg1 = sub_466340(arg3, 2)
        
        if (arg1 != 0)
            return 1
        
        if (edi_1 == 0)
            goto label_466c46
        
        arg1 = sub_466340(arg3, arg1 + 3)
        
        if (arg1 != 0)
            return 1
        
        if (edi_1 == 0)
            goto label_466c46
        
        arg1 = sub_466340(arg3, arg1 + 4)
        
        if (arg1 != 0)
            return 1
        
        if (edi_1 == 0)
            goto label_466c46
        
        arg1 = sub_466450(arg3, 0)
        
        if (arg1 != 0)
            return 1
        
        if (edi_1 == 0)
            goto label_466c46
        
        int32_t edx_2 = arg1 + 1
        arg1 = sub_466450(arg3, edx_2)
        
        if (arg1 != 0)
            return edx_2
        
        if (edi_1 == 0)
            goto label_466c46
        
        arg1 = sub_466450(arg3, 2)
        
        if (arg1 != 0)
            return 1
        
        if (edi_1 == 0)
            goto label_466c46
        
        arg1 = sub_466450(arg3, arg1 + 3)
        
        if (arg1 != 0)
            return 1
        
        if (edi_1 == 0)
            goto label_466c46
        
        arg1 = sub_466530(arg3, 0)
        
        if (arg1 != 0)
            return 1
        
        if (edi_1 == 0)
            goto label_466c46
        
        edx_2 = arg1 + 1
        arg1 = sub_466530(arg3, edx_2)
        
        if (arg1 != 0)
            return edx_2
        
        if (edi_1 == 0)
            goto label_466c46
        
        arg1 = sub_466530(arg3, arg1 + 2)
        
        if (arg1 != 0)
            return 1
        
        if (edi_1 == 0)
            goto label_466c46
        
        arg1 = sub_466530(arg3, arg1 + 3)
        
        if (arg1 != 0)
            return 1
        
        if (edi_1 == 0)
            goto label_466c46
        
        arg1 = sub_466610(arg3, 0)
        
        if (arg1 != 0)
            return 1
        
        if (edi_1 == 0)
            goto label_466c46
        
        edx_2 = arg1 + 1
        arg1 = sub_466610(arg3, edx_2)
        
        if (arg1 != 0)
            return edx_2
        
        if (edi_1 == 0)
            goto label_466c46
        
        arg1 = sub_466610(arg3, arg1 + 2)
        
        if (arg1 != 0)
            return 1
        
        if (edi_1 == 0)
            goto label_466c46
        
        arg1 = sub_466710(arg3, 0)
        
        if (arg1 == 0)
            goto label_466c46
        
        return 1
    
label_466c46:
    
    if (*(arg3 + 0xc) != 0)
        return sub_466840(arg1, arg4, arg3 + 0x518, arg5)
else if (arg4 != 0)
    if (arg4 != 1)
        if (arg4 != 2)
            if (arg4 != 3)
                if (arg4 != 4)
                    if (arg4 != 5)
                        if (arg4 != 6)
                            if (arg4 != 7)
                                if (arg4 != 8)
                                    if (arg4 != 9)
                                        if (arg4 != 0xa)
                                            if (arg4 != 0xb)
                                                if (arg4 != 0xc)
                                                    if (arg4 != 0xd)
                                                        if (arg4 != 0xe)
                                                            if (arg4 != 0xf)
                                                                if (arg4 != 0x10)
                                                                    if (arg4 != 0x11)
                                                                        goto label_466c46
                                                                    
                                                                    if (*(arg3 + 0xc) != 0)
                                                                        return sub_466710(arg3, 0) __tailcall
                                                                else if (*(arg3 + 0xc) != 0)
                                                                    return sub_466610(arg3, arg4 - 0xe)
                                                                        __tailcall
                                                            else if (*(arg3 + 0xc) != 0)
                                                                return sub_466610(arg3, arg4 - 0xe)
                                                                    __tailcall
                                                        else if (*(arg3 + 0xc) != 0)
                                                            return sub_466610(arg3, 0) __tailcall
                                                    else if (*(arg3 + 0xc) != 0)
                                                        return sub_466530(arg3, arg4 - 0xa)
                                                            __tailcall
                                                else if (*(arg3 + 0xc) != 0)
                                                    return sub_466530(arg3, arg4 - 0xa) __tailcall
                                            else if (*(arg3 + 0xc) != 0)
                                                return sub_466530(arg3, arg4 - 0xa) __tailcall
                                        else if (*(arg3 + 0xc) != 0)
                                            return sub_466530(arg3, 0) __tailcall
                                    else if (*(arg3 + 0xc) != 0)
                                        return sub_466450(arg3, arg4 - 6) __tailcall
                                else if (*(arg3 + 0xc) != 0)
                                    return sub_466450(arg3, arg4 - 6) __tailcall
                            else if (*(arg3 + 0xc) != 0)
                                return sub_466450(arg3, arg4 - 6) __tailcall
                        else if (*(arg3 + 0xc) != 0)
                            return sub_466450(arg3, 0) __tailcall
                    else if (*(arg3 + 0xc) != 0)
                        return sub_466340(arg3, arg4 - 1) __tailcall
                else if (*(arg3 + 0xc) != 0)
                    return sub_466340(arg3, arg4 - 1) __tailcall
            else if (*(arg3 + 0xc) != 0)
                return sub_466340(arg3, arg4 - 1) __tailcall
        else if (*(arg3 + 0xc) != 0)
            return sub_466340(arg3, arg4 - 1) __tailcall
    else if (*(arg3 + 0xc) != 0 && *(arg3 + 0x2ec) u> 0 && *(arg3 + 0x2fe) != 0)
        return arg4
else if (*(arg3 + 0xc) != arg4)
    if (*(arg3 + 0x2c4) u> arg4)
        return 1
    
    if (*(arg3 + 0x2c8) u> arg4)
        return arg4 + 1

return 0

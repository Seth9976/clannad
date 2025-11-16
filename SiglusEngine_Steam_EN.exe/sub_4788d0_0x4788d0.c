// 函数: sub_4788d0
// 地址: 0x4788d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 != 0xff)
    if (arg2 != 0)
        switch (arg2)
            case 1
                if (*(arg3 + 0x190) != 0 && *(arg3 + 0x470) u> 0 && *(arg3 + 0x482) != 0)
                    return arg2
                
                return 0
            case 2
                return sub_478610(arg3, arg2 - 1) __tailcall
            case 3
                return sub_478610(arg3, arg2 - 1) __tailcall
            case 4
                return sub_478610(arg3, arg2 - 1) __tailcall
            case 5
                return sub_478610(arg3, arg2 - 1) __tailcall
            case 6
                return sub_4786a0(arg3, 0) __tailcall
            case 7
                return sub_4786a0(arg3, arg2 - 6) __tailcall
            case 8
                return sub_4786a0(arg3, arg2 - 6) __tailcall
            case 9
                return sub_4786a0(arg3, arg2 - 6) __tailcall
            case 0xa
                return sub_478730(arg3, 0) __tailcall
            case 0xb
                return sub_478730(arg3, arg2 - 0xa) __tailcall
            case 0xc
                return sub_478730(arg3, arg2 - 0xa) __tailcall
            case 0xd
                return sub_478730(arg3, arg2 - 0xa) __tailcall
            case 0xe
                return sub_4787c0(arg3, 0) __tailcall
            case 0xf
                return sub_4787c0(arg3, arg2 - 0xe) __tailcall
            case 0x10
                return sub_4787c0(arg3, arg2 - 0xe) __tailcall
            case 0x11
                return sub_478850(arg3) __tailcall
        
        goto label_478b55
    
    if (*(arg3 + 0x190) == arg2)
        return 0
    
    if (*(arg3 + 0x448) u<= arg2)
        if (*(arg3 + 0x44c) u> arg2)
            return arg2 + 1
        
        return 0
else
    int32_t eax = *(arg3 + 0x190)
    
    if (eax == 0)
    label_478941:
        int32_t eax_1 = sub_478610(arg3, 2)
        
        if (eax_1 == 0)
            int32_t eax_2 = sub_478610(arg3, eax_1 + 3)
            
            if (eax_2 == 0 && sub_478610(arg3, eax_2 + 4) == 0)
                int32_t eax_4 = sub_4786a0(arg3, 0)
                
                if (eax_4 == 0)
                    int32_t edx_2 = eax_4 + 1
                    
                    if (sub_4786a0(arg3, edx_2) != 0)
                        return edx_2
                    
                    int32_t eax_7 = sub_4786a0(arg3, 2)
                    
                    if (eax_7 == 0 && sub_4786a0(arg3, eax_7 + 3) == 0)
                        int32_t eax_9 = sub_478730(arg3, 0)
                        
                        if (eax_9 == 0)
                            edx_2 = eax_9 + 1
                            int32_t eax_10 = sub_478730(arg3, edx_2)
                            
                            if (eax_10 != 0)
                                return edx_2
                            
                            int32_t eax_11 = sub_478730(arg3, eax_10 + 2)
                            
                            if (eax_11 == 0 && sub_478730(arg3, eax_11 + 3) == 0)
                                int32_t eax_13 = sub_4787c0(arg3, 0)
                                
                                if (eax_13 == 0)
                                    edx_2 = eax_13 + 1
                                    int32_t eax_14 = sub_4787c0(arg3, edx_2)
                                    
                                    if (eax_14 != 0)
                                        return edx_2
                                    
                                    if (sub_4787c0(arg3, eax_14 + 2) == 0)
                                        arg1 = sub_478850(arg3)
                                        
                                        if (arg1 == 0)
                                        label_478b55:
                                            
                                            if (*(arg3 + 0x190) == 0)
                                                return 0
                                            
                                            return sub_466840(arg1, arg2, arg3 + 0x69c, arg4)
    else if (*(arg3 + 0x448) u<= 0 && *(arg3 + 0x44c) u<= 0)
        if (eax == 0)
            goto label_478941
        
        if ((*(arg3 + 0x470) u<= 0 || *(arg3 + 0x482) == 0)
                && (eax == 0 || *(arg3 + 0x48c) u<= 0 || *(arg3 + 0x49e) == 0))
            goto label_478941

return 1

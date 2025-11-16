// 函数: sub_426840
// 地址: 0x426840
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*arg4 = 0xffffffff
*arg5 = 0xffffffff

if (*arg3 != 0)
    arg1 = arg3[5]
    
    if (arg1 == 0 || arg1 == 1)
    label_4268a9:
        *arg4 = arg3[3]
        *arg5 = arg3[4]
        int32_t eax_3
        eax_3.b = 1
        return eax_3
    
    if (arg1 == 2)
        arg1 = arg3[1]
        
        if (arg2 s>= 0 && arg2 s< *arg1)
            void* ecx = arg1[arg2 * 2 + 1]
            
            if (ecx != 0 && arg1[arg2 * 2 + 2] != 0)
                void* ecx_1 = ecx + arg1
                
                if (ecx != neg.d(arg1))
                    *arg4 = *(ecx_1 + 0x1c)
                    *arg5 = *(ecx_1 + 0x20)
                    int32_t eax_1
                    eax_1.b = 1
                    return eax_1
    else if (arg1 == 3)
        goto label_4268a9

arg1.b = 0
return arg1

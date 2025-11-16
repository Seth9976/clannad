// 函数: sub_466220
// 地址: 0x466220
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg5 != 0xffffffff)
    arg1 = arg4
    
    if (arg2 s> 0 || arg1 s> 0)
        int32_t ecx = 0
        
        if (arg1 s< 0)
            ecx = neg.d(arg1)
            arg1 = 0
        
        *(arg3 + 8) = arg1
        arg1.b = arg6
        arg3[0x12] = arg1.b
        arg1.b = arg7
        arg3[0x13] = arg1.b
        arg1.w = arg8
        *(arg3 + 0x14) = arg1.w
        arg1.w = arg9
        *(arg3 + 0x16) = arg1.w
        arg1.b = arg10
        arg3[0x18] = arg1.b
        arg1.b = arg11
        arg3[0x19] = arg1.b
        arg1.b = arg12
        arg3[0x1a] = arg1.b
        arg1.w = arg13
        *(arg3 + 0x1c) = arg1.w
        arg1.b = arg14
        arg3[0x1e] = arg1.b
        arg1.w = arg15
        *(arg3 + 0x20) = arg1.w
        arg1.b = arg16
        arg3[0x22] = arg1.b
        arg1.w = arg17
        *(arg3 + 4) = arg2
        char edx = 0
        *(arg3 + 0x24) = arg1.w
        *(arg3 + 0xc) = ecx
        
        if (arg18 s> 0)
            edx = arg18.b
        
        arg3[0x11] = arg5.b
        *arg3 = 1
        arg3[0x10] = 1
        arg3[0x26] = edx
        return 

*(arg3 + 4) = 0
*(arg3 + 8) = 0

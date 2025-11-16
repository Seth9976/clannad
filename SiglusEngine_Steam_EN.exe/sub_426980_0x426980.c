// 函数: sub_426980
// 地址: 0x426980
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = *arg3 != 0
*arg4 = 0
*arg5 = 0

if (cond:0)
    arg1 = *(arg3 + 0x14)
    
    if (arg1 == 0 || arg1 == 1)
        arg1.b = 1
        return arg1
    
    if (arg1 == 2)
        arg1 = *(arg3 + 4)
        
        if (arg2 s>= 0 && arg2 s< *arg1)
            void* ecx = arg1[arg2 * 2 + 1]
            
            if (ecx != 0 && arg1[arg2 * 2 + 2] != 0)
                void* ecx_1 = ecx + arg1
                
                if (ecx != neg.d(arg1))
                    *arg4 = *(ecx_1 + 0x14)
                    *arg5 = *(ecx_1 + 0x18)
                    int32_t eax_1
                    eax_1.b = 1
                    return eax_1
    else if (arg1 == 3)
        arg1.b = 1
        return arg1

arg1.b = 0
return arg1

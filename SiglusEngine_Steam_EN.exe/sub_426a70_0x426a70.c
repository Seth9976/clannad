// 函数: sub_426a70
// 地址: 0x426a70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*arg3 != 0 && arg3[3] s> 0 && arg3[4] s> 0 && arg3[5] == 2)
    arg1 = arg3[1]
    
    if (arg2 s>= 0 && arg2 s< *arg1)
        void* ecx = arg1[arg2 * 2 + 1]
        
        if (ecx != 0 && arg1[arg2 * 2 + 2] != 0)
            void* edx = ecx + arg1
            
            if (edx != 0)
                *arg4 = edx + 0xd0
                *arg5 = *(edx + 0x1c)
                *arg6 = *(edx + 0x20)
                int32_t* eax_2
                eax_2.b = 1
                return eax_2

arg1.b = 0
return arg1

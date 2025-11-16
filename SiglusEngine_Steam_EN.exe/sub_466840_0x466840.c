// 函数: sub_466840
// 地址: 0x466840
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* eax = arg3 + 0x12

for (int32_t i = 0; i s< 8; )
    if (*(eax - 0xe) u> 0)
        if (arg2 == 0xff)
            return 1
        
        if (zx.d(*eax) == arg2 && zx.d(eax[1]) == arg4)
            return 1
    
    i += 1
    eax = &eax[0x24]

return 0

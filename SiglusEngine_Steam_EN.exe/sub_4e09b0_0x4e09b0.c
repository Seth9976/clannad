// 函数: sub_4e09b0
// 地址: 0x4e09b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0

if (arg2 == 1)
    *arg3 = 0
    return 0

int16_t* edx = arg4

do
    int16_t esi_1 = *edx
    
    if (esi_1 == 0)
        break
    
    *arg3 = esi_1
    arg3 = &arg3[1]
    
    if (*edx == 0x27)
        i += 1
        
        if (i u< arg2 - 1)
            *arg3 = 0x27
            arg3 = &arg3[1]
    
    i += 1
    edx = &edx[1]
while (i u< arg2 - 1)

*arg3 = 0
return 0

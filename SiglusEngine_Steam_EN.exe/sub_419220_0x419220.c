// 函数: sub_419220
// 地址: 0x419220
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg4 + (arg2 << 2))
void* esi = arg4 + (arg2 << 2)

if (eax != 0xffffffff)
    while (true)
        if (eax s< 0 || eax s>= *arg3)
            return 0
        
        arg2 += 1
        arg3 = (eax << 4) + arg3[2]
        
        if (arg2 s>= 5)
            break
        
        if (*(esi + 4) == 0xffffffff)
            break
        
        eax = *(arg4 + (arg2 << 2))
        esi = arg4 + (arg2 << 2)
        
        if (eax == 0xffffffff)
            break
        
        continue

return arg3

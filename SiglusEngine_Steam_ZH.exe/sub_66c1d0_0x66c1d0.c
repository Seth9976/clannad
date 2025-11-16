// 函数: sub_66c1d0
// 地址: 0x66c1d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

while (true)
    if (arg1[3].b == 0)
        char* edx_1 = *arg1
        
        if (edx_1 == arg1[1])
            arg1[2] = 0xffffffff
            break
        
        if (arg1[2] == 0xa)
            arg1[4] += 1
        
        arg1[2] = zx.d(*edx_1)
        *arg1 = &edx_1[1]
    else
        arg1[3].b = 0
    
    int32_t eax = arg1[2]
    
    if (eax != 0x20 && eax != 9 && eax != 0xa)
        if (eax != 0xd)
            break

if (arg1[2] != 0xffffffff)
    arg1[3].b = 1

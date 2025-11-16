// 函数: sub_66b430
// 地址: 0x66b430
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[3].b != 0)
    arg1[3].b = 0
    return arg1[2]

char* edx = *arg1

if (edx == arg1[1])
    arg1[2] = 0xffffffff
    return 0xffffffff

if (arg1[2] == 0xa)
    arg1[4] += 1

arg1[2] = zx.d(*edx)
*arg1 = &edx[1]
return arg1[2]

// 函数: sub_68ce50
// 地址: 0x68ce50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg1[0xf]

if (eax != 0)
    j__free(eax)
    arg1[0xf] = 0
    arg1[0x10] = 0
    arg1[0x11] = 0

if (arg1[0xc] u>= 8)
    j__free(arg1[7])

arg1[0xc] = 7
arg1[0xb] = 0
arg1[7].w = 0

if (arg1[5] u>= 8)
    j__free(*arg1)

arg1[5] = 7
arg1[4] = 0
*arg1 = 0
return 0

// 函数: sub_454e7d
// 地址: 0x454e7d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = sub_4538a9(arg1, arg2, 1, 0)

if (eax != 0)
    int32_t* ecx_1 = *(eax + 4)
    
    if ((ecx_1[4] == 0 || *(eax + 8) != 0xffffffff) && ecx_1[1] == 2)
        return sub_444e66(ecx_1, *eax, arg3, 1)

return 0x8876086c

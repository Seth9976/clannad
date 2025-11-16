// 函数: sub_744870
// 地址: 0x744870
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *arg1

if (eax == 0)
    return 0xffffff7f

if (arg1[2] != arg2 || arg1[3] != arg3)
    int32_t ecx_1 = arg1[0xb1]
    int32_t eax_1
    
    if (ecx_1 != 0)
        eax_1 = ecx_1(eax, arg2, arg3, 0)
    
    if (ecx_1 == 0 || eax_1 == 0xffffffff)
        return 0xffffff80
    
    arg1[2] = arg2
    arg1[3] = arg3
    sub_6e5120(&arg1[6])

return 0

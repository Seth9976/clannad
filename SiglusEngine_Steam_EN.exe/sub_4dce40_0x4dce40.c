// 函数: sub_4dce40
// 地址: 0x4dce40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    return 0x80004003

*arg2 = 0
int32_t* ecx = *(arg1 + 0x14)

if (ecx != 0)
    int32_t result = (**ecx)(ecx, 0x61d51c, arg2)
    
    if (result s>= 0)
        return result

return (**(arg1 - 4))(arg1 - 4, 0x61d51c, arg2)

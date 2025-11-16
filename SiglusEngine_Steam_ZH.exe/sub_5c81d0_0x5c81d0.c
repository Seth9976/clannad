// 函数: sub_5c81d0
// 地址: 0x5c81d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    return 0x80004003

*arg2 = 0
int32_t* ecx = *(arg1 + 0x14)

if (ecx != 0)
    int32_t result = (**ecx)(ecx, 0xaf247c, arg2)
    
    if (result s>= 0)
        return result

return (**(arg1 - 4))(arg1 - 4, 0xaf247c, arg2)

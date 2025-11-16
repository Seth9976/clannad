// 函数: sub_465860
// 地址: 0x465860
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg3

if (*(arg3 + 0x178) != 1)
    *(arg3 + 0x178) = 1
    *(arg3 + 0x2c4) = 0
    *(arg3 + 0x2c8) = 0

int32_t eax = *(arg3 + 0xc)

if (eax == 1)
    int32_t edi_1 = arg2[1]
    
    if (edi_1 == 0xffffffff)
        return sub_41d600(arg3 + 0x248, *arg2, edi_1 + 2, arg3 + 0x248, arg3 + 0x14c, arg4, arg6)
    
    int32_t var_14_3 = arg11
    return sub_428ac0(arg3 + 0x248, arg2, 1, edi_1, *(arg3 + 0x84), arg3 + 0x248, arg3 + 0x14c, 
        arg4, arg7, arg8, arg3, arg9, arg10)

int32_t result = eax - 2

if (eax == 2)
    result = arg5
    
    if (result s>= 0)
        return sub_481440(arg3 + 0x248, *arg2, 2, arg3 + 0x248, arg3 + 0x14c, arg4, result)

return result

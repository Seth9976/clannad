// 函数: sub_625f80
// 地址: 0x625f80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t result = arg3
int32_t i = (arg2 - result) s>> 3

while (i s> 0)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(i)
    int32_t i_1 = (eax_1 - edx) s>> 1
    int32_t eax_3 = result + (i_1 << 3)
    
    if (arg5(eax_3, arg4) == 0)
        i = i_1
    else
        result = eax_3 + 8
        i += 0xffffffff - i_1

return result

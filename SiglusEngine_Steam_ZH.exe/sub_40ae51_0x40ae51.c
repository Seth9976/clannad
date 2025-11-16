// 函数: sub_40ae51
// 地址: 0x40ae51
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx_1 = arg3 + arg1 * 0xc
int32_t result

for (int32_t i = 0; i u< 3; i += 1)
    result = *(ecx_1 + (i << 2))
    
    if (result == 0xffffffff)
        *(ecx_1 + (i << 2)) = 0xffffffff
    else
        result = *(arg2 + (result << 2))
        *(ecx_1 + (i << 2)) = result

return result

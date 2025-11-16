// 函数: sub_601f40
// 地址: 0x601f40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 s>= 0)
    int32_t eax_1
    int32_t edx_3
    edx_3:eax_1 = muls.dp.d(0x2f149903, *(arg1 + 0xac) - *(arg1 + 0xa8))
    int32_t edx_4 = edx_3 s>> 6
    
    if ((edx_4 u>> 0x1f) + edx_4 s> arg2)
        return arg2 * 0x15c + *(arg1 + 0xa8)

return 0

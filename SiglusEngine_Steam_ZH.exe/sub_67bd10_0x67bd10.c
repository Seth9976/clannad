// 函数: sub_67bd10
// 地址: 0x67bd10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 s< 0)
    int32_t edx_1 = arg1[1]
    
    if (edx_1 u< neg.d(arg2))
        int32_t edx_2 = edx_1 + arg2
        *arg1 += 0xfffffffc - ((0xffffffff - edx_2) u>> 5 << 2)
        arg1[1] = edx_2 & 0x1f
        return arg1

int32_t ecx_4 = arg2 + arg1[1]
*arg1 += ecx_4 u>> 5 << 2
arg1[1] = ecx_4 & 0x1f
return arg1

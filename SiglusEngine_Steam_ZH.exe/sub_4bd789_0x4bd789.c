// 函数: sub_4bd789
// 地址: 0x4bd789
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t edx_1 = zx.d(*(arg2 + 0x6d))
uint32_t eax_1 = zx.d((*(arg2 + 0x6c)).b)

if (eax_1 != 1)
    if (eax_1 != 3)
        if (eax_1 == 5)
            *arg3 = 0xc
            return 0
    else if (edx_1 u< *(arg1 + 0x3c))
        *arg3 = edx_1 + 2
        return 0
else if (edx_1 u< *(arg1 + 0x28))
    *arg3 = edx_1
    return 0

return 0x80004005

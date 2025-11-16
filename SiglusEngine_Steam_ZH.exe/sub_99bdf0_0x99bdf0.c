// 函数: sub_99bdf0
// 地址: 0x99bdf0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x18)
void* edi = *(arg1 + 4)

if (eax s<= 0xffffffff || eax s>= *(arg1 + 0x14))
    return 0

if (arg2 != 0)
    int32_t i = 0
    
    if (*(edi + 4) s> 0)
        do
            *(*(arg1 + 0xc) + (i << 2)) = *(*(arg1 + 8) + (i << 2)) + (*(arg1 + 0x18) << 2)
            i += 1
        while (i s< *(edi + 4))
    
    *arg2 = *(arg1 + 0xc)

return *(arg1 + 0x14) - *(arg1 + 0x18)

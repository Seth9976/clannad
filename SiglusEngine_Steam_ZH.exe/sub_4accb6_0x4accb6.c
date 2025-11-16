// 函数: sub_4accb6
// 地址: 0x4accb6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0

if (*(arg1 + 0xe0) == 0)
    return 1

if (*(arg1 + 8) u> 0)
    do
        void* eax_3 = *(*(arg1 + 0x14) + (i << 2))
        
        if (*(eax_3 + 0x44) != 0xffffffff)
            *(*(*(*(arg1 + 0xe0) + 0x14) + (*(eax_3 + 0x44) << 2)) + 0xc) = *(eax_3 + 0xc)
            *(*(*(*(arg1 + 0xe0) + 0x14) + (*(eax_3 + 0x44) << 2)) + 0x44) = i
        
        i += 1
    while (i u< *(arg1 + 8))

return sub_4a4ab3(*(arg1 + 0xe0)) __tailcall

// 函数: sub_5d8380
// 地址: 0x5d8380
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* result = sub_5d7f80(arg1)
bool cond:0 = *(arg1 + 0x1d6) == 0
*(arg1 + 0x200) = 0xffffffff

if (not(cond:0))
    result = data_bac458
    *(arg1 + 0x1d6) = 0
    
    if (*(result + 0x37d) != 0)
    label_5d83d3:
        *(arg1 + 0x20c) = *(arg1 + 0x1c8)
        *(arg1 + 0x210) = *(arg1 + 0x1cc)
        result = *(arg1 + 0x1d0)
        *(arg1 + 0x214) = result
    else if (*(result + 0x37e) == 0)
        result = data_bac4e4
        
        if (*(result + 0x197) == 0)
            goto label_5d83d3

return result

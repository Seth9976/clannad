// 函数: sub_5d8310
// 地址: 0x5d8310
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = *(arg1 + 0x1d6) != 0
*(arg1 + 0x20c) = 0xffffffff

if (cond:0)
    return 

void* eax = data_bac458
*(arg1 + 0x1d6) = 1

if (*(eax + 0x37d) != 0)
label_5d835d:
    *(arg1 + 0x200) = *(arg1 + 0x1c0)
    *(arg1 + 0x204) = *(arg1 + 0x1c4)
    *(arg1 + 0x208) = *(arg1 + 0x1d0)
else if (*(eax + 0x37e) == 0 && *(data_bac4e4 + 0x197) == 0)
    goto label_5d835d

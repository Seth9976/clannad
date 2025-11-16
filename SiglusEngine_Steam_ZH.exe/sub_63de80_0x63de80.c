// 函数: sub_63de80
// 地址: 0x63de80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = *(arg1 + 0xa0)

if (ecx != 0)
    void* var_10_1 = arg1
    void* var_14_1 = ecx
    sub_5bb420(ecx, *(arg1 + 0xa4))
    j__free(*(arg1 + 0xa0))
    *(arg1 + 0xa0) = 0
    *(arg1 + 0xa4) = 0
    *(arg1 + 0xa8) = 0

if (*(arg1 + 0x98) u>= 8)
    j__free(*(arg1 + 0x84))

*(arg1 + 0x98) = 7
*(arg1 + 0x94) = 0
*(arg1 + 0x84) = 0
return 0

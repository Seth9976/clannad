// 函数: sub_54ed60
// 地址: 0x54ed60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0xa0)

if (eax != 0)
    j__free(eax)
    *(arg1 + 0xa0) = 0
    *(arg1 + 0xa4) = 0
    *(arg1 + 0xa8) = 0

if (*(arg1 + 0x98) u>= 8)
    j__free(*(arg1 + 0x84))

*(arg1 + 0x98) = 7
*(arg1 + 0x94) = 0
*(arg1 + 0x84) = 0
return 0

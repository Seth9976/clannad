// 函数: sub_711b20
// 地址: 0x711b20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

sub_702710(arg1 + 0x28)

if (*(arg1 + 0x24) u>= 0x10)
    j__free(*(arg1 + 0x10))

*(arg1 + 0x24) = 0xf
*(arg1 + 0x20) = 0
*(arg1 + 0x10) = 0
return j__free(arg1)

// 函数: sub_63ec90
// 地址: 0x63ec90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0x6c) u>= 8)
    j__free(*(arg1 + 0x58))

*(arg1 + 0x6c) = 7
*(arg1 + 0x68) = 0
*(arg1 + 0x58) = 0

if (*(arg1 + 0x54) u>= 8)
    j__free(*(arg1 + 0x40))

*(arg1 + 0x54) = 7
*(arg1 + 0x50) = 0
*(arg1 + 0x40) = 0
sub_63c350(arg1 + 0x10)
int32_t result = *(arg1 + 4)

if (result != 0)
    result = j__free(result)
    *(arg1 + 4) = 0
    *(arg1 + 8) = 0
    *(arg1 + 0xc) = 0

return result

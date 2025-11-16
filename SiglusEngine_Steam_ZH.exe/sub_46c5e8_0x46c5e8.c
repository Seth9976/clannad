// 函数: sub_46c5e8
// 地址: 0x46c5e8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void*** eax = sub_42cfa1(0x24)
void*** result

if (eax == 0)
    result = nullptr
else
    result = sub_46bb94(eax)

if (result == 0)
    return result

result[4] = *(arg1 + 0x10)
result[5] = *(arg1 + 0x14)
result[6] = *(arg1 + 0x18)
result[7] = *(arg1 + 0x1c)
result[8] = *(arg1 + 0x20)
return result

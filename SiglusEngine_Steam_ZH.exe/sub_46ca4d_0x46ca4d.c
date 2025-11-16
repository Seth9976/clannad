// 函数: sub_46ca4d
// 地址: 0x46ca4d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void*** eax = sub_42cfa1(0x38)
void*** result

if (eax == 0)
    result = nullptr
else
    result = sub_46c1c1(eax)

if (result == 0)
    return result

__builtin_memcpy(&result[4], arg1 + 0x10, 0x20)
result[0xc] = *(arg1 + 0x30)
result[0xd] = *(arg1 + 0x34)
return result

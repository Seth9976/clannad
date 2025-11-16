// 函数: sub_640e40
// 地址: 0x640e40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg1 + 0x30) = 0
int32_t eax = *(arg1 + 0x24)

if (eax != 0)
    j__free(eax)
    *(arg1 + 0x24) = 0
    *(arg1 + 0x28) = 0
    *(arg1 + 0x2c) = 0

int32_t result = *(arg1 + 0x18)

if (result != 0)
    result = j__free(result)
    *(arg1 + 0x18) = 0
    *(arg1 + 0x1c) = 0
    *(arg1 + 0x20) = 0

return result

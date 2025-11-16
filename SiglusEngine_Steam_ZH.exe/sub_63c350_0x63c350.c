// 函数: sub_63c350
// 地址: 0x63c350
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x24)

if (eax != 0)
    j__free(eax)
    *(arg1 + 0x24) = 0
    *(arg1 + 0x28) = 0
    *(arg1 + 0x2c) = 0

int32_t eax_1 = *(arg1 + 0x18)

if (eax_1 != 0)
    j__free(eax_1)
    *(arg1 + 0x18) = 0
    *(arg1 + 0x1c) = 0
    *(arg1 + 0x20) = 0

int32_t result = *(arg1 + 0xc)

if (result != 0)
    result = j__free(result)
    *(arg1 + 0xc) = 0
    *(arg1 + 0x10) = 0
    *(arg1 + 0x14) = 0

return result

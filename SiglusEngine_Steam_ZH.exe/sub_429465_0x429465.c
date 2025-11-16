// 函数: sub_429465
// 地址: 0x429465
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 8)

if (eax != 0)
    j__free(eax)
    *(arg1 + 8) = 0

*(*(arg1 + 0x10) + 0xc) = *(arg1 + 0xc)
void* result = *(arg1 + 0xc)
*(result + 0x10) = *(arg1 + 0x10)
return result

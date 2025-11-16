// 函数: sub_52e140
// 地址: 0x52e140
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char edx = *(arg1 + 0xb8)
*(arg1 + 0xc0) = arg1
*(arg1 + 0xc4) = *(arg1 + 4)
*(arg1 + 0xc8) = 1
*(arg1 + 0xcc) = 1
*(arg1 + 0xcd) = edx
*(arg1 + 0xce) = 0
*(arg1 + 0xd0) = timeGetTime()
int32_t eax_2 = *(arg1 + 0xbc)
*(arg1 + 0xd4) = 0
*(arg1 + 0xcf) = 0
(*eax_2)()
int32_t result
result.b = 1
return result

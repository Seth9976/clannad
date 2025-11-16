// 函数: sub_547c90
// 地址: 0x547c90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg1 + 0xc0) = arg1
*(arg1 + 0xc4) = *(arg1 + 4)
*(arg1 + 0xc8) = 0x65
*(arg1 + 0xcc) = 0
*(arg1 + 0xce) = 0
*(arg1 + 0xd0) = timeGetTime()
int32_t eax_2 = *(arg1 + 0xbc)
*(arg1 + 0xd4) = 0
*(arg1 + 0xcf) = 0
(*eax_2)()
*(arg1 + 0x82c) = arg1
*(arg1 + 0x830) = *(arg1 + 4)
*(arg1 + 0x834) = 0x65
*(arg1 + 0x838) = 0
*(arg1 + 0x83a) = 0
*(arg1 + 0x83c) = timeGetTime()
int32_t eax_5 = *(arg1 + 0x828)
*(arg1 + 0x840) = 0
*(arg1 + 0x83b) = 0
(*eax_5)()
int32_t result
result.b = 1
return result

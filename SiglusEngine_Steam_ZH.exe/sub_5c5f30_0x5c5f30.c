// 函数: sub_5c5f30
// 地址: 0x5c5f30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg1 + 0x50) = 0
*(arg1 + 4) = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x20) = DefWindowProcW
*(arg1 + 0x18) = 0
*(arg1 + 0x1c) = 0
*(arg1 + 0x3c) = 0
*(arg1 + 0x54) = 0
__builtin_memset(arg1 + 0x60, 0, 0x20)
*(arg1 + 0xd8) = 0
*(arg1 + 0xdc) = 0
*(arg1 + 0xe8) = 0
int32_t eax = *(arg1 + 0xc8)
*(arg1 + 0x98) &= 0xffffffc0
*(arg1 + 0xcc) = 0
*(arg1 + 0xc8) = (eax & 0xfffffffb) | 3
uint32_t eax_3 = GetSysColor(COLOR_WINDOWTEXT)
*(arg1 + 0x98) &= 0xffffffbf
*(arg1 + 0xd0) = eax_3
int32_t eax_5 = *(arg1 + 0xc8) & 0xffffffaf
*(arg1 + 0xd4) = 0x400
*(arg1 + 0x94) = 0xcdcdcdcd
*(arg1 + 0xc8) = eax_5 | 0x28
*(arg1 + 0xe0) = 4
*(arg1 + 0xe4) = 0
*(arg1 + 0x58) = 0
*(arg1 + 0x5c) = 1
*(arg1 + 0xc4) = 0
return arg1

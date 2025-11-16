// 函数: sub_71cdd0
// 地址: 0x71cdd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg1 + 0x18) = arg2
*(arg1 + 0x1c) = arg3
__builtin_memcpy(arg1 + 0x28, 
    "\x01\x00\x00\x00\x00\x10\x00\x00\x04\x00\x00\x00\x01\x00\x00\x00\x11\x00\x00\x00\x08\x00\x00\x00", 
    0x18)
*(arg1 + 0x40) = 0
*(arg1 + 0x44) = 1
*(arg1 + 0x48) = 0
int32_t esi = *(arg1 + 0x2c)
int32_t edx = *(arg1 + 0x38)
int32_t eax_2 = *(arg1 + 0x18)
*(arg1 + 0x88) = arg3
*(arg1 + 0x5c) = 0
*(arg1 + 0x60) = 0
*(arg1 + 0x64) = 0
*(arg1 + 0x68) = 0
*(arg1 + 0x84) = eax_2
*(arg1 + 0x8c) = esi
*(arg1 + 0x90) = edx
int32_t result = sub_71d350(arg1 + 0x6c, esi)
*(arg1 + 0x94) = 0
__builtin_memset(arg1, 0, 0x18)
return result

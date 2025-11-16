// 函数: sub_6bf650
// 地址: 0x6bf650
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return arg1 + 1

*(arg1 + 0x14) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x1c) = 0
__builtin_memcpy(arg1, 
    "\x01\x23\x45\x67\x89\xab\xcd\xef\xfe\xdc\xba\x98\x76\x54\x32\x10\xf0\xe1\xd2\xc3", 0x14)
*(arg1 + 0x60) = 0
*(arg1 + 0x64) = 0
return 0

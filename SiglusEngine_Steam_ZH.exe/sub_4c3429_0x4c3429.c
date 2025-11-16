// 函数: sub_4c3429
// 地址: 0x4c3429
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = *(arg1 + 0xc8)
*(arg1 + 0x70) |= 0x40
int32_t eax = *(arg1 + 0x70)
*(arg1 + 0x108) = edx
int32_t eax_2

if (edx == 0xfffe0101)
    *(arg1 + 0x6f) |= 1
    *(arg1 + 0x64) = 0xa
    eax_2 = eax | 0x2002
    *(arg1 + 0x2c) = 0xc
else if (edx == 0xfffe0200)
    eax_2 = eax | 2
    *(arg1 + 0x6c) |= 0x200100
    *(arg1 + 0x30) = 1
    *(arg1 + 0x60) = 0x10
    *(arg1 + 0x40) = 0x10
    *(arg1 + 0x68) = 0xff
    *(arg1 + 0x64) = 1
    *(arg1 + 0x54) = 8
    *(arg1 + 0x5c) = 1
    *(arg1 + 0x2c) = 0xc
else if (edx == 0xfffe0202)
    eax_2 = eax | 4
    *(arg1 + 0x6c) |= 0x40200100
    *(arg1 + 0x2c) = 0xd
    *(arg1 + 0x30) = 1
    *(arg1 + 0x40) = 0x10
    __builtin_memcpy(arg1 + 0x54, 
        "\x08\x00\x00\x00\x18\x00\x00\x00\x01\x00\x00\x00\x10\x00\x00\x00\x01\x00\x00\x00\xff\x00\x00\x00", 
        0x18)
    *(arg1 + 0xc8) = 0xfffe0201
else
    if (edx != 0xfffe02ff)
        sub_4a4100(arg1, nullptr, 0, 
            "internal error: no profile exists for this vertex shader version")
        return 0x80004005
    
    eax_2 = eax | 4
    *(arg1 + 0x6c) |= 0x40200100
    *(arg1 + 0x2c) = 0x20
    *(arg1 + 0x30) = 1
    *(arg1 + 0x40) = 0x800
    __builtin_memcpy(arg1 + 0x54, 
        "\x10\x00\x00\x00\x18\x00\x00\x00\x04\x00\x00\x00\x00\x08\x00\x00\x01\x00\x00\x00\xff\x00\x00\x00", 
        0x18)

*(arg1 + 0x6c) |= 0x40
*(arg1 + 0x70) = eax_2
int32_t eax_3 = *(arg1 + 0x2c)
*(arg1 + 0x71) |= 3
*(arg1 + 0x1d0) = eax_3
*(arg1 + 0x28) = 0x10
*(arg1 + 0x38) = 0x2000
*(arg1 + 0x44) = 0x10
return 0

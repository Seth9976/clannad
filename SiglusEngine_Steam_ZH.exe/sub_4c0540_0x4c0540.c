// 函数: sub_4c0540
// 地址: 0x4c0540
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_9 = *(arg1 + 0xc8)
*(arg1 + 0x108) = eax_9

if (eax_9 == 0xffff0200)
    *(arg1 + 0x2c) = 0xc
    *(arg1 + 0x70) |= 0xa
    *(arg1 + 0x6c) |= 0x4000102
else if (eax_9 == 0xffff0202)
    int32_t eax_6 = (*(arg1 + 0x70) & 0xffffffdf) | 0x11
    *(arg1 + 0x6c) |= 0x48000100
    *(arg1 + 0x2c) = 0x16
    *(arg1 + 0x70) = eax_6
    *(arg1 + 0xc8) = 0xffff0201
else if (eax_9 == 0xffff0203)
    *(arg1 + 0x2c) = 0x20
    *(arg1 + 0xc8) = 0xffff0201
    *(arg1 + 0x70) |= 0xa
    *(arg1 + 0x6c) |= 0x4000102
else
    if (eax_9 != 0xffff02ff)
        sub_4a4100(arg1, nullptr, 0, 
            "internal error: no profile exists for this pixel shader version")
        return 0x80004005
    
    int32_t eax_3 = (*(arg1 + 0x70) & 0xffffffdf) | 0x10
    *(arg1 + 0x6c) |= 0x40000100
    *(arg1 + 0x2c) = 0x20
    *(arg1 + 0x60) = 0x800
    *(arg1 + 0x70) = eax_3

int32_t eax_7 = *(arg1 + 0x2c)
*(arg1 + 0x6c) |= 0x2000a1
*(arg1 + 0x1d0) = eax_7
*(arg1 + 0x28) = 2
*(arg1 + 0x44) = 0xa
*(arg1 + 0x38) = 0x2000
*(arg1 + 0x48) = 4
*(arg1 + 0x4c) = 0x10
*(arg1 + 0x64) = 1
return 0

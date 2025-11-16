// 函数: sub_4b2484
// 地址: 0x4b2484
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = *(arg1 + 0xc8)
*(arg1 + 0x108) = eax_1

if (eax_1 == 0xfffe0300)
    *(arg1 + 0x6c) |= 0x40200100
    *(arg1 + 0x70) |= 0xfe4
    *(arg1 + 0x30) = 1
    *(arg1 + 0x4c) = 4
label_4b2545:
    *(arg1 + 0x60) = 0x10
    *(arg1 + 0x40) = 0x10
    *(arg1 + 0x54) = 8
    *(arg1 + 0x5c) = 4
else
    if (eax_1 != 0xfffe03ff)
        if (eax_1 != 0xffff0300 && eax_1 != 0xffff03ff)
            sub_4a4100(arg1, nullptr, 0, 
                "internal error: no profile exists for this shader version")
            return 0x80004005
        
        *(arg1 + 0x30) = 0
        *(arg1 + 0x6c) |= 0x402001a0
        *(arg1 + 0x70) |= 0x534
        *(arg1 + 0x48) = 4
        *(arg1 + 0x4c) = 0x10
        goto label_4b2545
    
    *(arg1 + 0x6c) |= 0x40200100
    *(arg1 + 0x70) |= 0xfe4
    *(arg1 + 0x30) = 1
    *(arg1 + 0x60) = 0x800
    *(arg1 + 0x40) = 0x800
    *(arg1 + 0x54) = 0x10
    *(arg1 + 0x5c) = 4
    *(arg1 + 0x4c) = 0x10

*(arg1 + 0x71) |= 0x10
*(arg1 + 0x28) = 0x10
*(arg1 + 0x44) = 0x10
*(arg1 + 0x2c) = 0x20
*(arg1 + 0x38) = 0x2000
*(arg1 + 0x68) = 0xff
*(arg1 + 0x64) = 1
*(arg1 + 0x58) = 0x18
*(arg1 + 0x1d0) = 0x20
*(arg1 + 0x154) = 1
return 0
